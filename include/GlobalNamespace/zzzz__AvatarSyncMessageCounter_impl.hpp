#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarSyncMessageCounter_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSyncMessageCounter::*)(::System::TimeSpan)>(
    &::GlobalNamespace::AvatarSyncMessageCounter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2729cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounter.MessageReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSyncMessageCounter::*)()>(
    &::GlobalNamespace::AvatarSyncMessageCounter::MessageReceived)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2729d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(),
                                                                               "MessageReceived", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounter.CurrentMessages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AvatarSyncMessageCounter::*)()>(
    &::GlobalNamespace::AvatarSyncMessageCounter::CurrentMessages)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2729f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(),
                                                                               "CurrentMessages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounter.CleanOldMessages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSyncMessageCounter::*)()>(
    &::GlobalNamespace::AvatarSyncMessageCounter::CleanOldMessages)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2729df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(),
                                                                               "CleanOldMessages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::System::DateTime>*& GlobalNamespace::AvatarSyncMessageCounter::__cordl_internal_get_messageTimestamps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageTimestamps;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::System::DateTime>*> const&
GlobalNamespace::AvatarSyncMessageCounter::__cordl_internal_get_messageTimestamps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageTimestamps;
}
constexpr void GlobalNamespace::AvatarSyncMessageCounter::__cordl_internal_set_messageTimestamps(::System::Collections::Generic::Queue_1<::System::DateTime>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___messageTimestamps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::TimeSpan& GlobalNamespace::AvatarSyncMessageCounter::__cordl_internal_get_period() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___period;
}
constexpr ::System::TimeSpan const& GlobalNamespace::AvatarSyncMessageCounter::__cordl_internal_get_period() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___period;
}
constexpr void GlobalNamespace::AvatarSyncMessageCounter::__cordl_internal_set_period(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___period = value;
}
inline ::GlobalNamespace::AvatarSyncMessageCounter* GlobalNamespace::AvatarSyncMessageCounter::New_ctor(::System::TimeSpan period) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AvatarSyncMessageCounter*>(period));
}
inline void GlobalNamespace::AvatarSyncMessageCounter::_ctor(::System::TimeSpan period) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, period);
}
inline void GlobalNamespace::AvatarSyncMessageCounter::MessageReceived() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(),
                                                                             "MessageReceived", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::AvatarSyncMessageCounter::CurrentMessages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(),
                                                                             "CurrentMessages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarSyncMessageCounter::CleanOldMessages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(),
                                                                             "CleanOldMessages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AvatarSyncMessageCounter::AvatarSyncMessageCounter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
