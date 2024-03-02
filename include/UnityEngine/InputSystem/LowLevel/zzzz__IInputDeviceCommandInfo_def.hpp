#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInputDeviceCommandInfo)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo);
// Type: UnityEngine.InputSystem.LowLevel::IInputDeviceCommandInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.LowLevel::IInputDeviceCommandInfo*
class CORDL_TYPE IInputDeviceCommandInfo {
public:
  // Declarations
  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Method get_typeStatic, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  // Ctor Parameters [CppParam { name: "", ty: "IInputDeviceCommandInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInputDeviceCommandInfo(IInputDeviceCommandInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInputDeviceCommandInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputDeviceCommandInfo(IInputDeviceCommandInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*, "UnityEngine.InputSystem.LowLevel", "IInputDeviceCommandInfo");
