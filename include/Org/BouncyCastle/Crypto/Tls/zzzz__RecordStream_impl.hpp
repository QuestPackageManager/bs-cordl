#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/RecordStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__RecordStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ProtocolVersion_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__RecordStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCompression_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream::*)(
    ::Org::BouncyCastle::Crypto::Tls::RecordStream*)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24154c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream::Write)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x24167dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream*>::get(), 38));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream*& Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream::__cordl_internal_get_mOuter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOuter;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream* const& Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream::__cordl_internal_get_mOuter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOuter;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream::__cordl_internal_set_mOuter(::Org::BouncyCastle::Crypto::Tls::RecordStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mOuter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream::_ctor(::Org::BouncyCastle::Crypto::Tls::RecordStream* mOuter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mOuter);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, off, len);
}
inline ::Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream*
Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream::New_ctor(::Org::BouncyCastle::Crypto::Tls::RecordStream* mOuter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream*>(mOuter));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream_HandshakeHashUpdateStream::RecordStream_HandshakeHashUpdateStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber.NextValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber::NextValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2416048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber*>::get(), "NextValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24154b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int64_t& Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber::__cordl_internal_set_value(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber::__cordl_internal_get_exhausted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exhausted;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber::__cordl_internal_get_exhausted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exhausted;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber::__cordl_internal_set_exhausted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exhausted = value;
}
inline int64_t Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber::NextValue(uint8_t alertDescription) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber*>::get(), "NextValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, alertDescription);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber* Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber::RecordStream_SequenceNumber() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsProtocol*, ::System::IO::Stream*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x241535c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::Init)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x24154f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.GetPlaintextLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::GetPlaintextLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241560c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.SetPlaintextLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::SetPlaintextLimit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2415614;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.get_ReadVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::get_ReadVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2415630;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.set_ReadVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*)>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::set_ReadVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2415638;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.SetWriteVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*)>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::SetWriteVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2415640;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.SetRestrictReadVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::SetRestrictReadVersion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2415648;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.SetPendingConnectionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsCompression*, ::Org::BouncyCastle::Crypto::Tls::TlsCipher*)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::SetPendingConnectionState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2415654;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.SentWriteCipherSpec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::SentWriteCipherSpec)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2415660;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.ReceivedReadCipherSpec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::ReceivedReadCipherSpec)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2415710;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.FinaliseHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::FinaliseHandshake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24157c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.CheckRecordHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::CheckRecordHeader)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x241583c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.ReadRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::ReadRecord)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2415a0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.DecodeAndVerify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(
    uint8_t, ::System::IO::Stream*, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::DecodeAndVerify)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2415dc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.WriteRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)(
    uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::WriteRecord)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x2416110;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.NotifyHelloComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::NotifyHelloComplete)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24164ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.get_HandshakeHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::get_HandshakeHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2416598;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.get_HandshakeHashUpdater
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::get_HandshakeHashUpdater)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24165a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.PrepareToFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::PrepareToFinish)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24165a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.SafeClose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::SafeClose)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2416658;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::Flush)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24167b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.GetBufferContents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::RecordStream::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::RecordStream::GetBufferContents)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24160bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                                               "GetBufferContents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.CheckType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t, uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::CheckType)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2415968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), "CheckType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::RecordStream.CheckLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::RecordStream::CheckLength)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24159bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), "CheckLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsProtocol*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandler;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsProtocol* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandler;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mHandler(::Org::BouncyCastle::Crypto::Tls::TlsProtocol* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInput;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInput;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mInput(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mInput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOutput;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOutput;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mOutput(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mOutput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mPendingCompression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPendingCompression;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mPendingCompression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPendingCompression;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mPendingCompression(::Org::BouncyCastle::Crypto::Tls::TlsCompression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPendingCompression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mReadCompression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReadCompression;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mReadCompression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReadCompression;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mReadCompression(::Org::BouncyCastle::Crypto::Tls::TlsCompression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mReadCompression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mWriteCompression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mWriteCompression;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCompression* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mWriteCompression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mWriteCompression;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mWriteCompression(::Org::BouncyCastle::Crypto::Tls::TlsCompression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mWriteCompression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mPendingCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPendingCipher;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mPendingCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPendingCipher;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mPendingCipher(::Org::BouncyCastle::Crypto::Tls::TlsCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPendingCipher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mReadCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReadCipher;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mReadCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReadCipher;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mReadCipher(::Org::BouncyCastle::Crypto::Tls::TlsCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mReadCipher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mWriteCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mWriteCipher;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mWriteCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mWriteCipher;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mWriteCipher(::Org::BouncyCastle::Crypto::Tls::TlsCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mWriteCipher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mReadSeqNo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReadSeqNo;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mReadSeqNo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReadSeqNo;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mReadSeqNo(::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mReadSeqNo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mWriteSeqNo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mWriteSeqNo;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mWriteSeqNo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mWriteSeqNo;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mWriteSeqNo(::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mWriteSeqNo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::MemoryStream*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBuffer;
}
constexpr ::System::IO::MemoryStream* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBuffer;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mBuffer(::System::IO::MemoryStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mHandshakeHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeHash;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mHandshakeHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeHash;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mHandshakeHash(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mHandshakeHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::IO::BaseOutputStream*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mHandshakeHashUpdater() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeHashUpdater;
}
constexpr ::Org::BouncyCastle::Utilities::IO::BaseOutputStream* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mHandshakeHashUpdater() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHandshakeHashUpdater;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mHandshakeHashUpdater(::Org::BouncyCastle::Utilities::IO::BaseOutputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mHandshakeHashUpdater)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mReadVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReadVersion;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mReadVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReadVersion;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mReadVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mReadVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mWriteVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mWriteVersion;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mWriteVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mWriteVersion;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mWriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mWriteVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mRestrictReadVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRestrictReadVersion;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mRestrictReadVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRestrictReadVersion;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mRestrictReadVersion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mRestrictReadVersion = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mPlaintextLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPlaintextLimit;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mPlaintextLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPlaintextLimit;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mPlaintextLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPlaintextLimit = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mCompressedLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCompressedLimit;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mCompressedLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCompressedLimit;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mCompressedLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCompressedLimit = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mCiphertextLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCiphertextLimit;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_get_mCiphertextLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCiphertextLimit;
}
constexpr void Org::BouncyCastle::Crypto::Tls::RecordStream::__cordl_internal_set_mCiphertextLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCiphertextLimit = value;
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsProtocol* handler, ::System::IO::Stream* input, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler, input, output);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::RecordStream::GetPlaintextLimit() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::SetPlaintextLimit(int32_t plaintextLimit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, plaintextLimit);
}
inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* Org::BouncyCastle::Crypto::Tls::RecordStream::get_ReadVersion() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::set_ReadVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::SetWriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* writeVersion) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writeVersion);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::SetRestrictReadVersion(bool enabled) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::SetPendingConnectionState(::Org::BouncyCastle::Crypto::Tls::TlsCompression* tlsCompression,
                                                                                    ::Org::BouncyCastle::Crypto::Tls::TlsCipher* tlsCipher) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tlsCompression, tlsCipher);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::SentWriteCipherSpec() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::ReceivedReadCipherSpec() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::FinaliseHandshake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::CheckRecordHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> recordHeader) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordHeader);
}
inline bool Org::BouncyCastle::Crypto::Tls::RecordStream::ReadRecord() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::RecordStream::DecodeAndVerify(uint8_t type, ::System::IO::Stream* input, int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, type, input, len);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::WriteRecord(uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> plaintext, int32_t plaintextOffset, int32_t plaintextLength) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, plaintext, plaintextOffset, plaintextLength);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::NotifyHelloComplete() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::RecordStream::get_HandshakeHash() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, false>(this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Tls::RecordStream::get_HandshakeHashUpdater() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::RecordStream::PrepareToFinish() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::SafeClose() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::RecordStream::GetBufferContents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(),
                                                                             "GetBufferContents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::CheckType(uint8_t type, uint8_t alertDescription) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), "CheckType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, alertDescription);
}
inline void Org::BouncyCastle::Crypto::Tls::RecordStream::CheckLength(int32_t length, int32_t limit, uint8_t alertDescription) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::RecordStream*>::get(), "CheckLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, length, limit, alertDescription);
}
inline ::Org::BouncyCastle::Crypto::Tls::RecordStream* Org::BouncyCastle::Crypto::Tls::RecordStream::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsProtocol* handler, ::System::IO::Stream* input,
                                                                                                              ::System::IO::Stream* output) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::RecordStream*>(handler, input, output));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::RecordStream::RecordStream() {}
