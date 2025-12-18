#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDisplay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDisplay)
namespace GlobalNamespace {
struct OVRDisplay_EyeFov;
}
namespace GlobalNamespace {
struct OVRDisplay_EyeRenderDesc;
}
namespace GlobalNamespace {
struct OVRDisplay_LatencyData;
}
namespace System {
class Action;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRDisplay;
}
namespace GlobalNamespace {
struct OVRDisplay_EyeFov;
}
namespace GlobalNamespace {
struct OVRDisplay_EyeRenderDesc;
}
namespace GlobalNamespace {
struct OVRDisplay_LatencyData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRDisplay);
MARK_VAL_T(::GlobalNamespace::OVRDisplay_EyeFov);
MARK_VAL_T(::GlobalNamespace::OVRDisplay_EyeRenderDesc);
MARK_VAL_T(::GlobalNamespace::OVRDisplay_LatencyData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDisplay/EyeFov
struct CORDL_TYPE OVRDisplay_EyeFov {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDisplay_EyeFov();

  // Ctor Parameters [CppParam { name: "UpFov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "DownFov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "LeftFov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "RightFov", ty: "float_t", modifiers: "", def_value: None }]
  constexpr OVRDisplay_EyeFov(float_t UpFov, float_t DownFov, float_t LeftFov, float_t RightFov) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7119 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field UpFov, offset: 0x0, size: 0x4, def value: None
  float_t UpFov;

  /// @brief Field DownFov, offset: 0x4, size: 0x4, def value: None
  float_t DownFov;

  /// @brief Field LeftFov, offset: 0x8, size: 0x4, def value: None
  float_t LeftFov;

  /// @brief Field RightFov, offset: 0xc, size: 0x4, def value: None
  float_t RightFov;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDisplay_EyeFov, UpFov) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_EyeFov, DownFov) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_EyeFov, LeftFov) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_EyeFov, RightFov) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDisplay_EyeFov, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRDisplay::EyeFov, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDisplay/EyeRenderDesc
struct CORDL_TYPE OVRDisplay_EyeRenderDesc {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDisplay_EyeRenderDesc();

  // Ctor Parameters [CppParam { name: "resolution", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "fov", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
  // None }, CppParam { name: "fullFov", ty: "::GlobalNamespace::OVRDisplay_EyeFov", modifiers: "", def_value: None }]
  constexpr OVRDisplay_EyeRenderDesc(::UnityEngine::Vector2 resolution, ::UnityEngine::Vector2 fov, ::GlobalNamespace::OVRDisplay_EyeFov fullFov) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7120 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field resolution, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 resolution;

  /// @brief Field fov, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 fov;

  /// @brief Field fullFov, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::OVRDisplay_EyeFov fullFov;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDisplay_EyeRenderDesc, resolution) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_EyeRenderDesc, fov) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_EyeRenderDesc, fullFov) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDisplay_EyeRenderDesc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDisplay/LatencyData
struct CORDL_TYPE OVRDisplay_LatencyData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDisplay_LatencyData();

  // Ctor Parameters [CppParam { name: "render", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "timeWarp", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "postPresent", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "renderError", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "timeWarpError", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr OVRDisplay_LatencyData(float_t render, float_t timeWarp, float_t postPresent, float_t renderError, float_t timeWarpError) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7121 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field render, offset: 0x0, size: 0x4, def value: None
  float_t render;

  /// @brief Field timeWarp, offset: 0x4, size: 0x4, def value: None
  float_t timeWarp;

  /// @brief Field postPresent, offset: 0x8, size: 0x4, def value: None
  float_t postPresent;

  /// @brief Field renderError, offset: 0xc, size: 0x4, def value: None
  float_t renderError;

  /// @brief Field timeWarpError, offset: 0x10, size: 0x4, def value: None
  float_t timeWarpError;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDisplay_LatencyData, render) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_LatencyData, timeWarp) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_LatencyData, postPresent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_LatencyData, renderError) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_LatencyData, timeWarpError) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDisplay_LatencyData, 0x14>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRDisplay
class CORDL_TYPE OVRDisplay : public ::System::Object {
public:
  // Declarations
  using EyeFov = ::GlobalNamespace::OVRDisplay_EyeFov;

  using EyeRenderDesc = ::GlobalNamespace::OVRDisplay_EyeRenderDesc;

  using LatencyData = ::GlobalNamespace::OVRDisplay_LatencyData;

  /// @brief Field RecenteredPose, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_RecenteredPose, put = __cordl_internal_set_RecenteredPose)) ::System::Action* RecenteredPose;

  __declspec(property(get = get_acceleration)) ::UnityEngine::Vector3 acceleration;

  __declspec(property(get = get_angularAcceleration)) ::UnityEngine::Vector3 angularAcceleration;

  __declspec(property(get = get_angularVelocity)) ::UnityEngine::Vector3 angularVelocity;

  __declspec(property(get = get_appFramerate)) float_t appFramerate;

  __declspec(property(get = get_displayFrequenciesAvailable)) ::ArrayW<float_t, ::Array<float_t>*> displayFrequenciesAvailable;

  __declspec(property(get = get_displayFrequency, put = set_displayFrequency)) float_t displayFrequency;

  /// @brief Field eyeDescs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_eyeDescs,
                      put = __cordl_internal_set_eyeDescs)) ::ArrayW<::GlobalNamespace::OVRDisplay_EyeRenderDesc, ::Array<::GlobalNamespace::OVRDisplay_EyeRenderDesc>*>
      eyeDescs;

  __declspec(property(get = get_latency)) ::GlobalNamespace::OVRDisplay_LatencyData latency;

  /// @brief Field localTrackingSpaceRecenterCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_localTrackingSpaceRecenterCount, put = __cordl_internal_set_localTrackingSpaceRecenterCount)) int32_t localTrackingSpaceRecenterCount;

  /// @brief Field needsConfigureTexture, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_needsConfigureTexture, put = __cordl_internal_set_needsConfigureTexture)) bool needsConfigureTexture;

  /// @brief Field recenterRequested, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_recenterRequested, put = __cordl_internal_set_recenterRequested)) bool recenterRequested;

  /// @brief Field recenterRequestedFrameCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_recenterRequestedFrameCount, put = __cordl_internal_set_recenterRequestedFrameCount)) int32_t recenterRequestedFrameCount;

  __declspec(property(get = get_recommendedMSAALevel)) int32_t recommendedMSAALevel;

  __declspec(property(get = get_velocity)) ::UnityEngine::Vector3 velocity;

  /// @brief Method ConfigureEyeDesc, addr 0x5c717d4, size 0x29c, virtual false, abstract: false, final false
  inline void ConfigureEyeDesc(::UnityEngine::XR::XRNode eye);

  /// @brief Method GetEyeRenderDesc, addr 0x5c713c4, size 0x38, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRDisplay_EyeRenderDesc GetEyeRenderDesc(::UnityEngine::XR::XRNode eye);

  static inline ::GlobalNamespace::OVRDisplay* New_ctor();

  /// @brief Method RecenterPose, addr 0x5c70da0, size 0x94, virtual false, abstract: false, final false
  inline void RecenterPose();

  /// @brief Method Update, addr 0x5c70aa0, size 0x1a8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateTextures, addr 0x5c70a80, size 0x20, virtual false, abstract: false, final false
  inline void UpdateTextures();

  constexpr ::System::Action* const& __cordl_internal_get_RecenteredPose() const;

  constexpr ::System::Action*& __cordl_internal_get_RecenteredPose();

  constexpr ::ArrayW<::GlobalNamespace::OVRDisplay_EyeRenderDesc, ::Array<::GlobalNamespace::OVRDisplay_EyeRenderDesc>*> const& __cordl_internal_get_eyeDescs() const;

  constexpr ::ArrayW<::GlobalNamespace::OVRDisplay_EyeRenderDesc, ::Array<::GlobalNamespace::OVRDisplay_EyeRenderDesc>*>& __cordl_internal_get_eyeDescs();

  constexpr int32_t const& __cordl_internal_get_localTrackingSpaceRecenterCount() const;

  constexpr int32_t& __cordl_internal_get_localTrackingSpaceRecenterCount();

  constexpr bool const& __cordl_internal_get_needsConfigureTexture() const;

  constexpr bool& __cordl_internal_get_needsConfigureTexture();

  constexpr bool const& __cordl_internal_get_recenterRequested() const;

  constexpr bool& __cordl_internal_get_recenterRequested();

  constexpr int32_t const& __cordl_internal_get_recenterRequestedFrameCount() const;

  constexpr int32_t& __cordl_internal_get_recenterRequestedFrameCount();

  constexpr void __cordl_internal_set_RecenteredPose(::System::Action* value);

  constexpr void __cordl_internal_set_eyeDescs(::ArrayW<::GlobalNamespace::OVRDisplay_EyeRenderDesc, ::Array<::GlobalNamespace::OVRDisplay_EyeRenderDesc>*> value);

  constexpr void __cordl_internal_set_localTrackingSpaceRecenterCount(int32_t value);

  constexpr void __cordl_internal_set_needsConfigureTexture(bool value);

  constexpr void __cordl_internal_set_recenterRequested(bool value);

  constexpr void __cordl_internal_set_recenterRequestedFrameCount(int32_t value);

  /// @brief Method .ctor, addr 0x5c70a10, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_RecenteredPose, addr 0x5c70c48, size 0xac, virtual false, abstract: false, final false
  inline void add_RecenteredPose(::System::Action* value);

  /// @brief Method get_acceleration, addr 0x5c70e34, size 0x164, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_acceleration();

  /// @brief Method get_angularAcceleration, addr 0x5c70f98, size 0x164, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularAcceleration();

  /// @brief Method get_angularVelocity, addr 0x5c71260, size 0x164, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_appFramerate, addr 0x5c715d0, size 0x98, virtual false, abstract: false, final false
  inline float_t get_appFramerate();

  /// @brief Method get_displayFrequenciesAvailable, addr 0x5c716c8, size 0x54, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_displayFrequenciesAvailable();

  /// @brief Method get_displayFrequency, addr 0x5c7171c, size 0x54, virtual false, abstract: false, final false
  inline float_t get_displayFrequency();

  /// @brief Method get_latency, addr 0x5c713fc, size 0x1d4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRDisplay_LatencyData get_latency();

  /// @brief Method get_recommendedMSAALevel, addr 0x5c71668, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_recommendedMSAALevel();

  /// @brief Method get_velocity, addr 0x5c710fc, size 0x164, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method remove_RecenteredPose, addr 0x5c70cf4, size 0xac, virtual false, abstract: false, final false
  inline void remove_RecenteredPose(::System::Action* value);

  /// @brief Method set_displayFrequency, addr 0x5c71770, size 0x64, virtual false, abstract: false, final false
  inline void set_displayFrequency(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRDisplay(OVRDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRDisplay(OVRDisplay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7122 };

  /// @brief Field needsConfigureTexture, offset: 0x10, size: 0x1, def value: None
  bool ___needsConfigureTexture;

  /// @brief Field eyeDescs, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRDisplay_EyeRenderDesc, ::Array<::GlobalNamespace::OVRDisplay_EyeRenderDesc>*> ___eyeDescs;

  /// @brief Field recenterRequested, offset: 0x20, size: 0x1, def value: None
  bool ___recenterRequested;

  /// @brief Field recenterRequestedFrameCount, offset: 0x24, size: 0x4, def value: None
  int32_t ___recenterRequestedFrameCount;

  /// @brief Field localTrackingSpaceRecenterCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___localTrackingSpaceRecenterCount;

  /// @brief Field RecenteredPose, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___RecenteredPose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___needsConfigureTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___eyeDescs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___recenterRequested) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___recenterRequestedFrameCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___localTrackingSpaceRecenterCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___RecenteredPose) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDisplay, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDisplay*, "", "OVRDisplay");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDisplay_EyeFov, "", "OVRDisplay/EyeFov");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDisplay_EyeRenderDesc, "", "OVRDisplay/EyeRenderDesc");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDisplay_LatencyData, "", "OVRDisplay/LatencyData");
