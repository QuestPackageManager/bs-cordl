#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/NavigationEvent.hpp"
#include "BeatGames/Analytics/Events/zzzz__BasePlatformSessionAnalyticsEvent_impl.hpp"
#include "BeatGames/Analytics/Events/zzzz__NavigationEvent_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::Events::NavigationEvent.SetEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::NavigationEvent::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::BeatGames::Analytics::Events::NavigationEvent::SetEventData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x319116c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::NavigationEvent*>::get(), "SetEventData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::NavigationEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::NavigationEvent::*)()>(
    &::BeatGames::Analytics::Events::NavigationEvent::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3191b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::NavigationEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::NavigationEvent.ReturnedToPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::NavigationEvent::*)()>(
    &::BeatGames::Analytics::Events::NavigationEvent::ReturnedToPool)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3191bd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::NavigationEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::NavigationEvent*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::NavigationEvent.ReturnEventToPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::NavigationEvent::*)()>(
    &::BeatGames::Analytics::Events::NavigationEvent::ReturnEventToPool)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3191c28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::NavigationEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::NavigationEvent*>::get(), 10));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_button_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button_id;
}
constexpr ::StringW const& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_button_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button_id;
}
constexpr void BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_set_button_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___button_id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_screen_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screen_id;
}
constexpr ::StringW const& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_screen_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screen_id;
}
constexpr void BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_set_screen_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___screen_id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_content_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_id;
}
constexpr ::StringW const& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_content_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content_id;
}
constexpr void BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_set_content_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content_id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event;
}
constexpr ::StringW const& BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_get_event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event;
}
constexpr void BeatGames::Analytics::Events::NavigationEvent::__cordl_internal_set_event(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___event)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatGames::Analytics::Events::NavigationEvent::SetEventData(::StringW buttonID, ::StringW screenID, ::StringW contentID, ::StringW eventType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::NavigationEvent*>::get(), "SetEventData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buttonID, screenID, contentID, eventType);
}
inline void BeatGames::Analytics::Events::NavigationEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::NavigationEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatGames::Analytics::Events::NavigationEvent::ReturnedToPool() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::NavigationEvent*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatGames::Analytics::Events::NavigationEvent::ReturnEventToPool() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::NavigationEvent*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatGames::Analytics::Events::NavigationEvent* BeatGames::Analytics::Events::NavigationEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatGames::Analytics::Events::NavigationEvent*>());
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::Events::NavigationEvent::NavigationEvent() {}
