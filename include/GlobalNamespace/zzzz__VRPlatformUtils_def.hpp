#pragma once
// IWYU pragma private; include "GlobalNamespace/VRPlatformUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VRPlatformUtils)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class VRPlatformUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VRPlatformUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRPlatformUtils*, "", "VRPlatformUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRPlatformUtils
class CORDL_TYPE VRPlatformUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetAnyJoystickMaxAxisDefaultImplementation, addr 0x585fb2c, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxisDefaultImplementation(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

  /// @brief Method GetMenuButtonDefaultImplementation, addr 0x585d408, size 0x78, virtual false, abstract: false, final false
  static inline bool GetMenuButtonDefaultImplementation();

  /// @brief Method GetMenuButtonDownDefaultImplementation, addr 0x585d484, size 0x78, virtual false, abstract: false, final false
  static inline bool GetMenuButtonDownDefaultImplementation();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21407 };

  /// @brief Field kMenuButtonLeftHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kMenuButtonLeftHand{ u"OpenXRPrimaryButtonLeftHand" };

  /// @brief Field kMenuButtonOculusTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString kMenuButtonOculusTouch{ u"MenuButtonOculusTouch" };

  /// @brief Field kMenuButtonRightHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kMenuButtonRightHand{ u"OpenXRPrimaryButtonRightHand" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::VRPlatformUtils) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
