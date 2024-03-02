#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityEvent_1)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
// Forward declare root types
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::UnityEvent_1);
// Type: UnityEngine.Events::UnityEvent`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// cpp template
template <typename T0>
// Is value type: false
// CS Name: ::UnityEngine.Events::UnityEvent`1<T0>*
class CORDL_TYPE UnityEvent_1 : public ::UnityEngine::Events::UnityEventBase {
public:
  // Declarations
  /// @brief Field m_InvokeArray, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InvokeArray, put = __cordl_internal_set_m_InvokeArray))::ArrayW<::System::Object*, ::Array<::System::Object*>*> m_InvokeArray;

  /// @brief Method AddListener, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddListener(::UnityEngine::Events::UnityAction_1<T0>* call);

  /// @brief Method FindMethod_Impl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW name, ::System::Type* targetObjType);

  /// @brief Method GetDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction_1<T0>* action);

  /// @brief Method GetDelegate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Invoke(T0 arg0);

  static inline ::UnityEngine::Events::UnityEvent_1<T0>* New_ctor();

  /// @brief Method RemoveListener, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveListener(::UnityEngine::Events::UnityAction_1<T0>* call);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_m_InvokeArray() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_m_InvokeArray();

  constexpr void __cordl_internal_set_m_InvokeArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityEvent_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityEvent_1(UnityEvent_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityEvent_1(UnityEvent_1 const&) = delete;

  /// @brief Field m_InvokeArray, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___m_InvokeArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::UnityEvent_1, "UnityEngine.Events", "UnityEvent`1");
