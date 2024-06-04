#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Lifetime/ILease.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ILease_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseState_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::ILease.get_CurrentLeaseTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::ILease::*)()>(
    &::System::Runtime::Remoting::Lifetime::ILease::get_CurrentLeaseTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ILease*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ILease*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::ILease.get_CurrentState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Lifetime::LeaseState (::System::Runtime::Remoting::Lifetime::ILease::*)()>(
    &::System::Runtime::Remoting::Lifetime::ILease::get_CurrentState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ILease*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ILease*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::ILease.get_RenewOnCallTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::ILease::*)()>(
    &::System::Runtime::Remoting::Lifetime::ILease::get_RenewOnCallTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ILease*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ILease*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::ILease.Renew
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::ILease::*)(::System::TimeSpan)>(
    &::System::Runtime::Remoting::Lifetime::ILease::Renew)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ILease*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ILease*>::get(), 3));
    return ___internal_method;
  }
};
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::ILease::get_CurrentLeaseTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ILease*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Lifetime::LeaseState System::Runtime::Remoting::Lifetime::ILease::get_CurrentState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ILease*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Lifetime::LeaseState, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::ILease::get_RenewOnCallTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ILease*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::ILease::Renew(::System::TimeSpan renewalTime) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ILease*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, renewalTime);
}
