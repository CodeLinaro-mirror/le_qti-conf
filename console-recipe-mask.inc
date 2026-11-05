# Wrynose console-image local compatibility masks
COMPATIBLE_MACHINE = "|kalama"

# Build bzip2-native so bzlib.h and libbz2 are staged for native recipes
ASSUME_PROVIDED:remove = "bzip2-native"


# Missing COPYING file in legacy 5.15 recipe
BBMASK += ".*/meta-qti-bsp/recipes-kernel/linux-msm/linux-msm-headers_5\.15\.bb$"

# Legacy meta-virtualization recipe incompatible with current OE-Core
# -----------------------------------------------------------------
# Recipes whose local SRC_URI content is absent from this workspace.
# -----------------------------------------------------------------

BBMASK += ".*/meta-qti-bsp/recipes-bsp/dsmf/dsmf_1\.0\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-bsp/dsmf/dsmf-sample-clients_1\.0\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-bsp/psi-daemon/psi-daemon\.bb$"

BBMASK += ".*/meta-qti-bsp/recipes-android/mtp/mtp_git\.bb$"

#BBMASK += ".*/meta-qti-bsp/recipes-bsp/recovery/recovery_2\.0\.bb$"
#BBMASK += ".*/meta-qti-bsp/recipes-bsp/recovery/applypatch-native\.bb$"
#BBMASK += ".*/meta-qti-bsp/recipes-devtools/recovery-ab/recovery-ab_2\.0\.bb$"

BBMASK += ".*/meta-qti-bsp/recipes-bsp/csmhost/csmhost\.bb$"

BBMASK += ".*/meta-qti-bsp/recipes-bsp/startup-scripts/find-recovery-partitions\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-bsp/startup-scripts/storage-mount\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-bsp/startup-scripts/recovery-updater\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-bsp/startup-scripts/update-perms\.bb$"

#BBMASK += ".*/meta-qti-bsp/recipes-devtools/bsdiff/bsdiff-native_git\.bb$"
#BBMASK += ".*/meta-qti-bsp/recipes-devtools/libdivsufsort/libdivsufsort-native_git\.bb$"
# fsconfig-native is required by the qti-robotics-image filesystem image flow.
#BBMASK += ".*/meta-qti-bsp/recipes-devtools/signapk/signapk-native_1\.0\.bb$"
#BBMASK += ".*/meta-qti-bsp/recipes-devtools/releasetools/releasetools-native_1\.0\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-devtools/dumpkey/dumpkey-native_1\.0\.bb$"

BBMASK += ".*/meta-qti-bsp/recipes-kernel/dtc/dtc-android-build_1\.4\.4\.bb$"

BBMASK += ".*/meta-qti-bsp/recipes-kernel/dtc/dtc-android-build_5\.15\.bb$"
# qti-console-image directly depends on edk2. Keep both the base recipe and
# the BSP property-layer append visible, matching the ppollai working build.
# BBMASK += ".*/meta-qti-bsp/recipes-kernel/edk2/.*"
# BBMASK += ".*/meta-qti-bsp-prop/recipes-kernel/edk2/.*"
BBMASK += ".*/meta-qti-bsp/recipes-kernel/mod-blacklist/mod-blacklist_1\.0\.bb$"

# Legacy / unavailable toolchain, bootloader, and sensing recipes
BBMASK += ".*/meta-qti-bsp/recipes-support/llvm-aosp-toolchain/llvm-aosp-toolchain\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-multimedia/sensors/qcom-sensinghub_1\.0\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-kernel/toolchain/kernel-toolchain_6\.1\.32bit\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-kernel/toolchain/kernel-toolchain_5\.15\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-kernel/toolchain/kernel-toolchain_5\.10\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-kernel/lk/lk_git\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-kernel/mod-signing-keys/mod-signing-keys_5\.10\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-kernel/mod-signing-keys/mod-signing-keys_5\.15\.bb$"


# Legacy / unavailable toolchain, bootloader, and sensing recipes
BBMASK += ".*/meta-qti-bsp/recipes-support/llvm-aosp-toolchain/llvm-aosp-toolchain\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-multimedia/sensors/qcom-sensinghub_1\.0\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-kernel/toolchain/kernel-toolchain_6\.1\.32bit\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-kernel/toolchain/kernel-toolchain_5\.15\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-kernel/toolchain/kernel-toolchain_5\.10\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-kernel/lk/lk_git\.bb$"




# Legacy linux-msm headers and unavailable Android/recovery sources
BBMASK += ".*/meta-qti-bsp/recipes-kernel/linux-msm/linux-msm-headers_4\.14\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-kernel/linux-msm/linux-msm-headers_4\.19\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-kernel/linux-msm/linux-msm-headers_5\.4\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-kernel/linux-msm/linux-msm-headers_5\.10\.bb$"
#BBMASK += ".*/meta-qti-bsp/recipes-devtools/oem-recovery/oem-recovery_2\.0\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-android/libui/libui_git\.bb$"
BBMASK += ".*/meta-qti-bsp/recipes-android/audio-route/audio-route_git\.bb$"
#BBMASK += ".*/meta-qti-bsp/recipes-android/libhardware/libhardware_git\.bb$"




# ================================================================
# Missing local SRC_URI content — additional Wrynose masks
# ================================================================

# meta-qti-data / meta-qti-arpal
BBMASK += ".*/meta-qti-data/recipes/data-devicetree/data-devicetree\.bb$"
BBMASK += ".*/meta-qti-data/recipes/datarmnet/datarmnet\.bb$"
BBMASK += ".*/meta-qti-data/recipes/qps615/qps615_1\.0\.bb$"
BBMASK += ".*/meta-qti-data/recipes/webserver/webserver_git\.bb$"
BBMASK += ".*/meta-qti-arpal/recipes/mcs/mcs_git\.bb$"

# Bluetooth / Wi-Fi open-source layers
BBMASK += ".*/meta-qti-bt/recipes/bluez/bluez5_5\.19\.bb$"
BBMASK += ".*/meta-qti-qcawifi-prop/recipes/qca-utils/qca-utils_git\.bb$"

BBMASK += ".*/meta-qti-wlan/recipes/hostap-daemon/hostap-daemon-ath6kl_git\.bb$"
BBMASK += ".*/meta-qti-wlan/recipes/hostap/hostap_git\.bb$"
BBMASK += ".*/meta-qti-wlan/recipes/wpa-supplicant/wpa-supplicant-ath6kl_git\.bb$"
BBMASK += ".*/meta-qti-wlan/recipes/wlan/qcacld-hl-rome_git\.bb$"
BBMASK += ".*/meta-qti-wlan/recipes/wlan/qcacld-hl_git\.bb$"
BBMASK += ".*/meta-qti-wlan/recipes/wlan/qcacld-ll_git\.bb$"
BBMASK += ".*/meta-qti-wlan/recipes/wlan/qcacld32-ll-oot_git\.bb$"
BBMASK += ".*/meta-qti-wlan/recipes/wlan/qcacld32-peach-seraph\.bb$"
BBMASK += ".*/meta-qti-wlan/recipes/wlan/qcacld32-ll-neo-kiwi_git\.bb$"
BBMASK += ".*/meta-qti-wlan/recipes/wlan/wcnss_git\.bb$"
BBMASK += ".*/meta-qti-wlan/recipes/wlan/wlan-opensource_git\.bb$"

# meta-qti-bsp-prop
BBMASK += ".*/meta-qti-bsp-prop/recipes-bsp/qti-logkit/qti-logkit_git\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-bsp/ipthdme/ipthdme_git\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-bsp/mp-decision/mp-decision_git\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-bsp/perf-libs/perf-libs_git\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-bsp/sensors/sensors-headers\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-bsp/sensors/sensors-see-commonsys-intf_git\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-bsp/sensors/sensors-see_git\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-bsp/sensors/sensors_git\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-bsp/startup-scripts/start-scripts-firmware-qseecom\.bb$"

BBMASK += ".*/meta-qti-bsp-prop/recipes-connectivity/cxm-apps/cxm-apps_git\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-connectivity/mcm/mcm_git\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-connectivity/mcm-core/mcm-core_git\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-connectivity/synergy/synergy\.bb$"

BBMASK += ".*/meta-qti-bsp-prop/recipes-firmware/firmware/qti-firmware_1\.0\.bb$"

BBMASK += ".*/meta-qti-bsp-prop/recipes-multimedia/adsprpc/adsprpc-internals_git\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-multimedia/rda/rda_13\.0\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-multimedia/qvop-service/qvop-service_git\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-multimedia/broadcast/broadcast\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-multimedia/fileipc/fileipc\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-multimedia/graphite-client/graphite-client_git\.bb$"

#BBMASK += ".*/meta-qti-bsp-prop/recipes-support/sectool5/sectool5-native_1\.0\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-ssg/mink/mink_git\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-vam/vam-engines/vam-engines\.bb$"




# Core, graphics, security, audio
BBMASK += ".*/meta-qti-core-prop/recipes/energy-awareness/energy-awareness_13\.0\.bb$"
BBMASK += ".*/meta-qti-core-prop/recipes/thermal/thermal_13\.0\.bb$"

#BBMASK += ".*/meta-qti-gfx-prop/recipes/adreno-subdriver-x11/adreno-subdriver-x11_git\.bb$"
#BBMASK += ".*/meta-qti-gfx-prop/recipes/adreno/egl-wayland-subdriver\.bb$"
#BBMASK += ".*/meta-qti-gfx-prop/recipes/adreno/clangtblgen\.bb$"

BBMASK += ".*/meta-qti-security-prop/recipes/commonsys-intf-securemsm/commonsys-intf-securemsm\.bb$"
BBMASK += ".*/meta-qti-security-prop/recipes/gensecimage/gensecimage_git\.bb$"

BBMASK += ".*/meta-qti-audio-prop/recipes/pa_qti_loopback/pa-qti-loopback_git\.bb$"
BBMASK += ".*/meta-qti-audio-prop/recipes/pa_qti_effect/pa-qti-effect_git\.bb$"
BBMASK += ".*/meta-qti-audio-prop/recipes/pa_qti_soundtrigger/pa-qti-soundtrigger_git\.bb$"
BBMASK += ".*/meta-qti-audio-prop/recipes/qsthw/qsthw_git\.bb$"
BBMASK += ".*/meta-qti-audio-prop/recipes/sound_trigger/soundtrigger_git\.bb$"
BBMASK += ".*/meta-qti-audio-prop/recipes/qsthw_api/qsthw-api_git\.bb$"

# Proprietary WLAN / data / ML / SS manager
BBMASK += ".*/meta-qti-wlan-prop/recipes/wlan-proprietary/qcacld-utils_git\.bb$"
BBMASK += ".*/meta-qti-wlan-prop/recipes/wlan-proprietary/wlan-services_git\.bb$"
BBMASK += ".*/meta-qti-wlan-prop/recipes/wlan-proprietary/ath6kl-proprietary_git\.bb$"
BBMASK += ".*/meta-qti-wlan-prop/recipes/wlan-proprietary/ctrl-app-dut_git\.bb$"
BBMASK += ".*/meta-qti-wlan-prop/recipes/wlan-prima/wlan-prima_git\.bb$"
BBMASK += ".*/meta-qti-wlan-prop/recipes/wlan-prima/wlan-prima-cfg_git\.bb$"

BBMASK += ".*/meta-qti-data-prop/recipes/qms/qms-lite_git\.bb$"
BBMASK += ".*/meta-qti-ml-prop/recipes/rv-sdk/rv\.bb$"
BBMASK += ".*/meta-qti-ss-mgr-prop/recipes/psm/psm_git\.bb$"
BBMASK += ".*/meta-qti-ss-mgr-prop/recipes/qmi-shutdown-modem/qmi-shutdown-modem_git\.bb$"

# Internal-only recipes
BBMASK += ".*/meta-qti-internal/recipes/kernel-tests/kernel-tests-gki_git\.bb$"
BBMASK += ".*/meta-qti-internal/recipes/kernel-tests/kernel-tests-internal-modules_git\.bb$"
BBMASK += ".*/meta-qti-internal/recipes/kernel-tests/kernel-tests-internal_git\.bb$"
BBMASK += ".*/meta-qti-internal/recipes/linux-host/linux-host\.bb$"
# UNMASKED: display-tests re-enabled for display stack build
# BBMASK += ".*/meta-qti-internal/recipes/display-tests/display-tests_git\.bb$"
BBMASK += ".*/meta-qti-internal/recipes/vm-bms/vm-bms_git\.bb$"
BBMASK += ".*/meta-virtualization/recipes-core/meta/container-dummy-provides\.bb$"


# Xen tools recipes: Wrynose virtual-slash QA failure
BBMASK += ".*/meta-virtualization/recipes-extended/xen/xen-tools_4\.15\.bb$"
BBMASK += ".*/meta-virtualization/recipes-extended/xen/xen-tools_4\.16\.bb$"
BBMASK += ".*/meta-virtualization/recipes-extended/xen/xen-tools_git\.bb$"

# Old meta-virtualization recipe requires absent busybox_1.35.0.bb
BBMASK += ".*/meta-virtualization/recipes-core/busybox/busybox-initrd_1\.35\.0\.bb$"

# Legacy recipes require virtual/cross-cc, which is not provided by Wrynose.
BBMASK += ".*/meta-qti-bsp/recipes-le-codec2-frameworks/codec2/codec2_2\.1\.bb$"
BBMASK += ".*/meta-qti-camera/recipes/camx-ext/camx-ext_0\.1\.bb$"

# Wrynose: QMMF / Codec2 recipes require unavailable virtual/cross-cc
BBMASK += ".*/meta-qti-qmmf/recipes/iot-core-oss/qti-c2-module\.bb$"
BBMASK += ".*/meta-qti-qmmf/recipes/qmmf-sdk/qmmf-sdk_git\.bb$"

# Wrynose: legacy display/ML recipes require unavailable virtual/cross-cc

#BBMASK += ".*/meta-qti-display/recipes/display-commonsys/display-commonsys_git\.bb$"
# Wrynose: legacy ML recipes require unavailable virtual/cross-cc
# (display-commonsys converted to a headers-only recipe, unmasked below —
# it no longer inherits autotools so it doesn't need cross-cc.)

BBMASK += ".*/meta-qti-ml/recipes/arm-nn-driver/arm-nn-driver_20\.02\.bb$"
BBMASK += ".*/meta-qti-ml/recipes/tensorflow/tensorflow-lite_2\.15\.0\.bb$"
BBMASK += ".*/meta-qti-ml/recipes/tensorflow/tensorflow-lite_2\.8\.0\.bb$"
BBMASK += ".*/meta-qti-ml/recipes/tensorflow/tensorflow-lite_2\.6\.0\.bb$"
BBMASK += ".*/meta-qti-ml/recipes/xnnpack/xnnpack\.bb$"

# noselinux build: old QTI SELinux metadata requires absent refpolicy_git.inc
#BBMASK += ".*/meta-qti-sepolicy/recipes-security/sepolicy/.*\.bb$"

# Temporary noselinux migration mask — disables all QTI SELinux recipes.
# BBMASK += ".*/meta-qti-sepolicy/.*\.bb$"

# Minimal console build: exclude every recipe from meta-qti-audio.
BBMASK += ".*/meta-qti-audio/.*\.bb$"

# Minimal console build: disable all Bluetooth and camera recipes.
BBMASK += ".*/meta-qti-bt/.*\.bb$"
BBMASK += ".*/meta-qti-bt-prop/.*\.bb$"

BBMASK += ".*/meta-qti-camera/(?!recipes/camera_dlkm_kernel/cameradlkm_git\.bb$|recipes/packagegroups/packagegroup-qti-camera-kernel\.bb$).*\.bb$"
BBMASK += ".*/meta-qti-camera-internal/.*\.bb$"
BBMASK += ".*/meta-qti-camera-prop/(?!recipes/camx/(cameradtb|camx|camxlib|chicdklib)_0\.1\.bb$|recipes/packagegroups/packagegroup-qti-camera\.bb$).*\.bb$"

# Minimal Kalama console build: disable all Robos stack recipes.
BBMASK += ".*/meta-qti-robos/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-robos-addon/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-robos-addon-internal/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-robos-addon-prop/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-robos-internal/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-robos-prop/.*\.bb(append)?$"

# Minimal Kalama console build: exclude all camera-stack recipes and appends.
BBMASK += ".*/meta-qti-camera/(?!recipes/camera_dlkm_kernel/cameradlkm_git\.bb$|recipes/packagegroups/packagegroup-qti-camera-kernel\.bb$).*\.bb(append)?$"
BBMASK += ".*/meta-qti-camera-internal/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-camera-prop/(?!recipes/camx/(cameradtb|camx|camxlib|chicdklib)_0\.1\.bb$|recipes/packagegroups/packagegroup-qti-camera\.bb$).*\.bb(append)?$"

# DISPLAY STACK UNMASKED — meta-qti-display layers re-enabled for Kalama display build.
# BBMASK += ".*/meta-qti-display/.*\.bb(append)?$"
# BBMASK += ".*/meta-qti-display-internal/.*\.bb(append)?$"
# BBMASK += ".*/meta-qti-display-prop/.*\.bb(append)?$"

# Minimal Kalama console build: disable location services.
BBMASK += ".*/meta-qti-location/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-location-internal/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-location-prop/.*\.bb(append)?$"

# Minimal Kalama console build: disable Matter stack.
BBMASK += ".*/meta-qti-matter/.*\.bb(append)?$"

# Minimal Kalama console build: disable ML stack.
BBMASK += ".*/meta-qti-ml/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-ml-prop/.*\.bb(append)?$"


BBMASK += ".*/meta-qti-agm/.*\.bb(append)?$"
#BBMASK += ".*/meta-qti-aosphal-adaptation/(?!recipes/camera-metadata/camera-metadata_1/libhardware/libhardware_1\.0\.bb$).*\.bb(append)?$"
BBMASK += ".*/meta-qti-aosphal-adaptation/(?!recipes/camera-metadata/camera-metadata_1\.1\.bb$).*\.bb(append)?$"
BBMASK += ".*/meta-qti-args/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-arpal/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-atf/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-audio-external/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-audio-prop/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-bt/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-pt-prop/.*\.bb(append)?$"

BBMASK += ".*/meta-qti-agm/.*\.bb(append)?$"
#BBMASK += ".*/meta-qti-aosphal-adaptation/(?!recipes/camera-metadata/camera-metadata_1/libhardware/libhardware_1\.0\.bb$).*\.bb(append)?$"
BBMASK += ".*/meta-qti-aosphal-adaptation/(?!recipes/camera-metadata/camera-metadata_1\.1\.bb$).*\.bb(append)?$"
BBMASK += ".*/meta-qti-args/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-arpal/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-atf/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-audio/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-audio-external/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-audio-prop/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-bt/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-bt-prop/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-camera/(?!recipes/camera_dlkm_kernel/cameradlkm_git\.bb$|recipes/packagegroups/packagegroup-qti-camera-kernel\.bb$).*\.bb(append)?$"
BBMASK += ".*/meta-qti-camera-internal/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-camera-prop/(?!recipes/camx/(cameradtb|camx|camxlib|chicdklib)_0\.1\.bb$|recipes/packagegroups/packagegroup-qti-camera\.bb$).*\.bb(append)?$"
BBMASK += ".*/meta-qti-data/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-data-prop/.*\.bb(append)?$"

# DISPLAY STACK UNMASKED in big block too — re-enabled for Kalama display build.
# BBMASK += ".*/meta-qti-display/.*\.bb(append)?$"
# BBMASK += ".*/meta-qti-display-internal/.*\.bb(append)?$"
# BBMASK += ".*/meta-qti-display-prop/.*\.bb(append)?$"

#BBMASK += ".*/meta-qti-eva/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-eva-devicetree/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-eva-internal/.*\.bb(append)?$"
#BBMASK += ".*/meta-qti-eva-prop/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-fastcv-internal/.*\.bb(append)?$"
#BBMASK += ".*/meta-qti-fastcv-prop/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-fastcv-prop/(?!recipes/fastcv-noship/fastcv-noship_1\.0\.bb$).*\.bb(append)?$"

# GFX recipes unmasked: graphicsdlkm, graphicsdevicetree, adreno,
# packagegroup-qti-gfx are all visible.
# These 3 legacy source-build (adreno-cmake.inc / "adreno200") recipes have
# no local SRC_URI content anywhere in this workspace (verified: not under
# src/, not under WORKSPACE, not under le-bins-1) and are unused by the
# actual prebuilt-binary adreno recipe (adreno-cmake-bins.inc / le-bins-1).
# NOTE: do not unmask without first adding the missing SRC_URI content —
# bitbake's parse-time checksum validation runs across the whole recipe
# cache regardless of dependency-graph reachability, so unmasking these
# with no local source present hard-fails `bitbake -p` / every build
# (confirmed 2026-10-12: "Unable to get checksum ... file could not be
# found" x3, "Parsing halted due to errors").
#BBMASK += ".*/meta-qti-gfx-prop/recipes/adreno-subdriver-x11/adreno-subdriver-x11_git\.bb$"
#BBMASK += ".*/meta-qti-gfx-prop/recipes/adreno/egl-wayland-subdriver\.bb$"
#BBMASK += ".*/meta-qti-gfx-prop/recipes/adreno/clangtblgen\.bb$"

BBMASK += ".*/meta-qti-internal/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-iotpower-prop/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-location/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-location-internal/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-location-prop/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-matter/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-ml/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-ml-prop/.*\.bb(append)?$"
#BBMASK += ".*/meta-qti-mmframeworks-prop/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-mmframeworks-prop/.*/synx-test\.bb$"
# Keep meta-qti-perf-prop enabled for packagegroup-qti-perf and perf-hal.
BBMASK += ".*/meta-qti-psdk-core/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-psdk-core-internal/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-psdk-core-prop/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-qcawifi/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-qcawifi-prop/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-qmmf/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-qmmf-prop/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-robos/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-robos-addon/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-robos-addon-internal/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-robos-prop/.*\.bb(append)?$"
#BBMASK += ".*/meta-qti-sepolicy/.*\.bb(append)?$"
#BBMASK += ".*/meta-qti-ss-mgr/.*\.bb(append)?$"
#BBMASK += ".*/meta-qti-ss-mgr-prop/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-touch/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-voiceai/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-wlan/.*\.bb(append)?$"
BBMASK += ".*/meta-qti-wlan-prop/.*\.bb(append)?$"
BBMASK += ".*/meta-ros/.*\.bb(append)?$"
#meta-selinux: mesa_%.bbappend is dangling - oe-core now ships mesa.bb(unversioned).
#Drop when meta-selinux is moved to a matching branch
BBMASK += ".*/meta-selinux/recipes-graphics/mesa/mesa_%\.bbappend$"

# Temporarily exclude recipes requiring unavailable local source / legacy virtual/cross-cc
BBMASK += "|.*/meta-qti-bsp-prop/recipes-bsp/fm/fm_git\.bb$"
BBMASK += "|.*/meta-qti-bsp-prop/recipes-video-userspace/media-external/media-external_2\.1\.bb$"
BBMASK += "|.*/meta-qti-bsp-prop/recipes-video-userspace/displayfiltertest/displayfiltertest_git\.bb$"
BBMASK += "|.*/meta-qti-bsp-prop/recipes-video-userspace/media/media_2\.1\.bb$"
BBMASK += "|.*/meta-qti-bsp-prop/recipes-video-userspace/qutest/qutest\.bb$"

# Ignore all recipes and appends under the Telematics source tree.
BBMASK += "|.*/layers/meta-qti-telematics/.*"

#BBMASK += ".*/meta-qti-bsp/recipes-android/libhardware/libhardware_git\.bb$"

BBMASK += ".*/meta-qti-bsp-prop/recipes-multimedia/adsprpc/(?!adsprpc_13\.0\.bb$|dspservices-headers_13\.0\.bb$).*\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-bsp/ss-services/ss-services_2\.0\.bb$"
BBMASK += ".*/meta-qti-bsp-prop/recipes-bsp/msmirqbalance/msmirqbalance\.bb$"


# Base recipes are intentionally masked; avoid unmatched .bbappend errors.
BBMASK += ".*/meta-qti-bsp/recipes-android/libhardware/libhardware_git\.bbappend$"
BBMASK += ".*/meta-qti-bsp/meta-qti-customizations/qti-bsp-prop/recipes-multimedia/adsprpc/adsprpc_%\.bbappend$"
BBMASK += ".*/meta-qti-sepolicy/recipes-security/selinux/.*_3\.3\.bbappend$"
BBMASK += ".*/meta-qti-sepolicy/recipes-extended/libnsl/libnsl2_git\.bbappend$"

# These QTI appends target recipe revisions that are not present in the
# current Wrynose metadata. Keep them masked until matching recipes or
# forward-ported patches are added; otherwise BitBake aborts during parsing.
BBMASK += ".*/meta-qti-bsp/recipes-core/systemd/systemd_255\.%\.bbappend$"
BBMASK += ".*/meta-qti-bsp/recipes-core/util-linux/uutils-coreutils_0\.0\.28\.bbappend$"
BBMASK += ".*/meta-qti-bsp/recipes-devtools/squashfs-tools/squashfs-tools_git\.bbappend$"
BBMASK += ".*/meta-qti-bsp/recipes-graphics/mesa/mesa_%\.bbappend$"

# Mask unavailable recipes individually
BBMASK += "meta-qti-bsp/recipes-blast/leproperties/leproperties_2.0.bb"
BBMASK += "meta-qti-bsp/recipes-blast/libcrypthelper-mediameta/libcrypthelper-mediameta_2.0.bb"
#BBMASK += "meta-qti-bsp/recipes-blast/fsmgr/fsmgr_2.0.bb"
#BBMASK += "meta-qti-bsp/recipes-blast/libmincrypt/libmincrypt-native_2.0.bb"
#BBMASK += "meta-qti-bsp/recipes-blast/libbase/libbase_2.0.bb"
# Display's libdmabufheap path directly depends on libion; its source exists
# at \${WORKSPACE_SOURCES}/system/core/libion.
# BBMASK += "meta-qti-bsp/recipes-blast/libion/libion_2.0.bb"
#BBMASK += "meta-qti-bsp/recipes-blast/libmincrypt/libmincrypt_2.0.bb"
BBMASK += "meta-qti-bsp/recipes-blast/libpagemap/libpagemap_2.0.bb"
BBMASK += "meta-qti-bsp/recipes-blast/libsysutils/libsysutils_2.0.bb"
BBMASK += "meta-qti-bsp/recipes-blast/logd/logd_2.0.bb"
BBMASK += "meta-qti-bsp/recipes-blast/post-boot/post-boot_2.0.bb"
BBMASK += "meta-qti-bsp/recipes-blast/logcat/logcat_2.0.bb"
# Display dependencies use the Android core headers available in
# \${WORKSPACE_SOURCES}/system/core/include.
# BBMASK += "meta-qti-bsp/recipes-blast/system-core-headers/system-core-headers_2.0.bb"
#BBMASK += "meta-qti-bsp/recipes-blast/procrank/procrank_2.0.bb"
#BBMASK += "meta-qti-bsp/recipes-blast/usb-composition/usb-composition_2.0.bb"
#BBMASK += "meta-qti-bsp/recipes-blast/usb-composition/usb-composition-recovery_2.0.bb"
# Keep the OpenEmbedded perf utility available to packagegroup-qti-debug-tools.

IMAGE_INSTALL:remove = "packagegroup-qti-debug-tools"
RDEPENDS:packagegroup-qti-debug-tools:remove = "procrank"
BBMASK:append = " .*/meta-qti-internal/recipes/msm-bus/msm-bus_git\.bb$"

# Mask legacy mkbootimg recipes whose local SRC_URI payloads are not present
BBMASK += "/meta-qti-bsp/recipes-android/mkbootimg/mkbootimg-kp\.bb$"
BBMASK += "/meta-qti-bsp/recipes-android/mkbootimg/mkbootimg-gki_5\.10\.bb$"

# QCS8550/Kalama KP 6.18: mask obsolete GKI mkbootimg recipes
# Their SRC_URI expects legacy mkbootimg.py payloads not present in this workspace.
BBMASK += "/meta-qti-bsp/recipes-android/mkbootimg/mkbootimg-gki_5\.15\.bb$"
BBMASK += "/meta-qti-bsp/recipes-android/mkbootimg/mkbootimg-gki_6\.1\.bb$"
BBMASK += "/meta-qti-bsp/recipes-android/mkbootimg/mkbootimg-gki_6\.6\.bb$"
BBMASK += "/meta-qti-bsp/recipes-android/mkbootimg/mkbootimg-gki_6\.12\.bb$"



# Remove unwanted packages from the image
CORE_IMAGE_EXTRA_INSTALL:remove = "fastmmi diag diag-noship"

# Remove packagegroups that pull these components into the image
CORE_IMAGE_EXTRA_INSTALL:remove = "packagegroup-qti-fastmmi"

# Remove packages from known packagegroups
RDEPENDS:packagegroup-qti-fastmmi:remove = "fastmmi"
RDEPENDS:packagegroup-qti-core:remove = "diag diag-noship"



#BBMASK:append = "|meta-qti-bsp-prop/recipes-android/libvmmem/libvmmem_1\.0\.bb"


CORE_IMAGE_EXTRA_INSTALL:remove = "sva-eai"


BBMASK:append = "|meta-qti-ss-mgr-prop/recipes/ssreq-server/ssreq-server_git\.bb"

BBMASK:append = "|meta-qti-core-prop/recipes/chg-policy/chg-policy_13\.0\.bb"

BBMASK:append = "|meta-qti-security-prop/recipes/securemsm-noship/securemsm-noship-oemvm\.bb"

BBMASK:append = "|meta-qti-security-prop/recipes/connection-security/connection-security\.bb"

BBMASK:append = "|meta-qti-security-prop/recipes/securemsm-noship/securemsm-noship_13\.0\.bb"

BBMASK:append = "|meta-qti-bsp-prop/recipes-eai/sva-eai/sva-eai_2\.0\.bb"

BBMASK:append = "|meta-qti-bsp-prop/recipes-blast/fastmmi/fastmmi_2\.0\.bb$"

BBMASK:append = "|meta-qti-bsp-prop/recipes-(blast|bsp)/fastmmi/fastmmi_.*\.bb$"

BBMASK:append = "|meta-qti-bsp-prop/.*/fastmmi/fastmmi_.*\.bb$"



BBMASK += "meta-qti-qmmf/recipes/iot-core-oss/qti-c2-module\.bb"
BBMASK += "meta-qti-qmmf/recipes/qmmf-sdk/qmmf-sdk_git\.bb"
do_compile[depends] = ""


# Kalama non-SELinux console: retain the legacy append without loading it.
# OE-Core provides squashfs-tools_4.7.5.bb, so the _git append has no match.
BBMASK:append:kalama:qti-distro-fullstack-noselinux-debug = " /meta-qti-bsp/recipes-devtools/squashfs-tools/squashfs-tools_git\.bbappend$"

# Kalama non-SELinux console: mask the unmatched legacy coreutils append.
# meta-oe provides uutils-coreutils_0.8.0.bb instead of version 0.0.28.
BBMASK:append:kalama:qti-distro-fullstack-noselinux-debug = " /meta-qti-bsp/recipes-core/util-linux/uutils-coreutils_0\.0\.28\.bbappend$"

# Kalama non-SELinux console: OE-Core provides systemd 259.5, not 255.x.
BBMASK:append:kalama:qti-distro-fullstack-noselinux-debug = " /meta-qti-bsp/recipes-core/systemd/systemd_255\.%\.bbappend$"

# OE-Core now uses mesa.bb; the legacy mesa_% append targets Mesa 24.0.7.
BBMASK:append:kalama:qti-distro-fullstack-noselinux-debug = " /meta-qti-bsp/recipes-graphics/mesa/mesa_%\.bbappend$"

# packagegroup-qti-core bbappends — mask if base recipe is absent/masked
BBMASK += ".*/meta-qti-core-prop/recipes/packagegroups/packagegroup-qti-core\.bbappend$"
BBMASK += ".*/meta-qti-core/recipes/packagegroups/packagegroup-qti-core\.bbappend$"
BBMASK += ".*/meta-qti-core-internal/recipes/packagegroups/packagegroup-qti-core\.bbappend$"


# MLMuxer source gst-plugin-qtimuxserialize not delivered in current im-sdk.lnx.1.0.0 drop. Remove once source is available.
BBMASK += ".*/gstreamer1.0-plugins-qti-oss-mlmuxer\.bb$"
BBMASK += ".*/tensorflow-lite-prebuilt\.bb$"

# Legacy GStreamer bbappends do not match the GStreamer 1.28.x
# recipe set used by the current im-sdk component.
# Remove these masks during final 1.28 migration cleanup.

# Core
BBMASK += ".*/gstreamer1\.0_1\.14\.4\.bbappend$"
BBMASK += ".*/gstreamer1\.0_1\.20.*\.bbappend$"
BBMASK += ".*/gstreamer1\.0_1\.22.*\.bbappend$"
BBMASK += ".*/gstreamer1\.0_1\.24.*\.bbappend$"

# Plugins Base
BBMASK += ".*/gstreamer1\.0-plugins-base_1\.14\.4\.bbappend$"
BBMASK += ".*/gstreamer1\.0-plugins-base_1\.16\.3\.bbappend$"
BBMASK += ".*/gstreamer1\.0-plugins-base_1\.20.*\.bbappend$"
BBMASK += ".*/gstreamer1\.0-plugins-base_1\.22.*\.bbappend$"
BBMASK += ".*/gstreamer1\.0-plugins-base_1\.24.*\.bbappend$"

# Plugins Good
BBMASK += ".*/gstreamer1\.0-plugins-good_1\.14\.4\.bbappend$"
BBMASK += ".*/gstreamer1\.0-plugins-good_1\.16.*\.bbappend$"
BBMASK += ".*/gstreamer1\.0-plugins-good_1\.20.*\.bbappend$"
BBMASK += ".*/gstreamer1\.0-plugins-good_1\.22.*\.bbappend$"
BBMASK += ".*/gstreamer1\.0-plugins-good_1\.24.*\.bbappend$"

# Plugins Bad
BBMASK += ".*/gstreamer1\.0-plugins-bad_1\.14\.4\.bbappend$"
BBMASK += ".*/gstreamer1\.0-plugins-bad_1\.16.*\.bbappend$"
BBMASK += ".*/gstreamer1\.0-plugins-bad_1\.20.*\.bbappend$"
BBMASK += ".*/gstreamer1\.0-plugins-bad_1\.22.*\.bbappend$"
BBMASK += ".*/gstreamer1\.0-plugins-bad_1\.24.*\.bbappend$"

# Other obsolete append targets
BBMASK += ".*/gstreamer1\.0-libav_.*\.bbappend$"
BBMASK += ".*/gstreamer1\.0-omx_.*\.bbappend$"
BBMASK += ".*/gstreamer1\.0-plugins-ugly_.*\.bbappend$"
BBMASK += ".*/gstreamer1\.0-rtsp-server_.*\.bbappend$"
BBMASK += ".*/gstreamer1\.0-vaapi_.*\.bbappend$"
BBMASK += ".*/mpeg2dec_0\.5\.1\.bbappend$"

BBMASK += ".*/gstreamer1.0-plugins-qti-oss-heifmux.bb"

BBMASK += "meta-qti-bsp-prop/recipes-sensors-internal/sensors/sensors-internal-qti_6.0.bb"
