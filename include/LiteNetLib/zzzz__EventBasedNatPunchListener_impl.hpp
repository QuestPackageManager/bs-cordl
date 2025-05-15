#pragma once
// IWYU pragma private; include "LiteNetLib/EventBasedNatPunchListener.hpp"
#include "LiteNetLib/zzzz__INatPunchListener_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__EventBasedNatPunchListener_def.hpp"
#include "LiteNetLib/zzzz__EventBasedNatPunchListener_def.hpp"
#include "LiteNetLib/zzzz__NatAddressType_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::*)(::System::Object*, ::System::IntPtr)>(
    &::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3aae114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::*)(
    ::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::StringW)>(&::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3aae218;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::*)(::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::BeginInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3aae22c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3aae258;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get(), 15));
    return ___internal_method;
  }
};
inline void LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::Invoke(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW token) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localEndPoint, remoteEndPoint, token);
}
inline ::System::IAsyncResult* LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::BeginInvoke(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                                                            ::StringW token, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, localEndPoint, remoteEndPoint, token, callback, object);
}
inline void LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>(object, method));
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::EventBasedNatPunchListener_OnNatIntroductionRequest() {}
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::*)(::System::Object*, ::System::IntPtr)>(
    &::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3aae264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::*)(
    ::System::Net::IPEndPoint*, ::LiteNetLib::NatAddressType, ::StringW)>(&::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3aae368;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NatAddressType, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3aae37c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3aae414;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get(), 15));
    return ___internal_method;
  }
};
inline void LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::Invoke(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type, ::StringW token) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetEndPoint, type, token);
}
inline ::System::IAsyncResult* LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::BeginInvoke(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type,
                                                                                                            ::StringW token, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, targetEndPoint, type, token, callback, object);
}
inline void LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>(object, method));
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::EventBasedNatPunchListener_OnNatIntroductionSuccess() {}
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener.add_NatIntroductionRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener::*)(
    ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*)>(&::LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aade64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener*>::get(), "add_NatIntroductionRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener.remove_NatIntroductionRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener::*)(
    ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*)>(&::LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aadf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener*>::get(), "remove_NatIntroductionRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener.add_NatIntroductionSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener::*)(
    ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*)>(&::LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionSuccess)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aadf9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener*>::get(), "add_NatIntroductionSuccess", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener.remove_NatIntroductionSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener::*)(
    ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*)>(&::LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionSuccess)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aae038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener*>::get(), "remove_NatIntroductionSuccess", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener.LiteNetLib_INatPunchListener_OnNatIntroductionRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener::*)(
    ::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::StringW)>(&::LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionRequest)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3aae0d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener*>::get(),
                                                 "LiteNetLib.INatPunchListener.OnNatIntroductionRequest", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener.LiteNetLib_INatPunchListener_OnNatIntroductionSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener::*)(
    ::System::Net::IPEndPoint*, ::LiteNetLib::NatAddressType, ::StringW)>(&::LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionSuccess)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3aae0f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener*>::get(),
                                                 "LiteNetLib.INatPunchListener.OnNatIntroductionSuccess", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NatAddressType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener::*)()>(&::LiteNetLib::EventBasedNatPunchListener::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aae10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*& LiteNetLib::EventBasedNatPunchListener::__cordl_internal_get_NatIntroductionRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NatIntroductionRequest;
}
constexpr ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* const& LiteNetLib::EventBasedNatPunchListener::__cordl_internal_get_NatIntroductionRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NatIntroductionRequest;
}
constexpr void LiteNetLib::EventBasedNatPunchListener::__cordl_internal_set_NatIntroductionRequest(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NatIntroductionRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*& LiteNetLib::EventBasedNatPunchListener::__cordl_internal_get_NatIntroductionSuccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NatIntroductionSuccess;
}
constexpr ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* const& LiteNetLib::EventBasedNatPunchListener::__cordl_internal_get_NatIntroductionSuccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NatIntroductionSuccess;
}
constexpr void LiteNetLib::EventBasedNatPunchListener::__cordl_internal_set_NatIntroductionSuccess(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NatIntroductionSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionRequest(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener*>::get(), "add_NatIntroductionRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionRequest(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener*>::get(), "remove_NatIntroductionRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionSuccess(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener*>::get(), "add_NatIntroductionSuccess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionSuccess(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener*>::get(), "remove_NatIntroductionSuccess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionRequest(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                                                          ::StringW token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener*>::get(),
                                               "LiteNetLib.INatPunchListener.OnNatIntroductionRequest", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localEndPoint, remoteEndPoint, token);
}
inline void LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionSuccess(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type,
                                                                                                          ::StringW token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener*>::get(),
                                               "LiteNetLib.INatPunchListener.OnNatIntroductionSuccess", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NatAddressType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetEndPoint, type, token);
}
inline void LiteNetLib::EventBasedNatPunchListener::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNatPunchListener*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::LiteNetLib::EventBasedNatPunchListener* LiteNetLib::EventBasedNatPunchListener::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::EventBasedNatPunchListener*>());
}
/// @brief Convert operator to "::LiteNetLib::INatPunchListener"
constexpr LiteNetLib::EventBasedNatPunchListener::operator ::LiteNetLib::INatPunchListener*() noexcept {
  return static_cast<::LiteNetLib::INatPunchListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::INatPunchListener"
constexpr ::LiteNetLib::INatPunchListener* LiteNetLib::EventBasedNatPunchListener::i___LiteNetLib__INatPunchListener() noexcept {
  return static_cast<::LiteNetLib::INatPunchListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNatPunchListener::EventBasedNatPunchListener() {}
