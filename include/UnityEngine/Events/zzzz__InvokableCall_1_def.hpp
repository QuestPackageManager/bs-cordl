#pragma once
// IWYU pragma private; include "UnityEngine/Events/InvokableCall_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(InvokableCall_1)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
// Forward declare root types
namespace UnityEngine::Events {
template <typename T1> class InvokableCall_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::InvokableCall_1);
// Type: UnityEngine.Events::InvokableCall`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// cpp template
template <typename T1>
// Is value type: false
// CS Name: ::UnityEngine.Events::InvokableCall`1<T1>*
class CORDL_TYPE InvokableCall_1 : public ::UnityEngine::Events::BaseInvokableCall {
public:
  // Declarations
  /// @brief Field Delegate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Delegate, put = __cordl_internal_set_Delegate))::UnityEngine::Events::UnityAction_1<T1>* Delegate;

  /// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Find(::System::Object* targetObj, ::System::Reflection::MethodInfo* method);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(T1 args0);

  static inline ::UnityEngine::Events::InvokableCall_1<T1>* New_ctor(::UnityEngine::Events::UnityAction_1<T1>* action);

  static inline ::UnityEngine::Events::InvokableCall_1<T1>* New_ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  constexpr ::UnityEngine::Events::UnityAction_1<T1>*& __cordl_internal_get_Delegate();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<T1>*> const& __cordl_internal_get_Delegate() const;

  constexpr void __cordl_internal_set_Delegate(::UnityEngine::Events::UnityAction_1<T1>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Events::UnityAction_1<T1>* action);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  /// @brief Method add_Delegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_Delegate(::UnityEngine::Events::UnityAction_1<T1>* value);

  /// @brief Method remove_Delegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_Delegate(::UnityEngine::Events::UnityAction_1<T1>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokableCall_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokableCall_1(InvokableCall_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokableCall_1(InvokableCall_1 const&) = delete;

  /// @brief Field Delegate, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction_1<T1>* ___Delegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::InvokableCall_1, "UnityEngine.Events", "InvokableCall`1");
