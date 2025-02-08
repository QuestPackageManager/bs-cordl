#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackFunctor_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventCallbackFunctor_2)
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
template <typename TEventType, typename TCallbackArgs> class EventCallback_2;
}
namespace UnityEngine::UIElements {
struct InvokePolicy;
}
namespace UnityEngine::UIElements {
struct PropagationPhase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TEventType, typename TCallbackArgs> class EventCallbackFunctor_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::EventCallbackFunctor_2);
// Dependencies UnityEngine.UIElements.EventCallbackFunctorBase
namespace UnityEngine::UIElements {
// cpp template
template <typename TEventType, typename TCallbackArgs>
// Is value type: false
// CS Name: UnityEngine.UIElements.EventCallbackFunctor`2<TEventType,TCallbackArgs>
class CORDL_TYPE EventCallbackFunctor_2 : public ::UnityEngine::UIElements::EventCallbackFunctorBase {
public:
  // Declarations
  /// @brief Field <userArgs>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__userArgs_k__BackingField, put = __cordl_internal_set__userArgs_k__BackingField)) TCallbackArgs _userArgs_k__BackingField;

  /// @brief Field m_Callback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Callback, put = __cordl_internal_set_m_Callback)) ::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* m_Callback;

  /// @brief Field m_EventTypeId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventTypeId, put = __cordl_internal_set_m_EventTypeId)) int64_t m_EventTypeId;

  __declspec(property(get = get_userArgs, put = set_userArgs)) TCallbackArgs userArgs;

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::PropagationPhase propagationPhase);

  /// @brief Method IsEquivalentTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsEquivalentTo(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::CallbackPhase phase);

  static inline ::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>* New_ctor(::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* callback,
                                                                                                       TCallbackArgs userArgs, ::UnityEngine::UIElements::CallbackPhase phase,
                                                                                                       ::UnityEngine::UIElements::InvokePolicy invokePolicy);

  constexpr TCallbackArgs const& __cordl_internal_get__userArgs_k__BackingField() const;

  constexpr TCallbackArgs& __cordl_internal_get__userArgs_k__BackingField();

  constexpr ::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* const& __cordl_internal_get_m_Callback() const;

  constexpr ::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>*& __cordl_internal_get_m_Callback();

  constexpr int64_t const& __cordl_internal_get_m_EventTypeId() const;

  constexpr int64_t& __cordl_internal_get_m_EventTypeId();

  constexpr void __cordl_internal_set__userArgs_k__BackingField(TCallbackArgs value);

  constexpr void __cordl_internal_set_m_Callback(::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* value);

  constexpr void __cordl_internal_set_m_EventTypeId(int64_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* callback, TCallbackArgs userArgs, ::UnityEngine::UIElements::CallbackPhase phase,
                    ::UnityEngine::UIElements::InvokePolicy invokePolicy);

  /// @brief Method get_userArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TCallbackArgs get_userArgs();

  /// @brief Method set_userArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_userArgs(TCallbackArgs value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCallbackFunctor_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctor_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventCallbackFunctor_2(EventCallbackFunctor_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctor_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventCallbackFunctor_2(EventCallbackFunctor_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5813 };

  /// @brief Field m_Callback, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* ___m_Callback;

  /// @brief Field m_EventTypeId, offset: 0x20, size: 0x8, def value: None
  int64_t ___m_EventTypeId;

  /// @brief Field <userArgs>k__BackingField, offset: 0x28, size: 0x8, def value: None
  TCallbackArgs ____userArgs_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::EventCallbackFunctor_2, "UnityEngine.UIElements", "EventCallbackFunctor`2");
