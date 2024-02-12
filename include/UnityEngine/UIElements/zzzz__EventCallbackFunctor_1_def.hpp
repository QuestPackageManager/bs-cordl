#pragma once
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
struct CallbackPhase;
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
struct PropagationPhase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallbackFunctor_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::EventCallbackFunctor_1);
// Type: UnityEngine.UIElements::EventCallbackFunctor`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TEventType>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6442))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6443))
// CS Name: ::UnityEngine.UIElements::EventCallbackFunctor`1<TEventType>*
class CORDL_TYPE EventCallbackFunctor_1 : public ::UnityEngine::UIElements::EventCallbackFunctorBase {
public:
  // Declarations
  /// @brief Field m_Callback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Callback, put = __cordl_internal_set_m_Callback))::UnityEngine::UIElements::EventCallback_1<TEventType>* m_Callback;

  /// @brief Field m_EventTypeId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventTypeId, put = __cordl_internal_set_m_EventTypeId)) int64_t m_EventTypeId;

  constexpr ::UnityEngine::UIElements::EventCallback_1<TEventType>*& __cordl_internal_get_m_Callback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventCallback_1<TEventType>*> const& __cordl_internal_get_m_Callback() const;

  constexpr void __cordl_internal_set_m_Callback(::UnityEngine::UIElements::EventCallback_1<TEventType>* value);

  constexpr int64_t& __cordl_internal_get_m_EventTypeId();

  constexpr int64_t const& __cordl_internal_get_m_EventTypeId() const;

  constexpr void __cordl_internal_set_m_EventTypeId(int64_t value);

  static inline ::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>* New_ctor(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback,
                                                                                        ::UnityEngine::UIElements::CallbackPhase phase, ::UnityEngine::UIElements::InvokePolicy invokePolicy);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::CallbackPhase phase, ::UnityEngine::UIElements::InvokePolicy invokePolicy);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::PropagationPhase propagationPhase);

  /// @brief Method IsEquivalentTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsEquivalentTo(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::CallbackPhase phase);

  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctor_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventCallbackFunctor_1(EventCallbackFunctor_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventCallbackFunctor_1(EventCallbackFunctor_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCallbackFunctor_1();

public:
  /// @brief Field m_Callback, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<TEventType>* ___m_Callback;

  /// @brief Field m_EventTypeId, offset: 0x20, size: 0x8, def value: None
  int64_t ___m_EventTypeId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::EventCallbackFunctor_1, "UnityEngine.UIElements", "EventCallbackFunctor`1");
