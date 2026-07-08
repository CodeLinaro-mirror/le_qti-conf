# Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries. 
# SPDX-License-Identifier: BSD-3-Clause-Clear

# Builds a standalone PVM image
function build-sa8797dc-hlos() {
  echo "==== Function: $FUNCNAME (${FUNCNAME[@]})"
  unset_bb_env
  source ${WSQC}/poky/build/conf/set_bb_env_dc.sh -t sa8797dc -d auto -v debug $BUILD_MODE_FLAG
  if [ "$?" != "0" ]; then
  echo "==== Error run 'source poky/build/conf/set_bb_env_dc.sh sa8797dc debug'. (${FUNCNAME[@]})"
  return 1
  fi

  bitbake qcom-image-boot
  if [ "$?" != "0" ]; then
  echo "==== Error run 'bitbake qcom-image-boot'. (${FUNCNAME[@]})"
  return 1
  fi
}

# Builds a PVM image with SVM packed in it
function build-sa8797dc-svm() {
  echo "==== Function: $FUNCNAME (${FUNCNAME[@]})"
  unset_bb_env
  source ${WSQC}/poky/build/conf/set_bb_env_dc.sh -t sa8797dc-svm -d auto -v debug $BUILD_MODE_FLAG
  if [ "$?" != "0" ]; then
  echo "==== Error run 'source poky/build/conf/set_bb_env_dc.sh sa8797dc-svm debug'. (${FUNCNAME[@]})"
  return 1
  fi

  bitbake mc:sa8797dc-svm:qcom-image-boot mc:sa8797dc-pvm:qcom-image-boot
  if [ "$?" != "0" ]; then
  echo "==== Error run 'bitbake qcom-image-boot'. (${FUNCNAME[@]})"
  return 1
  fi
}
