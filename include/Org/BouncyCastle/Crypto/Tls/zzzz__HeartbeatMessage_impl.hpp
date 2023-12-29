#pragma once
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__HeartbeatMessage_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__HeartbeatMessage_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer.ToTruncatedByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::*)(
    int32_t)>(&::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::ToTruncatedByteArray)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xf1bbc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer*>::get(), "ToTruncatedByteArray",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf1bbc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::ToTruncatedByteArray(int32_t payloadLength) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer*>::get(), "ToTruncatedByteArray",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, payloadLength);
}
inline ::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer* Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer*>());
}
inline void Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer::__HeartbeatMessage__PayloadBuffer() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::*)(uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xf1b6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::Encode)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xf1b7fc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage* (*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::Parse)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xf1b9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>::get(), "Parse", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__get_mType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mType;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__get_mType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__set_mType(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mType = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__get_mPayload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPayload;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__get_mPayload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPayload;
}
constexpr void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__set_mPayload(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPayload)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__get_mPaddingLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPaddingLength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__get_mPaddingLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPaddingLength;
}
constexpr void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::__set_mPaddingLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPaddingLength = value;
}
inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage* Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::New_ctor(uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> payload,
                                                                                                                      int32_t paddingLength) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>(type, payload, paddingLength));
}
inline void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::_ctor(uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> payload, int32_t paddingLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, payload, paddingLength);
}
inline void Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::Encode(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>::get(), "Encode", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage* Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::Parse(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*>::get(), "Parse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*, false>(nullptr, ___internal_method, input);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage::HeartbeatMessage() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
