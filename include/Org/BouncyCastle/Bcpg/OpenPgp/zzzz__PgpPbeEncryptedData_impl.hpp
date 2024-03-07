#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedData_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPbeEncryptedData_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyEncSessionPacket_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(
    ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*, ::Org::BouncyCastle::Bcpg::InputStreamPacket*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1142920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::InputStreamPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.GetInputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetInputStream)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1147900;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.GetDataStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(::ArrayW<char16_t, ::Array<char16_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStream)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x114791c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(), "GetDataStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.GetDataStreamUtf8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(::ArrayW<char16_t, ::Array<char16_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStreamUtf8)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1148218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(), "GetDataStreamUtf8", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.GetDataStreamRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStreamRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1148248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(), "GetDataStreamRaw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.DoGetDataStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::DoGetDataStream)> {
  constexpr static std::size_t size = 0x8d0;
  constexpr static std::size_t addrs = 0x1147948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(), "DoGetDataStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.CreateStreamCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IBufferedCipher* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::CreateStreamCipher)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1148250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(), "CreateStreamCipher", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::__cordl_internal_get_keyData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyData;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*> const&
Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::__cordl_internal_get_keyData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyData;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::__cordl_internal_set_keyData(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData* Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* keyData,
                                                                                                                                ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(keyData, encData));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* keyData, ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::InputStreamPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyData, encData);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetInputStream() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStream(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(), "GetDataStream", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, passPhrase);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStreamUtf8(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(), "GetDataStreamUtf8", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, passPhrase);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStreamRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(), "GetDataStreamRaw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, rawPassPhrase);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::DoGetDataStream(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(), "DoGetDataStream", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, rawPassPhrase, clearPassPhrase);
}
inline ::Org::BouncyCastle::Crypto::IBufferedCipher* Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::CreateStreamCipher(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag keyAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>::get(), "CreateStreamCipher", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBufferedCipher*, false>(this, ___internal_method, keyAlgorithm);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::PgpPbeEncryptedData() {}
