#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/KeyEx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
CORDL_MODULE_EXPORT(KeyEx)
// Forward declare root types
namespace UnityEngine::InputSystem {
class KeyEx;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::KeyEx*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::KeyEx*, "UnityEngine.InputSystem", "KeyEx");
// Dependencies System.Object, UnityEngine.InputSystem.Key
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.KeyEx
class CORDL_TYPE KeyEx : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyEx();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyEx", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyEx(KeyEx&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyEx", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyEx(KeyEx const&) = delete;

  /// @brief Field IMESelected value: I32(111)
  static ::UnityEngine::InputSystem::Key const IMESelected;

  /// @brief Field RemappedIMESelected value: I32(127)
  static ::UnityEngine::InputSystem::Key const RemappedIMESelected;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10689 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::KeyEx) == 0x10, "Size mismatch!");

} // namespace UnityEngine::InputSystem
