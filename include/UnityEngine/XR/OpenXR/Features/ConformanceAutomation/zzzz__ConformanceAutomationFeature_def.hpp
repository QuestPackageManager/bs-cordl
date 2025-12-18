#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/ConformanceAutomation/ConformanceAutomationFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConformanceAutomationFeature)
namespace System {
struct IntPtr;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrPosef;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrVector2f;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrVector3f;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::ConformanceAutomation {
class ConformanceAutomationFeature;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::ConformanceAutomation::ConformanceAutomationFeature);
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features::ConformanceAutomation {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.ConformanceAutomation.ConformanceAutomationFeature
class CORDL_TYPE ConformanceAutomationFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Field xrInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_xrInstance, put = setStaticF_xrInstance)) uint64_t xrInstance;

  /// @brief Field xrSession, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_xrSession, put = setStaticF_xrSession)) uint64_t xrSession;

  /// @brief Method ConformanceAutomationSetActive, addr 0x683b8f4, size 0xac, virtual false, abstract: false, final false
  static inline bool ConformanceAutomationSetActive(::StringW interactionProfile, ::StringW topLevelPath, bool isActive);

  /// @brief Method ConformanceAutomationSetBool, addr 0x683ba44, size 0xac, virtual false, abstract: false, final false
  static inline bool ConformanceAutomationSetBool(::StringW topLevelPath, ::StringW inputSourcePath, bool state);

  /// @brief Method ConformanceAutomationSetFloat, addr 0x683bb94, size 0xb4, virtual false, abstract: false, final false
  static inline bool ConformanceAutomationSetFloat(::StringW topLevelPath, ::StringW inputSourcePath, float_t state);

  /// @brief Method ConformanceAutomationSetPose, addr 0x683be64, size 0x124, virtual false, abstract: false, final false
  static inline bool ConformanceAutomationSetPose(::StringW topLevelPath, ::StringW inputSourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation);

  /// @brief Method ConformanceAutomationSetVec2, addr 0x683bcf4, size 0xbc, virtual false, abstract: false, final false
  static inline bool ConformanceAutomationSetVec2(::StringW topLevelPath, ::StringW inputSourcePath, ::UnityEngine::Vector2 state);

  /// @brief Method ConformanceAutomationSetVelocity, addr 0x683c04c, size 0x104, virtual false, abstract: false, final false
  static inline bool ConformanceAutomationSetVelocity(::StringW topLevelPath, ::StringW inputSourcePath, bool linearValid, ::UnityEngine::Vector3 linear, bool angularValid,
                                                      ::UnityEngine::Vector3 angular);

  static inline ::UnityEngine::XR::OpenXR::Features::ConformanceAutomation::ConformanceAutomationFeature* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x683b6a4, size 0xe4, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t instance);

  /// @brief Method OnInstanceDestroy, addr 0x683b80c, size 0x4c, virtual true, abstract: false, final false
  inline void OnInstanceDestroy(uint64_t xrInstance);

  /// @brief Method OnSessionCreate, addr 0x683b858, size 0x50, virtual true, abstract: false, final false
  inline void OnSessionCreate(uint64_t xrSessionId);

  /// @brief Method OnSessionDestroy, addr 0x683b8a8, size 0x4c, virtual true, abstract: false, final false
  inline void OnSessionDestroy(uint64_t xrSessionId);

  /// @brief Method .ctor, addr 0x683c24c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline uint64_t getStaticF_xrInstance();

  static inline uint64_t getStaticF_xrSession();

  /// @brief Method initialize, addr 0x683b788, size 0x84, virtual false, abstract: false, final false
  static inline void initialize(::System::IntPtr xrGetInstanceProcAddr, uint64_t xrInstance);

  static inline void setStaticF_xrInstance(uint64_t value);

  static inline void setStaticF_xrSession(uint64_t value);

  /// @brief Method xrSetInputDeviceActiveEXT, addr 0x683b9a0, size 0xa4, virtual false, abstract: false, final false
  static inline bool xrSetInputDeviceActiveEXT(uint64_t xrSession, uint64_t interactionProfile, uint64_t topLevelPath, bool isActive);

  /// @brief Method xrSetInputDeviceLocationEXT, addr 0x683bf88, size 0xc4, virtual false, abstract: false, final false
  static inline bool xrSetInputDeviceLocationEXT(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, uint64_t space, ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef pose);

  /// @brief Method xrSetInputDeviceStateBoolEXT, addr 0x683baf0, size 0xa4, virtual false, abstract: false, final false
  static inline bool xrSetInputDeviceStateBoolEXT(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, bool state);

  /// @brief Method xrSetInputDeviceStateFloatEXT, addr 0x683bc48, size 0xac, virtual false, abstract: false, final false
  static inline bool xrSetInputDeviceStateFloatEXT(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, float_t state);

  /// @brief Method xrSetInputDeviceStateVector2fEXT, addr 0x683bdb0, size 0xb4, virtual false, abstract: false, final false
  static inline bool xrSetInputDeviceStateVector2fEXT(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, ::UnityEngine::XR::OpenXR::NativeTypes::XrVector2f state);

  /// @brief Method xrSetInputDeviceVelocityUNITY, addr 0x683c150, size 0xfc, virtual false, abstract: false, final false
  static inline bool xrSetInputDeviceVelocityUNITY(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, bool linearValid, ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f linear,
                                                   bool angularValid, ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f angular);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConformanceAutomationFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConformanceAutomationFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConformanceAutomationFeature(ConformanceAutomationFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConformanceAutomationFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConformanceAutomationFeature(ConformanceAutomationFeature const&) = delete;

  /// @brief Field ExtLib offset 0xffffffff size 0x8
  static constexpr ::ConstString ExtLib{ u"ConformanceAutomationExt" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23247 };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.conformance" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::ConformanceAutomation::ConformanceAutomationFeature, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::ConformanceAutomation
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::ConformanceAutomation::ConformanceAutomationFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::ConformanceAutomation::ConformanceAutomationFeature*, "UnityEngine.XR.OpenXR.Features.ConformanceAutomation",
                       "ConformanceAutomationFeature");
