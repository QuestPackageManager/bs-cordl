#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/EventProvider.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSanitizer_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventProvider_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventConsumer_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventProvider_def.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProviderImpl_def.hpp"
// Ctor Parameters [CppParam { name: "handler", ty: "::UnityEngine::InputForUI::EventConsumer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "priority", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "playerId", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_types", ty:
// "::System::Collections::Generic::HashSet_1<::UnityEngine::InputForUI::Event_Type>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::EventProvider_Registration::EventProvider_Registration(::UnityEngine::InputForUI::EventConsumer* handler, int32_t priority, ::System::Nullable_1<int32_t> playerId,
                                                                                            ::System::Collections::Generic::HashSet_1<::UnityEngine::InputForUI::Event_Type>* _types) noexcept {
  this->handler = handler;
  this->priority = priority;
  this->playerId = playerId;
  this->_types = _types;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::EventProvider_Registration::EventProvider_Registration() {}
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::EventProvider___c::*)()>(&::UnityEngine::InputForUI::EventProvider___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b58da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider___c._Subscribe_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputForUI::EventProvider___c::*)(
    ::UnityEngine::InputForUI::EventProvider_Registration, ::UnityEngine::InputForUI::EventProvider_Registration)>(&::UnityEngine::InputForUI::EventProvider___c::_Subscribe_b__5_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b58dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputForUI::EventProvider___c*>(),
            { "<Subscribe>b__5_0", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventProvider_Registration>(), ::i2c::type_of<::UnityEngine::InputForUI::EventProvider_Registration>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputForUI::EventProvider___c::setStaticF___9(::UnityEngine::InputForUI::EventProvider___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputForUI::EventProvider___c*, "<>9", ::UnityEngine::InputForUI::EventProvider___c*>(
      std::forward<::UnityEngine::InputForUI::EventProvider___c*>(value));
}
inline ::UnityEngine::InputForUI::EventProvider___c* UnityEngine::InputForUI::EventProvider___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputForUI::EventProvider___c*, "<>9", ::UnityEngine::InputForUI::EventProvider___c*>();
}
inline void UnityEngine::InputForUI::EventProvider___c::setStaticF___9__5_0(::System::Comparison_1<::UnityEngine::InputForUI::EventProvider_Registration>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::InputForUI::EventProvider_Registration>*, "<>9__5_0", ::UnityEngine::InputForUI::EventProvider___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::InputForUI::EventProvider_Registration>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::InputForUI::EventProvider_Registration>* UnityEngine::InputForUI::EventProvider___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::InputForUI::EventProvider_Registration>*, "<>9__5_0", ::UnityEngine::InputForUI::EventProvider___c*>();
}
inline void UnityEngine::InputForUI::EventProvider___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::InputForUI::EventProvider___c::_Subscribe_b__5_0(::UnityEngine::InputForUI::EventProvider_Registration a, ::UnityEngine::InputForUI::EventProvider_Registration b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputForUI::EventProvider___c*>(),
          { "<Subscribe>b__5_0", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventProvider_Registration>(), ::i2c::type_of<::UnityEngine::InputForUI::EventProvider_Registration>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::UnityEngine::InputForUI::EventProvider___c* UnityEngine::InputForUI::EventProvider___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputForUI::EventProvider___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::EventProvider___c::EventProvider___c() {}
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::*)()>(
    &::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b57d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0._Unsubscribe_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::*)(::UnityEngine::InputForUI::EventProvider_Registration)>(
    &::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::_Unsubscribe_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6b58dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0*>(),
                                                                                           { "<Unsubscribe>b__0", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventProvider_Registration>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputForUI::EventConsumer*& UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::__cordl_internal_get_handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler;
}
constexpr ::UnityEngine::InputForUI::EventConsumer* const& UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::__cordl_internal_get_handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler;
}
constexpr void UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::__cordl_internal_set_handler(::UnityEngine::InputForUI::EventConsumer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handler = value;
}
inline void UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::_Unsubscribe_b__0(::UnityEngine::InputForUI::EventProvider_Registration x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0*>(),
                                                                                         { "<Unsubscribe>b__0", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventProvider_Registration>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0* UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::EventProvider___c__DisplayClass6_0() {}
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.Subscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputForUI::EventConsumer*, int32_t, ::System::Nullable_1<int32_t>, ::ArrayW<::UnityEngine::InputForUI::Event_Type>)>(
    &::UnityEngine::InputForUI::EventProvider::Subscribe)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6b57964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(),
                                                             { "Subscribe",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputForUI::EventConsumer*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputForUI::Event_Type>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.Unsubscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputForUI::EventConsumer*)>(&::UnityEngine::InputForUI::EventProvider::Unsubscribe)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6b57c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "Unsubscribe", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventConsumer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.SetEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::InputForUI::EventProvider::SetEnabled)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b57d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "SetEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.Dispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::InputForUI::Event>)>(&::UnityEngine::InputForUI::EventProvider::Dispatch)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6b581c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "Dispatch", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputForUI::Event>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.Bootstrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputForUI::EventProvider::Bootstrap)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b57bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "Bootstrap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputForUI::EventProvider::Initialize)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6b57e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.Shutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputForUI::EventProvider::Shutdown)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6b58010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "Shutdown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.OnFocusChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::InputForUI::EventProvider::OnFocusChanged)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6b5860c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "OnFocusChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.NotifyUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputForUI::EventProvider::NotifyUpdate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6b586f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "NotifyUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.SetInputSystemProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputForUI::IEventProviderImpl*)>(&::UnityEngine::InputForUI::EventProvider::SetInputSystemProvider)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b58a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(),
                                                                                           { "SetInputSystemProvider", {}, { ::i2c::type_of<::UnityEngine::InputForUI::IEventProviderImpl*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputForUI::EventProvider::setStaticF_s_impl(::UnityEngine::InputForUI::IEventProviderImpl* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputForUI::IEventProviderImpl*, "s_impl", ::UnityEngine::InputForUI::EventProvider*>(
      std::forward<::UnityEngine::InputForUI::IEventProviderImpl*>(value));
}
inline ::UnityEngine::InputForUI::IEventProviderImpl* UnityEngine::InputForUI::EventProvider::getStaticF_s_impl() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputForUI::IEventProviderImpl*, "s_impl", ::UnityEngine::InputForUI::EventProvider*>();
}
inline void UnityEngine::InputForUI::EventProvider::setStaticF_s_sanitizer(::UnityEngine::InputForUI::EventSanitizer value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputForUI::EventSanitizer, "s_sanitizer", ::UnityEngine::InputForUI::EventProvider*>(
      std::forward<::UnityEngine::InputForUI::EventSanitizer>(value));
}
inline ::UnityEngine::InputForUI::EventSanitizer UnityEngine::InputForUI::EventProvider::getStaticF_s_sanitizer() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputForUI::EventSanitizer, "s_sanitizer", ::UnityEngine::InputForUI::EventProvider*>();
}
inline void UnityEngine::InputForUI::EventProvider::setStaticF_s_implMockBackup(::UnityEngine::InputForUI::IEventProviderImpl* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputForUI::IEventProviderImpl*, "s_implMockBackup", ::UnityEngine::InputForUI::EventProvider*>(
      std::forward<::UnityEngine::InputForUI::IEventProviderImpl*>(value));
}
inline ::UnityEngine::InputForUI::IEventProviderImpl* UnityEngine::InputForUI::EventProvider::getStaticF_s_implMockBackup() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputForUI::IEventProviderImpl*, "s_implMockBackup", ::UnityEngine::InputForUI::EventProvider*>();
}
inline void UnityEngine::InputForUI::EventProvider::setStaticF_s_focusChangedRegistered(bool value) {
  ::cordl_internals::setStaticField<bool, "s_focusChangedRegistered", ::UnityEngine::InputForUI::EventProvider*>(std::forward<bool>(value));
}
inline bool UnityEngine::InputForUI::EventProvider::getStaticF_s_focusChangedRegistered() {
  return ::cordl_internals::getStaticField<bool, "s_focusChangedRegistered", ::UnityEngine::InputForUI::EventProvider*>();
}
inline void UnityEngine::InputForUI::EventProvider::setStaticF_m_IsEnabled(bool value) {
  ::cordl_internals::setStaticField<bool, "m_IsEnabled", ::UnityEngine::InputForUI::EventProvider*>(std::forward<bool>(value));
}
inline bool UnityEngine::InputForUI::EventProvider::getStaticF_m_IsEnabled() {
  return ::cordl_internals::getStaticField<bool, "m_IsEnabled", ::UnityEngine::InputForUI::EventProvider*>();
}
inline void UnityEngine::InputForUI::EventProvider::setStaticF_m_IsInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "m_IsInitialized", ::UnityEngine::InputForUI::EventProvider*>(std::forward<bool>(value));
}
inline bool UnityEngine::InputForUI::EventProvider::getStaticF_m_IsInitialized() {
  return ::cordl_internals::getStaticField<bool, "m_IsInitialized", ::UnityEngine::InputForUI::EventProvider*>();
}
inline void UnityEngine::InputForUI::EventProvider::setStaticF__registrations(::System::Collections::Generic::List_1<::UnityEngine::InputForUI::EventProvider_Registration>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::InputForUI::EventProvider_Registration>*, "_registrations", ::UnityEngine::InputForUI::EventProvider*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::InputForUI::EventProvider_Registration>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::InputForUI::EventProvider_Registration>* UnityEngine::InputForUI::EventProvider::getStaticF__registrations() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::InputForUI::EventProvider_Registration>*, "_registrations",
                                           ::UnityEngine::InputForUI::EventProvider*>();
}
inline void UnityEngine::InputForUI::EventProvider::Subscribe(::UnityEngine::InputForUI::EventConsumer* handler, int32_t priority, ::System::Nullable_1<int32_t> playerId,
                                                              ::ArrayW<::UnityEngine::InputForUI::Event_Type> type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(),
                                                           { "Subscribe",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputForUI::EventConsumer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(),
                                                               ::i2c::type_of<::ArrayW<::UnityEngine::InputForUI::Event_Type>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, priority, playerId, type);
}
inline void UnityEngine::InputForUI::EventProvider::Unsubscribe(::UnityEngine::InputForUI::EventConsumer* handler) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "Unsubscribe", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventConsumer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler);
}
inline void UnityEngine::InputForUI::EventProvider::SetEnabled(bool enable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "SetEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enable);
}
inline void UnityEngine::InputForUI::EventProvider::Dispatch(::by_ref<::UnityEngine::InputForUI::Event> ev) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "Dispatch", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputForUI::Event>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ev);
}
inline void UnityEngine::InputForUI::EventProvider::Bootstrap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "Bootstrap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputForUI::EventProvider::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputForUI::EventProvider::Shutdown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "Shutdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputForUI::EventProvider::OnFocusChanged(bool focus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "OnFocusChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, focus);
}
inline void UnityEngine::InputForUI::EventProvider::NotifyUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(), { "NotifyUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputForUI::EventProvider::SetInputSystemProvider(::UnityEngine::InputForUI::IEventProviderImpl* impl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventProvider*>(),
                                                                                         { "SetInputSystemProvider", {}, { ::i2c::type_of<::UnityEngine::InputForUI::IEventProviderImpl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, impl);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::EventProvider::EventProvider() {}
