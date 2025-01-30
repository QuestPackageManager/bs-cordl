#pragma once
// IWYU pragma private; include "UnityEngine/Events/UnityEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
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
// Dependencies UnityEngine.Events.UnityEventBase
namespace UnityEngine::Events {
// Is value type: false
// CS Name: UnityEngine.Events.UnityEvent
class CORDL_TYPE UnityEvent : public ::UnityEngine::Events::UnityEventBase {
public:
  // Declarations
  /// @brief Field m_InvokeArray, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InvokeArray, put = __cordl_internal_set_m_InvokeArray)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> m_InvokeArray;

  /// @brief Method AddListener, addr 0x48c0820, size 0x2c, virtual false, abstract: false, final false
  inline void AddListener(::UnityEngine::Events::UnityAction* call);

  /// @brief Method FindMethod_Impl, addr 0x48c08f4, size 0x64, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW name, ::System::Type* targetObjType);

  /// @brief Method GetDelegate, addr 0x48c084c, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction* action);

  /// @brief Method GetDelegate, addr 0x48c0958, size 0x68, virtual true, abstract: false, final false
  inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction);

  /// @brief Method Invoke, addr 0x48c09c0, size 0x180, virtual false, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::Events::UnityEvent* New_ctor();

  /// @brief Method RemoveListener, addr 0x48c08b0, size 0x44, virtual false, abstract: false, final false
  inline void RemoveListener(::UnityEngine::Events::UnityAction* call);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_m_InvokeArray() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_m_InvokeArray();

  constexpr void __cordl_internal_set_m_InvokeArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x48c0818, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10989 };

  /// @brief Field m_InvokeArray, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___m_InvokeArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Events::UnityEvent, ___m_InvokeArray) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::UnityEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::UnityEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::UnityEvent*, "UnityEngine.Events", "UnityEvent");
