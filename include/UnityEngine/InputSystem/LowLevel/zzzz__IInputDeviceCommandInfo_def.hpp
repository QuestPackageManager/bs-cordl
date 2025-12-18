#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IInputDeviceCommandInfo.hpp"
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
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.IInputDeviceCommandInfo
class CORDL_TYPE IInputDeviceCommandInfo {
public:
  // Declarations
  __declspec(property(get = get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Method get_typeStatic, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  // Ctor Parameters [CppParam { name: "", ty: "IInputDeviceCommandInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputDeviceCommandInfo(IInputDeviceCommandInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8939 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*, "UnityEngine.InputSystem.LowLevel", "IInputDeviceCommandInfo");
