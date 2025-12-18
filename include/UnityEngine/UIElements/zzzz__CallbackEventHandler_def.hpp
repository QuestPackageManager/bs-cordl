#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CallbackEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CallbackEventHandler)
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class EventCallbackRegistry;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
template <typename TEventType, typename TCallbackArgs> class EventCallback_2;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
struct InvokePolicy;
}
namespace UnityEngine::UIElements {
struct TrickleDown;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CallbackEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::CallbackEventHandler);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.CallbackEventHandler
class CORDL_TYPE CallbackEventHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field isIMGUIContainer, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isIMGUIContainer, put = __cordl_internal_set_isIMGUIContainer)) bool isIMGUIContainer;

  /// @brief Field m_CallbackRegistry, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CallbackRegistry, put = __cordl_internal_set_m_CallbackRegistry)) ::UnityEngine::UIElements::EventCallbackRegistry* m_CallbackRegistry;

  /// @brief Convert operator to "::UnityEngine::UIElements::IEventHandler"
  constexpr operator ::UnityEngine::UIElements::IEventHandler*() noexcept;

  /// @brief Method AddEventCategories, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEventType> inline void AddEventCategories(::UnityEngine::UIElements::TrickleDown useTrickleDown);

  /// @brief Method ExecuteDefaultAction, addr 0x6bd0e04, size 0x4, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultActionAtTarget, addr 0x6bd0dd8, size 0x4, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultActionAtTargetInternal, addr 0x6bd0e2c, size 0xc, virtual false, abstract: false, final false
  inline void ExecuteDefaultActionAtTargetInternal(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultActionDisabled, addr 0x6bd0e0c, size 0x4, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionDisabled(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultActionDisabledAtTarget, addr 0x6bd0e08, size 0x4, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionDisabledAtTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultActionDisabledAtTargetInternal, addr 0x6bd0e38, size 0x10, virtual false, abstract: false, final false
  inline void ExecuteDefaultActionDisabledAtTargetInternal(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultActionDisabledInternal, addr 0x6bd0e1c, size 0x10, virtual false, abstract: false, final false
  inline void ExecuteDefaultActionDisabledInternal(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultActionInternal, addr 0x6bd0e10, size 0xc, virtual false, abstract: false, final false
  inline void ExecuteDefaultActionInternal(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method HandleEventBubbleUp, addr 0x6bd0ddc, size 0x4, virtual true, abstract: false, final false
  inline void HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method HandleEventBubbleUpDisabled, addr 0x6bd0de0, size 0x4, virtual true, abstract: false, final false
  inline void HandleEventBubbleUpDisabled(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method HandleEventBubbleUpInternal, addr 0x6bd0de4, size 0xc, virtual false, abstract: false, final false
  inline void HandleEventBubbleUpInternal(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method HandleEventTrickleDown, addr 0x6bd0df0, size 0x4, virtual true, abstract: false, final false
  inline void HandleEventTrickleDown(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method HandleEventTrickleDownDisabled, addr 0x6bd0df4, size 0x4, virtual true, abstract: false, final false
  inline void HandleEventTrickleDownDisabled(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method HandleEventTrickleDownInternal, addr 0x6bd0df8, size 0xc, virtual false, abstract: false, final false
  inline void HandleEventTrickleDownInternal(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::CallbackEventHandler* New_ctor();

  /// @brief Method NotifyPropertyChanged, addr 0x6bd0e48, size 0x1c4, virtual false, abstract: false, final false
  inline void NotifyPropertyChanged(::ByRef<::UnityEngine::UIElements::BindingId> property);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEventType>
  inline void RegisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::InvokePolicy invokePolicy,
                               ::UnityEngine::UIElements::TrickleDown useTrickleDown);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEventType> inline void RegisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEventType, typename TUserArgsType>
  inline void RegisterCallback(::UnityEngine::UIElements::EventCallback_2<TEventType, TUserArgsType>* callback, TUserArgsType userArgs, ::UnityEngine::UIElements::TrickleDown useTrickleDown);

  /// @brief Method SendEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e);

  /// @brief Method SendEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEventType> inline void UnregisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown);

  /// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEventType, typename TUserArgsType>
  inline void UnregisterCallback(::UnityEngine::UIElements::EventCallback_2<TEventType, TUserArgsType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown);

  constexpr bool const& __cordl_internal_get_isIMGUIContainer() const;

  constexpr bool& __cordl_internal_get_isIMGUIContainer();

  constexpr ::UnityEngine::UIElements::EventCallbackRegistry* const& __cordl_internal_get_m_CallbackRegistry() const;

  constexpr ::UnityEngine::UIElements::EventCallbackRegistry*& __cordl_internal_get_m_CallbackRegistry();

  constexpr void __cordl_internal_set_isIMGUIContainer(bool value);

  constexpr void __cordl_internal_set_m_CallbackRegistry(::UnityEngine::UIElements::EventCallbackRegistry* value);

  /// @brief Method .ctor, addr 0x6bd100c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::UIElements::IEventHandler"
  constexpr ::UnityEngine::UIElements::IEventHandler* i___UnityEngine__UIElements__IEventHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallbackEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallbackEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallbackEventHandler(CallbackEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallbackEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallbackEventHandler(CallbackEventHandler const&) = delete;

  /// @brief Field ExecuteDefaultActionAtTargetName offset 0xffffffff size 0x8
  static constexpr ::ConstString ExecuteDefaultActionAtTargetName{ u"ExecuteDefaultActionAtTarget" };

  /// @brief Field ExecuteDefaultActionName offset 0xffffffff size 0x8
  static constexpr ::ConstString ExecuteDefaultActionName{ u"ExecuteDefaultAction" };

  /// @brief Field HandleEventBubbleUpName offset 0xffffffff size 0x8
  static constexpr ::ConstString HandleEventBubbleUpName{ u"HandleEventBubbleUp" };

  /// @brief Field HandleEventTrickleDownName offset 0xffffffff size 0x8
  static constexpr ::ConstString HandleEventTrickleDownName{ u"HandleEventTrickleDown" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4465 };

  /// @brief Field isIMGUIContainer, offset: 0x10, size: 0x1, def value: None
  bool ___isIMGUIContainer;

  /// @brief Field m_CallbackRegistry, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallbackRegistry* ___m_CallbackRegistry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::CallbackEventHandler, ___isIMGUIContainer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CallbackEventHandler, ___m_CallbackRegistry) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CallbackEventHandler, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::CallbackEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CallbackEventHandler*, "UnityEngine.UIElements", "CallbackEventHandler");
