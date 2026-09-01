#pragma once
// IWYU pragma private; include "UnityEngine\Events\UnityEvent_4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnityEvent_4)
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
// Forward declare root types
namespace UnityEngine::Events {
template <typename T0, typename T1, typename T2, typename T3> class UnityEvent_4;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Events::UnityEvent_4);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Events::UnityEvent_4, "UnityEngine.Events", "UnityEvent`4");
// Dependencies System.Object, UnityEngine.Events.UnityEventBase
namespace UnityEngine::Events {
// cpp template
template <typename T0, typename T1, typename T2, typename T3>
// Is value type: false
// CS Name: UnityEngine.Events.UnityEvent`4<T0,T1,T2,T3>
class CORDL_TYPE UnityEvent_4 : public ::UnityEngine::Events::UnityEventBase {
public:
  // Declarations
  /// @brief Field m_InvokeArray, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InvokeArray, put = __cordl_internal_set_m_InvokeArray)) ::ArrayW<::System::Object*> m_InvokeArray;

  /// @brief Method FindMethod_Impl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW name, ::System::Type* targetObjType);

  /// @brief Method GetDelegate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  static inline ::UnityEngine::Events::UnityEvent_4<T0, T1, T2, T3>* New_ctor();

  constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get_m_InvokeArray() const;

  constexpr ::ArrayW<::System::Object*>& __cordl_internal_get_m_InvokeArray();

  constexpr void __cordl_internal_set_m_InvokeArray(::ArrayW<::System::Object*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityEvent_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityEvent_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityEvent_4(UnityEvent_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityEvent_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityEvent_4(UnityEvent_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10463 };

  /// @brief Field m_InvokeArray, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Object*> ___m_InvokeArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Events
