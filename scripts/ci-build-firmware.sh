#!/usr/bin/env bash

# Usage: ci-build-firmware.sh

set -e

: "${TAG:="$(date "+%Y%m%d%H%M%S")"}"

subdir="keyboards/keychron/q2/ansi_encoder/keymaps/josh"

if [[ -d "qmk_firmware/$subdir" ]]; then
  rm -rf "qmk_firmware/$subdir"
fi

cp -rp "$subdir" qmk_firmware/keyboards/keychron/q2/ansi_encoder/keymaps

(cd qmk_firmware &&
  make -j4 keychron/q2/ansi_encoder:josh COLOR=false &&
  mv keychron_q2_ansi_encoder-josh.bin ../build/"keychron-q2-ansi-encoder-josh-$TAG.bin")
