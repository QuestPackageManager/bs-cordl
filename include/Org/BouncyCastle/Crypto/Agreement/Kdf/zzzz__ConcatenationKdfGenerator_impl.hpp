#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/Kdf/ConcatenationKdfGenerator.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Kdf/zzzz__ConcatenationKdfGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::*)(
    ::Org::BouncyCastle::Crypto::IDigest*)>(&::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x268a8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::*)(
    ::Org::BouncyCastle::Crypto::IDerivationParameters*)>(&::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::Init)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x268a9b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator.get_Digest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::get_Digest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268aa80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator.GenerateBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::GenerateBytes)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x268aa88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__cordl_internal_get_mDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__cordl_internal_get_mDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__cordl_internal_set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mDigest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__cordl_internal_get_mShared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mShared;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__cordl_internal_get_mShared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mShared;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__cordl_internal_set_mShared(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mShared)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__cordl_internal_get_mOtherInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOtherInfo;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__cordl_internal_get_mOtherInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOtherInfo;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__cordl_internal_set_mOtherInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mOtherInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__cordl_internal_get_mHLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHLen;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__cordl_internal_get_mHLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHLen;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__cordl_internal_set_mHLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mHLen = value;
}
inline void Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest);
}
inline void Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::Init(::Org::BouncyCastle::Crypto::IDerivationParameters* param) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, param);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::get_Digest() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, outBytes, outOff, len);
}
inline ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*
Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>(digest));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationFunction*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::i___Org__BouncyCastle__Crypto__IDerivationFunction() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationFunction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::ConcatenationKdfGenerator() {}
