FROM mcr.microsoft.com/devcontainers/base:debian-12

ARG RENODE_VERSION=1.16.1
ARG RENODE_SHA256=00e113cdbd0f5354cf2f64bbe3f5a070d8958409542fca66e45ac97d982938c0
ARG ARM_GNU_VERSION=15.2.rel1

RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
    ca-certificates curl make python3 qemu-system-arm xz-utils \
    libgtk2.0-0 libglib2.0-0 libx11-6 libxrender1 libfontconfig1 && \
    curl -fsSL "https://github.com/renode/renode/releases/download/v${RENODE_VERSION}/renode-${RENODE_VERSION}.linux-portable-dotnet.tar.gz" -o /tmp/renode.tar.gz && \
    echo "${RENODE_SHA256}  /tmp/renode.tar.gz" | sha256sum -c - && \
    mkdir -p /opt/renode && \
    tar -xzf /tmp/renode.tar.gz -C /opt/renode --strip-components=1 && \
    ln -s /opt/renode/renode /usr/local/bin/renode && \
    curl -fsSL "https://developer.arm.com/-/media/Files/downloads/gnu/${ARM_GNU_VERSION}/binrel/arm-gnu-toolchain-${ARM_GNU_VERSION}-x86_64-arm-none-eabi.tar.xz" -o /tmp/arm.tar.xz && \
    mkdir -p /opt/arm-gnu && \
    tar -xJf /tmp/arm.tar.xz -C /opt/arm-gnu --strip-components=1 && \
    rm -f /tmp/renode.tar.gz /tmp/arm.tar.xz && \
    apt-get clean && rm -rf /var/lib/apt/lists/*

ENV PATH="/opt/arm-gnu/bin:${PATH}"
