#pragma once
// IWYU pragma private; include "GlobalNamespace/VRPlatformUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VRPlatformUtils)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class VRPlatformUtils;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRPlatformUtils);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRPlatformUtils
class CORDL_TYPE VRPlatformUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetAnyJoystickMaxAxisDefaultImplementation, addr 0x39c6924, size 0x138, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxisDefaultImplementation(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

  /// @brief Method GetMenuButtonDefaultImplementation, addr 0x39c61a8, size 0x78, virtual false, abstract: false, final false
  static inline bool GetMenuButtonDefaultImplementation();

  /// @brief Method GetMenuButtonDownDefaultImplementation, addr 0x39c6224, size 0x78, virtual false, abstract: false, final false
  static inline bool GetMenuButtonDownDefaultImplementation();

  /// @brief Method StopXR, addr 0x39c6a5c, size 0x100, virtual false, abstract: false, final false
  static inline void StopXR(::GlobalNamespace::IVerboseLogger* logger);

  /// @brief Method TriggerValueDefaultImplementation, addr 0x39c68a4, size 0x80, virtual false, abstract: false, final false
  static inline float_t TriggerValueDefaultImplementation(::UnityEngine::XR::XRNode node);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRPlatformUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRPlatformUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRPlatformUtils(VRPlatformUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRPlatformUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRPlatformUtils(VRPlatformUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16473 };

  /// @brief Field kMenuButtonLeftHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kMenuButtonLeftHand{ u"OpenXRPrimaryButtonLeftHand" };

  /// @brief Field kMenuButtonOculusTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString kMenuButtonOculusTouch{ u"MenuButtonOculusTouch" };

  /// @brief Field kMenuButtonRightHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kMenuButtonRightHand{ u"OpenXRPrimaryButtonRightHand" };

  /// @brief Field kTriggerLeftHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kTriggerLeftHand{ u"TriggerLeftHand" };

  /// @brief Field kTriggerRightHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kTriggerRightHand{ u"TriggerRightHand" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRPlatformUtils, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRPlatformUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRPlatformUtils*, "", "VRPlatformUtils");
