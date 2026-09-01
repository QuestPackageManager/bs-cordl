#pragma once
// IWYU pragma private; include "System\Net\Sockets\SocketAsyncResult.hpp"
#include "System/Net/Sockets/zzzz__SocketFlags_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketOperation_impl.hpp"
#include "System/Net/zzzz__IPAddress_impl.hpp"
#include "System/zzzz__IOAsyncResult_impl.hpp"
#include "System/zzzz__Memory_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncResult_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncResult_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOperation_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketAsyncResult___c::*)()>(&::System::Net::Sockets::SocketAsyncResult___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x636d584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult___c._Complete_b__27_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketAsyncResult___c::*)(::System::Object*)>(&::System::Net::Sockets::SocketAsyncResult___c::_Complete_b__27_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x636d588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult___c*>(), { "<Complete>b__27_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Sockets::SocketAsyncResult___c::setStaticF___9(::System::Net::Sockets::SocketAsyncResult___c* value) {
  ::cordl_internals::setStaticField<::System::Net::Sockets::SocketAsyncResult___c*, "<>9", ::System::Net::Sockets::SocketAsyncResult___c*>(
      std::forward<::System::Net::Sockets::SocketAsyncResult___c*>(value));
}
inline ::System::Net::Sockets::SocketAsyncResult___c* System::Net::Sockets::SocketAsyncResult___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Sockets::SocketAsyncResult___c*, "<>9", ::System::Net::Sockets::SocketAsyncResult___c*>();
}
inline void System::Net::Sockets::SocketAsyncResult___c::setStaticF___9__27_0(::System::Threading::WaitCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "<>9__27_0", ::System::Net::Sockets::SocketAsyncResult___c*>(std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* System::Net::Sockets::SocketAsyncResult___c::getStaticF___9__27_0() {
  return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "<>9__27_0", ::System::Net::Sockets::SocketAsyncResult___c*>();
}
inline void System::Net::Sockets::SocketAsyncResult___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult___c::_Complete_b__27_0(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult___c*>(), { "<Complete>b__27_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::Net::Sockets::SocketAsyncResult___c* System::Net::Sockets::SocketAsyncResult___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::SocketAsyncResult___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SocketAsyncResult___c::SocketAsyncResult___c() {}
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::Net::Sockets::SocketAsyncResult::*)()>(&::System::Net::Sockets::SocketAsyncResult::get_Handle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x636d2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)()>(&::System::Net::Sockets::SocketAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x636d060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(
    ::System::Net::Sockets::Socket*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation)>(&::System::Net::Sockets::SocketAsyncResult::Init)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x636d318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(),
                                                                                           { "Init",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::AsyncCallback*>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::Sockets::SocketOperation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(
    ::System::Net::Sockets::Socket*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation)>(&::System::Net::Sockets::SocketAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x636d3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::AsyncCallback*>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::Sockets::SocketOperation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.get_ErrorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::SocketError (::System::Net::Sockets::SocketAsyncResult::*)()>(
    &::System::Net::Sockets::SocketAsyncResult::get_ErrorCode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x636d3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "get_ErrorCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.CheckIfThrowDelayedException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)()>(&::System::Net::Sockets::SocketAsyncResult::CheckIfThrowDelayedException)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x636d478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "CheckIfThrowDelayedException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.CompleteDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)()>(&::System::Net::Sockets::SocketAsyncResult::CompleteDisposed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x636d518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { ::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)()>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x636842c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "Complete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(bool)>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636d51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(int32_t)>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6368f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(::System::Exception*, bool)>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x636d524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(::System::Exception*)>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6367c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(::System::Net::Sockets::Socket*)>(&::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6367c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketAsyncResult::*)(::System::Net::Sockets::Socket*, int32_t)>(
    &::System::Net::Sockets::SocketAsyncResult::Complete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6367e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(),
                                                                                           { "Complete", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_socket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___socket;
}
constexpr ::System::Net::Sockets::Socket* const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_socket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___socket;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_socket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___socket = value;
}
constexpr ::System::Net::Sockets::SocketOperation& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_operation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operation;
}
constexpr ::System::Net::Sockets::SocketOperation const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_operation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operation;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_operation(::System::Net::Sockets::SocketOperation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___operation = value;
}
constexpr ::System::Exception*& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_DelayedException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DelayedException;
}
constexpr ::System::Exception* const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_DelayedException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DelayedException;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_DelayedException(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DelayedException = value;
}
constexpr ::System::Net::EndPoint*& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_EndPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndPoint;
}
constexpr ::System::Net::EndPoint* const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_EndPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndPoint;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_EndPoint(::System::Net::EndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EndPoint = value;
}
constexpr ::System::Memory_1<uint8_t>& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr ::System::Memory_1<uint8_t> const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_Buffer(::System::Memory_1<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Buffer = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_Offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Offset = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_Size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Size = value;
}
constexpr ::System::Net::Sockets::SocketFlags& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_SockFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SockFlags;
}
constexpr ::System::Net::Sockets::SocketFlags const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_SockFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SockFlags;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_SockFlags(::System::Net::Sockets::SocketFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SockFlags = value;
}
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_AcceptSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AcceptSocket;
}
constexpr ::System::Net::Sockets::Socket* const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_AcceptSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AcceptSocket;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_AcceptSocket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AcceptSocket = value;
}
constexpr ::ArrayW<::System::Net::IPAddress*>& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_Addresses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Addresses;
}
constexpr ::ArrayW<::System::Net::IPAddress*> const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_Addresses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Addresses;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_Addresses(::ArrayW<::System::Net::IPAddress*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Addresses = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_Port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Port;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_Port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Port;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_Port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Port = value;
}
constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_Buffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffers;
}
constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_Buffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffers;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_Buffers(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Buffers = value;
}
constexpr bool& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_ReuseSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReuseSocket;
}
constexpr bool const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_ReuseSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReuseSocket;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_ReuseSocket(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReuseSocket = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_CurrentAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentAddress;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_CurrentAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentAddress;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_CurrentAddress(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CurrentAddress = value;
}
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_AcceptedSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AcceptedSocket;
}
constexpr ::System::Net::Sockets::Socket* const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_AcceptedSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AcceptedSocket;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_AcceptedSocket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AcceptedSocket = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_Total() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Total;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_Total() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Total;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_Total(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Total = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_error(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___error = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_EndCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndCalled;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncResult::__cordl_internal_get_EndCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndCalled;
}
constexpr void System::Net::Sockets::SocketAsyncResult::__cordl_internal_set_EndCalled(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EndCalled = value;
}
inline ::System::IntPtr System::Net::Sockets::SocketAsyncResult::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::Init(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::System::Object* state,
                                                          ::System::Net::Sockets::SocketOperation operation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(),
                                                                                         { "Init",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::AsyncCallback*>(),
                                                                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::Sockets::SocketOperation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket, callback, state, operation);
}
inline void System::Net::Sockets::SocketAsyncResult::_ctor(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::System::Object* state,
                                                           ::System::Net::Sockets::SocketOperation operation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::AsyncCallback*>(),
                                                                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::Sockets::SocketOperation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket, callback, state, operation);
}
inline ::System::Net::Sockets::SocketError System::Net::Sockets::SocketAsyncResult::get_ErrorCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "get_ErrorCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketError>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::CheckIfThrowDelayedException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "CheckIfThrowDelayedException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::CompleteDisposed() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "Complete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(bool synch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, synch);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(int32_t total) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, total);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(::System::Exception* e, bool synch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, synch);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(::System::Net::Sockets::Socket* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Net::Sockets::SocketAsyncResult::Complete(::System::Net::Sockets::Socket* s, int32_t total) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketAsyncResult*>(),
                                                                                         { "Complete", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, total);
}
inline ::System::Net::Sockets::SocketAsyncResult* System::Net::Sockets::SocketAsyncResult::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::SocketAsyncResult*>());
}
inline ::System::Net::Sockets::SocketAsyncResult* System::Net::Sockets::SocketAsyncResult::New_ctor(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::System::Object* state,
                                                                                                    ::System::Net::Sockets::SocketOperation operation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::SocketAsyncResult*>(socket, callback, state, operation));
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SocketAsyncResult::SocketAsyncResult() {}
