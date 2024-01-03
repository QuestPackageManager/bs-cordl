#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(InvokableCall_4)
namespace UnityEngine::Events {
template <typename T0, typename T1, typename T2, typename T3> class UnityAction_4;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
template <typename T1, typename T2, typename T3, typename T4> class InvokableCall_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::InvokableCall_4);
// Type: UnityEngine.Events::InvokableCall`4
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// cpp template
template <typename T1, typename T2, typename T3, typename T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10450))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10455))
// CS Name: ::UnityEngine.Events::InvokableCall`4<T1,T2,T3,T4>*
class CORDL_TYPE InvokableCall_4 : public ::UnityEngine::Events::BaseInvokableCall {
public:
  // Declarations
  /// @brief Field Delegate, offset 0x10, size 0x8
  __declspec(property(get = __get_Delegate, put = __set_Delegate))::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>* Delegate;

  constexpr ::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>*& __get_Delegate();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>*> const& __get_Delegate() const;

  constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>* value);

  static inline ::UnityEngine::Events::InvokableCall_4<T1, T2, T3, T4>* New_ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Find(::System::Object* targetObj, ::System::Reflection::MethodInfo* method);

  // Ctor Parameters [CppParam { name: "", ty: "InvokableCall_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokableCall_4(InvokableCall_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokableCall_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokableCall_4(InvokableCall_4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokableCall_4();

public:
  /// @brief Field Delegate, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>* ___Delegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::InvokableCall_4, "UnityEngine.Events", "InvokableCall`4");
