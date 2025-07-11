#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventCallbackRegistry)
namespace System {
class Delegate;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class EventCallbackListPool;
}
namespace UnityEngine::UIElements {
class EventCallbackList;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
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
namespace UnityEngine::UIElements {
struct TrickleDown;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventCallbackRegistry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventCallbackRegistry);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventCallbackRegistry
class CORDL_TYPE EventCallbackRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Callbacks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Callbacks, put = __cordl_internal_set_m_Callbacks)) ::UnityEngine::UIElements::EventCallbackList* m_Callbacks;

  /// @brief Field m_IsInvoking, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IsInvoking, put = __cordl_internal_set_m_IsInvoking)) int32_t m_IsInvoking;

  /// @brief Field m_TemporaryCallbacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TemporaryCallbacks, put = __cordl_internal_set_m_TemporaryCallbacks)) ::UnityEngine::UIElements::EventCallbackList* m_TemporaryCallbacks;

  /// @brief Field s_ListPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ListPool, put = setStaticF_s_ListPool)) ::UnityEngine::UIElements::EventCallbackListPool* s_ListPool;

  /// @brief Method GetCallbackList, addr 0x4a28274, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventCallbackList* GetCallbackList(::UnityEngine::UIElements::EventCallbackList* initializer);

  /// @brief Method GetCallbackListForReading, addr 0x4a28418, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventCallbackList* GetCallbackListForReading();

  /// @brief Method GetCallbackListForWriting, addr 0x4a28360, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventCallbackList* GetCallbackListForWriting();

  /// @brief Method HasBubbleHandlers, addr 0x4a2864c, size 0x20, virtual false, abstract: false, final false
  inline bool HasBubbleHandlers();

  /// @brief Method HasTrickleDownHandlers, addr 0x4a2862c, size 0x20, virtual false, abstract: false, final false
  inline bool HasTrickleDownHandlers();

  /// @brief Method InvokeCallbacks, addr 0x4a28488, size 0x1a4, virtual false, abstract: false, final false
  inline void InvokeCallbacks(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::PropagationPhase propagationPhase);

  static inline ::UnityEngine::UIElements::EventCallbackRegistry* New_ctor();

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEventType>
  inline void RegisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown,
                               ::UnityEngine::UIElements::InvokePolicy invokePolicy);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEventType, typename TCallbackArgs>
  inline void RegisterCallback(::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* callback, TCallbackArgs userArgs, ::UnityEngine::UIElements::TrickleDown useTrickleDown,
                               ::UnityEngine::UIElements::InvokePolicy invokePolicy);

  /// @brief Method ReleaseCallbackList, addr 0x4a282dc, size 0x68, virtual false, abstract: false, final false
  static inline void ReleaseCallbackList(::UnityEngine::UIElements::EventCallbackList* toRelease);

  /// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEventType> inline bool UnregisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown);

  /// @brief Method UnregisterCallback, addr 0x4a28434, size 0x54, virtual false, abstract: false, final false
  inline bool UnregisterCallback(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown);

  constexpr ::UnityEngine::UIElements::EventCallbackList* const& __cordl_internal_get_m_Callbacks() const;

  constexpr ::UnityEngine::UIElements::EventCallbackList*& __cordl_internal_get_m_Callbacks();

  constexpr int32_t const& __cordl_internal_get_m_IsInvoking() const;

  constexpr int32_t& __cordl_internal_get_m_IsInvoking();

  constexpr ::UnityEngine::UIElements::EventCallbackList* const& __cordl_internal_get_m_TemporaryCallbacks() const;

  constexpr ::UnityEngine::UIElements::EventCallbackList*& __cordl_internal_get_m_TemporaryCallbacks();

  constexpr void __cordl_internal_set_m_Callbacks(::UnityEngine::UIElements::EventCallbackList* value);

  constexpr void __cordl_internal_set_m_IsInvoking(int32_t value);

  constexpr void __cordl_internal_set_m_TemporaryCallbacks(::UnityEngine::UIElements::EventCallbackList* value);

  /// @brief Method .ctor, addr 0x4a28344, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::EventCallbackListPool* getStaticF_s_ListPool();

  static inline void setStaticF_s_ListPool(::UnityEngine::UIElements::EventCallbackListPool* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCallbackRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventCallbackRegistry(EventCallbackRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventCallbackRegistry(EventCallbackRegistry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5820 };

  /// @brief Field m_Callbacks, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallbackList* ___m_Callbacks;

  /// @brief Field m_TemporaryCallbacks, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallbackList* ___m_TemporaryCallbacks;

  /// @brief Field m_IsInvoking, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_IsInvoking;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventCallbackRegistry, ___m_Callbacks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventCallbackRegistry, ___m_TemporaryCallbacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventCallbackRegistry, ___m_IsInvoking) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventCallbackRegistry, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventCallbackRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCallbackRegistry*, "UnityEngine.UIElements", "EventCallbackRegistry");
