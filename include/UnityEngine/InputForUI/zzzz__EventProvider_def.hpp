#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/EventProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSanitizer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventProvider)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::InputForUI {
class EventConsumer;
}
namespace UnityEngine::InputForUI {
struct EventProvider_Registration;
}
namespace UnityEngine::InputForUI {
class EventProvider___c;
}
namespace UnityEngine::InputForUI {
class EventProvider___c__DisplayClass6_0;
}
namespace UnityEngine::InputForUI {
struct Event_Type;
}
namespace UnityEngine::InputForUI {
struct Event;
}
namespace UnityEngine::InputForUI {
class IEventProviderImpl;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
class EventProvider;
}
namespace UnityEngine::InputForUI {
class EventProvider___c;
}
namespace UnityEngine::InputForUI {
class EventProvider___c__DisplayClass6_0;
}
namespace UnityEngine::InputForUI {
struct EventProvider_Registration;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputForUI::EventProvider);
MARK_REF_PTR_T(::UnityEngine::InputForUI::EventProvider___c);
MARK_REF_PTR_T(::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0);
MARK_VAL_T(::UnityEngine::InputForUI::EventProvider_Registration);
// Dependencies System.Nullable`1<T>
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.EventProvider/Registration
struct CORDL_TYPE EventProvider_Registration {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventProvider_Registration();

  // Ctor Parameters [CppParam { name: "handler", ty: "::UnityEngine::InputForUI::EventConsumer*", modifiers: "", def_value: None }, CppParam { name: "priority", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "playerId", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_types", ty:
  // "::System::Collections::Generic::HashSet_1<::UnityEngine::InputForUI::Event_Type>*", modifiers: "", def_value: None }]
  constexpr EventProvider_Registration(::UnityEngine::InputForUI::EventConsumer* handler, int32_t priority, ::System::Nullable_1<int32_t> playerId,
                                       ::System::Collections::Generic::HashSet_1<::UnityEngine::InputForUI::Event_Type>* _types) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21603 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field handler, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputForUI::EventConsumer* handler;

  /// @brief Field priority, offset: 0x8, size: 0x4, def value: None
  int32_t priority;

  /// @brief Field playerId, offset: 0xc, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> playerId;

  /// @brief Field _types, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::InputForUI::Event_Type>* _types;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::EventProvider_Registration, handler) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::EventProvider_Registration, priority) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::EventProvider_Registration, playerId) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::EventProvider_Registration, _types) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::EventProvider_Registration, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies System.Object
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.EventProvider/<>c
class CORDL_TYPE EventProvider___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputForUI::EventProvider___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Comparison_1<::UnityEngine::InputForUI::EventProvider_Registration>* __9__5_0;

  static inline ::UnityEngine::InputForUI::EventProvider___c* New_ctor();

  /// @brief Method <Subscribe>b__5_0, addr 0x6927fcc, size 0x18, virtual false, abstract: false, final false
  inline int32_t _Subscribe_b__5_0(::UnityEngine::InputForUI::EventProvider_Registration a, ::UnityEngine::InputForUI::EventProvider_Registration b);

  /// @brief Method .ctor, addr 0x6927fc8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputForUI::EventProvider___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::InputForUI::EventProvider_Registration>* getStaticF___9__5_0();

  static inline void setStaticF___9(::UnityEngine::InputForUI::EventProvider___c* value);

  static inline void setStaticF___9__5_0(::System::Comparison_1<::UnityEngine::InputForUI::EventProvider_Registration>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventProvider___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventProvider___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventProvider___c(EventProvider___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventProvider___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventProvider___c(EventProvider___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21604 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::EventProvider___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies System.Object
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.EventProvider/<>c__DisplayClass6_0
class CORDL_TYPE EventProvider___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field handler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_handler, put = __cordl_internal_set_handler)) ::UnityEngine::InputForUI::EventConsumer* handler;

  static inline ::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0* New_ctor();

  /// @brief Method <Unsubscribe>b__0, addr 0x6927fe4, size 0x34, virtual false, abstract: false, final false
  inline bool _Unsubscribe_b__0(::UnityEngine::InputForUI::EventProvider_Registration x);

  constexpr ::UnityEngine::InputForUI::EventConsumer* const& __cordl_internal_get_handler() const;

  constexpr ::UnityEngine::InputForUI::EventConsumer*& __cordl_internal_get_handler();

  constexpr void __cordl_internal_set_handler(::UnityEngine::InputForUI::EventConsumer* value);

  /// @brief Method .ctor, addr 0x6926fb0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventProvider___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventProvider___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventProvider___c__DisplayClass6_0(EventProvider___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventProvider___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventProvider___c__DisplayClass6_0(EventProvider___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21605 };

  /// @brief Field handler, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputForUI::EventConsumer* ___handler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0, ___handler) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies System.Object, UnityEngine.InputForUI.EventSanitizer
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.EventProvider
class CORDL_TYPE EventProvider : public ::System::Object {
public:
  // Declarations
  using Registration = ::UnityEngine::InputForUI::EventProvider_Registration;

  using __c = ::UnityEngine::InputForUI::EventProvider___c;

  using __c__DisplayClass6_0 = ::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0;

  /// @brief Field _registrations, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__registrations, put = setStaticF__registrations)) ::System::Collections::Generic::List_1<::UnityEngine::InputForUI::EventProvider_Registration>* _registrations;

  /// @brief Field m_IsEnabled, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_m_IsEnabled, put = setStaticF_m_IsEnabled)) bool m_IsEnabled;

  /// @brief Field m_IsInitialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_m_IsInitialized, put = setStaticF_m_IsInitialized)) bool m_IsInitialized;

  /// @brief Field s_focusChangedRegistered, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_focusChangedRegistered, put = setStaticF_s_focusChangedRegistered)) bool s_focusChangedRegistered;

  /// @brief Field s_impl, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_impl, put = setStaticF_s_impl)) ::UnityEngine::InputForUI::IEventProviderImpl* s_impl;

  /// @brief Field s_implMockBackup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_implMockBackup, put = setStaticF_s_implMockBackup)) ::UnityEngine::InputForUI::IEventProviderImpl* s_implMockBackup;

  /// @brief Field s_sanitizer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_sanitizer, put = setStaticF_s_sanitizer)) ::UnityEngine::InputForUI::EventSanitizer s_sanitizer;

  /// @brief Method Bootstrap, addr 0x6926dfc, size 0x78, virtual false, abstract: false, final false
  static inline void Bootstrap();

  /// @brief Method Dispatch, addr 0x69273e4, size 0x234, virtual false, abstract: false, final false
  static inline void Dispatch(::ByRef<::UnityEngine::InputForUI::Event> ev);

  /// @brief Method Initialize, addr 0x6927058, size 0x1d8, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method NotifyUpdate, addr 0x6927910, size 0x1b0, virtual false, abstract: false, final false
  static inline void NotifyUpdate();

  /// @brief Method OnFocusChanged, addr 0x692782c, size 0xe4, virtual false, abstract: false, final false
  static inline void OnFocusChanged(bool focus);

  /// @brief Method SetEnabled, addr 0x6926fb4, size 0xa4, virtual false, abstract: false, final false
  static inline void SetEnabled(bool enable);

  /// @brief Method SetInputSystemProvider, addr 0x6927cb8, size 0x90, virtual false, abstract: false, final false
  static inline void SetInputSystemProvider(::UnityEngine::InputForUI::IEventProviderImpl* impl);

  /// @brief Method Shutdown, addr 0x6927230, size 0x1b4, virtual false, abstract: false, final false
  static inline void Shutdown();

  /// @brief Method Subscribe, addr 0x6926b84, size 0x278, virtual false, abstract: false, final false
  static inline void Subscribe(::UnityEngine::InputForUI::EventConsumer* handler, int32_t priority, ::System::Nullable_1<int32_t> playerId,
                               ::ArrayW<::UnityEngine::InputForUI::Event_Type, ::Array<::UnityEngine::InputForUI::Event_Type>*> type);

  /// @brief Method Unsubscribe, addr 0x6926e74, size 0x13c, virtual false, abstract: false, final false
  static inline void Unsubscribe(::UnityEngine::InputForUI::EventConsumer* handler);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::InputForUI::EventProvider_Registration>* getStaticF__registrations();

  static inline bool getStaticF_m_IsEnabled();

  static inline bool getStaticF_m_IsInitialized();

  static inline bool getStaticF_s_focusChangedRegistered();

  static inline ::UnityEngine::InputForUI::IEventProviderImpl* getStaticF_s_impl();

  static inline ::UnityEngine::InputForUI::IEventProviderImpl* getStaticF_s_implMockBackup();

  static inline ::UnityEngine::InputForUI::EventSanitizer getStaticF_s_sanitizer();

  static inline void setStaticF__registrations(::System::Collections::Generic::List_1<::UnityEngine::InputForUI::EventProvider_Registration>* value);

  static inline void setStaticF_m_IsEnabled(bool value);

  static inline void setStaticF_m_IsInitialized(bool value);

  static inline void setStaticF_s_focusChangedRegistered(bool value);

  static inline void setStaticF_s_impl(::UnityEngine::InputForUI::IEventProviderImpl* value);

  static inline void setStaticF_s_implMockBackup(::UnityEngine::InputForUI::IEventProviderImpl* value);

  static inline void setStaticF_s_sanitizer(::UnityEngine::InputForUI::EventSanitizer value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventProvider(EventProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventProvider(EventProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21606 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::EventProvider, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
NEED_NO_BOX(::UnityEngine::InputForUI::EventProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::EventProvider*, "UnityEngine.InputForUI", "EventProvider");
NEED_NO_BOX(::UnityEngine::InputForUI::EventProvider___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::EventProvider___c*, "UnityEngine.InputForUI", "EventProvider/<>c");
NEED_NO_BOX(::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0*, "UnityEngine.InputForUI", "EventProvider/<>c__DisplayClass6_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::EventProvider_Registration, "UnityEngine.InputForUI", "EventProvider/Registration");
