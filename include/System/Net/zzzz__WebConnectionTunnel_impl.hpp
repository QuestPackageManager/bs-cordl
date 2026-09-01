#pragma once
// IWYU pragma private; include "System\Net\WebConnectionTunnel.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "System/zzzz__Version_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebConnectionTunnel_NtlmAuthState::WebConnectionTunnel_NtlmAuthState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WebConnectionTunnel_NtlmAuthState::WebConnectionTunnel_NtlmAuthState() {}
constexpr ::System::Net::WebConnectionTunnel_NtlmAuthState System::Net::WebConnectionTunnel_NtlmAuthState::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::WebConnectionTunnel_NtlmAuthState System::Net::WebConnectionTunnel_NtlmAuthState::Challenge{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::WebConnectionTunnel_NtlmAuthState System::Net::WebConnectionTunnel_NtlmAuthState::Response{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Net::WebConnectionTunnel__Initialize_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel__Initialize_d__42::*)()>(&::System::Net::WebConnectionTunnel__Initialize_d__42::MoveNext)> {
  constexpr static std::size_t size = 0xd90;
  constexpr static std::size_t addrs = 0x6345ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel__Initialize_d__42>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel__Initialize_d__42.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel__Initialize_d__42::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebConnectionTunnel__Initialize_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6346c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel__Initialize_d__42>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebConnectionTunnel__Initialize_d__42::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel__Initialize_d__42>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel__Initialize_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel__Initialize_d__42>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebConnectionTunnel__Initialize_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebConnectionTunnel__Initialize_d__42::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebConnectionTunnel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_have_auth_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t>,int32_t>>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::System::Net::WebConnectionTunnel__Initialize_d__42::WebConnectionTunnel__Initialize_d__42(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebConnectionTunnel* __4__this, ::System::IO::Stream* stream,
    ::System::Threading::CancellationToken cancellationToken, bool _have_auth_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t>, int32_t>> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->stream = stream;
  this->cancellationToken = cancellationToken;
  this->_have_auth_5__2 = _have_auth_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::WebConnectionTunnel__Initialize_d__42::WebConnectionTunnel__Initialize_d__42() {}
//  Writing Method size for method: ::System::Net::WebConnectionTunnel__ReadHeaders_d__43.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel__ReadHeaders_d__43::*)()>(&::System::Net::WebConnectionTunnel__ReadHeaders_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0x6346cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel__ReadHeaders_d__43>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel__ReadHeaders_d__43.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel__ReadHeaders_d__43::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Net::WebConnectionTunnel__ReadHeaders_d__43::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x634752c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel__ReadHeaders_d__43>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebConnectionTunnel__ReadHeaders_d__43::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel__ReadHeaders_d__43>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel__ReadHeaders_d__43::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel__ReadHeaders_d__43>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::WebConnectionTunnel__ReadHeaders_d__43::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebConnectionTunnel__ReadHeaders_d__43::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t>,int32_t>>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebConnectionTunnel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_retBuffer_5__2", ty:
// "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_status_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_buffer_5__4", ty:
// "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ms_5__5", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebConnectionTunnel__ReadHeaders_d__43::WebConnectionTunnel__ReadHeaders_d__43(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t>, int32_t>> __t__builder,
    ::System::Threading::CancellationToken cancellationToken, ::System::IO::Stream* stream, ::System::Net::WebConnectionTunnel* __4__this, ::ArrayW<uint8_t> _retBuffer_5__2, int32_t _status_5__3,
    ::ArrayW<uint8_t> _buffer_5__4, ::System::IO::MemoryStream* _ms_5__5, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->stream = stream;
  this->__4__this = __4__this;
  this->_retBuffer_5__2 = _retBuffer_5__2;
  this->_status_5__3 = _status_5__3;
  this->_buffer_5__4 = _buffer_5__4;
  this->_ms_5__5 = _ms_5__5;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::WebConnectionTunnel__ReadHeaders_d__43::WebConnectionTunnel__ReadHeaders_d__43() {}
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Request
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpWebRequest* (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_Request", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_ConnectUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_ConnectUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_ConnectUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::System::Net::HttpWebRequest*, ::System::Uri*)>(&::System::Net::WebConnectionTunnel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Net::HttpWebRequest*>(), ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Success
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_Success)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_Success", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_Success
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(bool)>(&::System::Net::WebConnectionTunnel::set_Success)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_Success", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_CloseConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_CloseConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_CloseConnection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_CloseConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(bool)>(&::System::Net::WebConnectionTunnel::set_CloseConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_CloseConnection", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_StatusCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_StatusCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_StatusCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(int32_t)>(&::System::Net::WebConnectionTunnel::set_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_StatusCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_StatusDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::StringW)>(&::System::Net::WebConnectionTunnel::set_StatusDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_StatusDescription", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Challenge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_Challenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_Challenge", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_Challenge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::ArrayW<::StringW>)>(&::System::Net::WebConnectionTunnel::set_Challenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_Challenge", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Headers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_Headers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_Headers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::System::Net::WebHeaderCollection*)>(&::System::Net::WebConnectionTunnel::set_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_Headers", {}, { ::i2c::type_of<::System::Net::WebHeaderCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_ProxyVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_ProxyVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_ProxyVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_ProxyVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::System::Version*)>(&::System::Net::WebConnectionTunnel::set_ProxyVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_ProxyVersion", {}, { ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_Data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::ArrayW<uint8_t>)>(&::System::Net::WebConnectionTunnel::set_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6345c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_Data", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebConnectionTunnel::*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(
    &::System::Net::WebConnectionTunnel::Initialize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6345c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                                                             { "Initialize", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.ReadHeaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t>, int32_t>>* (
    ::System::Net::WebConnectionTunnel::*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(&::System::Net::WebConnectionTunnel::ReadHeaders)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6345d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                                                             { "ReadHeaders", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.FlushContents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::System::IO::Stream*, int32_t)>(&::System::Net::WebConnectionTunnel::FlushContents)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6345e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "FlushContents", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::HttpWebRequest*& System::Net::WebConnectionTunnel::__cordl_internal_get__Request_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Request_k__BackingField;
}
constexpr ::System::Net::HttpWebRequest* const& System::Net::WebConnectionTunnel::__cordl_internal_get__Request_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Request_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__Request_k__BackingField(::System::Net::HttpWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Request_k__BackingField = value;
}
constexpr ::System::Uri*& System::Net::WebConnectionTunnel::__cordl_internal_get__ConnectUri_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConnectUri_k__BackingField;
}
constexpr ::System::Uri* const& System::Net::WebConnectionTunnel::__cordl_internal_get__ConnectUri_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConnectUri_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__ConnectUri_k__BackingField(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ConnectUri_k__BackingField = value;
}
constexpr ::System::Net::HttpWebRequest*& System::Net::WebConnectionTunnel::__cordl_internal_get_connectRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectRequest;
}
constexpr ::System::Net::HttpWebRequest* const& System::Net::WebConnectionTunnel::__cordl_internal_get_connectRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectRequest;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set_connectRequest(::System::Net::HttpWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectRequest = value;
}
constexpr ::System::Net::WebConnectionTunnel_NtlmAuthState& System::Net::WebConnectionTunnel::__cordl_internal_get_ntlmAuthState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ntlmAuthState;
}
constexpr ::System::Net::WebConnectionTunnel_NtlmAuthState const& System::Net::WebConnectionTunnel::__cordl_internal_get_ntlmAuthState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ntlmAuthState;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set_ntlmAuthState(::System::Net::WebConnectionTunnel_NtlmAuthState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ntlmAuthState = value;
}
constexpr bool& System::Net::WebConnectionTunnel::__cordl_internal_get__Success_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Success_k__BackingField;
}
constexpr bool const& System::Net::WebConnectionTunnel::__cordl_internal_get__Success_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Success_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__Success_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Success_k__BackingField = value;
}
constexpr bool& System::Net::WebConnectionTunnel::__cordl_internal_get__CloseConnection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseConnection_k__BackingField;
}
constexpr bool const& System::Net::WebConnectionTunnel::__cordl_internal_get__CloseConnection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseConnection_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__CloseConnection_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CloseConnection_k__BackingField = value;
}
constexpr int32_t& System::Net::WebConnectionTunnel::__cordl_internal_get__StatusCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StatusCode_k__BackingField;
}
constexpr int32_t const& System::Net::WebConnectionTunnel::__cordl_internal_get__StatusCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StatusCode_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__StatusCode_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StatusCode_k__BackingField = value;
}
constexpr ::StringW& System::Net::WebConnectionTunnel::__cordl_internal_get__StatusDescription_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StatusDescription_k__BackingField;
}
constexpr ::StringW const& System::Net::WebConnectionTunnel::__cordl_internal_get__StatusDescription_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StatusDescription_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__StatusDescription_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StatusDescription_k__BackingField = value;
}
constexpr ::ArrayW<::StringW>& System::Net::WebConnectionTunnel::__cordl_internal_get__Challenge_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Challenge_k__BackingField;
}
constexpr ::ArrayW<::StringW> const& System::Net::WebConnectionTunnel::__cordl_internal_get__Challenge_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Challenge_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__Challenge_k__BackingField(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Challenge_k__BackingField = value;
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::WebConnectionTunnel::__cordl_internal_get__Headers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Headers_k__BackingField;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::WebConnectionTunnel::__cordl_internal_get__Headers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Headers_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__Headers_k__BackingField(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Headers_k__BackingField = value;
}
constexpr ::System::Version*& System::Net::WebConnectionTunnel::__cordl_internal_get__ProxyVersion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProxyVersion_k__BackingField;
}
constexpr ::System::Version* const& System::Net::WebConnectionTunnel::__cordl_internal_get__ProxyVersion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProxyVersion_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__ProxyVersion_k__BackingField(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ProxyVersion_k__BackingField = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::WebConnectionTunnel::__cordl_internal_get__Data_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Data_k__BackingField;
}
constexpr ::ArrayW<uint8_t> const& System::Net::WebConnectionTunnel::__cordl_internal_get__Data_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Data_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__cordl_internal_set__Data_k__BackingField(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Data_k__BackingField = value;
}
inline ::System::Net::HttpWebRequest* System::Net::WebConnectionTunnel::get_Request() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_Request", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest*>(this, ___internal_method);
}
inline ::System::Uri* System::Net::WebConnectionTunnel::get_ConnectUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_ConnectUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::_ctor(::System::Net::HttpWebRequest* request, ::System::Uri* connectUri) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Net::HttpWebRequest*>(), ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, connectUri);
}
inline bool System::Net::WebConnectionTunnel::get_Success() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_Success", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_Success(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_Success", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebConnectionTunnel::get_CloseConnection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_CloseConnection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_CloseConnection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_CloseConnection", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::WebConnectionTunnel::get_StatusCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_StatusCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_StatusCode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_StatusCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebConnectionTunnel::set_StatusDescription(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_StatusDescription", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> System::Net::WebConnectionTunnel::get_Challenge() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_Challenge", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_Challenge(::ArrayW<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_Challenge", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::WebHeaderCollection* System::Net::WebConnectionTunnel::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_Headers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_Headers(::System::Net::WebHeaderCollection* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_Headers", {}, { ::i2c::type_of<::System::Net::WebHeaderCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Version* System::Net::WebConnectionTunnel::get_ProxyVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_ProxyVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_ProxyVersion(::System::Version* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_ProxyVersion", {}, { ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::Net::WebConnectionTunnel::get_Data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_Data(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "set_Data", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::Net::WebConnectionTunnel::Initialize(::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                                                           { "Initialize", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, stream, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t>, int32_t>>*
System::Net::WebConnectionTunnel::ReadHeaders(::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(),
                                                           { "ReadHeaders", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t>, int32_t>>*>(this, ___internal_method,
                                                                                                                                                                           stream, cancellationToken);
}
inline void System::Net::WebConnectionTunnel::FlushContents(::System::IO::Stream* stream, int32_t contentLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::WebConnectionTunnel*>(), { "FlushContents", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, contentLength);
}
inline ::System::Net::WebConnectionTunnel* System::Net::WebConnectionTunnel::New_ctor(::System::Net::HttpWebRequest* request, ::System::Uri* connectUri) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebConnectionTunnel*>(request, connectUri));
}
// Ctor Parameters []
constexpr ::System::Net::WebConnectionTunnel::WebConnectionTunnel() {}
