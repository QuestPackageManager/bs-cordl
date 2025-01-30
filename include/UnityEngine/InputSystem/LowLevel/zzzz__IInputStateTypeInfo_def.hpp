#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IInputStateTypeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInputStateTypeInfo)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.IInputStateTypeInfo
class CORDL_TYPE IInputStateTypeInfo {
public:
  // Declarations
  __declspec(property(get = get_format)) ::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Method get_format, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  // Ctor Parameters [CppParam { name: "", ty: "IInputStateTypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputStateTypeInfo(IInputStateTypeInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6971 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*, "UnityEngine.InputSystem.LowLevel", "IInputStateTypeInfo");
