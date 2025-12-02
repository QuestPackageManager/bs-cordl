#pragma once
// IWYU pragma private; include "Mono/Security/Authenticode/AuthenticodeBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Authenticode/zzzz__AuthenticodeBase_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeBase::*)()>(
    &::Mono::Security::Authenticode::AuthenticodeBase::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x589038c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.get_PEOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Authenticode::AuthenticodeBase::*)()>(
    &::Mono::Security::Authenticode::AuthenticodeBase::get_PEOffset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58903e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(),
                                                                               "get_PEOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeBase::*)(::StringW)>(
    &::Mono::Security::Authenticode::AuthenticodeBase::Open)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58904d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeBase::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Authenticode::AuthenticodeBase::Open)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58905a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeBase::*)()>(
    &::Mono::Security::Authenticode::AuthenticodeBase::Close)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x589057c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(),
                                                                               "Close", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.ReadFirstBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeBase::*)()>(
    &::Mono::Security::Authenticode::AuthenticodeBase::ReadFirstBlock)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5890408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(),
                                                                               "ReadFirstBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.ProcessFirstBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Authenticode::AuthenticodeBase::*)()>(
    &::Mono::Security::Authenticode::AuthenticodeBase::ProcessFirstBlock)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5890638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(),
                                                                               "ProcessFirstBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.GetSecurityEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Authenticode::AuthenticodeBase::*)()>(
    &::Mono::Security::Authenticode::AuthenticodeBase::GetSecurityEntry)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5890888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(),
                                                                               "GetSecurityEntry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeBase.GetHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Authenticode::AuthenticodeBase::*)(
    ::System::Security::Cryptography::HashAlgorithm*)>(&::Mono::Security::Authenticode::AuthenticodeBase::GetHash)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x589095c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(), "GetHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::HashAlgorithm*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_fileblock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileblock;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_get_fileblock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileblock;
}
constexpr void Mono::Security::Authenticode::AuthenticodeBase::__cordl_internal_set_fileblock(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fileblock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Mono::Security::Authenticode::AuthenticodeBase::get_PEOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(),
                                                                             "get_PEOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Mono::Security::Authenticode::AuthenticodeBase::Open(::StringW filename) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filename);
}
inline void Mono::Security::Authenticode::AuthenticodeBase::Open(::ArrayW<uint8_t, ::Array<uint8_t>*> rawdata) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rawdata);
}
inline void Mono::Security::Authenticode::AuthenticodeBase::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(), "Close",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Authenticode::AuthenticodeBase::ReadFirstBlock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(),
                                                                             "ReadFirstBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Mono::Security::Authenticode::AuthenticodeBase::ProcessFirstBlock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(),
                                                                             "ProcessFirstBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Authenticode::AuthenticodeBase::GetSecurityEntry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(),
                                                                             "GetSecurityEntry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Authenticode::AuthenticodeBase::GetHash(::System::Security::Cryptography::HashAlgorithm* hash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Authenticode::AuthenticodeBase*>::get(), "GetHash", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::HashAlgorithm*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, hash);
}
inline ::Mono::Security::Authenticode::AuthenticodeBase* Mono::Security::Authenticode::AuthenticodeBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Authenticode::AuthenticodeBase*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::Authenticode::AuthenticodeBase::AuthenticodeBase() {}
