#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Lifetime/Lease.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ILease_impl.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseState_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__Lease_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Queue_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ILease_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ISponsor_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseState_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__Lease_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3cdbf44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate::*)(
    ::System::Runtime::Remoting::Lifetime::ILease*)>(&::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3cdc270;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate::*)(::System::Runtime::Remoting::Lifetime::ILease*, ::System::AsyncCallback*, ::System::Object*)>(
        &::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3cdc044;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate::*)(::System::IAsyncResult*)>(
    &::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3cdc248;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate::Invoke(::System::Runtime::Remoting::Lifetime::ILease* lease) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, lease);
}
inline ::System::IAsyncResult* System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate::BeginInvoke(::System::Runtime::Remoting::Lifetime::ILease* lease, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, lease, callback, object);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, result);
}
inline ::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate* System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate::Lease_RenewalDelegate() {}
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3cd49fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.get_CurrentLeaseTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::Lease::*)()>(
    &::System::Runtime::Remoting::Lifetime::Lease::get_CurrentLeaseTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3cdb920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                                                                               "get_CurrentLeaseTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.get_CurrentState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Lifetime::LeaseState (::System::Runtime::Remoting::Lifetime::Lease::*)()>(
    &::System::Runtime::Remoting::Lifetime::Lease::get_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cdb988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                                                                               "get_CurrentState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::Activate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3cdb990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(), "Activate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.get_RenewOnCallTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::Lease::*)()>(
    &::System::Runtime::Remoting::Lifetime::Lease::get_RenewOnCallTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cdb99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                                                                               "get_RenewOnCallTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.Renew
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::Lease::*)(::System::TimeSpan)>(
    &::System::Runtime::Remoting::Lifetime::Lease::Renew)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3cdb9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(), "Renew", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.Unregister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)(::System::Runtime::Remoting::Lifetime::ISponsor*)>(
    &::System::Runtime::Remoting::Lifetime::Lease::Unregister)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3cdba30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(), "Unregister", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Lifetime::ISponsor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.UpdateState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)()>(
    &::System::Runtime::Remoting::Lifetime::Lease::UpdateState)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3cdbb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                                                                               "UpdateState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.CheckNextSponsor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)()>(
    &::System::Runtime::Remoting::Lifetime::Lease::CheckNextSponsor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x3cdbd04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                                                                               "CheckNextSponsor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.ProcessSponsorResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)(::System::Object*, bool)>(
    &::System::Runtime::Remoting::Lifetime::Lease::ProcessSponsorResponse)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x3cdc064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(), "ProcessSponsorResponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__leaseExpireTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaseExpireTime;
}
constexpr ::System::DateTime const& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__leaseExpireTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaseExpireTime;
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_set__leaseExpireTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leaseExpireTime = value;
}
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__currentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentState;
}
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState const& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__currentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentState;
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_set__currentState(::System::Runtime::Remoting::Lifetime::LeaseState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentState = value;
}
constexpr ::System::TimeSpan& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__initialLeaseTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialLeaseTime;
}
constexpr ::System::TimeSpan const& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__initialLeaseTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialLeaseTime;
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_set__initialLeaseTime(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialLeaseTime = value;
}
constexpr ::System::TimeSpan& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__renewOnCallTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renewOnCallTime;
}
constexpr ::System::TimeSpan const& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__renewOnCallTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renewOnCallTime;
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_set__renewOnCallTime(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renewOnCallTime = value;
}
constexpr ::System::TimeSpan& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__sponsorshipTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sponsorshipTimeout;
}
constexpr ::System::TimeSpan const& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__sponsorshipTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sponsorshipTimeout;
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_set__sponsorshipTimeout(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sponsorshipTimeout = value;
}
constexpr ::System::Collections::ArrayList*& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__sponsors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sponsors;
}
constexpr ::System::Collections::ArrayList* const& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__sponsors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sponsors;
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_set__sponsors(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sponsors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Queue*& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__renewingSponsors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renewingSponsors;
}
constexpr ::System::Collections::Queue* const& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__renewingSponsors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renewingSponsors;
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_set__renewingSponsors(::System::Collections::Queue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renewingSponsors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate*& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__renewalDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renewalDelegate;
}
constexpr ::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate* const& System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_get__renewalDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renewalDelegate;
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__cordl_internal_set__renewalDelegate(::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renewalDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Lifetime::Lease::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::Lease::get_CurrentLeaseTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                                                                             "get_CurrentLeaseTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Lifetime::LeaseState System::Runtime::Remoting::Lifetime::Lease::get_CurrentState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                                                                             "get_CurrentState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Lifetime::LeaseState, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Lifetime::Lease::Activate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(), "Activate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::Lease::get_RenewOnCallTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                                                                             "get_RenewOnCallTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::Lease::Renew(::System::TimeSpan renewalTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(), "Renew", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, renewalTime);
}
inline void System::Runtime::Remoting::Lifetime::Lease::Unregister(::System::Runtime::Remoting::Lifetime::ISponsor* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(), "Unregister", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Lifetime::ISponsor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void System::Runtime::Remoting::Lifetime::Lease::UpdateState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                                                                             "UpdateState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Lifetime::Lease::CheckNextSponsor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                                                                             "CheckNextSponsor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Lifetime::Lease::ProcessSponsorResponse(::System::Object* state, bool timedOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(), "ProcessSponsorResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, timedOut);
}
inline ::System::Runtime::Remoting::Lifetime::Lease* System::Runtime::Remoting::Lifetime::Lease::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Lifetime::Lease*>());
}
/// @brief Convert operator to "::System::Runtime::Remoting::Lifetime::ILease"
constexpr System::Runtime::Remoting::Lifetime::Lease::operator ::System::Runtime::Remoting::Lifetime::ILease*() noexcept {
  return static_cast<::System::Runtime::Remoting::Lifetime::ILease*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Lifetime::ILease"
constexpr ::System::Runtime::Remoting::Lifetime::ILease* System::Runtime::Remoting::Lifetime::Lease::i___System__Runtime__Remoting__Lifetime__ILease() noexcept {
  return static_cast<::System::Runtime::Remoting::Lifetime::ILease*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Lifetime::Lease::Lease() {}
