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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::EventProvider___c::*)()>(&::UnityEngine::InputForUI::EventProvider___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6927fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider___c._Subscribe_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputForUI::EventProvider___c::*)(
    ::UnityEngine::InputForUI::EventProvider_Registration, ::UnityEngine::InputForUI::EventProvider_Registration)>(&::UnityEngine::InputForUI::EventProvider___c::_Subscribe_b__5_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6927fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider___c*>::get(), "<Subscribe>b__5_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventProvider_Registration>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventProvider_Registration>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputForUI::EventProvider___c::setStaticF___9(::UnityEngine::InputForUI::EventProvider___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputForUI::EventProvider___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider___c*>::get>(
      std::forward<::UnityEngine::InputForUI::EventProvider___c*>(value));
}
inline ::UnityEngine::InputForUI::EventProvider___c* UnityEngine::InputForUI::EventProvider___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputForUI::EventProvider___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider___c*>::get>();
}
inline void UnityEngine::InputForUI::EventProvider___c::setStaticF___9__5_0(::System::Comparison_1<::UnityEngine::InputForUI::EventProvider_Registration>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::InputForUI::EventProvider_Registration>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider___c*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::InputForUI::EventProvider_Registration>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::InputForUI::EventProvider_Registration>* UnityEngine::InputForUI::EventProvider___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::InputForUI::EventProvider_Registration>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider___c*>::get>();
}
inline void UnityEngine::InputForUI::EventProvider___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputForUI::EventProvider___c::_Subscribe_b__5_0(::UnityEngine::InputForUI::EventProvider_Registration a, ::UnityEngine::InputForUI::EventProvider_Registration b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider___c*>::get(), "<Subscribe>b__5_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventProvider_Registration>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventProvider_Registration>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline ::UnityEngine::InputForUI::EventProvider___c* UnityEngine::InputForUI::EventProvider___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputForUI::EventProvider___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::EventProvider___c::EventProvider___c() {}
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::*)()>(
    &::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6926fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0._Unsubscribe_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::*)(
    ::UnityEngine::InputForUI::EventProvider_Registration)>(&::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::_Unsubscribe_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6927fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0*>::get(), "<Unsubscribe>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventProvider_Registration>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::_Unsubscribe_b__0(::UnityEngine::InputForUI::EventProvider_Registration x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0*>::get(), "<Unsubscribe>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventProvider_Registration>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0* UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::EventProvider___c__DisplayClass6_0::EventProvider___c__DisplayClass6_0() {}
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.Subscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputForUI::EventConsumer*, int32_t, ::System::Nullable_1<int32_t>,
                                                                                           ::ArrayW<::UnityEngine::InputForUI::Event_Type, ::Array<::UnityEngine::InputForUI::Event_Type>*>)>(
    &::UnityEngine::InputForUI::EventProvider::Subscribe)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6926b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventConsumer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputForUI::Event_Type, ::Array<::UnityEngine::InputForUI::Event_Type>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.Unsubscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputForUI::EventConsumer*)>(&::UnityEngine::InputForUI::EventProvider::Unsubscribe)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6926e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "Unsubscribe", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventConsumer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.SetEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::InputForUI::EventProvider::SetEnabled)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6926fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "SetEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.Dispatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::InputForUI::Event>)>(&::UnityEngine::InputForUI::EventProvider::Dispatch)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x69273e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "Dispatch", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputForUI::Event>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.Bootstrap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputForUI::EventProvider::Bootstrap)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6926dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "Bootstrap",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputForUI::EventProvider::Initialize)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6927058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.Shutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputForUI::EventProvider::Shutdown)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6927230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "Shutdown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.OnFocusChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::InputForUI::EventProvider::OnFocusChanged)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x692782c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "OnFocusChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.NotifyUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputForUI::EventProvider::NotifyUpdate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6927910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "NotifyUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventProvider.SetInputSystemProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputForUI::IEventProviderImpl*)>(
    &::UnityEngine::InputForUI::EventProvider::SetInputSystemProvider)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6927cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "SetInputSystemProvider", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::IEventProviderImpl*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputForUI::EventProvider::setStaticF_s_impl(::UnityEngine::InputForUI::IEventProviderImpl* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputForUI::IEventProviderImpl*, "s_impl", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get>(
      std::forward<::UnityEngine::InputForUI::IEventProviderImpl*>(value));
}
inline ::UnityEngine::InputForUI::IEventProviderImpl* UnityEngine::InputForUI::EventProvider::getStaticF_s_impl() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputForUI::IEventProviderImpl*, "s_impl",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get>();
}
inline void UnityEngine::InputForUI::EventProvider::setStaticF_s_sanitizer(::UnityEngine::InputForUI::EventSanitizer value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputForUI::EventSanitizer, "s_sanitizer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get>(
      std::forward<::UnityEngine::InputForUI::EventSanitizer>(value));
}
inline ::UnityEngine::InputForUI::EventSanitizer UnityEngine::InputForUI::EventProvider::getStaticF_s_sanitizer() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputForUI::EventSanitizer, "s_sanitizer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get>();
}
inline void UnityEngine::InputForUI::EventProvider::setStaticF_s_implMockBackup(::UnityEngine::InputForUI::IEventProviderImpl* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputForUI::IEventProviderImpl*, "s_implMockBackup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get>(
      std::forward<::UnityEngine::InputForUI::IEventProviderImpl*>(value));
}
inline ::UnityEngine::InputForUI::IEventProviderImpl* UnityEngine::InputForUI::EventProvider::getStaticF_s_implMockBackup() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputForUI::IEventProviderImpl*, "s_implMockBackup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get>();
}
inline void UnityEngine::InputForUI::EventProvider::setStaticF_s_focusChangedRegistered(bool value) {
  ::cordl_internals::setStaticField<bool, "s_focusChangedRegistered", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::InputForUI::EventProvider::getStaticF_s_focusChangedRegistered() {
  return ::cordl_internals::getStaticField<bool, "s_focusChangedRegistered", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get>();
}
inline void UnityEngine::InputForUI::EventProvider::setStaticF_m_IsEnabled(bool value) {
  ::cordl_internals::setStaticField<bool, "m_IsEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::InputForUI::EventProvider::getStaticF_m_IsEnabled() {
  return ::cordl_internals::getStaticField<bool, "m_IsEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get>();
}
inline void UnityEngine::InputForUI::EventProvider::setStaticF_m_IsInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "m_IsInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::InputForUI::EventProvider::getStaticF_m_IsInitialized() {
  return ::cordl_internals::getStaticField<bool, "m_IsInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get>();
}
inline void UnityEngine::InputForUI::EventProvider::setStaticF__registrations(::System::Collections::Generic::List_1<::UnityEngine::InputForUI::EventProvider_Registration>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::InputForUI::EventProvider_Registration>*, "_registrations",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::InputForUI::EventProvider_Registration>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::InputForUI::EventProvider_Registration>* UnityEngine::InputForUI::EventProvider::getStaticF__registrations() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::InputForUI::EventProvider_Registration>*, "_registrations",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get>();
}
inline void UnityEngine::InputForUI::EventProvider::Subscribe(::UnityEngine::InputForUI::EventConsumer* handler, int32_t priority, ::System::Nullable_1<int32_t> playerId,
                                                              ::ArrayW<::UnityEngine::InputForUI::Event_Type, ::Array<::UnityEngine::InputForUI::Event_Type>*> type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventConsumer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputForUI::Event_Type, ::Array<::UnityEngine::InputForUI::Event_Type>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler, priority, playerId, type);
}
inline void UnityEngine::InputForUI::EventProvider::Unsubscribe(::UnityEngine::InputForUI::EventConsumer* handler) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "Unsubscribe", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventConsumer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler);
}
inline void UnityEngine::InputForUI::EventProvider::SetEnabled(bool enable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "SetEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enable);
}
inline void UnityEngine::InputForUI::EventProvider::Dispatch(::ByRef<::UnityEngine::InputForUI::Event> ev) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "Dispatch", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputForUI::Event>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ev);
}
inline void UnityEngine::InputForUI::EventProvider::Bootstrap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "Bootstrap",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputForUI::EventProvider::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputForUI::EventProvider::Shutdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "Shutdown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputForUI::EventProvider::OnFocusChanged(bool focus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "OnFocusChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, focus);
}
inline void UnityEngine::InputForUI::EventProvider::NotifyUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "NotifyUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputForUI::EventProvider::SetInputSystemProvider(::UnityEngine::InputForUI::IEventProviderImpl* impl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventProvider*>::get(), "SetInputSystemProvider", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::IEventProviderImpl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, impl);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::EventProvider::EventProvider() {}
