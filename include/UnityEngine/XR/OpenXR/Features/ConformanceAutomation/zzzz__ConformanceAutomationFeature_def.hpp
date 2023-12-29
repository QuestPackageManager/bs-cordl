#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConformanceAutomationFeature)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrPosef;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrVector3f;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrVector2f;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::ConformanceAutomation {
class ConformanceAutomationFeature;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::ConformanceAutomation::ConformanceAutomationFeature);
// Type: UnityEngine.XR.OpenXR.Features.ConformanceAutomation::ConformanceAutomationFeature
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::ConformanceAutomation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16057))
// CS Name: ::UnityEngine.XR.OpenXR.Features.ConformanceAutomation::ConformanceAutomationFeature*
class CORDL_TYPE ConformanceAutomationFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Field xrInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xrInstance, put = setStaticF_xrInstance)) uint64_t xrInstance;

  /// @brief Field xrSession, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xrSession, put = setStaticF_xrSession)) uint64_t xrSession;

  static inline void setStaticF_xrInstance(uint64_t value);

  static inline uint64_t getStaticF_xrInstance();

  static inline void setStaticF_xrSession(uint64_t value);

  static inline uint64_t getStaticF_xrSession();

  /// @brief Method OnInstanceCreate addr 0x2b15a34 size 0xd8 virtual true final false
  inline bool OnInstanceCreate(uint64_t instance);

  /// @brief Method OnInstanceDestroy addr 0x2b15b90 size 0x68 virtual true final false
  inline void OnInstanceDestroy(uint64_t xrInstance);

  /// @brief Method OnSessionCreate addr 0x2b15bf8 size 0x64 virtual true final false
  inline void OnSessionCreate(uint64_t xrSessionId);

  /// @brief Method OnSessionDestroy addr 0x2b15c5c size 0x68 virtual true final false
  inline void OnSessionDestroy(uint64_t xrSessionId);

  /// @brief Method ConformanceAutomationSetActive addr 0x2b15cc4 size 0x88 virtual false final false
  static inline bool ConformanceAutomationSetActive(::StringW interactionProfile, ::StringW topLevelPath, bool isActive);

  /// @brief Method ConformanceAutomationSetBool addr 0x2b15df0 size 0x88 virtual false final false
  static inline bool ConformanceAutomationSetBool(::StringW topLevelPath, ::StringW inputSourcePath, bool state);

  /// @brief Method ConformanceAutomationSetFloat addr 0x2b15f1c size 0x90 virtual false final false
  static inline bool ConformanceAutomationSetFloat(::StringW topLevelPath, ::StringW inputSourcePath, float_t state);

  /// @brief Method ConformanceAutomationSetVec2 addr 0x2b16058 size 0xb8 virtual false final false
  static inline bool ConformanceAutomationSetVec2(::StringW topLevelPath, ::StringW inputSourcePath, ::UnityEngine::Vector2 state);

  /// @brief Method ConformanceAutomationSetPose addr 0x2b161c4 size 0x128 virtual false final false
  static inline bool ConformanceAutomationSetPose(::StringW topLevelPath, ::StringW inputSourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation);

  /// @brief Method ConformanceAutomationSetVelocity addr 0x2b163b0 size 0x12c virtual false final false
  static inline bool ConformanceAutomationSetVelocity(::StringW topLevelPath, ::StringW inputSourcePath, bool linearValid, ::UnityEngine::Vector3 linear, bool angularValid,
                                                      ::UnityEngine::Vector3 angular);

  /// @brief Method initialize addr 0x2b15b0c size 0x84 virtual false final false
  static inline void initialize(void* xrGetInstanceProcAddr, uint64_t xrInstance);

  /// @brief Method xrSetInputDeviceActiveEXT addr 0x2b15d4c size 0xa4 virtual false final false
  static inline bool xrSetInputDeviceActiveEXT(uint64_t xrSession, uint64_t interactionProfile, uint64_t topLevelPath, bool isActive);

  /// @brief Method xrSetInputDeviceStateBoolEXT addr 0x2b15e78 size 0xa4 virtual false final false
  static inline bool xrSetInputDeviceStateBoolEXT(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, bool state);

  /// @brief Method xrSetInputDeviceStateFloatEXT addr 0x2b15fac size 0xac virtual false final false
  static inline bool xrSetInputDeviceStateFloatEXT(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, float_t state);

  /// @brief Method xrSetInputDeviceStateVector2fEXT addr 0x2b16110 size 0xb4 virtual false final false
  static inline bool xrSetInputDeviceStateVector2fEXT(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f state);

  /// @brief Method xrSetInputDeviceLocationEXT addr 0x2b162ec size 0xc4 virtual false final false
  static inline bool xrSetInputDeviceLocationEXT(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, uint64_t space, ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef pose);

  /// @brief Method xrSetInputDeviceVelocityUNITY addr 0x2b164dc size 0xfc virtual false final false
  static inline bool xrSetInputDeviceVelocityUNITY(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, bool linearValid, ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f linear,
                                                   bool angularValid, ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f angular);

  static inline ::UnityEngine::XR::OpenXR::Features::ConformanceAutomation::ConformanceAutomationFeature* New_ctor();

  /// @brief Method .ctor addr 0x2b165d8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ConformanceAutomationFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConformanceAutomationFeature(ConformanceAutomationFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConformanceAutomationFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConformanceAutomationFeature(ConformanceAutomationFeature const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConformanceAutomationFeature();

public:
  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.conformance" };

  /// @brief Field ExtLib offset 0xffffffff size 0x8
  static constexpr ::ConstString ExtLib{ u"ConformanceAutomationExt" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::ConformanceAutomation::ConformanceAutomationFeature, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::ConformanceAutomation
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::ConformanceAutomation::ConformanceAutomationFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::ConformanceAutomation::ConformanceAutomationFeature*, "UnityEngine.XR.OpenXR.Features.ConformanceAutomation",
                       "ConformanceAutomationFeature");
