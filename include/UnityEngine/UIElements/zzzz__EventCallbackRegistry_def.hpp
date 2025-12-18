#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TrickleDown_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventCallbackRegistry)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Delegate;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class EventCallbackFunctorBase;
}
namespace UnityEngine::UIElements {
class EventCallbackListPool;
}
namespace UnityEngine::UIElements {
class EventCallbackList;
}
namespace UnityEngine::UIElements {
struct EventCallbackRegistry_DynamicCallbackList;
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
struct TrickleDown;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventCallbackRegistry;
}
namespace UnityEngine::UIElements {
struct EventCallbackRegistry_DynamicCallbackList;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventCallbackRegistry);
MARK_VAL_T(::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList);
// Dependencies UnityEngine.UIElements.TrickleDown
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventCallbackRegistry/DynamicCallbackList
struct CORDL_TYPE EventCallbackRegistry_DynamicCallbackList {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6bcdfac, size 0x10, virtual false, abstract: false, final false
  inline void BeginInvoke();

  /// @brief Method Create, addr 0x6bcda68, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList Create(::UnityEngine::UIElements::TrickleDown useTrickleDown);

  /// @brief Method EndInvoke, addr 0x6bcdfbc, size 0x21c, virtual false, abstract: false, final false
  inline void EndInvoke();

  /// @brief Method GetCallbackListForReading, addr 0x6bcdc34, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventCallbackList* GetCallbackListForReading();

  /// @brief Method GetCallbackListForWriting, addr 0x6bcdb54, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventCallbackList* GetCallbackListForWriting();

  /// @brief Method Invoke, addr 0x6bcdda4, size 0x208, virtual false, abstract: false, final false
  inline void Invoke(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel, ::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method UnregisterCallback, addr 0x6bcdc4c, size 0x158, virtual false, abstract: false, final false
  inline bool UnregisterCallback(int64_t eventTypeId, ::System::Delegate* callback);

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCallbackRegistry_DynamicCallbackList();

  // Ctor Parameters [CppParam { name: "m_UseTrickleDown", ty: "::UnityEngine::UIElements::TrickleDown", modifiers: "", def_value: None }, CppParam { name: "m_Callbacks", ty:
  // "::UnityEngine::UIElements::EventCallbackList*", modifiers: "", def_value: None }, CppParam { name: "m_TemporaryCallbacks", ty: "::UnityEngine::UIElements::EventCallbackList*", modifiers: "",
  // def_value: None }, CppParam { name: "m_UnregisteredCallbacksDuringInvoke", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>*", modifiers: "",
  // def_value: None }, CppParam { name: "m_IsInvoking", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventCallbackRegistry_DynamicCallbackList(::UnityEngine::UIElements::TrickleDown m_UseTrickleDown, ::UnityEngine::UIElements::EventCallbackList* m_Callbacks,
                                                      ::UnityEngine::UIElements::EventCallbackList* m_TemporaryCallbacks,
                                                      ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>* m_UnregisteredCallbacksDuringInvoke,
                                                      int32_t m_IsInvoking) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4460 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field m_UseTrickleDown, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::TrickleDown m_UseTrickleDown;

  /// @brief Field m_Callbacks, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallbackList* m_Callbacks;

  /// @brief Field m_TemporaryCallbacks, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallbackList* m_TemporaryCallbacks;

  /// @brief Field m_UnregisteredCallbacksDuringInvoke, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>* m_UnregisteredCallbacksDuringInvoke;

  /// @brief Field m_IsInvoking, offset: 0x20, size: 0x4, def value: None
  int32_t m_IsInvoking;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList, m_UseTrickleDown) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList, m_Callbacks) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList, m_TemporaryCallbacks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList, m_UnregisteredCallbacksDuringInvoke) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList, m_IsInvoking) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.EventCallbackRegistry::DynamicCallbackList
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventCallbackRegistry
class CORDL_TYPE EventCallbackRegistry : public ::System::Object {
public:
  // Declarations
  using DynamicCallbackList = ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList;

  /// @brief Field m_BubbleUpCallbacks, offset 0x38, size 0x28
  __declspec(property(get = __cordl_internal_get_m_BubbleUpCallbacks,
                      put = __cordl_internal_set_m_BubbleUpCallbacks)) ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList m_BubbleUpCallbacks;

  /// @brief Field m_TrickleDownCallbacks, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get_m_TrickleDownCallbacks,
                      put = __cordl_internal_set_m_TrickleDownCallbacks)) ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList m_TrickleDownCallbacks;

  /// @brief Field s_ListPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ListPool, put = setStaticF_s_ListPool)) ::UnityEngine::UIElements::EventCallbackListPool* s_ListPool;

  /// @brief Method GetCallbackList, addr 0x6bcd924, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EventCallbackList* GetCallbackList(::UnityEngine::UIElements::EventCallbackList* initializer);

  /// @brief Method GetDynamicCallbackList, addr 0x6bcd9fc, size 0x14, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList> GetDynamicCallbackList(::UnityEngine::UIElements::TrickleDown useTrickleDown);

  static inline ::UnityEngine::UIElements::EventCallbackRegistry* New_ctor();

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEventType>
  inline void RegisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown,
                               ::UnityEngine::UIElements::InvokePolicy invokePolicy);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEventType, typename TCallbackArgs>
  inline void RegisterCallback(::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* callback, TCallbackArgs userArgs, ::UnityEngine::UIElements::TrickleDown useTrickleDown,
                               ::UnityEngine::UIElements::InvokePolicy invokePolicy);

  /// @brief Method ReleaseCallbackList, addr 0x6bcd990, size 0x6c, virtual false, abstract: false, final false
  static inline void ReleaseCallbackList(::UnityEngine::UIElements::EventCallbackList* toRelease);

  /// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEventType> inline bool UnregisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown);

  /// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEventType, typename TCallbackArgs>
  inline bool UnregisterCallback(::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown);

  constexpr ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList const& __cordl_internal_get_m_BubbleUpCallbacks() const;

  constexpr ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList& __cordl_internal_get_m_BubbleUpCallbacks();

  constexpr ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList const& __cordl_internal_get_m_TrickleDownCallbacks() const;

  constexpr ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList& __cordl_internal_get_m_TrickleDownCallbacks();

  constexpr void __cordl_internal_set_m_BubbleUpCallbacks(::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList value);

  constexpr void __cordl_internal_set_m_TrickleDownCallbacks(::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList value);

  /// @brief Method .ctor, addr 0x6bcda10, size 0x58, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4461 };

  /// @brief Field m_TrickleDownCallbacks, offset: 0x10, size: 0x28, def value: None
  ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList ___m_TrickleDownCallbacks;

  /// @brief Field m_BubbleUpCallbacks, offset: 0x38, size: 0x28, def value: None
  ::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList ___m_BubbleUpCallbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventCallbackRegistry, ___m_TrickleDownCallbacks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventCallbackRegistry, ___m_BubbleUpCallbacks) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventCallbackRegistry, 0x60>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventCallbackRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCallbackRegistry*, "UnityEngine.UIElements", "EventCallbackRegistry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCallbackRegistry_DynamicCallbackList, "UnityEngine.UIElements", "EventCallbackRegistry/DynamicCallbackList");
