#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRUtilities)
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::XRUtilities);
// Type: UnityEngine.InputSystem.XR::XRUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.XR::XRUtilities*
class CORDL_TYPE XRUtilities : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRUtilities(XRUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRUtilities(XRUtilities const&) = delete;

  /// @brief Field InterfaceCurrent offset 0xffffffff size 0x8
  static constexpr ::ConstString InterfaceCurrent{ u"XRInputV1" };

  /// @brief Field InterfaceMatchAnyVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString InterfaceMatchAnyVersion{ u"^(XRInput)" };

  /// @brief Field InterfaceV1 offset 0xffffffff size 0x8
  static constexpr ::ConstString InterfaceV1{ u"XRInput" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::XRUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRUtilities*, "UnityEngine.InputSystem.XR", "XRUtilities");
