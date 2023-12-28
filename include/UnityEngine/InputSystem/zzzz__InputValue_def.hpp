#pragma once
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
// Type: UnityEngine.InputSystem::InputValue
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6133)), TypeDefinitionIndex(TypeDefinitionIndex(2448)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 424 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6310)) CS Name: ::UnityEngine.InputSystem::InputValue*
class CORDL_TYPE InputValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Context, offset 0x10, size 0x18
  __declspec(property(get = __get_m_Context, put = __set_m_Context))::System::Nullable_1<::UnityEngine::InputSystem::__InputAction__CallbackContext> m_Context;

  __declspec(property(get = get_isPressed)) bool isPressed;

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>& __get_m_Context();

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::__InputAction__CallbackContext> const& __get_m_Context() const;

  constexpr void __set_m_Context(::System::Nullable_1<::UnityEngine::InputSystem::__InputAction__CallbackContext> value);

  /// @brief Method Get addr 0x2abc030 size 0x64 virtual false final false
  inline ::System::Object* Get();

  /// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TValue> inline TValue Get();

  /// @brief Method get_isPressed addr 0x2abc094 size 0x7c virtual false final false
  inline bool get_isPressed();

  static inline ::UnityEngine::InputSystem::InputValue* New_ctor();

  /// @brief Method .ctor addr 0x2abc110 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InputValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputValue(InputValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputValue(InputValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputValue();

public:
  /// @brief Field m_Context, offset: 0x10, size: 0x18, def value: None
  ::System::Nullable_1<::UnityEngine::InputSystem::__InputAction__CallbackContext> ___m_Context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputValue, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputValue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputValue*, "UnityEngine.InputSystem", "InputValue");
