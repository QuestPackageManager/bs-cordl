#pragma once
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_impl.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_def.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSerializer_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__SmallBufferPool_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "BGNet/Core/zzzz__IAnalyticsManager_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "BGNet/Core/Messages/zzzz__BaseAcknowledgeMessage_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableResponse_def.hpp"
#include "System/zzzz__Func_5_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "GlobalNamespace/zzzz__ExpiringDictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__PacketEncryptionLayer_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedUnreliableMessage_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "GlobalNamespace/zzzz__IUnconnectedMessageReceiver_def.hpp"
#include "GlobalNamespace/zzzz__IUnconnectedMessageSender_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__BaseMultipartMessage_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMultipartMessage_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState.get_isEncrypted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::get_isEncrypted)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xde5ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(),
                                                 "get_isEncrypted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState.GetNextRequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::GetNextRequestId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xde5a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(),
                                                 "GetNextRequestId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState.BeginSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::BeginSession)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xde59a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "BeginSession",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState.IsValidSessionStartRequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::*)(uint32_t)>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::IsValidSessionStartRequestId)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xde5ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "IsValidSessionStartRequestId",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState.BeginSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::*)(uint32_t)>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::BeginSession)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xde5a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "BeginSession",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState.SetEpoch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::*)(uint32_t)>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::SetEpoch)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xde5d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "SetEpoch",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState.CanAcceptRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::*)(uint32_t)>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::CanAcceptRequest)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xde42d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "CanAcceptRequest",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState.SetEncryptionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::*)(
    ::GlobalNamespace::__EncryptionUtility__IEncryptionState*)>(&::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::SetEncryptionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde5db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "SetEncryptionState", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState.SetIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::*)(uint32_t, ::StringW, ::StringW)>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::SetIdentity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xde5dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "SetIdentity", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState.VerifyIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::*)(uint32_t, ::StringW, ::StringW)>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::VerifyIdentity)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xde5dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "VerifyIdentity", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xde5e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "Dispose",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState.LogD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::LogD)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xde5e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "LogD",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xde5a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::StringW& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__protocolVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____protocolVersion;
}
constexpr uint32_t const& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__protocolVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____protocolVersion;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__set__protocolVersion(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____protocolVersion = value;
}
constexpr bool& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__hasIdentity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasIdentity;
}
constexpr bool const& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__hasIdentity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasIdentity;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__set__hasIdentity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasIdentity = value;
}
constexpr ::GlobalNamespace::__EncryptionUtility__IEncryptionState*& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__encryptionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionState;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> const&
BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__encryptionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionState;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__set__encryptionState(::GlobalNamespace::__EncryptionUtility__IEncryptionState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encryptionState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__lastReceivedRequestIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReceivedRequestIndex;
}
constexpr int32_t const& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__lastReceivedRequestIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReceivedRequestIndex;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__set__lastReceivedRequestIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastReceivedRequestIndex = value;
}
constexpr uint32_t& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__lastReceivedRequestId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReceivedRequestId;
}
constexpr uint32_t const& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__lastReceivedRequestId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReceivedRequestId;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__set__lastReceivedRequestId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastReceivedRequestId = value;
}
constexpr int32_t& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__receivedRequestCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedRequestCount;
}
constexpr int32_t const& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__receivedRequestCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedRequestCount;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__set__receivedRequestCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receivedRequestCount = value;
}
constexpr ::ArrayW<bool, ::Array<bool>*>& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__receivedRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedRequest;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__receivedRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receivedRequest;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__set__receivedRequest(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____receivedRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__currentRequestId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentRequestId;
}
constexpr uint32_t const& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__currentRequestId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentRequestId;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__set__currentRequestId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentRequestId = value;
}
constexpr uint32_t& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__currentEpoch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentEpoch;
}
constexpr uint32_t const& BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__get__currentEpoch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentEpoch;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__set__currentEpoch(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentEpoch = value;
}
inline bool BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::get_isEncrypted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "get_isEncrypted",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline uint32_t BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::GetNextRequestId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(),
                                               "GetNextRequestId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::BeginSession() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "BeginSession",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::IsValidSessionStartRequestId(uint32_t requestId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "IsValidSessionStartRequestId",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, requestId);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::BeginSession(uint32_t requestId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "BeginSession",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestId);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::SetEpoch(uint32_t epoch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "SetEpoch",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, epoch);
}
inline bool BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::CanAcceptRequest(uint32_t requestId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "CanAcceptRequest",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, requestId);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::SetEncryptionState(::GlobalNamespace::__EncryptionUtility__IEncryptionState* encryptionState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "SetEncryptionState", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encryptionState);
}
/// @param userName: ::StringW (default: nullptr)
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::SetIdentity(uint32_t protocolVersion, ::StringW userId, ::StringW userName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "SetIdentity", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocolVersion, userId, userName);
}
/// @param userName: ::StringW (default: nullptr)
inline bool BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::VerifyIdentity(uint32_t protocolVersion, ::StringW userId, ::StringW userName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "VerifyIdentity", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, protocolVersion, userId, userName);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::LogD(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), "LogD",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState* BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>());
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState::__UnconnectedMessageHandler__ConnectionState() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::*)(
    ::System::Net::IPEndPoint*, uint32_t)>(&::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde4688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::*)(
    ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId)>(&::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xde5edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>::get(), "Equals", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::*)(::System::Object*)>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xde5f1c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::GetHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xde5fa4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>"
constexpr BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::operator ::System::IEquatable_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>*() {
  return static_cast<::System::IEquatable_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::_ctor(::System::Net::IPEndPoint* endPoint, uint32_t requestId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, requestId);
}
inline bool BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::Equals(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>::get(), "Equals", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::Equals(::System::Object* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>::get(), "Equals",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::GetHashCode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId>::get(), "GetHashCode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::__UnconnectedMessageHandler__RequestWaiterId(::System::Net::IPEndPoint* endPoint, uint32_t requestId) noexcept {
  this->endPoint = endPoint;
  this->requestId = requestId;
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId::__UnconnectedMessageHandler__RequestWaiterId() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde5fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter*>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter* BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter*>());
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiter::__UnconnectedMessageHandler__RequestWaiter() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::*)(
    ::System::Threading::CancellationToken, ::System::Threading::CancellationToken)>(&::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xde5fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::Dispose)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xde612c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::*)(bool)>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::Complete)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xde4694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>::get(), "Complete",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::Cancel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xde626c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>::get(), "Cancel",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter.get_task
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::get_task)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xde62bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>::get(), "get_task",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter.get_isWaiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::get_isWaiting)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xde6208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>::get(),
                                                 "get_isWaiting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::__get__taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const&
BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::__get__taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::__set__taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____taskCompletionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenRegistration& BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::__get__disposedCancellationTokenRegistration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposedCancellationTokenRegistration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::__get__disposedCancellationTokenRegistration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposedCancellationTokenRegistration;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::__set__disposedCancellationTokenRegistration(::System::Threading::CancellationTokenRegistration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposedCancellationTokenRegistration = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::__get__requestCancellationTokenRegistration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestCancellationTokenRegistration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::__get__requestCancellationTokenRegistration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestCancellationTokenRegistration;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::__set__requestCancellationTokenRegistration(::System::Threading::CancellationTokenRegistration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestCancellationTokenRegistration = value;
}
inline ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*
BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::New_ctor(::System::Threading::CancellationToken disposedCancellationToken,
                                                                                ::System::Threading::CancellationToken requestCancellationToken) {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>(disposedCancellationToken, requestCancellationToken));
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::_ctor(::System::Threading::CancellationToken disposedCancellationToken,
                                                                                         ::System::Threading::CancellationToken requestCancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposedCancellationToken, requestCancellationToken);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param handled: bool (default: true)
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::Complete(bool handled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>::get(), "Complete",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handled);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::Cancel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>::get(), "Cancel",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::get_task() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>::get(), "get_task",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline bool BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::get_isWaiting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>::get(), "get_isWaiting",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter::__UnconnectedMessageHandler__SentRequestWaiter() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::*)(
    ::System::Threading::CancellationToken, ::System::Threading::CancellationToken)>(&::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xde6304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::Dispose)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xde6458;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::*)(
    ::BGNet::Core::Messages::IUnconnectedMessage*)>(&::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::Complete)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xde4768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(), "Complete", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter.Fail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::*)(::System::Exception*)>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::Fail)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xde6598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(), "Fail",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::Cancel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xde65f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(), "Cancel",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter.get_task
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedMessage*>* (
    ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::*)()>(&::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::get_task)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xde6640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(),
                                                 "get_task", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter.get_isWaiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::get_isWaiting)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xde6534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(),
                                                 "get_isWaiting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::BGNet::Core::Messages::IUnconnectedMessage*>*&
BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::__get__taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::BGNet::Core::Messages::IUnconnectedMessage*>*> const&
BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::__get__taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::__set__taskCompletionSource(
    ::System::Threading::Tasks::TaskCompletionSource_1<::BGNet::Core::Messages::IUnconnectedMessage*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____taskCompletionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenRegistration& BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::__get__disposedCancellationTokenRegistration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposedCancellationTokenRegistration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::__get__disposedCancellationTokenRegistration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposedCancellationTokenRegistration;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::__set__disposedCancellationTokenRegistration(::System::Threading::CancellationTokenRegistration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposedCancellationTokenRegistration = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::__get__requestCancellationTokenRegistration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestCancellationTokenRegistration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::__get__requestCancellationTokenRegistration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestCancellationTokenRegistration;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::__set__requestCancellationTokenRegistration(::System::Threading::CancellationTokenRegistration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestCancellationTokenRegistration = value;
}
inline ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*
BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::New_ctor(::System::Threading::CancellationToken disposedCancellationToken,
                                                                                    ::System::Threading::CancellationToken requestCancellationToken) {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>(disposedCancellationToken, requestCancellationToken));
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::_ctor(::System::Threading::CancellationToken disposedCancellationToken,
                                                                                             ::System::Threading::CancellationToken requestCancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposedCancellationToken, requestCancellationToken);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::Complete(::BGNet::Core::Messages::IUnconnectedMessage* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(), "Complete", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, response);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::Fail(::System::Exception* ex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(), "Fail",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::Cancel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(), "Cancel",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedMessage*>* BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::get_task() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(), "get_task",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedMessage*>*, false>(this, ___internal_method);
}
inline bool BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::get_isWaiting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(),
                                               "get_isWaiting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter::__UnconnectedMessageHandler__RequestResponseWaiter() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::*)(
    ::GlobalNamespace::SmallBufferPool*)>(&::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xde6688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SmallBufferPool*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xde6718;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter.Append
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::*)(
    ::BGNet::Core::Messages::IUnconnectedMultipartMessage*)>(&::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::Append)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0xde6750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>::get(), "Append", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMultipartMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter.get_isWaiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::get_isWaiting)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xde6df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>::get(),
                                                 "get_isWaiting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter.get_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (
    ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::*)()>(&::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde6e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>::get(),
                                                 "get_data", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter.get_length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::get_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde6e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>::get(),
                                                 "get_length", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SmallBufferPool*& BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__get__bufferPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SmallBufferPool*> const& BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__get__bufferPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferPool;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__set__bufferPool(::GlobalNamespace::SmallBufferPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bufferPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__get__length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr int32_t const& BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__get__length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__set__length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>*& BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__get__ranges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ranges;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>*> const&
BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__get__ranges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ranges;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__set__ranges(::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ranges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__get__isComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isComplete;
}
constexpr bool const& BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__get__isComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isComplete;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__set__isComplete(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isComplete = value;
}
constexpr bool& BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__get__isDisposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDisposed;
}
constexpr bool const& BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__get__isDisposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDisposed;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__set__isDisposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDisposed = value;
}
inline ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*
BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::New_ctor(::GlobalNamespace::SmallBufferPool* bufferPool) {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>(bufferPool));
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::_ctor(::GlobalNamespace::SmallBufferPool* bufferPool) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SmallBufferPool*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferPool);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::Append(::BGNet::Core::Messages::IUnconnectedMultipartMessage* packet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>::get(), "Append", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMultipartMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline bool BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::get_isWaiting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>::get(),
                                               "get_isWaiting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::get_data() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>::get(), "get_data",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::get_length() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>::get(),
                                               "get_length", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter::__UnconnectedMessageHandler__MultipartMessageWaiter() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin::*)(::System::Net::IPEndPoint*, uint32_t)>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde5938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin::_ctor(::System::Net::IPEndPoint* endPoint, uint32_t protocolVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, protocolVersion);
}
// Ctor Parameters [CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin::__UnconnectedMessageHandler__MessageOrigin(::System::Net::IPEndPoint* endPoint, uint32_t protocolVersion) noexcept {
  this->endPoint = endPoint;
  this->protocolVersion = protocolVersion;
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin::__UnconnectedMessageHandler__MessageOrigin() {}
template <typename T> constexpr ::System::Func_2<uint32_t, T>*& BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>::__get_obtain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obtain;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<uint32_t, T>*> const& BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>::__get_obtain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obtain;
}
template <typename T> constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>::__set_obtain(::System::Func_2<uint32_t, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obtain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>* BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>*>());
}
template <typename T> inline void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline T BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>::_ObtainVersioned_b__0(::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>*>::get(), "<ObtainVersioned>b__0",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, origin);
}
// Ctor Parameters []
template <typename T> constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>::__UnconnectedMessageHandler____c__DisplayClass46_0_1() {}
template <typename T> constexpr ::BGNet::Core::Messages::UnconnectedMessageHandler*& BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::Messages::UnconnectedMessageHandler*> const&
BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>::__set___4__this(::BGNet::Core::Messages::UnconnectedMessageHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*&
BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>::__get_customHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customHandler;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*> const&
BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>::__get_customHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customHandler;
}
template <typename T>
constexpr void
BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>::__set_customHandler(::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>* BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>*>());
}
template <typename T> inline void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>::_CustomResponseHandler_b__0(T packet,
                                                                                                                        ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>*>::get(), "<CustomResponseHandler>b__0",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, origin);
}
// Ctor Parameters []
template <typename T> constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>::__UnconnectedMessageHandler____c__DisplayClass52_0_1() {}
template <typename T> constexpr ::BGNet::Core::Messages::UnconnectedMessageHandler*& BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::Messages::UnconnectedMessageHandler*> const&
BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>::__set___4__this(::BGNet::Core::Messages::UnconnectedMessageHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*&
BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>::__get_customHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customHandler;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*> const&
BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>::__get_customHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customHandler;
}
template <typename T>
constexpr void
BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>::__set_customHandler(::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>* BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>*>());
}
template <typename T> inline void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void
BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>::_CustomUnreliableResponseHandler_b__0(T packet,
                                                                                                                      ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>*>::get(), "<CustomUnreliableResponseHandler>b__0",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, origin);
}
// Ctor Parameters []
template <typename T> constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>::__UnconnectedMessageHandler____c__DisplayClass53_0_1() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TRequest, typename TResponse>
constexpr BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponse_d__57_2<TRequest, TResponse>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TRequest, typename TResponse> inline void BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponse_d__57_2<TRequest, TResponse>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponse_d__57_2<TRequest, TResponse>>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TRequest, typename TResponse>
inline void
BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponse_d__57_2<TRequest, TResponse>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponse_d__57_2<TRequest, TResponse>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::UnconnectedMessageHandler*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "origin", ty:
// "::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin", modifiers: "", def_value: Some("{}") }, CppParam { name: "tryGetResponse", ty:
// "::System::Func_3<TRequest,::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin,::System::Threading::Tasks::Task_1<TResponse>*>*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "getFailureResponse", ty: "::System::Func_1<TResponse>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
template <typename TRequest, typename TResponse>
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponse_d__57_2<TRequest, TResponse>::__UnconnectedMessageHandler___GetAndSendResponse_d__57_2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this, TRequest request,
    ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin,
    ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse,
    ::System::Func_1<TResponse>* getFailureResponse, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->request = request;
  this->origin = origin;
  this->tryGetResponse = tryGetResponse;
  this->getFailureResponse = getFailureResponse;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename TRequest, typename TResponse>
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponse_d__57_2<TRequest, TResponse>::__UnconnectedMessageHandler___GetAndSendResponse_d__57_2() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TRequest, typename TResponse>
constexpr BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2<TRequest, TResponse>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TRequest, typename TResponse> inline void BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2<TRequest, TResponse>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2<TRequest, TResponse>>::get(), "MoveNext",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TRequest, typename TResponse>
inline void
BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2<TRequest, TResponse>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2<TRequest, TResponse>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "tryGetResponse", ty:
// "::System::Func_3<TRequest,::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin,::System::Threading::Tasks::Task_1<TResponse>*>*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "origin", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "getFailureResponse", ty: "::System::Func_1<TResponse>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty:
// "::BGNet::Core::Messages::UnconnectedMessageHandler*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_response_5__2", ty: "TResponse", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>", modifiers: "", def_value: Some("{}") }]
template <typename TRequest, typename TResponse>
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2<TRequest, TResponse>::__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
    ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse, TRequest request,
    ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin, ::System::Func_1<TResponse>* getFailureResponse, ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this,
    TResponse _response_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->tryGetResponse = tryGetResponse;
  this->request = request;
  this->origin = origin;
  this->getFailureResponse = getFailureResponse;
  this->__4__this = __4__this;
  this->_response_5__2 = _response_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename TRequest, typename TResponse>
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2<TRequest, TResponse>::__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TRequest, typename TResponse>
constexpr BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2<TRequest, TResponse>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TRequest, typename TResponse> inline void BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2<TRequest, TResponse>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2<TRequest, TResponse>>::get(), "MoveNext",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TRequest, typename TResponse>
inline void
BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2<TRequest, TResponse>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2<TRequest, TResponse>>::get(),
      "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "tryGetResponse", ty:
// "::System::Func_3<TRequest,::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin,::System::Threading::Tasks::Task_1<TResponse>*>*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "origin", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "getFailureResponse", ty: "::System::Func_1<TResponse>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty:
// "::BGNet::Core::Messages::UnconnectedMessageHandler*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_response_5__2", ty: "TResponse", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>", modifiers: "", def_value: Some("{}") }]
template <typename TRequest, typename TResponse>
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2<TRequest, TResponse>::__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
    ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse, TRequest request,
    ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin, ::System::Func_1<TResponse>* getFailureResponse, ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this,
    TResponse _response_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->tryGetResponse = tryGetResponse;
  this->request = request;
  this->origin = origin;
  this->getFailureResponse = getFailureResponse;
  this->__4__this = __4__this;
  this->_response_5__2 = _response_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename TRequest, typename TResponse>
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2<TRequest, TResponse>::__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72::MoveNext)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xde6e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde70c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::UnconnectedMessageHandler*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "remoteEndPoint", ty:
// "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "message", ty: "::BGNet::Core::Messages::IUnconnectedReliableRequest*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__UnconnectedMessageHandler___SendMessageWithRetry_d__72(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this, uint32_t protocolVersion,
    ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->protocolVersion = protocolVersion;
  this->remoteEndPoint = remoteEndPoint;
  this->message = message;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__UnconnectedMessageHandler___SendMessageWithRetry_d__72() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde70d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0._SendMultipartMessageWithRetryAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::*)(::BGNet::Core::Messages::IUnconnectedReliableRequest*)>(
        &::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::_SendMultipartMessageWithRetryAsync_b__0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xde70dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0*>::get(), "<SendMultipartMessageWithRetryAsync>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BGNet::Core::Messages::UnconnectedMessageHandler*& BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::Messages::UnconnectedMessageHandler*> const&
BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::__set___4__this(::BGNet::Core::Messages::UnconnectedMessageHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::__get_protocolVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___protocolVersion;
}
constexpr uint32_t const& BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::__get_protocolVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___protocolVersion;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::__set_protocolVersion(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___protocolVersion = value;
}
constexpr ::System::Net::IPEndPoint*& BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::__get_remoteEndPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteEndPoint;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::__get_remoteEndPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteEndPoint;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::__set_remoteEndPoint(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___remoteEndPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationToken& BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::__get_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::__get_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::__set_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancellationToken = value;
}
inline ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0* BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0*>());
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task*
BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::_SendMultipartMessageWithRetryAsync_b__0(::BGNet::Core::Messages::IUnconnectedReliableRequest* mm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0*>::get(), "<SendMultipartMessageWithRetryAsync>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, mm);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0::__UnconnectedMessageHandler____c__DisplayClass74_0() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::MoveNext)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0xde71d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde79d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::UnconnectedMessageHandler*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "remoteEndPoint", ty:
// "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "message", ty: "::BGNet::Core::Messages::IUnconnectedReliableRequest*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "data", ty:
// "::LiteNetLib::Utils::NetDataWriter*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "onSendFailed", ty:
// "::System::Func_5<uint32_t,::System::Net::IPEndPoint*,::BGNet::Core::Messages::IUnconnectedReliableRequest*,::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "__8__1", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "_shouldReleaseMessage_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this, uint32_t protocolVersion,
    ::System::Net::IPEndPoint* remoteEndPoint, ::System::Threading::CancellationToken cancellationToken, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
    ::LiteNetLib::Utils::NetDataWriter* data,
    ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*
        onSendFailed,
    ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass74_0* __8__1, bool _shouldReleaseMessage_5__2, ::System::Object* __7__wrap2, int32_t __7__wrap3,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->protocolVersion = protocolVersion;
  this->remoteEndPoint = remoteEndPoint;
  this->cancellationToken = cancellationToken;
  this->message = message;
  this->data = data;
  this->onSendFailed = onSendFailed;
  this->__8__1 = __8__1;
  this->_shouldReleaseMessage_5__2 = _shouldReleaseMessage_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->__7__wrap3 = __7__wrap3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::*)()>(
    &::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::MoveNext)> {
  constexpr static std::size_t size = 0x98c;
  constexpr static std::size_t addrs = 0xde79dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde8368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::UnconnectedMessageHandler*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "remoteEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "message", ty: "::BGNet::Core::Messages::IUnconnectedReliableRequest*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSendFailed", ty:
// "::System::Func_5<uint32_t,::System::Net::IPEndPoint*,::BGNet::Core::Messages::IUnconnectedReliableRequest*,::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "_sentRequest_5__2", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "_waiterId_5__3", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_shouldReleaseMessage_5__4", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "__7__wrap5", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__7", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, uint32_t protocolVersion,
    ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*
        onSendFailed,
    ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter* _sentRequest_5__2, ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__3,
    bool _shouldReleaseMessage_5__4, ::System::Object* __7__wrap4, int32_t __7__wrap5, int32_t _i_5__7, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->remoteEndPoint = remoteEndPoint;
  this->message = message;
  this->protocolVersion = protocolVersion;
  this->onSendFailed = onSendFailed;
  this->_sentRequest_5__2 = _sentRequest_5__2;
  this->_waiterId_5__3 = _waiterId_5__3;
  this->_shouldReleaseMessage_5__4 = _shouldReleaseMessage_5__4;
  this->__7__wrap4 = __7__wrap4;
  this->__7__wrap5 = __7__wrap5;
  this->_i_5__7 = _i_5__7;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1<T>>::get(), "MoveNext",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void
BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::UnconnectedMessageHandler*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "remoteEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "message", ty: "::BGNet::Core::Messages::IUnconnectedReliableRequest*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSendFailedAwaitResponse", ty:
// "::System::Func_5<uint32_t,::System::Net::IPEndPoint*,::BGNet::Core::Messages::IUnconnectedReliableRequest*,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<T>*>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_request_5__2", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_waiterId_5__3", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedMessage*>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1<T>::__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, uint32_t protocolVersion,
    ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>*
        onSendFailedAwaitResponse,
    ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter* _request_5__2, ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedMessage*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->remoteEndPoint = remoteEndPoint;
  this->message = message;
  this->protocolVersion = protocolVersion;
  this->onSendFailedAwaitResponse = onSendFailedAwaitResponse;
  this->_request_5__2 = _request_5__2;
  this->_waiterId_5__3 = _waiterId_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename T>
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1<T>::__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr GlobalNamespace::__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d<T>>::get(), "MoveNext",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d<T>::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d<T>>::get(),
      "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "remoteEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "message", ty:
// "::BGNet::Core::Messages::IUnconnectedReliableRequest*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d<
    T>::__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                     ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>* __4__this,
                                                                                                     uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                                                     ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
                                                                                                     ::System::Threading::CancellationToken cancellationToken,
                                                                                                     ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter* __7__wrap1,
                                                                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->protocolVersion = protocolVersion;
  this->remoteEndPoint = remoteEndPoint;
  this->message = message;
  this->cancellationToken = cancellationToken;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T>
constexpr ::GlobalNamespace::__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d<
    T>::__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d() {}
template <typename T>
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*& BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>::__get_waiter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waiter;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*> const&
BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>::__get_waiter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waiter;
}
template <typename T>
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>::__set_waiter(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___waiter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken,
                           ::System::Threading::Tasks::Task_1<T>*>*&
BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>::__get_onSendFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSendFailed;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken,
                                                               ::System::Threading::Tasks::Task_1<T>*>*> const&
BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>::__get_onSendFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSendFailed;
}
template <typename T>
constexpr void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>::__set_onSendFailed(
    ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSendFailed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>* BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>*>());
}
template <typename T> inline void BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Threading::Tasks::Task* BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>::_WrapOnSendFailedAwaitResponse_b__0(
    uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>*>::get(),
                                               "<WrapOnSendFailedAwaitResponse>b__0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, protocolVersion, remoteEndPoint, message, cancellationToken);
}
// Ctor Parameters []
template <typename T> constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>::__UnconnectedMessageHandler____c__DisplayClass77_0_1() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr BGNet::Core::Messages::__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void BGNet::Core::Messages::__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1<T>>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void BGNet::Core::Messages::__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::UnconnectedMessageHandler*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "remoteEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_waiterId_5__2", ty: "::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedMessage*>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1<T>::__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::BGNet::Core::Messages::UnconnectedMessageHandler* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Net::IPEndPoint* remoteEndPoint, uint32_t requestId,
    ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedMessage*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->remoteEndPoint = remoteEndPoint;
  this->requestId = requestId;
  this->_waiterId_5__2 = _waiterId_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::BGNet::Core::Messages::__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1<T>::__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1() {}
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.get_encryptionLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketEncryptionLayer* (::BGNet::Core::Messages::UnconnectedMessageHandler::*)()>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::get_encryptionLayer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xdddc54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                                                               "get_encryptionLayer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.get_timeProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::ITimeProvider* (::BGNet::Core::Messages::UnconnectedMessageHandler::*)()>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::get_timeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde3d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                                                               "get_timeProvider", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(
    ::GlobalNamespace::IUnconnectedMessageSender*, ::BGNet::Core::ITimeProvider*, ::BGNet::Core::ITaskUtility*, ::BGNet::Core::IAnalyticsManager*)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::_ctor)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xddebbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IUnconnectedMessageSender*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.ShouldHandleMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(
    ::BGNet::Core::Messages::IUnconnectedMessage*, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::ShouldHandleMessage)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xddfd1c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.GetMessageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(::BGNet::Core::Messages::IUnconnectedMessage*)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::GetMessageType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xddfb90;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.GetMultipartMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::BaseMultipartMessage* (
    ::BGNet::Core::Messages::UnconnectedMessageHandler::*)(::BGNet::Core::Messages::IUnconnectedMessage*)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::GetMultipartMessage)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xde3d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "GetMultipartMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.GetAcknowledgeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::BaseAcknowledgeMessage* (
    ::BGNet::Core::Messages::UnconnectedMessageHandler::*)(::BGNet::Core::Messages::IUnconnectedMessage*)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::GetAcknowledgeMessage)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xde3e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "GetAcknowledgeMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.IsUnhandledMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(
    ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::IsUnhandledMessage)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0xde3ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "IsUnhandledMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.CompleteSend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(
    ::BGNet::Core::Messages::IUnconnectedResponse*, ::System::Net::IPEndPoint*)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::CompleteSend)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xde44fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "CompleteSend", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedResponse*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.CompleteRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(
    ::BGNet::Core::Messages::IUnconnectedReliableResponse*, ::System::Net::IPEndPoint*)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::CompleteRequest)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xde43f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "CompleteRequest", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableResponse*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.SendUnreliableMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(
    uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedUnreliableMessage*)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::SendUnreliableMessage)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xde4840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendUnreliableMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedUnreliableMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.SendUnreliableResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(
    uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::BGNet::Core::Messages::IUnconnectedResponse*)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::SendUnreliableResponse)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xde0374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendUnreliableResponse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.SendUnreliableResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(
    uint32_t, ::System::Net::IPEndPoint*, uint32_t, ::BGNet::Core::Messages::IUnconnectedResponse*)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::SendUnreliableResponse)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xde41c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendUnreliableResponse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.SendReliableRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(
    uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableRequest)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xde4a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendReliableRequest", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.SendReliableRequestAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                           ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                            ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*,
                                                           ::System::Threading::CancellationToken)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableRequestAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xde4c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendReliableRequestAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                   ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.SendReliableResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(
    uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::BGNet::Core::Messages::IUnconnectedReliableResponse*, ::System::Threading::CancellationToken)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponse)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xde4de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendReliableResponse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableResponse*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.SendReliableResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(
    uint32_t, ::System::Net::IPEndPoint*, uint32_t, ::BGNet::Core::Messages::IUnconnectedReliableResponse*, ::System::Threading::CancellationToken)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponse)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xde1ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendReliableResponse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableResponse*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.SendReliableResponseAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                           ::BGNet::Core::Messages::IUnconnectedReliableResponse*, ::System::Threading::CancellationToken)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponseAsync)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xde4f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendReliableResponseAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableResponse*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.SendMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(
    uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedMessage*)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::SendMessage)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xde48cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendMessage", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.SendMessageWithRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(
    uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::SendMessageWithRetry)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xde4b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendMessageWithRetry", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.SendMessageWithRetryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                           ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                            ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*,
                                                           ::System::Threading::CancellationToken)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::SendMessageWithRetryAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xde4d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendMessageWithRetryAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                   ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.SendMultipartMessageWithRetryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::LiteNetLib::Utils::NetDataWriter*,
                                                           ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                            ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*,
                                                           ::System::Threading::CancellationToken)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::SendMultipartMessageWithRetryAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xde526c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendMultipartMessageWithRetryAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                   ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.SendMessageWithRetryAsyncInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                           ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                            ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*,
                                                           ::System::Threading::CancellationToken)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::SendMessageWithRetryAsyncInternal)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xde538c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendMessageWithRetryAsyncInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                   ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.WaitForRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BGNet::Core::Messages::UnconnectedMessageHandler::*)(int32_t, ::System::Threading::CancellationToken)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::WaitForRetry)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xde549c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "WaitForRetry", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NetDataWriter* (
    ::BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, ::BGNet::Core::Messages::IUnconnectedMessage*)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::Write)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xde5140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "Write", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.PollUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)()>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::PollUpdate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xddf960;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.ReceiveUnconnectedMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(
    ::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataReader*)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::ReceiveUnconnectedMessage)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xde5754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "ReceiveUnconnectedMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.ShouldHandleMessageFromEndPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(::System::Net::IPEndPoint*)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::ShouldHandleMessageFromEndPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde5944;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.ReceivedMessageException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(::System::Net::IPEndPoint*, ::System::Exception*)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::ReceivedMessageException)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xde594c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.BeginSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(::System::Net::IPEndPoint*)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::BeginSession)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xddc248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "BeginSession", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.BeginSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(::System::Net::IPEndPoint*, uint32_t)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::BeginSession)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xde000c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "BeginSession", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.GetNextRequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(::System::Net::IPEndPoint*)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::GetNextRequestId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xdddab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "GetNextRequestId", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.GetConnectionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState* (
    ::BGNet::Core::Messages::UnconnectedMessageHandler::*)(::System::Net::IPEndPoint*)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::GetConnectionState)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xdddcf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "GetConnectionState",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.IsValidSessionStartRequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(::System::Net::IPEndPoint*, uint32_t)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::IsValidSessionStartRequestId)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xde0298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "IsValidSessionStartRequestId", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.IsConnectionStateEncrypted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::UnconnectedMessageHandler::*)(::System::Net::IPEndPoint*)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::IsConnectionStateEncrypted)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xde5b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "IsConnectionStateEncrypted",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.GetSerializer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* (
    ::BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, uint32_t, bool)>(&::BGNet::Core::Messages::UnconnectedMessageHandler::GetSerializer)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xde5618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "GetSerializer", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::UnconnectedMessageHandler::*)()>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::Dispose)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xde5c4c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::UnconnectedMessageHandler.CreateHandshakeHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::BGNet::Core::Messages::UnconnectedMessageHandler::CreateHandshakeHeader)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xddf884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "CreateHandshakeHeader", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IUnconnectedMessageReceiver"
constexpr BGNet::Core::Messages::UnconnectedMessageHandler::operator ::GlobalNamespace::IUnconnectedMessageReceiver*() noexcept {
  return static_cast<::GlobalNamespace::IUnconnectedMessageReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr BGNet::Core::Messages::UnconnectedMessageHandler::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BGNet::Core::Messages::UnconnectedMessageHandler::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*>*&
BGNet::Core::Messages::UnconnectedMessageHandler::__get__serializers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializers;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*>*> const&
BGNet::Core::Messages::UnconnectedMessageHandler::__get__serializers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializers;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__serializers(
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serializers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseMultipartMessage*>*>*&
BGNet::Core::Messages::UnconnectedMessageHandler::__get__multipartMessageRegistry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multipartMessageRegistry;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseMultipartMessage*>*>*> const&
BGNet::Core::Messages::UnconnectedMessageHandler::__get__multipartMessageRegistry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multipartMessageRegistry;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__multipartMessageRegistry(
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseMultipartMessage*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multipartMessageRegistry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseAcknowledgeMessage*>*>*&
BGNet::Core::Messages::UnconnectedMessageHandler::__get__acknowledgeMessageRegistery() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____acknowledgeMessageRegistery;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseAcknowledgeMessage*>*>*> const&
BGNet::Core::Messages::UnconnectedMessageHandler::__get__acknowledgeMessageRegistery() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____acknowledgeMessageRegistery;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__acknowledgeMessageRegistery(
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::System::Func_1<::BGNet::Core::Messages::BaseAcknowledgeMessage*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____acknowledgeMessageRegistery)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetDataWriter*& BGNet::Core::Messages::UnconnectedMessageHandler::__get__dataWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataWriter;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& BGNet::Core::Messages::UnconnectedMessageHandler::__get__dataWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataWriter;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__dataWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetDataReader*& BGNet::Core::Messages::UnconnectedMessageHandler::__get__multipartReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multipartReader;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataReader*> const& BGNet::Core::Messages::UnconnectedMessageHandler::__get__multipartReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multipartReader;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__multipartReader(::LiteNetLib::Utils::NetDataReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multipartReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IUnconnectedMessageSender*& BGNet::Core::Messages::UnconnectedMessageHandler::__get__sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnconnectedMessageSender*> const& BGNet::Core::Messages::UnconnectedMessageHandler::__get__sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__sender(::GlobalNamespace::IUnconnectedMessageSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGNet::Core::IAnalyticsManager*& BGNet::Core::Messages::UnconnectedMessageHandler::__get_analytics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___analytics;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::IAnalyticsManager*> const& BGNet::Core::Messages::UnconnectedMessageHandler::__get_analytics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___analytics;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set_analytics(::BGNet::Core::IAnalyticsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___analytics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGNet::Core::ITimeProvider*& BGNet::Core::Messages::UnconnectedMessageHandler::__get__timeProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> const& BGNet::Core::Messages::UnconnectedMessageHandler::__get__timeProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__timeProvider(::BGNet::Core::ITimeProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGNet::Core::ITaskUtility*& BGNet::Core::Messages::UnconnectedMessageHandler::__get__taskUtility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& BGNet::Core::Messages::UnconnectedMessageHandler::__get__taskUtility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__taskUtility(::BGNet::Core::ITaskUtility* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____taskUtility)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>*&
BGNet::Core::Messages::UnconnectedMessageHandler::__get__sentRequestWaiters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentRequestWaiters;
}
constexpr ::cordl_internals::to_const_pointer<
    ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>*> const&
BGNet::Core::Messages::UnconnectedMessageHandler::__get__sentRequestWaiters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentRequestWaiters;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__sentRequestWaiters(
    ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, ::BGNet::Core::Messages::__UnconnectedMessageHandler__SentRequestWaiter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sentRequestWaiters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>*&
BGNet::Core::Messages::UnconnectedMessageHandler::__get__requestResponseWaiters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestResponseWaiters;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId,
                                                                                      ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>*> const&
BGNet::Core::Messages::UnconnectedMessageHandler::__get__requestResponseWaiters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestResponseWaiters;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__requestResponseWaiters(
    ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, ::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____requestResponseWaiters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>*&
BGNet::Core::Messages::UnconnectedMessageHandler::__get__connectionStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionStates;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>*> const&
BGNet::Core::Messages::UnconnectedMessageHandler::__get__connectionStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionStates;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__connectionStates(
    ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectionStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId,
                                                  ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>*&
BGNet::Core::Messages::UnconnectedMessageHandler::__get__multipartMessageBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multipartMessageBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId,
                                                                                      ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>*> const&
BGNet::Core::Messages::UnconnectedMessageHandler::__get__multipartMessageBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multipartMessageBuffer;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__multipartMessageBuffer(
    ::GlobalNamespace::ExpiringDictionary_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestWaiterId, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MultipartMessageWaiter*>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multipartMessageBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SmallBufferPool*& BGNet::Core::Messages::UnconnectedMessageHandler::__get__bufferPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SmallBufferPool*> const& BGNet::Core::Messages::UnconnectedMessageHandler::__get__bufferPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferPool;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__bufferPool(::GlobalNamespace::SmallBufferPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bufferPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& BGNet::Core::Messages::UnconnectedMessageHandler::__get__disposedTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposedTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& BGNet::Core::Messages::UnconnectedMessageHandler::__get__disposedTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposedTokenSource;
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__disposedTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disposedTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PacketEncryptionLayer* BGNet::Core::Messages::UnconnectedMessageHandler::get_encryptionLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                                                             "get_encryptionLayer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketEncryptionLayer*, false>(this, ___internal_method);
}
inline ::BGNet::Core::ITimeProvider* BGNet::Core::Messages::UnconnectedMessageHandler::get_timeProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                                                             "get_timeProvider", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::ITimeProvider*, false>(this, ___internal_method);
}
/// @param analytics: ::BGNet::Core::IAnalyticsManager* (default: nullptr)
inline ::BGNet::Core::Messages::UnconnectedMessageHandler* BGNet::Core::Messages::UnconnectedMessageHandler::New_ctor(::GlobalNamespace::IUnconnectedMessageSender* sender,
                                                                                                                      ::BGNet::Core::ITimeProvider* timeProvider,
                                                                                                                      ::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                                      ::BGNet::Core::IAnalyticsManager* analytics) {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::UnconnectedMessageHandler*>(sender, timeProvider, taskUtility, analytics));
}
/// @param analytics: ::BGNet::Core::IAnalyticsManager* (default: nullptr)
inline void BGNet::Core::Messages::UnconnectedMessageHandler::_ctor(::GlobalNamespace::IUnconnectedMessageSender* sender, ::BGNet::Core::ITimeProvider* timeProvider,
                                                                    ::BGNet::Core::ITaskUtility* taskUtility, ::BGNet::Core::IAnalyticsManager* analytics) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IUnconnectedMessageSender*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, timeProvider, taskUtility, analytics);
}
template <typename TMultipartMessage, typename TAcknowledgeMessage>
inline void
BGNet::Core::Messages::UnconnectedMessageHandler::RegisterSerializer(uint32_t messageType,
                                                                     ::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* serializer,
                                                                     ::System::Func_1<TMultipartMessage>* obtainMultipartMessage, ::System::Func_1<TAcknowledgeMessage>* obtainAcknowledgeMessage) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "RegisterSerializer",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMultipartMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAcknowledgeMessage>::get() },
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TMultipartMessage>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TAcknowledgeMessage>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMultipartMessage>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAcknowledgeMessage>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messageType, serializer, obtainMultipartMessage, obtainAcknowledgeMessage);
}
inline bool BGNet::Core::Messages::UnconnectedMessageHandler::ShouldHandleMessage(::BGNet::Core::Messages::IUnconnectedMessage* packet,
                                                                                  ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "ShouldHandleMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packet, origin);
}
inline uint32_t BGNet::Core::Messages::UnconnectedMessageHandler::GetMessageType(::BGNet::Core::Messages::IUnconnectedMessage* message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "GetMessageType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, message);
}
inline ::BGNet::Core::Messages::BaseMultipartMessage* BGNet::Core::Messages::UnconnectedMessageHandler::GetMultipartMessage(::BGNet::Core::Messages::IUnconnectedMessage* message) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "GetMultipartMessage", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::Messages::BaseMultipartMessage*, false>(this, ___internal_method, message);
}
inline ::BGNet::Core::Messages::BaseAcknowledgeMessage* BGNet::Core::Messages::UnconnectedMessageHandler::GetAcknowledgeMessage(::BGNet::Core::Messages::IUnconnectedMessage* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "GetAcknowledgeMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::Messages::BaseAcknowledgeMessage*, false>(this, ___internal_method, message);
}
template <typename T>
inline ::System::Func_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, T>*
BGNet::Core::Messages::UnconnectedMessageHandler::ObtainVersioned(::System::Func_2<uint32_t, T>* obtain) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "ObtainVersioned",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<uint32_t, T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, T>*, false>(this, ___internal_method, obtain);
}
template <typename T> inline ::System::Func_1<T>* BGNet::Core::Messages::UnconnectedMessageHandler::ObtainVersioned(::System::Func_1<T>* obtain) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "ObtainVersioned",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<T>*, false>(this, ___internal_method, obtain);
}
template <typename T> inline void BGNet::Core::Messages::UnconnectedMessageHandler::DefaultAcknowledgeHandler(T packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "DefaultAcknowledgeHandler",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, origin);
}
template <typename T> inline void BGNet::Core::Messages::UnconnectedMessageHandler::DefaultRequestHandler(T packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "DefaultRequestHandler",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, origin);
}
template <typename T> inline void BGNet::Core::Messages::UnconnectedMessageHandler::DefaultResponseHandler(T packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "DefaultResponseHandler",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, origin);
}
template <typename T>
inline void BGNet::Core::Messages::UnconnectedMessageHandler::DefaultMultipartMessageHandler(T packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "DefaultMultipartMessageHandler",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, origin);
}
template <typename T>
inline ::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*
BGNet::Core::Messages::UnconnectedMessageHandler::CustomResponseHandler(::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* customHandler) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "CustomResponseHandler",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*, false>(this, ___internal_method, customHandler);
}
template <typename T>
inline ::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*
BGNet::Core::Messages::UnconnectedMessageHandler::CustomUnreliableResponseHandler(::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>* customHandler) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "CustomUnreliableResponseHandler",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<T, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*, false>(this, ___internal_method, customHandler);
}
inline bool BGNet::Core::Messages::UnconnectedMessageHandler::IsUnhandledMessage(::BGNet::Core::Messages::IUnconnectedReliableRequest* packet,
                                                                                 ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "IsUnhandledMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packet, origin);
}
inline void BGNet::Core::Messages::UnconnectedMessageHandler::CompleteSend(::BGNet::Core::Messages::IUnconnectedResponse* packet, ::System::Net::IPEndPoint* remoteEndPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "CompleteSend", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedResponse*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, remoteEndPoint);
}
inline bool BGNet::Core::Messages::UnconnectedMessageHandler::CompleteRequest(::BGNet::Core::Messages::IUnconnectedReliableResponse* packet, ::System::Net::IPEndPoint* remoteEndPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "CompleteRequest", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableResponse*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packet, remoteEndPoint);
}
template <typename TRequest, typename TResponse>
inline void BGNet::Core::Messages::UnconnectedMessageHandler::GetAndSendResponse(
    TRequest request, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin,
    ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse,
    ::System::Func_1<TResponse>* getFailureResponse) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "GetAndSendResponse",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequest>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TResponse>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, origin, tryGetResponse, getFailureResponse);
}
template <typename TRequest, typename TResponse>
inline ::System::Threading::Tasks::Task* BGNet::Core::Messages::UnconnectedMessageHandler::GetAndSendResponseAsync(
    TRequest request, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin,
    ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse,
    ::System::Func_1<TResponse>* getFailureResponse) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "GetAndSendResponseAsync",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequest>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TResponse>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, request, origin, tryGetResponse, getFailureResponse);
}
template <typename TRequest, typename TResponse>
inline void BGNet::Core::Messages::UnconnectedMessageHandler::GetAndSendUnreilableResponse(
    TRequest request, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin,
    ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse,
    ::System::Func_1<TResponse>* getFailureResponse) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "GetAndSendUnreilableResponse",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequest>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::System::Func_3<TRequest, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin, ::System::Threading::Tasks::Task_1<TResponse>*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TResponse>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, origin, tryGetResponse, getFailureResponse);
}
inline void BGNet::Core::Messages::UnconnectedMessageHandler::SendUnreliableMessage(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                                    ::BGNet::Core::Messages::IUnconnectedUnreliableMessage* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendUnreliableMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedUnreliableMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocolVersion, remoteEndPoint, message);
}
inline void BGNet::Core::Messages::UnconnectedMessageHandler::SendUnreliableResponse(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                                     ::BGNet::Core::Messages::IUnconnectedReliableRequest* request,
                                                                                     ::BGNet::Core::Messages::IUnconnectedResponse* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendUnreliableResponse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocolVersion, remoteEndPoint, request, response);
}
inline void BGNet::Core::Messages::UnconnectedMessageHandler::SendUnreliableResponse(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, uint32_t responseId,
                                                                                     ::BGNet::Core::Messages::IUnconnectedResponse* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendUnreliableResponse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocolVersion, remoteEndPoint, responseId, response);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline void BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableRequest(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                                  ::BGNet::Core::Messages::IUnconnectedReliableRequest* request,
                                                                                  ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendReliableRequest", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocolVersion, remoteEndPoint, request, cancellationToken);
}
/// @param onSendFailed:
/// ::System::Func_5<uint32_t,::System::Net::IPEndPoint*,::BGNet::Core::Messages::IUnconnectedReliableRequest*,::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>* (default:
/// nullptr)
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task* BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableRequestAsync(
    uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request,
    ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*
        onSendFailed,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendReliableRequestAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                 ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, protocolVersion, remoteEndPoint, request, onSendFailed, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline void BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponse(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                                   ::BGNet::Core::Messages::IUnconnectedReliableRequest* request,
                                                                                   ::BGNet::Core::Messages::IUnconnectedReliableResponse* response,
                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendReliableResponse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableResponse*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocolVersion, remoteEndPoint, request, response, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline void BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponse(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, uint32_t responseId,
                                                                                   ::BGNet::Core::Messages::IUnconnectedReliableResponse* response,
                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendReliableResponse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableResponse*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocolVersion, remoteEndPoint, responseId, response, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task* BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponseAsync(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                                                                     ::BGNet::Core::Messages::IUnconnectedReliableRequest* request,
                                                                                                                     ::BGNet::Core::Messages::IUnconnectedReliableResponse* response,
                                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendReliableResponseAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableResponse*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, protocolVersion, remoteEndPoint, request, response, cancellationToken);
}
/// @param onSendFailedAwaitResponse:
/// ::System::Func_5<uint32_t,::System::Net::IPEndPoint*,::BGNet::Core::Messages::IUnconnectedReliableRequest*,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<T>*>* (default:
/// nullptr)
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableRequestAndAwaitResponseAsync(
    uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request,
    ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>*
        onSendFailedAwaitResponse,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendReliableRequestAndAwaitResponseAsync",
                                 std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                 ::std::vector<Il2CppType const*>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                                            ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>*>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, protocolVersion, remoteEndPoint, request, onSendFailedAwaitResponse,
                                                                                            cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponseAndAwaitResponseAsync(
    uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request, ::BGNet::Core::Messages::IUnconnectedReliableResponse* response,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                               "SendReliableResponseAndAwaitResponseAsync", std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableResponse*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, protocolVersion, remoteEndPoint, request, response, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>*
BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponseAndAwaitResponseAsync(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, uint32_t responseId,
                                                                                            ::BGNet::Core::Messages::IUnconnectedReliableResponse* response,
                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                               "SendReliableResponseAndAwaitResponseAsync", std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableResponse*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, protocolVersion, remoteEndPoint, responseId, response, cancellationToken);
}
inline void BGNet::Core::Messages::UnconnectedMessageHandler::SendMessage(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedMessage* message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendMessage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocolVersion, remoteEndPoint, message);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline void BGNet::Core::Messages::UnconnectedMessageHandler::SendMessageWithRetry(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                                   ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendMessageWithRetry", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocolVersion, remoteEndPoint, message, cancellationToken);
}
/// @param onSendFailed:
/// ::System::Func_5<uint32_t,::System::Net::IPEndPoint*,::BGNet::Core::Messages::IUnconnectedReliableRequest*,::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>* (default:
/// nullptr)
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task* BGNet::Core::Messages::UnconnectedMessageHandler::SendMessageWithRetryAsync(
    uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
    ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*
        onSendFailed,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendMessageWithRetryAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                 ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, protocolVersion, remoteEndPoint, message, onSendFailed, cancellationToken);
}
inline ::System::Threading::Tasks::Task* BGNet::Core::Messages::UnconnectedMessageHandler::SendMultipartMessageWithRetryAsync(
    uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::LiteNetLib::Utils::NetDataWriter* data,
    ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*
        onSendFailed,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendMultipartMessageWithRetryAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                 ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, protocolVersion, remoteEndPoint, message, data, onSendFailed, cancellationToken);
}
/// @param onSendFailed:
/// ::System::Func_5<uint32_t,::System::Net::IPEndPoint*,::BGNet::Core::Messages::IUnconnectedReliableRequest*,::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>* (default:
/// nullptr)
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task* BGNet::Core::Messages::UnconnectedMessageHandler::SendMessageWithRetryAsyncInternal(
    uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
    ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*
        onSendFailed,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendMessageWithRetryAsyncInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                 ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, protocolVersion, remoteEndPoint, message, onSendFailed, cancellationToken);
}
/// @param onSendFailedAwaitResponse:
/// ::System::Func_5<uint32_t,::System::Net::IPEndPoint*,::BGNet::Core::Messages::IUnconnectedReliableRequest*,::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<T>*>* (default:
/// nullptr)
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* BGNet::Core::Messages::UnconnectedMessageHandler::SendMessageWithRetryAwaitResponseAsync(
    uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
    ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>*
        onSendFailedAwaitResponse,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "SendMessageWithRetryAwaitResponseAsync",
                                 std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                 ::std::vector<Il2CppType const*>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                                            ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>*>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, protocolVersion, remoteEndPoint, message, onSendFailedAwaitResponse,
                                                                                            cancellationToken);
}
template <typename T>
inline ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*
BGNet::Core::Messages::UnconnectedMessageHandler::WrapOnSendFailedAwaitResponse(::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter* waiter,
                                                                                ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                                 ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>* onSendFailed) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "WrapOnSendFailedAwaitResponse",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__RequestResponseWaiter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*,
                                                                                 ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Func_5<uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*, false>(
      this, ___internal_method, waiter, onSendFailed);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* BGNet::Core::Messages::UnconnectedMessageHandler::AwaitResponseAsync(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                                                                   uint32_t requestId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "AwaitResponseAsync",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, protocolVersion, remoteEndPoint, requestId, cancellationToken);
}
inline ::System::Threading::Tasks::Task* BGNet::Core::Messages::UnconnectedMessageHandler::WaitForRetry(int32_t retryAttempt, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "WaitForRetry", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, retryAttempt, cancellationToken);
}
inline ::LiteNetLib::Utils::NetDataWriter* BGNet::Core::Messages::UnconnectedMessageHandler::Write(uint32_t protocolVersion, ::BGNet::Core::Messages::IUnconnectedMessage* message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "Write", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter*, false>(this, ___internal_method, protocolVersion, message);
}
inline void BGNet::Core::Messages::UnconnectedMessageHandler::PollUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                                                             "PollUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::UnconnectedMessageHandler::ReceiveUnconnectedMessage(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "ReceiveUnconnectedMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, reader);
}
inline bool BGNet::Core::Messages::UnconnectedMessageHandler::ShouldHandleMessageFromEndPoint(::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "ShouldHandleMessageFromEndPoint",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, endPoint);
}
inline void BGNet::Core::Messages::UnconnectedMessageHandler::ReceivedMessageException(::System::Net::IPEndPoint* endPoint, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                                                             "ReceivedMessageException", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, exception);
}
inline void BGNet::Core::Messages::UnconnectedMessageHandler::BeginSession(::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "BeginSession", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint);
}
inline void BGNet::Core::Messages::UnconnectedMessageHandler::BeginSession(::System::Net::IPEndPoint* endPoint, uint32_t requestId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "BeginSession", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, requestId);
}
inline uint32_t BGNet::Core::Messages::UnconnectedMessageHandler::GetNextRequestId(::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "GetNextRequestId", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, endPoint);
}
inline ::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState* BGNet::Core::Messages::UnconnectedMessageHandler::GetConnectionState(::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "GetConnectionState", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::Messages::__UnconnectedMessageHandler__ConnectionState*, false>(this, ___internal_method, endPoint);
}
inline bool BGNet::Core::Messages::UnconnectedMessageHandler::IsValidSessionStartRequestId(::System::Net::IPEndPoint* endPoint, uint32_t requestId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                                                             "IsValidSessionStartRequestId", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, endPoint, requestId);
}
inline bool BGNet::Core::Messages::UnconnectedMessageHandler::IsConnectionStateEncrypted(::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "IsConnectionStateEncrypted",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, endPoint);
}
/// @param throwOnInvalidVersion: bool (default: true)
inline ::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*
BGNet::Core::Messages::UnconnectedMessageHandler::GetSerializer(uint32_t protocolVersion, uint32_t messageType, bool throwOnInvalidVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "GetSerializer", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPacketSerializer_1<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>*, false>(
      this, ___internal_method, protocolVersion, messageType, throwOnInvalidVersion);
}
inline void BGNet::Core::Messages::UnconnectedMessageHandler::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BGNet::Core::Messages::UnconnectedMessageHandler::CreateHandshakeHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> packetHeader) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::UnconnectedMessageHandler*>::get(), "CreateHandshakeHeader",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, packetHeader);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::UnconnectedMessageHandler::UnconnectedMessageHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
