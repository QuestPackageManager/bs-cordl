#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackFunctorBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__CallbackOptions_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventCallbackFunctorBase)
namespace System {
class Delegate;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class CallbackEventHandler;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct TrickleDown;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventCallbackFunctorBase;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::EventCallbackFunctorBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::EventCallbackFunctorBase*, "UnityEngine.UIElements", "EventCallbackFunctorBase");
// Dependencies System.Object, UnityEngine.UIElements.CallbackOptions
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventCallbackFunctorBase
class CORDL_TYPE EventCallbackFunctorBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field callbackOptions, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_callbackOptions, put = __cordl_internal_set_callbackOptions)) ::UnityEngine::UIElements::CallbackOptions callbackOptions;

  /// @brief Field eventTypeId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_eventTypeId, put = __cordl_internal_set_eventTypeId)) int64_t eventTypeId;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Dispose();

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Invoke(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method IsEquivalentTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsEquivalentTo(int64_t eventTypeId, ::System::Delegate* callback);

  static inline ::UnityEngine::UIElements::EventCallbackFunctorBase* New_ctor();

  /// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UnregisterCallback(::UnityEngine::UIElements::CallbackEventHandler* target, ::UnityEngine::UIElements::TrickleDown useTrickleDown);

  constexpr ::UnityEngine::UIElements::CallbackOptions const& __cordl_internal_get_callbackOptions() const;

  constexpr ::UnityEngine::UIElements::CallbackOptions& __cordl_internal_get_callbackOptions();

  constexpr int64_t const& __cordl_internal_get_eventTypeId() const;

  constexpr int64_t& __cordl_internal_get_eventTypeId();

  constexpr void __cordl_internal_set_callbackOptions(::UnityEngine::UIElements::CallbackOptions value);

  constexpr void __cordl_internal_set_eventTypeId(int64_t value);

  /// @brief Method .ctor, addr 0x72261d0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCallbackFunctorBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctorBase", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventCallbackFunctorBase(EventCallbackFunctorBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctorBase", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventCallbackFunctorBase(EventCallbackFunctorBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4448 };

  /// @brief Field eventTypeId, offset: 0x10, size: 0x8, def value: None
  int64_t ___eventTypeId;

  /// @brief Field callbackOptions, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::CallbackOptions ___callbackOptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventCallbackFunctorBase, ___eventTypeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventCallbackFunctorBase, ___callbackOptions) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::EventCallbackFunctorBase) == 0x20, "Size mismatch!");

} // namespace UnityEngine::UIElements
