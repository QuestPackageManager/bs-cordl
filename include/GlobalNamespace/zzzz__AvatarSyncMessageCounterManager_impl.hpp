#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarSyncMessageCounterManager_def.hpp"
#include "GlobalNamespace/zzzz__AvatarSyncMessageCounterManager_def.hpp"
#include "GlobalNamespace/zzzz__AvatarSyncMessageCounter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType::__AvatarSyncMessageCounterManager__MessageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType::__AvatarSyncMessageCounterManager__MessageType() {}
constexpr ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType::Sync{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType::Delta{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounterManager.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AvatarSyncMessageCounterManager* (*)()>(
    &::GlobalNamespace::AvatarSyncMessageCounterManager::get_Instance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2729f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounterManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSyncMessageCounterManager::*)()>(
    &::GlobalNamespace::AvatarSyncMessageCounterManager::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2729ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounterManager.SetMessageTypePeriod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSyncMessageCounterManager::*)(
    ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::System::TimeSpan)>(&::GlobalNamespace::AvatarSyncMessageCounterManager::SetMessageTypePeriod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x272a144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(), "SetMessageTypePeriod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounterManager.GetMessageTypePeriod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::AvatarSyncMessageCounterManager::*)(
    ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType)>(&::GlobalNamespace::AvatarSyncMessageCounterManager::GetMessageTypePeriod)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x272a1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(), "GetMessageTypePeriod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounterManager.MessageReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSyncMessageCounterManager::*)(
    ::StringW, ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType)>(&::GlobalNamespace::AvatarSyncMessageCounterManager::MessageReceived)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x272a338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(), "MessageReceived", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounterManager.GetPlayerMessageCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AvatarSyncMessageCounterManager::*)(
    ::StringW, ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType)>(&::GlobalNamespace::AvatarSyncMessageCounterManager::GetPlayerMessageCount)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x272a54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(), "GetPlayerMessageCount", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<
    ::StringW, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::GlobalNamespace::AvatarSyncMessageCounter*>*>*&
GlobalNamespace::AvatarSyncMessageCounterManager::__cordl_internal_get_userMessageCounters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userMessageCounters;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
    ::StringW, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::GlobalNamespace::AvatarSyncMessageCounter*>*>*> const&
GlobalNamespace::AvatarSyncMessageCounterManager::__cordl_internal_get_userMessageCounters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userMessageCounters;
}
constexpr void GlobalNamespace::AvatarSyncMessageCounterManager::__cordl_internal_set_userMessageCounters(
    ::System::Collections::Generic::Dictionary_2<
        ::StringW, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::GlobalNamespace::AvatarSyncMessageCounter*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userMessageCounters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::System::TimeSpan>*&
GlobalNamespace::AvatarSyncMessageCounterManager::__cordl_internal_get_messageTypePeriods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageTypePeriods;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::System::TimeSpan>*> const&
GlobalNamespace::AvatarSyncMessageCounterManager::__cordl_internal_get_messageTypePeriods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageTypePeriods;
}
constexpr void GlobalNamespace::AvatarSyncMessageCounterManager::__cordl_internal_set_messageTypePeriods(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::System::TimeSpan>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___messageTypePeriods)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::AvatarSyncMessageCounterManager::setStaticF__instance(::GlobalNamespace::AvatarSyncMessageCounterManager* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::AvatarSyncMessageCounterManager*, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get>(
      std::forward<::GlobalNamespace::AvatarSyncMessageCounterManager*>(value));
}
inline ::GlobalNamespace::AvatarSyncMessageCounterManager* GlobalNamespace::AvatarSyncMessageCounterManager::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::AvatarSyncMessageCounterManager*, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get>();
}
inline ::GlobalNamespace::AvatarSyncMessageCounterManager* GlobalNamespace::AvatarSyncMessageCounterManager::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AvatarSyncMessageCounterManager*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::AvatarSyncMessageCounterManager* GlobalNamespace::AvatarSyncMessageCounterManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AvatarSyncMessageCounterManager*>());
}
inline void GlobalNamespace::AvatarSyncMessageCounterManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarSyncMessageCounterManager::SetMessageTypePeriod(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType messageType, ::System::TimeSpan period) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(), "SetMessageTypePeriod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messageType, period);
}
inline ::StringW GlobalNamespace::AvatarSyncMessageCounterManager::GetMessageTypePeriod(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(), "GetMessageTypePeriod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, messageType);
}
inline void GlobalNamespace::AvatarSyncMessageCounterManager::MessageReceived(::StringW userId, ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(), "MessageReceived", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, messageType);
}
inline int32_t GlobalNamespace::AvatarSyncMessageCounterManager::GetPlayerMessageCount(::StringW userId, ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(), "GetPlayerMessageCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, userId, messageType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AvatarSyncMessageCounterManager::AvatarSyncMessageCounterManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
