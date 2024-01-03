#pragma once
#include "System/Net/zzzz__WebConnectionTunnel_impl.hpp"
#include "System/Net/zzzz__WebHeaderCollection_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__WebConnectionTunnel__NtlmAuthState::__WebConnectionTunnel__NtlmAuthState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::__WebConnectionTunnel__NtlmAuthState::__WebConnectionTunnel__NtlmAuthState() {}
constexpr ::System::Net::__WebConnectionTunnel__NtlmAuthState System::Net::__WebConnectionTunnel__NtlmAuthState::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::__WebConnectionTunnel__NtlmAuthState System::Net::__WebConnectionTunnel__NtlmAuthState::Challenge{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::__WebConnectionTunnel__NtlmAuthState System::Net::__WebConnectionTunnel__NtlmAuthState::Response{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Net::__WebConnectionTunnel___Initialize_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebConnectionTunnel___Initialize_d__42::*)()>(
    &::System::Net::__WebConnectionTunnel___Initialize_d__42::MoveNext)> {
  constexpr static std::size_t size = 0xdd4;
  constexpr static std::size_t addrs = 0x29e0940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebConnectionTunnel___Initialize_d__42>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebConnectionTunnel___Initialize_d__42.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebConnectionTunnel___Initialize_d__42::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__WebConnectionTunnel___Initialize_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29e1714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebConnectionTunnel___Initialize_d__42>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::__WebConnectionTunnel___Initialize_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::__WebConnectionTunnel___Initialize_d__42::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebConnectionTunnel___Initialize_d__42>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__WebConnectionTunnel___Initialize_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebConnectionTunnel___Initialize_d__42>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebConnectionTunnel*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_have_auth_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t>>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__WebConnectionTunnel___Initialize_d__42::__WebConnectionTunnel___Initialize_d__42(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebConnectionTunnel* __4__this, ::System::IO::Stream* stream,
    ::System::Threading::CancellationToken cancellationToken, bool _have_auth_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>>
        __u__2) noexcept {
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
constexpr ::System::Net::__WebConnectionTunnel___Initialize_d__42::__WebConnectionTunnel___Initialize_d__42() {}
//  Writing Method size for method: ::System::Net::__WebConnectionTunnel___ReadHeaders_d__43.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebConnectionTunnel___ReadHeaders_d__43::*)()>(
    &::System::Net::__WebConnectionTunnel___ReadHeaders_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x29e1720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebConnectionTunnel___ReadHeaders_d__43>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebConnectionTunnel___ReadHeaders_d__43.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebConnectionTunnel___ReadHeaders_d__43::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__WebConnectionTunnel___ReadHeaders_d__43::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29e1edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebConnectionTunnel___ReadHeaders_d__43>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::__WebConnectionTunnel___ReadHeaders_d__43::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::__WebConnectionTunnel___ReadHeaders_d__43::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebConnectionTunnel___ReadHeaders_d__43>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__WebConnectionTunnel___ReadHeaders_d__43::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebConnectionTunnel___ReadHeaders_d__43>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t>>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "stream", ty: "::System::IO::Stream*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty: "::System::Net::WebConnectionTunnel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_retBuffer_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_status_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_buffer_5__4", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_ms_5__5", ty: "::System::IO::MemoryStream*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Net::__WebConnectionTunnel___ReadHeaders_d__43::__WebConnectionTunnel___ReadHeaders_d__43(
    int32_t __1__state,
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>> __t__builder,
    ::System::Threading::CancellationToken cancellationToken, ::System::IO::Stream* stream, ::System::Net::WebConnectionTunnel* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> _retBuffer_5__2,
    int32_t _status_5__3, ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer_5__4, ::System::IO::MemoryStream* _ms_5__5,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
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
constexpr ::System::Net::__WebConnectionTunnel___ReadHeaders_d__43::__WebConnectionTunnel___ReadHeaders_d__43() {}
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Request
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpWebRequest* (::System::Net::WebConnectionTunnel::*)()>(
    &::System::Net::WebConnectionTunnel::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e0714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_Request",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_ConnectUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_ConnectUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e071c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_ConnectUri",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::System::Net::HttpWebRequest*, ::System::Uri*)>(
    &::System::Net::WebConnectionTunnel::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29dee70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Success
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_Success)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e0724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_Success",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_Success
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebConnectionTunnel::*)(bool)>(&::System::Net::WebConnectionTunnel::set_Success)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29e072c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_Success", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_CloseConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_CloseConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e0738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(),
                                                                               "get_CloseConnection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_CloseConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebConnectionTunnel::*)(bool)>(&::System::Net::WebConnectionTunnel::set_CloseConnection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29e0740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_CloseConnection", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_StatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::WebConnectionTunnel::*)()>(&::System::Net::WebConnectionTunnel::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e074c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_StatusCode",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_StatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebConnectionTunnel::*)(int32_t)>(&::System::Net::WebConnectionTunnel::set_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e0754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_StatusCode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_StatusDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::StringW)>(
    &::System::Net::WebConnectionTunnel::set_StatusDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e075c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_StatusDescription",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Challenge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Net::WebConnectionTunnel::*)()>(
    &::System::Net::WebConnectionTunnel::get_Challenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e0764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_Challenge",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_Challenge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Net::WebConnectionTunnel::set_Challenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e076c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_Challenge", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::WebConnectionTunnel::*)()>(
    &::System::Net::WebConnectionTunnel::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e0774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_Headers",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::System::Net::WebHeaderCollection*)>(
    &::System::Net::WebConnectionTunnel::set_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e077c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_Headers", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_ProxyVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (::System::Net::WebConnectionTunnel::*)()>(
    &::System::Net::WebConnectionTunnel::get_ProxyVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e0784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_ProxyVersion",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_ProxyVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::System::Version*)>(
    &::System::Net::WebConnectionTunnel::set_ProxyVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e078c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_ProxyVersion", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.get_Data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Net::WebConnectionTunnel::*)()>(
    &::System::Net::WebConnectionTunnel::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e0794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_Data",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.set_Data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Net::WebConnectionTunnel::set_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e079c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_Data", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebConnectionTunnel::*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(&::System::Net::WebConnectionTunnel::Initialize)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x29dee9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.ReadHeaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>>* (
        ::System::Net::WebConnectionTunnel::*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(&::System::Net::WebConnectionTunnel::ReadHeaders)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x29e07a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "ReadHeaders", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnectionTunnel.FlushContents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebConnectionTunnel::*)(::System::IO::Stream*, int32_t)>(
    &::System::Net::WebConnectionTunnel::FlushContents)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x29e08ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "FlushContents", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::HttpWebRequest*& System::Net::WebConnectionTunnel::__get__Request_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Request_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpWebRequest*> const& System::Net::WebConnectionTunnel::__get__Request_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Request_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__set__Request_k__BackingField(::System::Net::HttpWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Request_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Uri*& System::Net::WebConnectionTunnel::__get__ConnectUri_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConnectUri_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Net::WebConnectionTunnel::__get__ConnectUri_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConnectUri_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__set__ConnectUri_k__BackingField(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ConnectUri_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpWebRequest*& System::Net::WebConnectionTunnel::__get_connectRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectRequest;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpWebRequest*> const& System::Net::WebConnectionTunnel::__get_connectRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectRequest;
}
constexpr void System::Net::WebConnectionTunnel::__set_connectRequest(::System::Net::HttpWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::__WebConnectionTunnel__NtlmAuthState& System::Net::WebConnectionTunnel::__get_ntlmAuthState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ntlmAuthState;
}
constexpr ::System::Net::__WebConnectionTunnel__NtlmAuthState const& System::Net::WebConnectionTunnel::__get_ntlmAuthState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ntlmAuthState;
}
constexpr void System::Net::WebConnectionTunnel::__set_ntlmAuthState(::System::Net::__WebConnectionTunnel__NtlmAuthState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ntlmAuthState = value;
}
constexpr bool& System::Net::WebConnectionTunnel::__get__Success_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Success_k__BackingField;
}
constexpr bool const& System::Net::WebConnectionTunnel::__get__Success_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Success_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__set__Success_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Success_k__BackingField = value;
}
constexpr bool& System::Net::WebConnectionTunnel::__get__CloseConnection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseConnection_k__BackingField;
}
constexpr bool const& System::Net::WebConnectionTunnel::__get__CloseConnection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseConnection_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__set__CloseConnection_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CloseConnection_k__BackingField = value;
}
constexpr int32_t& System::Net::WebConnectionTunnel::__get__StatusCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StatusCode_k__BackingField;
}
constexpr int32_t const& System::Net::WebConnectionTunnel::__get__StatusCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StatusCode_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__set__StatusCode_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StatusCode_k__BackingField = value;
}
constexpr ::StringW& System::Net::WebConnectionTunnel::__get__StatusDescription_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StatusDescription_k__BackingField;
}
constexpr ::StringW const& System::Net::WebConnectionTunnel::__get__StatusDescription_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StatusDescription_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__set__StatusDescription_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____StatusDescription_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Net::WebConnectionTunnel::__get__Challenge_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Challenge_k__BackingField;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Net::WebConnectionTunnel::__get__Challenge_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Challenge_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__set__Challenge_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Challenge_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::WebConnectionTunnel::__get__Headers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Headers_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& System::Net::WebConnectionTunnel::__get__Headers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Headers_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__set__Headers_k__BackingField(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Headers_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Version*& System::Net::WebConnectionTunnel::__get__ProxyVersion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProxyVersion_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& System::Net::WebConnectionTunnel::__get__ProxyVersion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProxyVersion_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__set__ProxyVersion_k__BackingField(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ProxyVersion_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Net::WebConnectionTunnel::__get__Data_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Data_k__BackingField;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Net::WebConnectionTunnel::__get__Data_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Data_k__BackingField;
}
constexpr void System::Net::WebConnectionTunnel::__set__Data_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Data_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::HttpWebRequest* System::Net::WebConnectionTunnel::get_Request() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_Request",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest*, false>(this, ___internal_method);
}
inline ::System::Uri* System::Net::WebConnectionTunnel::get_ConnectUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_ConnectUri",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline ::System::Net::WebConnectionTunnel* System::Net::WebConnectionTunnel::New_ctor(::System::Net::HttpWebRequest* request, ::System::Uri* connectUri) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::WebConnectionTunnel*>(request, connectUri));
}
inline void System::Net::WebConnectionTunnel::_ctor(::System::Net::HttpWebRequest* request, ::System::Uri* connectUri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, connectUri);
}
inline bool System::Net::WebConnectionTunnel::get_Success() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_Success",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_Success(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_Success", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::WebConnectionTunnel::get_CloseConnection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_CloseConnection",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_CloseConnection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_CloseConnection", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Net::WebConnectionTunnel::get_StatusCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_StatusCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_StatusCode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_StatusCode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::WebConnectionTunnel::set_StatusDescription(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_StatusDescription", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Net::WebConnectionTunnel::get_Challenge() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_Challenge",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_Challenge(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_Challenge", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::WebHeaderCollection* System::Net::WebConnectionTunnel::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_Headers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*, false>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_Headers(::System::Net::WebHeaderCollection* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_Headers", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Version* System::Net::WebConnectionTunnel::get_ProxyVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_ProxyVersion",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_ProxyVersion(::System::Version* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_ProxyVersion", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Net::WebConnectionTunnel::get_Data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "get_Data",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void System::Net::WebConnectionTunnel::set_Data(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "set_Data", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::Net::WebConnectionTunnel::Initialize(::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, stream, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>>*
System::Net::WebConnectionTunnel::ReadHeaders(::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "ReadHeaders", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t>>*, false>(
      this, ___internal_method, stream, cancellationToken);
}
inline void System::Net::WebConnectionTunnel::FlushContents(::System::IO::Stream* stream, int32_t contentLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebConnectionTunnel*>::get(), "FlushContents", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, contentLength);
}
// Ctor Parameters []
constexpr ::System::Net::WebConnectionTunnel::WebConnectionTunnel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
