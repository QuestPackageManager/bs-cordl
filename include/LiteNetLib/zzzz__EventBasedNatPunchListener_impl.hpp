#pragma once
// IWYU pragma private; include "LiteNetLib\EventBasedNatPunchListener.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__EventBasedNatPunchListener_def.hpp"
#include "LiteNetLib/zzzz__EventBasedNatPunchListener_def.hpp"
#include "LiteNetLib/zzzz__INatPunchListener_def.hpp"
#include "LiteNetLib/zzzz__NatAddressType_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::*)(::System::Object*, ::System::IntPtr)>(
    &::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x589bd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::*)(::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::StringW)>(
    &::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x589be84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>(),
                                                                                          { ::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::*)(::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::BeginInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x589be98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>(),
                                                                                          { ::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x589bec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>(),
                                                                                          { ::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>(), 15 }));
    return ___internal_method;
  }
};
inline void LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::Invoke(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW token) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localEndPoint, remoteEndPoint, token);
}
inline ::System::IAsyncResult* LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::BeginInvoke(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                                                            ::StringW token, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, localEndPoint, remoteEndPoint, token, callback, object);
}
inline void LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>(object, method));
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest::EventBasedNatPunchListener_OnNatIntroductionRequest() {}
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::*)(::System::Object*, ::System::IntPtr)>(
    &::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x589bed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::*)(
    ::System::Net::IPEndPoint*, ::LiteNetLib::NatAddressType, ::StringW)>(&::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x589c018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>(),
                                                                                          { ::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NatAddressType, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x589c02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>(),
                                                                                          { ::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x589c0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>(),
                                                                                          { ::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>(), 15 }));
    return ___internal_method;
  }
};
inline void LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::Invoke(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type, ::StringW token) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetEndPoint, type, token);
}
inline ::System::IAsyncResult* LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::BeginInvoke(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type,
                                                                                                            ::StringW token, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, targetEndPoint, type, token, callback, object);
}
inline void LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>(object, method));
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess::EventBasedNatPunchListener_OnNatIntroductionSuccess() {}
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener.add_NatIntroductionRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener::*)(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*)>(
    &::LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionRequest)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x589ba50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener*>(),
                                                             { "add_NatIntroductionRequest", {}, { ::i2c::type_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener.remove_NatIntroductionRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener::*)(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*)>(
    &::LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionRequest)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x589bafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener*>(),
                                                             { "remove_NatIntroductionRequest", {}, { ::i2c::type_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener.add_NatIntroductionSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener::*)(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*)>(
    &::LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionSuccess)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x589bba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener*>(),
                                                             { "add_NatIntroductionSuccess", {}, { ::i2c::type_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener.remove_NatIntroductionSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener::*)(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*)>(
    &::LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionSuccess)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x589bc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener*>(),
                                                             { "remove_NatIntroductionSuccess", {}, { ::i2c::type_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener.LiteNetLib_INatPunchListener_OnNatIntroductionRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener::*)(::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::StringW)>(
    &::LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionRequest)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x589bd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener*>(),
                                                             { "LiteNetLib.INatPunchListener.OnNatIntroductionRequest",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener.LiteNetLib_INatPunchListener_OnNatIntroductionSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NatAddressType, ::StringW)>(
    &::LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionSuccess)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x589bd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener*>(),
                                                             { "LiteNetLib.INatPunchListener.OnNatIntroductionSuccess",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::LiteNetLib::NatAddressType>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNatPunchListener._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::EventBasedNatPunchListener::*)()>(&::LiteNetLib::EventBasedNatPunchListener::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589bd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener*>(), { ".ctor", {}, {} })));
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
  this->___NatIntroductionRequest = value;
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
  this->___NatIntroductionSuccess = value;
}
inline void LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionRequest(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener*>(),
                                                           { "add_NatIntroductionRequest", {}, { ::i2c::type_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionRequest(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener*>(),
                                                           { "remove_NatIntroductionRequest", {}, { ::i2c::type_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNatPunchListener::add_NatIntroductionSuccess(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener*>(),
                                                           { "add_NatIntroductionSuccess", {}, { ::i2c::type_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNatPunchListener::remove_NatIntroductionSuccess(::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener*>(),
                                                           { "remove_NatIntroductionSuccess", {}, { ::i2c::type_of<::LiteNetLib::EventBasedNatPunchListener_OnNatIntroductionSuccess*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionRequest(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                                                          ::StringW token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener*>(),
                                                           { "LiteNetLib.INatPunchListener.OnNatIntroductionRequest",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localEndPoint, remoteEndPoint, token);
}
inline void LiteNetLib::EventBasedNatPunchListener::LiteNetLib_INatPunchListener_OnNatIntroductionSuccess(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type,
                                                                                                          ::StringW token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener*>(),
                                                           { "LiteNetLib.INatPunchListener.OnNatIntroductionSuccess",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::LiteNetLib::NatAddressType>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetEndPoint, type, token);
}
inline void LiteNetLib::EventBasedNatPunchListener::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::EventBasedNatPunchListener*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LiteNetLib::EventBasedNatPunchListener* LiteNetLib::EventBasedNatPunchListener::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::EventBasedNatPunchListener*>());
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
