#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRuntimeSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRHandSkeletonVersion_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRRuntimeAssetsBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRRuntimeSettings)
namespace GlobalNamespace {
struct OVRHandSkeletonVersion;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyJointSet;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyTrackingFidelity2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRRuntimeSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRRuntimeSettings);
// Dependencies OVRHandSkeletonVersion, OVRManager::ColorSpace, OVRPlugin::BodyJointSet, OVRPlugin::BodyTrackingFidelity2, OVRRuntimeAssetsBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRRuntimeSettings
class CORDL_TYPE OVRRuntimeSettings : public ::GlobalNamespace::OVRRuntimeAssetsBase {
public:
  // Declarations
  __declspec(property(get = get_BodyTrackingFidelity, put = set_BodyTrackingFidelity)) ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 BodyTrackingFidelity;

  __declspec(property(get = get_BodyTrackingJointSet, put = set_BodyTrackingJointSet)) ::GlobalNamespace::OVRPlugin_BodyJointSet BodyTrackingJointSet;

  __declspec(property(get = get_EnableFaceTrackingVisemesOutput, put = set_EnableFaceTrackingVisemesOutput)) bool EnableFaceTrackingVisemesOutput;

  __declspec(property(get = get_HandSkeletonVersion, put = set_HandSkeletonVersion)) ::GlobalNamespace::OVRHandSkeletonVersion HandSkeletonVersion;

  /// @brief Field NewProjectDefaultSkeletonVersion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_NewProjectDefaultSkeletonVersion, put = setStaticF_NewProjectDefaultSkeletonVersion)) ::GlobalNamespace::OVRHandSkeletonVersion NewProjectDefaultSkeletonVersion;

  __declspec(property(get = get_RequestsAudioFaceTracking, put = set_RequestsAudioFaceTracking)) bool RequestsAudioFaceTracking;

  __declspec(property(get = get_RequestsVisualFaceTracking, put = set_RequestsVisualFaceTracking)) bool RequestsVisualFaceTracking;

  __declspec(property(get = get_TelemetryProjectGuid)) ::StringW TelemetryProjectGuid;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::UnityW<::GlobalNamespace::OVRRuntimeSettings> _instance;

  /// @brief Field bodyTrackingFidelity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_bodyTrackingFidelity, put = __cordl_internal_set_bodyTrackingFidelity)) ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 bodyTrackingFidelity;

  /// @brief Field bodyTrackingJointSet, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_bodyTrackingJointSet, put = __cordl_internal_set_bodyTrackingJointSet)) ::GlobalNamespace::OVRPlugin_BodyJointSet bodyTrackingJointSet;

  /// @brief Field colorSpace, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_colorSpace, put = __cordl_internal_set_colorSpace)) ::GlobalNamespace::OVRManager_ColorSpace colorSpace;

  /// @brief Field enableFaceTrackingVisemesOutput, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_enableFaceTrackingVisemesOutput, put = __cordl_internal_set_enableFaceTrackingVisemesOutput)) bool enableFaceTrackingVisemesOutput;

  /// @brief Field handSkeletonVersion, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_handSkeletonVersion, put = __cordl_internal_set_handSkeletonVersion)) ::GlobalNamespace::OVRHandSkeletonVersion handSkeletonVersion;

  /// @brief Field requestsAudioFaceTracking, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_requestsAudioFaceTracking, put = __cordl_internal_set_requestsAudioFaceTracking)) bool requestsAudioFaceTracking;

  /// @brief Field requestsVisualFaceTracking, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_requestsVisualFaceTracking, put = __cordl_internal_set_requestsVisualFaceTracking)) bool requestsVisualFaceTracking;

  /// @brief Field telemetryProjectGuid, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_telemetryProjectGuid, put = __cordl_internal_set_telemetryProjectGuid)) ::StringW telemetryProjectGuid;

  /// @brief Method GetRuntimeSettings, addr 0x5caa7bc, size 0x174, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GetRuntimeSettings();

  /// @brief Method HandleSettingsCreated, addr 0x5caaa2c, size 0x4, virtual false, abstract: false, final false
  static inline void HandleSettingsCreated(::GlobalNamespace::OVRRuntimeSettings* settings);

  static inline ::GlobalNamespace::OVRRuntimeSettings* New_ctor();

  constexpr ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 const& __cordl_internal_get_bodyTrackingFidelity() const;

  constexpr ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2& __cordl_internal_get_bodyTrackingFidelity();

  constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet const& __cordl_internal_get_bodyTrackingJointSet() const;

  constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet& __cordl_internal_get_bodyTrackingJointSet();

  constexpr ::GlobalNamespace::OVRManager_ColorSpace const& __cordl_internal_get_colorSpace() const;

  constexpr ::GlobalNamespace::OVRManager_ColorSpace& __cordl_internal_get_colorSpace();

  constexpr bool const& __cordl_internal_get_enableFaceTrackingVisemesOutput() const;

  constexpr bool& __cordl_internal_get_enableFaceTrackingVisemesOutput();

  constexpr ::GlobalNamespace::OVRHandSkeletonVersion const& __cordl_internal_get_handSkeletonVersion() const;

  constexpr ::GlobalNamespace::OVRHandSkeletonVersion& __cordl_internal_get_handSkeletonVersion();

  constexpr bool const& __cordl_internal_get_requestsAudioFaceTracking() const;

  constexpr bool& __cordl_internal_get_requestsAudioFaceTracking();

  constexpr bool const& __cordl_internal_get_requestsVisualFaceTracking() const;

  constexpr bool& __cordl_internal_get_requestsVisualFaceTracking();

  constexpr ::StringW const& __cordl_internal_get_telemetryProjectGuid() const;

  constexpr ::StringW& __cordl_internal_get_telemetryProjectGuid();

  constexpr void __cordl_internal_set_bodyTrackingFidelity(::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 value);

  constexpr void __cordl_internal_set_bodyTrackingJointSet(::GlobalNamespace::OVRPlugin_BodyJointSet value);

  constexpr void __cordl_internal_set_colorSpace(::GlobalNamespace::OVRManager_ColorSpace value);

  constexpr void __cordl_internal_set_enableFaceTrackingVisemesOutput(bool value);

  constexpr void __cordl_internal_set_handSkeletonVersion(::GlobalNamespace::OVRHandSkeletonVersion value);

  constexpr void __cordl_internal_set_requestsAudioFaceTracking(bool value);

  constexpr void __cordl_internal_set_requestsVisualFaceTracking(bool value);

  constexpr void __cordl_internal_set_telemetryProjectGuid(::StringW value);

  /// @brief Method .ctor, addr 0x5caaa30, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRHandSkeletonVersion getStaticF_NewProjectDefaultSkeletonVersion();

  static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> getStaticF__instance();

  /// @brief Method get_BodyTrackingFidelity, addr 0x5caaa0c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 get_BodyTrackingFidelity();

  /// @brief Method get_BodyTrackingJointSet, addr 0x5caaa1c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_BodyJointSet get_BodyTrackingJointSet();

  /// @brief Method get_EnableFaceTrackingVisemesOutput, addr 0x5caa950, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableFaceTrackingVisemesOutput();

  /// @brief Method get_HandSkeletonVersion, addr 0x5caa708, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRHandSkeletonVersion get_HandSkeletonVersion();

  /// @brief Method get_Instance, addr 0x5caa718, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> get_Instance();

  /// @brief Method get_RequestsAudioFaceTracking, addr 0x5caa940, size 0x8, virtual false, abstract: false, final false
  inline bool get_RequestsAudioFaceTracking();

  /// @brief Method get_RequestsVisualFaceTracking, addr 0x5caa930, size 0x8, virtual false, abstract: false, final false
  inline bool get_RequestsVisualFaceTracking();

  /// @brief Method get_TelemetryProjectGuid, addr 0x5caa9c8, size 0x44, virtual false, abstract: false, final false
  inline ::StringW get_TelemetryProjectGuid();

  static inline void setStaticF_NewProjectDefaultSkeletonVersion(::GlobalNamespace::OVRHandSkeletonVersion value);

  static inline void setStaticF__instance(::UnityW<::GlobalNamespace::OVRRuntimeSettings> value);

  /// @brief Method set_BodyTrackingFidelity, addr 0x5caaa14, size 0x8, virtual false, abstract: false, final false
  inline void set_BodyTrackingFidelity(::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 value);

  /// @brief Method set_BodyTrackingJointSet, addr 0x5caaa24, size 0x8, virtual false, abstract: false, final false
  inline void set_BodyTrackingJointSet(::GlobalNamespace::OVRPlugin_BodyJointSet value);

  /// @brief Method set_EnableFaceTrackingVisemesOutput, addr 0x5caa958, size 0x70, virtual false, abstract: false, final false
  inline void set_EnableFaceTrackingVisemesOutput(bool value);

  /// @brief Method set_HandSkeletonVersion, addr 0x5caa710, size 0x8, virtual false, abstract: false, final false
  inline void set_HandSkeletonVersion(::GlobalNamespace::OVRHandSkeletonVersion value);

  /// @brief Method set_RequestsAudioFaceTracking, addr 0x5caa948, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestsAudioFaceTracking(bool value);

  /// @brief Method set_RequestsVisualFaceTracking, addr 0x5caa938, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestsVisualFaceTracking(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRRuntimeSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRRuntimeSettings(OVRRuntimeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRRuntimeSettings(OVRRuntimeSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7630 };

  /// @brief Field _assetName offset 0xffffffff size 0x8
  static constexpr ::ConstString _assetName{ u"OculusRuntimeSettings" };

  /// @brief Field handSkeletonVersion, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::OVRHandSkeletonVersion ___handSkeletonVersion;

  /// @brief Field colorSpace, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::OVRManager_ColorSpace ___colorSpace;

  /// @brief Field requestsVisualFaceTracking, offset: 0x20, size: 0x1, def value: None
  bool ___requestsVisualFaceTracking;

  /// @brief Field requestsAudioFaceTracking, offset: 0x21, size: 0x1, def value: None
  bool ___requestsAudioFaceTracking;

  /// @brief Field enableFaceTrackingVisemesOutput, offset: 0x22, size: 0x1, def value: None
  bool ___enableFaceTrackingVisemesOutput;

  /// @brief Field telemetryProjectGuid, offset: 0x28, size: 0x8, def value: None
  ::StringW ___telemetryProjectGuid;

  /// @brief Field bodyTrackingFidelity, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 ___bodyTrackingFidelity;

  /// @brief Field bodyTrackingJointSet, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_BodyJointSet ___bodyTrackingJointSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___handSkeletonVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___colorSpace) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___requestsVisualFaceTracking) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___requestsAudioFaceTracking) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___enableFaceTrackingVisemesOutput) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___telemetryProjectGuid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___bodyTrackingFidelity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___bodyTrackingJointSet) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRuntimeSettings, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRRuntimeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRuntimeSettings*, "", "OVRRuntimeSettings");
