#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/SessionEvent.hpp"
#include "BeatGames/Analytics/Events/zzzz__BasePlatformSessionAnalyticsEvent_impl.hpp"
#include "BeatGames/Analytics/Events/zzzz__SessionEvent_def.hpp"
#include "GlobalNamespace/zzzz__IDType_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::Events::SessionEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::SessionEvent::*)()>(&::BeatGames::Analytics::Events::SessionEvent::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3191d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::SessionEvent.GetIDType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDType (::BeatGames::Analytics::Events::SessionEvent::*)()>(
    &::BeatGames::Analytics::Events::SessionEvent::GetIDType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3191df0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEvent*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::SessionEvent.ReturnEventToPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::SessionEvent::*)()>(
    &::BeatGames::Analytics::Events::SessionEvent::ReturnEventToPool)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3191df8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEvent*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::SessionEvent.ReturnedToPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::SessionEvent::*)()>(
    &::BeatGames::Analytics::Events::SessionEvent::ReturnedToPool)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3191e6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEvent*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatGames::Analytics::Events::SessionEvent::__cordl_internal_get_event_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event_type;
}
constexpr ::StringW const& BeatGames::Analytics::Events::SessionEvent::__cordl_internal_get_event_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event_type;
}
constexpr void BeatGames::Analytics::Events::SessionEvent::__cordl_internal_set_event_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___event_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatGames::Analytics::Events::SessionEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IDType BeatGames::Analytics::Events::SessionEvent::GetIDType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEvent*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDType, false>(this, ___internal_method);
}
inline void BeatGames::Analytics::Events::SessionEvent::ReturnEventToPool() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEvent*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatGames::Analytics::Events::SessionEvent::ReturnedToPool() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::SessionEvent*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatGames::Analytics::Events::SessionEvent* BeatGames::Analytics::Events::SessionEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatGames::Analytics::Events::SessionEvent*>());
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::Events::SessionEvent::SessionEvent() {}
