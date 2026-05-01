#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackFunctor_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventCallbackFunctor_1)
namespace System {
class Delegate;
}
namespace UnityEngine::UIElements {
class CallbackEventHandler;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
struct InvokePolicy;
}
namespace UnityEngine::UIElements {
struct TrickleDown;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallbackFunctor_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::EventCallbackFunctor_1);
// Dependencies UnityEngine.UIElements.EventCallbackFunctorBase
namespace UnityEngine::UIElements {
// cpp template
template <typename TEventType>
// Is value type: false
// CS Name: UnityEngine.UIElements.EventCallbackFunctor`1<TEventType>
class CORDL_TYPE EventCallbackFunctor_1 : public ::UnityEngine::UIElements::EventCallbackFunctorBase {
public:
  // Declarations
  /// @brief Field m_Callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Callback, put = __cordl_internal_set_m_Callback)) ::UnityEngine::UIElements::EventCallback_1<TEventType>* m_Callback;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>* GetPooled(int64_t eventTypeId, ::UnityEngine::UIElements::EventCallback_1<TEventType>* callback,
                                                                                         ::UnityEngine::UIElements::InvokePolicy invokePolicy);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method IsEquivalentTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsEquivalentTo(int64_t eventTypeId, ::System::Delegate* callback);

  static inline ::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>* New_ctor();

  /// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnregisterCallback(::UnityEngine::UIElements::CallbackEventHandler* target, ::UnityEngine::UIElements::TrickleDown useTrickleDown);

  constexpr ::UnityEngine::UIElements::EventCallback_1<TEventType>* const& __cordl_internal_get_m_Callback() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<TEventType>*& __cordl_internal_get_m_Callback();

  constexpr void __cordl_internal_set_m_Callback(::UnityEngine::UIElements::EventCallback_1<TEventType>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCallbackFunctor_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctor_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventCallbackFunctor_1(EventCallbackFunctor_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventCallbackFunctor_1(EventCallbackFunctor_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4454 };

  /// @brief Field m_Callback, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<TEventType>* ___m_Callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::EventCallbackFunctor_1, "UnityEngine.UIElements", "EventCallbackFunctor`1");
