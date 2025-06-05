#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
CORDL_MODULE_EXPORT(InputValue)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputValue;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputValue);
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.InputSystem.InputAction::CallbackContext
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputValue
class CORDL_TYPE InputValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_isPressed)) bool isPressed;

  /// @brief Field m_Context, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_m_Context, put = __cordl_internal_set_m_Context)) ::System::Nullable_1<::UnityEngine::InputSystem::InputAction_CallbackContext> m_Context;

  /// @brief Method Get, addr 0x45dad7c, size 0x64, virtual false, abstract: false, final false
  inline ::System::Object* Get();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline TValue Get();

  static inline ::UnityEngine::InputSystem::InputValue* New_ctor();

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputAction_CallbackContext> const& __cordl_internal_get_m_Context() const;

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputAction_CallbackContext>& __cordl_internal_get_m_Context();

  constexpr void __cordl_internal_set_m_Context(::System::Nullable_1<::UnityEngine::InputSystem::InputAction_CallbackContext> value);

  /// @brief Method .ctor, addr 0x45dae5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isPressed, addr 0x45dade0, size 0x7c, virtual false, abstract: false, final false
  inline bool get_isPressed();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputValue(InputValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputValue(InputValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6718 };

  /// @brief Field m_Context, offset: 0x10, size: 0x18, def value: None
  ::System::Nullable_1<::UnityEngine::InputSystem::InputAction_CallbackContext> ___m_Context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputValue, ___m_Context) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputValue, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputValue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputValue*, "UnityEngine.InputSystem", "InputValue");
