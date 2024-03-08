#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRDisplay_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDisplay)
namespace GlobalNamespace {
struct __OVRDisplay__EyeFov;
}
namespace GlobalNamespace {
struct __OVRDisplay__EyeRenderDesc;
}
namespace GlobalNamespace {
struct __OVRDisplay__LatencyData;
}
namespace System {
class Action;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRDisplay;
}
namespace GlobalNamespace {
struct __OVRDisplay__EyeFov;
}
namespace GlobalNamespace {
struct __OVRDisplay__EyeRenderDesc;
}
namespace GlobalNamespace {
struct __OVRDisplay__LatencyData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRDisplay);
MARK_VAL_T(::GlobalNamespace::__OVRDisplay__EyeFov);
MARK_VAL_T(::GlobalNamespace::__OVRDisplay__EyeRenderDesc);
MARK_VAL_T(::GlobalNamespace::__OVRDisplay__LatencyData);
// Type: ::EyeFov
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRDisplay::EyeFov
struct CORDL_TYPE __OVRDisplay__EyeFov {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDisplay__EyeFov();

  // Ctor Parameters [CppParam { name: "UpFov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "DownFov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "LeftFov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "RightFov", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRDisplay__EyeFov(float_t UpFov, float_t DownFov, float_t LeftFov, float_t RightFov) noexcept;

  /// @brief Field UpFov, offset: 0x0, size: 0x4, def value: None
  float_t UpFov;

  /// @brief Field DownFov, offset: 0x4, size: 0x4, def value: None
  float_t DownFov;

  /// @brief Field LeftFov, offset: 0x8, size: 0x4, def value: None
  float_t LeftFov;

  /// @brief Field RightFov, offset: 0xc, size: 0x4, def value: None
  float_t RightFov;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDisplay__EyeFov, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRDisplay__EyeFov, UpFov) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRDisplay__EyeFov, DownFov) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRDisplay__EyeFov, LeftFov) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRDisplay__EyeFov, RightFov) == 0xc, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EyeRenderDesc
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRDisplay::EyeRenderDesc
struct CORDL_TYPE __OVRDisplay__EyeRenderDesc {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDisplay__EyeRenderDesc();

  // Ctor Parameters [CppParam { name: "resolution", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "fov", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
  // None }, CppParam { name: "fullFov", ty: "::GlobalNamespace::__OVRDisplay__EyeFov", modifiers: "", def_value: None }]
  constexpr __OVRDisplay__EyeRenderDesc(::UnityEngine::Vector2 resolution, ::UnityEngine::Vector2 fov, ::GlobalNamespace::__OVRDisplay__EyeFov fullFov) noexcept;

  /// @brief Field resolution, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 resolution;

  /// @brief Field fov, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 fov;

  /// @brief Field fullFov, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::__OVRDisplay__EyeFov fullFov;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDisplay__EyeRenderDesc, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRDisplay__EyeRenderDesc, resolution) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRDisplay__EyeRenderDesc, fov) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRDisplay__EyeRenderDesc, fullFov) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LatencyData
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRDisplay::LatencyData
struct CORDL_TYPE __OVRDisplay__LatencyData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDisplay__LatencyData();

  // Ctor Parameters [CppParam { name: "render", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "timeWarp", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "postPresent", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "renderError", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "timeWarpError", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr __OVRDisplay__LatencyData(float_t render, float_t timeWarp, float_t postPresent, float_t renderError, float_t timeWarpError) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDisplay__LatencyData, 0x14>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRDisplay__LatencyData, render) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRDisplay__LatencyData, timeWarp) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRDisplay__LatencyData, postPresent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRDisplay__LatencyData, renderError) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRDisplay__LatencyData, timeWarpError) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRDisplay
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRDisplay*
class CORDL_TYPE OVRDisplay : public ::System::Object {
public:
  // Declarations
  using EyeFov = ::GlobalNamespace::__OVRDisplay__EyeFov;

  using EyeRenderDesc = ::GlobalNamespace::__OVRDisplay__EyeRenderDesc;

  using LatencyData = ::GlobalNamespace::__OVRDisplay__LatencyData;

  /// @brief Field RecenteredPose, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_RecenteredPose, put = __cordl_internal_set_RecenteredPose))::System::Action* RecenteredPose;

  __declspec(property(get = get_acceleration))::UnityEngine::Vector3 acceleration;

  __declspec(property(get = get_angularAcceleration))::UnityEngine::Vector3 angularAcceleration;

  __declspec(property(get = get_angularVelocity))::UnityEngine::Vector3 angularVelocity;

  __declspec(property(get = get_appFramerate)) float_t appFramerate;

  __declspec(property(get = get_displayFrequenciesAvailable))::ArrayW<float_t, ::Array<float_t>*> displayFrequenciesAvailable;

  __declspec(property(get = get_displayFrequency, put = set_displayFrequency)) float_t displayFrequency;

  /// @brief Field eyeDescs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_eyeDescs,
                      put = __cordl_internal_set_eyeDescs))::ArrayW<::GlobalNamespace::__OVRDisplay__EyeRenderDesc, ::Array<::GlobalNamespace::__OVRDisplay__EyeRenderDesc>*> eyeDescs;

  __declspec(property(get = get_latency))::GlobalNamespace::__OVRDisplay__LatencyData latency;

  /// @brief Field localTrackingSpaceRecenterCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_localTrackingSpaceRecenterCount, put = __cordl_internal_set_localTrackingSpaceRecenterCount)) int32_t localTrackingSpaceRecenterCount;

  /// @brief Field needsConfigureTexture, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_needsConfigureTexture, put = __cordl_internal_set_needsConfigureTexture)) bool needsConfigureTexture;

  /// @brief Field recenterRequested, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_recenterRequested, put = __cordl_internal_set_recenterRequested)) bool recenterRequested;

  /// @brief Field recenterRequestedFrameCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_recenterRequestedFrameCount, put = __cordl_internal_set_recenterRequestedFrameCount)) int32_t recenterRequestedFrameCount;

  __declspec(property(get = get_recommendedMSAALevel)) int32_t recommendedMSAALevel;

  __declspec(property(get = get_velocity))::UnityEngine::Vector3 velocity;

  /// @brief Method ConfigureEyeDesc, addr 0x28714d8, size 0x254, virtual false, abstract: false, final false
  inline void ConfigureEyeDesc(::UnityEngine::XR::XRNode eye);

  /// @brief Method GetEyeRenderDesc, addr 0x2871134, size 0x38, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRDisplay__EyeRenderDesc GetEyeRenderDesc(::UnityEngine::XR::XRNode eye);

  static inline ::GlobalNamespace::OVRDisplay* New_ctor();

  /// @brief Method RecenterPose, addr 0x2870c2c, size 0x78, virtual false, abstract: false, final false
  inline void RecenterPose();

  /// @brief Method Update, addr 0x2870970, size 0x184, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateTextures, addr 0x2870950, size 0x20, virtual false, abstract: false, final false
  inline void UpdateTextures();

  constexpr ::System::Action*& __cordl_internal_get_RecenteredPose();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_RecenteredPose() const;

  constexpr ::ArrayW<::GlobalNamespace::__OVRDisplay__EyeRenderDesc, ::Array<::GlobalNamespace::__OVRDisplay__EyeRenderDesc>*> const& __cordl_internal_get_eyeDescs() const;

  constexpr ::ArrayW<::GlobalNamespace::__OVRDisplay__EyeRenderDesc, ::Array<::GlobalNamespace::__OVRDisplay__EyeRenderDesc>*>& __cordl_internal_get_eyeDescs();

  constexpr int32_t const& __cordl_internal_get_localTrackingSpaceRecenterCount() const;

  constexpr int32_t& __cordl_internal_get_localTrackingSpaceRecenterCount();

  constexpr bool const& __cordl_internal_get_needsConfigureTexture() const;

  constexpr bool& __cordl_internal_get_needsConfigureTexture();

  constexpr bool const& __cordl_internal_get_recenterRequested() const;

  constexpr bool& __cordl_internal_get_recenterRequested();

  constexpr int32_t const& __cordl_internal_get_recenterRequestedFrameCount() const;

  constexpr int32_t& __cordl_internal_get_recenterRequestedFrameCount();

  constexpr void __cordl_internal_set_RecenteredPose(::System::Action* value);

  constexpr void __cordl_internal_set_eyeDescs(::ArrayW<::GlobalNamespace::__OVRDisplay__EyeRenderDesc, ::Array<::GlobalNamespace::__OVRDisplay__EyeRenderDesc>*> value);

  constexpr void __cordl_internal_set_localTrackingSpaceRecenterCount(int32_t value);

  constexpr void __cordl_internal_set_needsConfigureTexture(bool value);

  constexpr void __cordl_internal_set_recenterRequested(bool value);

  constexpr void __cordl_internal_set_recenterRequestedFrameCount(int32_t value);

  /// @brief Method .ctor, addr 0x28708d8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_RecenteredPose, addr 0x2870af4, size 0x9c, virtual false, abstract: false, final false
  inline void add_RecenteredPose(::System::Action* value);

  /// @brief Method get_acceleration, addr 0x2870ca4, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_acceleration();

  /// @brief Method get_angularAcceleration, addr 0x2870dc8, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularAcceleration();

  /// @brief Method get_angularVelocity, addr 0x2871010, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_appFramerate, addr 0x287133c, size 0x90, virtual false, abstract: false, final false
  inline float_t get_appFramerate();

  /// @brief Method get_displayFrequenciesAvailable, addr 0x2871428, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_displayFrequenciesAvailable();

  /// @brief Method get_displayFrequency, addr 0x28637dc, size 0x50, virtual false, abstract: false, final false
  inline float_t get_displayFrequency();

  /// @brief Method get_latency, addr 0x287116c, size 0x1d0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRDisplay__LatencyData get_latency();

  /// @brief Method get_recommendedMSAALevel, addr 0x28713cc, size 0x5c, virtual false, abstract: false, final false
  inline int32_t get_recommendedMSAALevel();

  /// @brief Method get_velocity, addr 0x2870eec, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method remove_RecenteredPose, addr 0x2870b90, size 0x9c, virtual false, abstract: false, final false
  inline void remove_RecenteredPose(::System::Action* value);

  /// @brief Method set_displayFrequency, addr 0x2871478, size 0x60, virtual false, abstract: false, final false
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

  /// @brief Field needsConfigureTexture, offset: 0x10, size: 0x1, def value: None
  bool ___needsConfigureTexture;

  /// @brief Field eyeDescs, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRDisplay__EyeRenderDesc, ::Array<::GlobalNamespace::__OVRDisplay__EyeRenderDesc>*> ___eyeDescs;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDisplay, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___needsConfigureTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___eyeDescs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___recenterRequested) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___recenterRequestedFrameCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___localTrackingSpaceRecenterCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___RecenteredPose) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDisplay*, "", "OVRDisplay");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDisplay__EyeFov, "", "OVRDisplay/EyeFov");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDisplay__EyeRenderDesc, "", "OVRDisplay/EyeRenderDesc");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDisplay__LatencyData, "", "OVRDisplay/LatencyData");
