#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(InvokableCall)
namespace UnityEngine::Events {
class UnityAction;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
class InvokableCall;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::InvokableCall);
// Type: UnityEngine.Events::InvokableCall
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10372))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10373))
// CS Name: ::UnityEngine.Events::InvokableCall*
class CORDL_TYPE InvokableCall : public ::UnityEngine::Events::BaseInvokableCall {
public:
  // Declarations
  /// @brief Field Delegate, offset 0x10, size 0x8
  __declspec(property(get = __get_Delegate, put = __set_Delegate))::UnityEngine::Events::UnityAction* Delegate;

  constexpr ::UnityEngine::Events::UnityAction*& __get_Delegate();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction*> const& __get_Delegate() const;

  constexpr void __set_Delegate(::UnityEngine::Events::UnityAction* value);

  /// @brief Method add_Delegate addr 0x2b90278 size 0x9c virtual false final false
  inline void add_Delegate(::UnityEngine::Events::UnityAction* value);

  /// @brief Method remove_Delegate addr 0x2b90314 size 0x9c virtual false final false
  inline void remove_Delegate(::UnityEngine::Events::UnityAction* value);

  static inline ::UnityEngine::Events::InvokableCall* New_ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  /// @brief Method .ctor addr 0x2b903b0 size 0xe8 virtual false final false
  inline void _ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  static inline ::UnityEngine::Events::InvokableCall* New_ctor(::UnityEngine::Events::UnityAction* action);

  /// @brief Method .ctor addr 0x2b90498 size 0x2c virtual false final false
  inline void _ctor(::UnityEngine::Events::UnityAction* action);

  /// @brief Method Invoke addr 0x2b904c4 size 0x3c virtual true final false
  inline void Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Invoke addr 0x2b90500 size 0x3c virtual false final false
  inline void Invoke();

  /// @brief Method Find addr 0x2b9053c size 0x4c virtual true final false
  inline bool Find(::System::Object* targetObj, ::System::Reflection::MethodInfo* method);

  // Ctor Parameters [CppParam { name: "", ty: "InvokableCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokableCall(InvokableCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokableCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokableCall(InvokableCall const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokableCall();

public:
  /// @brief Field Delegate, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction* ___Delegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::InvokableCall, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Events::InvokableCall, ___Delegate) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::InvokableCall);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::InvokableCall*, "UnityEngine.Events", "InvokableCall");
