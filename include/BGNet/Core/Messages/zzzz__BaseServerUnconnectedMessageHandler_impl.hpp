#pragma once
#include "BGNet/Core/Messages/zzzz__ClientKeyExchangeRequest_impl.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateRequest_impl.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_1_impl.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_impl.hpp"
#include "GlobalNamespace/zzzz__IDiffieHellmanKeyPair_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Core/Messages/zzzz__BaseServerUnconnectedMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__ICertificateEncryptionProvider_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__BaseServerUnconnectedMessageHandler_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__IAsyncComputeManager_def.hpp"
#include "BGNet/Core/zzzz__IAnalyticsManager_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "BGNet/Core/Messages/zzzz__ClientHelloWithCookieRequest_def.hpp"
#include "GlobalNamespace/zzzz__IDiffieHellmanKeyPair_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__IUnconnectedMessageSender_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "BGNet/Core/Messages/zzzz__ClientHelloRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "BGNet/Core/Messages/zzzz__ClientKeyExchangeRequest_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::GlobalNamespace::ICertificateEncryptionProvider*,
    ::LiteNetLib::Utils::NetDataWriter*)>(&::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xde0a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ICertificateEncryptionProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation.Compute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (
    ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::*)()>(&::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::Compute)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xde0b04;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation.Finally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::*)()>(
    &::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::Finally)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xde0bfc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__clientRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientRandom;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__clientRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientRandom;
}
constexpr void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__set__clientRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clientRandom)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__serverRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverRandom;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__serverRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverRandom;
}
constexpr void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__set__serverRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serverRandom)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__serverKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__serverKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverKey;
}
constexpr void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__set__serverKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serverKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ICertificateEncryptionProvider*& BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__certificateEncryptionProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateEncryptionProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICertificateEncryptionProvider*> const&
BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__certificateEncryptionProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateEncryptionProvider;
}
constexpr void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__set__certificateEncryptionProvider(::GlobalNamespace::ICertificateEncryptionProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____certificateEncryptionProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetDataWriter*& BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__set__writer(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____writer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation* BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::New_ctor(
    ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverKey,
    ::GlobalNamespace::ICertificateEncryptionProvider* certificateEncryptionProvider, ::LiteNetLib::Utils::NetDataWriter* writer) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation*>(clientRandom, serverRandom, serverKey, certificateEncryptionProvider, writer));
}
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom,
                                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom,
                                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> serverKey,
                                                                                                         ::GlobalNamespace::ICertificateEncryptionProvider* certificateEncryptionProvider,
                                                                                                         ::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ICertificateEncryptionProvider*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientRandom, serverRandom, serverKey, certificateEncryptionProvider, writer);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::Compute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation*>::get(),
                                               "Compute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::Finally() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation*>::get(),
                                               "Finally", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__BaseServerUnconnectedMessageHandler__SigningComputeOperation() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::*)(
    ::GlobalNamespace::IDiffieHellmanKeyPair*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xde0c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation*>::get(),
                                    ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDiffieHellmanKeyPair*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation.Compute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::*)()>(
        &::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::Compute)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xde0c7c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IDiffieHellmanKeyPair*& BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::__get__serverKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverKey;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDiffieHellmanKeyPair*> const&
BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::__get__serverKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverKey;
}
constexpr void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::__set__serverKey(::GlobalNamespace::IDiffieHellmanKeyPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serverKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::__get__clientKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::__get__clientKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientKey;
}
constexpr void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::__set__clientKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clientKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation*
BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::New_ctor(::GlobalNamespace::IDiffieHellmanKeyPair* serverKey,
                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> clientKey) {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation*>(serverKey, clientKey));
}
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::_ctor(::GlobalNamespace::IDiffieHellmanKeyPair* serverKey,
                                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> clientKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation*>::get(),
                                  ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDiffieHellmanKeyPair*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverKey, clientKey);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::Compute() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation*>::get(),
                                  "Compute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c::*)()>(
    &::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde0d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c.__ctor_b__12_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c::__ctor_b__12_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xde0d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c*>::get(), "<.ctor>b__12_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c::setStaticF___9(::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c* value) {
  ::cordl_internals::setStaticField<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c*>::get>(
      std::forward<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c*>(value));
}
inline ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c* BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c*>::get>();
}
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c::setStaticF___9__12_0(
    ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<uint8_t, ::Array<uint8_t>*>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<uint8_t, ::Array<uint8_t>*>>*, "<>9__12_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c*>::get>(
      std::forward<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<uint8_t, ::Array<uint8_t>*>>*>(value));
}
inline ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<uint8_t, ::Array<uint8_t>*>>*
BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<uint8_t, ::Array<uint8_t>*>>*, "<>9__12_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c*>::get>();
}
inline ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c* BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c*>());
}
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c::__ctor_b__12_0(::System::Security::Cryptography::X509Certificates::X509Certificate2* cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c*>::get(), "<.ctor>b__12_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, cert);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler____c::__BaseServerUnconnectedMessageHandler____c() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::*)()>(
    &::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xde0db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde1060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "certificateResponseId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this, uint32_t protocolVersion,
    ::System::Net::IPEndPoint* endPoint, uint32_t requestId, uint32_t certificateResponseId, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->protocolVersion = protocolVersion;
  this->endPoint = endPoint;
  this->requestId = requestId;
  this->certificateResponseId = certificateResponseId;
  this->clientRandom = clientRandom;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::*)()>(
        &::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0xac8;
  constexpr static std::size_t addrs = 0xde106c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21>::get(), "MoveNext",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde2080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21>::get(), "MoveNext",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "certificateResponseId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestId", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_serverRandom_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_serverKeys_5__3", ty: "::GlobalNamespace::IDiffieHellmanKeyPair*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_responseId_5__4", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_encryptionState_5__5", ty: "::GlobalNamespace::__EncryptionUtility__IEncryptionState*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ClientKeyExchangeRequest*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__5", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this,
    ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, uint32_t protocolVersion, ::System::Net::IPEndPoint* endPoint, uint32_t certificateResponseId, uint32_t requestId,
    ::ArrayW<uint8_t, ::Array<uint8_t>*> _serverRandom_5__2, ::GlobalNamespace::IDiffieHellmanKeyPair* _serverKeys_5__3, uint32_t _responseId_5__4,
    ::GlobalNamespace::__EncryptionUtility__IEncryptionState* _encryptionState_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ClientKeyExchangeRequest*> __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __u__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*> __u__4, ::System::Runtime::CompilerServices::TaskAwaiter __u__5) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->clientRandom = clientRandom;
  this->protocolVersion = protocolVersion;
  this->endPoint = endPoint;
  this->certificateResponseId = certificateResponseId;
  this->requestId = requestId;
  this->_serverRandom_5__2 = _serverRandom_5__2;
  this->_serverKeys_5__3 = _serverKeys_5__3;
  this->_responseId_5__4 = _responseId_5__4;
  this->_encryptionState_5__5 = _encryptionState_5__5;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
  this->__u__4 = __u__4;
  this->__u__5 = __u__5;
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::
    __BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::*)()>(
    &::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0xde208c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23>::get(), "MoveNext",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xde2488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "clientRandom", ty:
// "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "serverKey", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty:
// "::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_signingRequest_5__2", ty:
// "::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom,
    ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverKey, ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this,
    ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__SigningComputeOperation* _signingRequest_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->clientRandom = clientRandom;
  this->serverRandom = serverRandom;
  this->serverKey = serverKey;
  this->__4__this = __4__this;
  this->_signingRequest_5__2 = _signingRequest_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::*)()>(
    &::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xde24e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xde28a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "serverKeys", ty:
// "::GlobalNamespace::IDiffieHellmanKeyPair*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "clientKey", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_preMasterSecretRequest_5__2", ty: "::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder, ::GlobalNamespace::IDiffieHellmanKeyPair* serverKeys,
    ::ArrayW<uint8_t, ::Array<uint8_t>*> clientKey, ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this,
    ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation* _preMasterSecretRequest_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->serverKeys = serverKeys;
  this->clientKey = clientKey;
  this->__4__this = __4__this;
  this->_preMasterSecretRequest_5__2 = _preMasterSecretRequest_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24() {}
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::*)()>(
    &::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xde28fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde2bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IDiffieHellmanKeyPair*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IDiffieHellmanKeyPair*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26() {}
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(
    ::GlobalNamespace::IUnconnectedMessageSender*, ::BGNet::Core::ITimeProvider*, ::BGNet::Core::ITaskUtility*, ::GlobalNamespace::IAsyncComputeManager*, ::BGNet::Core::IAnalyticsManager*,
    ::GlobalNamespace::ICertificateEncryptionProvider*, ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*)>(
    &::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::_ctor)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xdde8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IUnconnectedMessageSender*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAsyncComputeManager*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ICertificateEncryptionProvider*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.PollUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)()>(
    &::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::PollUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xddf948;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.GetMessageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(
    ::BGNet::Core::Messages::IUnconnectedMessage*)>(&::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetMessageType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xddfb30;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.ShouldHandleMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(
    ::BGNet::Core::Messages::IUnconnectedMessage*, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin)>(
    &::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::ShouldHandleMessage)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xddfbf8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.RegisterHandshakeMessageHandlers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)()>(
    &::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RegisterHandshakeMessageHandlers)> {
  constexpr static std::size_t size = 0x928;
  constexpr static std::size_t addrs = 0xddef5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(),
                                                 "RegisterHandshakeMessageHandlers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.HandleClientHelloRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(
    ::BGNet::Core::Messages::ClientHelloRequest*, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin)>(
    &::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandleClientHelloRequest)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xde01ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "HandleClientHelloRequest", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::ClientHelloRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.HandleClientHelloWithCookieRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(
    ::BGNet::Core::Messages::ClientHelloWithCookieRequest*, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin)>(
    &::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandleClientHelloWithCookieRequest)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xde04b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "HandleClientHelloWithCookieRequest", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::ClientHelloWithCookieRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.StartServerAuthenticationFlow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(
    uint32_t, ::System::Net::IPEndPoint*, uint32_t, uint32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::StartServerAuthenticationFlow)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xde052c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "StartServerAuthenticationFlow", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.VerifyAuthenticationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(uint32_t, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*)>(
    &::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::VerifyAuthenticationRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.StartServerAuthenticationFlowAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(uint32_t, ::System::Net::IPEndPoint*, uint32_t, uint32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::StartServerAuthenticationFlowAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xde0600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "StartServerAuthenticationFlowAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.GetCookie
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(
    ::System::Net::IPEndPoint*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetCookie)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xddfd70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "GetCookie", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.GetSignatureAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetSignatureAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xde0710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "GetSignatureAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.GetPreMasterSecretAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(::GlobalNamespace::IDiffieHellmanKeyPair*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xde0820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "GetPreMasterSecretAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDiffieHellmanKeyPair*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.RotateServerKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)()>(
    &::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RotateServerKeys)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xddfa0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "RotateServerKeys",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.RotateServerKeysAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)()>(
    &::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RotateServerKeysAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xde0928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "RotateServerKeysAsync",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.HandshakeLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(::StringW)>(
    &::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandshakeLog)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xde09f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "HandshakeLog",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ICertificateEncryptionProvider*& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__certificateEncryptionProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateEncryptionProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICertificateEncryptionProvider*> const&
BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__certificateEncryptionProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateEncryptionProvider;
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__certificateEncryptionProvider(::GlobalNamespace::ICertificateEncryptionProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____certificateEncryptionProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__certificateChain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateChain;
}
constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const&
BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__certificateChain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateChain;
}
constexpr void
BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__certificateChain(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____certificateChain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetDataWriter*& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__cookieWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookieWriter;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__cookieWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookieWriter;
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__cookieWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cookieWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetDataWriter*& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__signatureWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signatureWriter;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__signatureWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signatureWriter;
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__signatureWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signatureWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAsyncComputeManager*& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__asyncCompute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncCompute;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAsyncComputeManager*> const& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__asyncCompute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncCompute;
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__asyncCompute(::GlobalNamespace::IAsyncComputeManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____asyncCompute)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__lastServerKeyPairRequestTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastServerKeyPairRequestTime;
}
constexpr int64_t const& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__lastServerKeyPairRequestTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastServerKeyPairRequestTime;
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__lastServerKeyPairRequestTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastServerKeyPairRequestTime = value;
}
constexpr ::GlobalNamespace::IDiffieHellmanKeyPair*& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__serverKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverKeys;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDiffieHellmanKeyPair*> const& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__serverKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverKeys;
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__serverKeys(::GlobalNamespace::IDiffieHellmanKeyPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serverKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__serverKeyRotationTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverKeyRotationTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__serverKeyRotationTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverKeyRotationTask;
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__serverKeyRotationTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serverKeyRotationTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__hmacKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hmacKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__hmacKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hmacKey;
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__hmacKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hmacKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::New_ctor(
    ::GlobalNamespace::IUnconnectedMessageSender* sender, ::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IAsyncComputeManager* asyncCompute,
    ::BGNet::Core::IAnalyticsManager* analytics, ::GlobalNamespace::ICertificateEncryptionProvider* certificateEncryptionProvider,
    ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* certificateList) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>(sender, timeProvider, taskUtility, asyncCompute, analytics, certificateEncryptionProvider, certificateList));
}
inline void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::_ctor(
    ::GlobalNamespace::IUnconnectedMessageSender* sender, ::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IAsyncComputeManager* asyncCompute,
    ::BGNet::Core::IAnalyticsManager* analytics, ::GlobalNamespace::ICertificateEncryptionProvider* certificateEncryptionProvider,
    ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* certificateList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IUnconnectedMessageSender*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAsyncComputeManager*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ICertificateEncryptionProvider*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, timeProvider, taskUtility, asyncCompute, analytics, certificateEncryptionProvider, certificateList);
}
inline void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::PollUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "PollUpdate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint32_t BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetMessageType(::BGNet::Core::Messages::IUnconnectedMessage* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "GetMessageType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, message);
}
inline bool BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::ShouldHandleMessage(::BGNet::Core::Messages::IUnconnectedMessage* packet,
                                                                                            ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "ShouldHandleMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packet, origin);
}
inline void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RegisterHandshakeMessageHandlers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(),
                                               "RegisterHandshakeMessageHandlers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandleClientHelloRequest(::BGNet::Core::Messages::ClientHelloRequest* packet,
                                                                                                 ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "HandleClientHelloRequest", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::ClientHelloRequest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, origin);
}
inline void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandleClientHelloWithCookieRequest(::BGNet::Core::Messages::ClientHelloWithCookieRequest* packet,
                                                                                                           ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "HandleClientHelloWithCookieRequest", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::ClientHelloWithCookieRequest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, origin);
}
inline void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::StartServerAuthenticationFlow(uint32_t protocolVersion, ::System::Net::IPEndPoint* endPoint, uint32_t requestId,
                                                                                                      uint32_t certificateResponseId, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "StartServerAuthenticationFlow", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocolVersion, endPoint, requestId, certificateResponseId, clientRandom);
}
inline ::System::Threading::Tasks::Task*
BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::VerifyAuthenticationRequest(uint32_t protocolVersion, ::System::Net::IPEndPoint* endPoint,
                                                                                        ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest* authenticateRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "VerifyAuthenticationRequest", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, protocolVersion, endPoint, authenticateRequest);
}
inline ::System::Threading::Tasks::Task* BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::StartServerAuthenticationFlowAsync(uint32_t protocolVersion, ::System::Net::IPEndPoint* endPoint,
                                                                                                                                        uint32_t requestId, uint32_t certificateResponseId,
                                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "StartServerAuthenticationFlowAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, protocolVersion, endPoint, requestId, certificateResponseId, clientRandom);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetCookie(::System::Net::IPEndPoint* endPoint, ::ArrayW<uint8_t, ::Array<uint8_t>*> random) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "GetCookie", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, endPoint, random);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetSignatureAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> serverKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "GetSignatureAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method, clientRandom, serverRandom, serverKey);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretAsync(::GlobalNamespace::IDiffieHellmanKeyPair* serverKeys, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "GetPreMasterSecretAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDiffieHellmanKeyPair*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method, serverKeys, clientKey);
}
inline void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RotateServerKeys() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "RotateServerKeys",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RotateServerKeysAsync() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "RotateServerKeysAsync",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandshakeLog(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*>::get(), "HandshakeLog",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::BaseServerUnconnectedMessageHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
