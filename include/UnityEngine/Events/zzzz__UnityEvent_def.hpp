#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityEvent)
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
class UnityAction;
}
// Forward declare root types
namespace UnityEngine::Events {
class UnityEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::UnityEvent);
// Type: UnityEngine.Events::UnityEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// Is value type: false
// CS Name: ::UnityEngine.Events::UnityEvent*
class CORDL_TYPE UnityEvent : public ::UnityEngine::Events::UnityEventBase {
public:
  // Declarations
  /// @brief Field m_InvokeArray, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InvokeArray, put = __cordl_internal_set_m_InvokeArray))::ArrayW<::System::Object*, ::Array<::System::Object*>*> m_InvokeArray;

  /// @brief Method AddListener, addr 0x2df074c, size 0x2c, virtual false, abstract: false, final false
  inline void AddListener(::UnityEngine::Events::UnityAction* call);

  /// @brief Method FindMethod_Impl, addr 0x2df0828, size 0x64, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW name, ::System::Type* targetObjType);

  /// @brief Method GetDelegate, addr 0x2df0778, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction* action);

  /// @brief Method GetDelegate, addr 0x2df088c, size 0x70, virtual true, abstract: false, final false
  inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  /// @brief Method Invoke, addr 0x2df08fc, size 0x180, virtual false, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::Events::UnityEvent* New_ctor();

  /// @brief Method RemoveListener, addr 0x2df07e4, size 0x44, virtual false, abstract: false, final false
  inline void RemoveListener(::UnityEngine::Events::UnityAction* call);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_m_InvokeArray() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_m_InvokeArray();

  constexpr void __cordl_internal_set_m_InvokeArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x2df0744, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityEvent(UnityEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityEvent(UnityEvent const&) = delete;

  /// @brief Field m_InvokeArray, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___m_InvokeArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::UnityEvent, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Events::UnityEvent, ___m_InvokeArray) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::UnityEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::UnityEvent*, "UnityEngine.Events", "UnityEvent");
