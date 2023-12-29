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
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct __OVRDisplay__EyeFov;
}
namespace GlobalNamespace {
struct __OVRDisplay__EyeRenderDesc;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
struct __OVRDisplay__LatencyData;
}
namespace UnityEngine {
struct Vector2;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8443))
// CS Name: ::OVRDisplay::EyeFov
struct CORDL_TYPE __OVRDisplay__EyeFov {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "UpFov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "DownFov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "LeftFov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "RightFov", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRDisplay__EyeFov(float_t UpFov, float_t DownFov, float_t LeftFov, float_t RightFov) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDisplay__EyeFov();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8443)), TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8444))
// CS Name: ::OVRDisplay::EyeRenderDesc
struct CORDL_TYPE __OVRDisplay__EyeRenderDesc {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "resolution", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "fov", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
  // None }, CppParam { name: "fullFov", ty: "::GlobalNamespace::__OVRDisplay__EyeFov", modifiers: "", def_value: None }]
  constexpr __OVRDisplay__EyeRenderDesc(::UnityEngine::Vector2 resolution, ::UnityEngine::Vector2 fov, ::GlobalNamespace::__OVRDisplay__EyeFov fullFov) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDisplay__EyeRenderDesc();

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8445))
// CS Name: ::OVRDisplay::LatencyData
struct CORDL_TYPE __OVRDisplay__LatencyData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "render", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "timeWarp", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "postPresent", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "renderError", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "timeWarpError", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr __OVRDisplay__LatencyData(float_t render, float_t timeWarp, float_t postPresent, float_t renderError, float_t timeWarpError) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRDisplay__LatencyData();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8446))
// CS Name: ::OVRDisplay*
class CORDL_TYPE OVRDisplay : public ::System::Object {
public:
  // Declarations
  using LatencyData = ::GlobalNamespace::__OVRDisplay__LatencyData;

  using EyeRenderDesc = ::GlobalNamespace::__OVRDisplay__EyeRenderDesc;

  using EyeFov = ::GlobalNamespace::__OVRDisplay__EyeFov;

  /// @brief Field needsConfigureTexture, offset 0x10, size 0x1
  __declspec(property(get = __get_needsConfigureTexture, put = __set_needsConfigureTexture)) bool needsConfigureTexture;

  /// @brief Field eyeDescs, offset 0x18, size 0x8
  __declspec(property(get = __get_eyeDescs, put = __set_eyeDescs))::ArrayW<::GlobalNamespace::__OVRDisplay__EyeRenderDesc, ::Array<::GlobalNamespace::__OVRDisplay__EyeRenderDesc>*> eyeDescs;

  /// @brief Field recenterRequested, offset 0x20, size 0x1
  __declspec(property(get = __get_recenterRequested, put = __set_recenterRequested)) bool recenterRequested;

  /// @brief Field recenterRequestedFrameCount, offset 0x24, size 0x4
  __declspec(property(get = __get_recenterRequestedFrameCount, put = __set_recenterRequestedFrameCount)) int32_t recenterRequestedFrameCount;

  /// @brief Field localTrackingSpaceRecenterCount, offset 0x28, size 0x4
  __declspec(property(get = __get_localTrackingSpaceRecenterCount, put = __set_localTrackingSpaceRecenterCount)) int32_t localTrackingSpaceRecenterCount;

  /// @brief Field RecenteredPose, offset 0x30, size 0x8
  __declspec(property(get = __get_RecenteredPose, put = __set_RecenteredPose))::System::Action* RecenteredPose;

  __declspec(property(get = get_acceleration))::UnityEngine::Vector3 acceleration;

  __declspec(property(get = get_angularAcceleration))::UnityEngine::Vector3 angularAcceleration;

  __declspec(property(get = get_velocity))::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_angularVelocity))::UnityEngine::Vector3 angularVelocity;

  __declspec(property(get = get_latency))::GlobalNamespace::__OVRDisplay__LatencyData latency;

  __declspec(property(get = get_appFramerate)) float_t appFramerate;

  __declspec(property(get = get_recommendedMSAALevel)) int32_t recommendedMSAALevel;

  __declspec(property(get = get_displayFrequenciesAvailable))::ArrayW<float_t, ::Array<float_t>*> displayFrequenciesAvailable;

  __declspec(property(get = get_displayFrequency, put = set_displayFrequency)) float_t displayFrequency;

  constexpr bool& __get_needsConfigureTexture();

  constexpr bool const& __get_needsConfigureTexture() const;

  constexpr void __set_needsConfigureTexture(bool value);

  constexpr ::ArrayW<::GlobalNamespace::__OVRDisplay__EyeRenderDesc, ::Array<::GlobalNamespace::__OVRDisplay__EyeRenderDesc>*>& __get_eyeDescs();

  constexpr ::ArrayW<::GlobalNamespace::__OVRDisplay__EyeRenderDesc, ::Array<::GlobalNamespace::__OVRDisplay__EyeRenderDesc>*> const& __get_eyeDescs() const;

  constexpr void __set_eyeDescs(::ArrayW<::GlobalNamespace::__OVRDisplay__EyeRenderDesc, ::Array<::GlobalNamespace::__OVRDisplay__EyeRenderDesc>*> value);

  constexpr bool& __get_recenterRequested();

  constexpr bool const& __get_recenterRequested() const;

  constexpr void __set_recenterRequested(bool value);

  constexpr int32_t& __get_recenterRequestedFrameCount();

  constexpr int32_t const& __get_recenterRequestedFrameCount() const;

  constexpr void __set_recenterRequestedFrameCount(int32_t value);

  constexpr int32_t& __get_localTrackingSpaceRecenterCount();

  constexpr int32_t const& __get_localTrackingSpaceRecenterCount() const;

  constexpr void __set_localTrackingSpaceRecenterCount(int32_t value);

  constexpr ::System::Action*& __get_RecenteredPose();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_RecenteredPose() const;

  constexpr void __set_RecenteredPose(::System::Action* value);

  static inline ::GlobalNamespace::OVRDisplay* New_ctor();

  /// @brief Method .ctor addr 0x25c2ec4 size 0x78 virtual false final false
  inline void _ctor();

  /// @brief Method Update addr 0x25c2f5c size 0x184 virtual false final false
  inline void Update();

  /// @brief Method add_RecenteredPose addr 0x25c30e0 size 0x9c virtual false final false
  inline void add_RecenteredPose(::System::Action* value);

  /// @brief Method remove_RecenteredPose addr 0x25c317c size 0x9c virtual false final false
  inline void remove_RecenteredPose(::System::Action* value);

  /// @brief Method RecenterPose addr 0x25c3218 size 0x78 virtual false final false
  inline void RecenterPose();

  /// @brief Method get_acceleration addr 0x25c3290 size 0x124 virtual false final false
  inline ::UnityEngine::Vector3 get_acceleration();

  /// @brief Method get_angularAcceleration addr 0x25c33b4 size 0x124 virtual false final false
  inline ::UnityEngine::Vector3 get_angularAcceleration();

  /// @brief Method get_velocity addr 0x25c34d8 size 0x124 virtual false final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_angularVelocity addr 0x25c35fc size 0x124 virtual false final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method GetEyeRenderDesc addr 0x25c3720 size 0x38 virtual false final false
  inline ::GlobalNamespace::__OVRDisplay__EyeRenderDesc GetEyeRenderDesc(::UnityEngine::XR::XRNode eye);

  /// @brief Method get_latency addr 0x25c3758 size 0x1d0 virtual false final false
  inline ::GlobalNamespace::__OVRDisplay__LatencyData get_latency();

  /// @brief Method get_appFramerate addr 0x25c3928 size 0x90 virtual false final false
  inline float_t get_appFramerate();

  /// @brief Method get_recommendedMSAALevel addr 0x25c39b8 size 0x5c virtual false final false
  inline int32_t get_recommendedMSAALevel();

  /// @brief Method get_displayFrequenciesAvailable addr 0x25c3a14 size 0x50 virtual false final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_displayFrequenciesAvailable();

  /// @brief Method get_displayFrequency addr 0x25c3a64 size 0x50 virtual false final false
  inline float_t get_displayFrequency();

  /// @brief Method set_displayFrequency addr 0x25c3ab4 size 0x60 virtual false final false
  inline void set_displayFrequency(float_t value);

  /// @brief Method UpdateTextures addr 0x25c2f3c size 0x20 virtual false final false
  inline void UpdateTextures();

  /// @brief Method ConfigureEyeDesc addr 0x25c3b14 size 0x254 virtual false final false
  inline void ConfigureEyeDesc(::UnityEngine::XR::XRNode eye);

  // Ctor Parameters [CppParam { name: "", ty: "OVRDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRDisplay(OVRDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRDisplay(OVRDisplay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDisplay();

public:
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
