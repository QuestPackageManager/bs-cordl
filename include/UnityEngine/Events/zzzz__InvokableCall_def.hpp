#pragma once
// IWYU pragma private; include "UnityEngine/Events/InvokableCall.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
CORDL_MODULE_EXPORT(InvokableCall)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityAction;
}
// Forward declare root types
namespace UnityEngine::Events {
class InvokableCall;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::InvokableCall);
// Dependencies UnityEngine.Events.BaseInvokableCall
namespace UnityEngine::Events {
// Is value type: false
// CS Name: UnityEngine.Events.InvokableCall
class CORDL_TYPE InvokableCall : public ::UnityEngine::Events::BaseInvokableCall {
public:
  // Declarations
  /// @brief Field Delegate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Delegate, put = __cordl_internal_set_Delegate)) ::UnityEngine::Events::UnityAction* Delegate;

  /// @brief Method Find, addr 0x48be1e4, size 0x4c, virtual true, abstract: false, final false
  inline bool Find(::System::Object* targetObj, ::System::Reflection::MethodInfo* method);

  /// @brief Method Invoke, addr 0x48be1a8, size 0x3c, virtual false, abstract: false, final false
  inline void Invoke();

  /// @brief Method Invoke, addr 0x48be16c, size 0x3c, virtual true, abstract: false, final false
  inline void Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::UnityEngine::Events::InvokableCall* New_ctor(::UnityEngine::Events::UnityAction* action);

  static inline ::UnityEngine::Events::InvokableCall* New_ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  constexpr ::UnityEngine::Events::UnityAction* const& __cordl_internal_get_Delegate() const;

  constexpr ::UnityEngine::Events::UnityAction*& __cordl_internal_get_Delegate();

  constexpr void __cordl_internal_set_Delegate(::UnityEngine::Events::UnityAction* value);

  /// @brief Method .ctor, addr 0x48be140, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Events::UnityAction* action);

  /// @brief Method .ctor, addr 0x48be058, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  /// @brief Method add_Delegate, addr 0x48bdf20, size 0x9c, virtual false, abstract: false, final false
  inline void add_Delegate(::UnityEngine::Events::UnityAction* value);

  /// @brief Method remove_Delegate, addr 0x48bdfbc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_Delegate(::UnityEngine::Events::UnityAction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokableCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokableCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokableCall(InvokableCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokableCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokableCall(InvokableCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10979 };

  /// @brief Field Delegate, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction* ___Delegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Events::InvokableCall, ___Delegate) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::InvokableCall, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::InvokableCall);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::InvokableCall*, "UnityEngine.Events", "InvokableCall");
