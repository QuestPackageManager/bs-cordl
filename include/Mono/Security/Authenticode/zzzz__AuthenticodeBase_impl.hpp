#pragma once
// IWYU pragma private; include "Mono\Security\Authenticode\AuthenticodeBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Authenticode/zzzz__AuthenticodeBase_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeBase::*)()>(&::Mono::Security::Authenticode::AuthenticodeBase::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5aa5934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.get_PEOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::Authenticode::AuthenticodeBase::*)()>(&::Mono::Security::Authenticode::AuthenticodeBase::get_PEOffset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5aa5988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { "get_PEOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeBase::*)(::StringW)>(&::Mono::Security::Authenticode::AuthenticodeBase::Open)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5aa5a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { "Open", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeBase::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Authenticode::AuthenticodeBase::Open)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5aa5b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { "Open", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeBase::*)()>(&::Mono::Security::Authenticode::AuthenticodeBase::Close)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5aa5b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.ReadFirstBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeBase::*)()>(&::Mono::Security::Authenticode::AuthenticodeBase::ReadFirstBlock)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5aa59b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { "ReadFirstBlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.ProcessFirstBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::Authenticode::AuthenticodeBase::*)()>(&::Mono::Security::Authenticode::AuthenticodeBase::ProcessFirstBlock)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5aa5be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { "ProcessFirstBlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.GetSecurityEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Authenticode::AuthenticodeBase::*)()>(
    &::Mono::Security::Authenticode::AuthenticodeBase::GetSecurityEntry)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5aa5e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { "GetSecurityEntry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.GetHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Authenticode::AuthenticodeBase::*)(::System::Security::Cryptography::HashAlgorithm*)>(
    &::Mono::Security::Authenticode::AuthenticodeBase::GetHash)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x5aa5f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(),
                                                                                           { "GetHash", {}, { ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_fileblock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileblock;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_fileblock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileblock;
}
constexpr void Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_set_fileblock(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fileblock = value;
}
constexpr ::System::IO::Stream*& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_fs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fs;
}
constexpr ::System::IO::Stream* const& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_fs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fs;
}
constexpr void Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_set_fs(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fs = value;
}
constexpr int32_t& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_blockNo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockNo;
}
constexpr int32_t const& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_blockNo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockNo;
}
constexpr void Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_set_blockNo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockNo = value;
}
constexpr int32_t& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_blockLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockLength;
}
constexpr int32_t const& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_blockLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockLength;
}
constexpr void Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_set_blockLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockLength = value;
}
constexpr int32_t& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_peOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___peOffset;
}
constexpr int32_t const& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_peOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___peOffset;
}
constexpr void Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_set_peOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___peOffset = value;
}
constexpr int32_t& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_dirSecurityOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirSecurityOffset;
}
constexpr int32_t const& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_dirSecurityOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirSecurityOffset;
}
constexpr void Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_set_dirSecurityOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dirSecurityOffset = value;
}
constexpr int32_t& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_dirSecuritySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirSecuritySize;
}
constexpr int32_t const& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_dirSecuritySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirSecuritySize;
}
constexpr void Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_set_dirSecuritySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dirSecuritySize = value;
}
constexpr int32_t& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_coffSymbolTableOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coffSymbolTableOffset;
}
constexpr int32_t const& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_coffSymbolTableOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coffSymbolTableOffset;
}
constexpr void Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_set_coffSymbolTableOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___coffSymbolTableOffset = value;
}
constexpr bool& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_pe64() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pe64;
}
constexpr bool const& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_pe64() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pe64;
}
constexpr void Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_set_pe64(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pe64 = value;
}
inline void Mono::Security::Authenticode::AuthenticodeBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mono::Security::Authenticode::AuthenticodeBase::get_PEOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { "get_PEOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mono::Security::Authenticode::AuthenticodeBase::Open(::StringW filename) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { "Open", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filename);
}
inline void Mono::Security::Authenticode::AuthenticodeBase::Open(::ArrayW<uint8_t> rawdata) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { "Open", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawdata);
}
inline void Mono::Security::Authenticode::AuthenticodeBase::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Authenticode::AuthenticodeBase::ReadFirstBlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { "ReadFirstBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mono::Security::Authenticode::AuthenticodeBase::ProcessFirstBlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { "ProcessFirstBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::Authenticode::AuthenticodeBase::GetSecurityEntry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(), { "GetSecurityEntry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::Authenticode::AuthenticodeBase::GetHash(::System::Security::Cryptography::HashAlgorithm* hash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeBase*>(),
                                                                                         { "GetHash", {}, { ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, hash);
}
inline ::Mono::Security::Authenticode::AuthenticodeBase* Mono::Security::Authenticode::AuthenticodeBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Authenticode::AuthenticodeBase*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::Authenticode::AuthenticodeBase::AuthenticodeBase() {}
