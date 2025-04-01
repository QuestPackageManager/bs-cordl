#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/Pkcs12ParametersGenerator.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__Pkcs12ParametersGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2389f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator.Adjust
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::Adjust)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x238a064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), "Adjust", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator.GenerateDerivedKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(
    int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedKey)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x238a11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), "GenerateDerivedKey",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (
    ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x238a70c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (
    ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(::StringW, int32_t)>(&::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x238a7a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (
    ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x238a840;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(::StringW, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x238a940;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator.GenerateDerivedMacParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (
    ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedMacParameters)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x238aa54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), 12));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_get_u() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___u;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_get_u() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___u;
}
constexpr void Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_set_u(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___u = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_get_v() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_get_v() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr void Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_set_v(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___v = value;
}
inline void Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest);
}
inline void Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::Adjust(::ArrayW<uint8_t, ::Array<uint8_t>*> a, int32_t aOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), "Adjust", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a, aOff, b);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedKey(int32_t idByte, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), "GenerateDerivedKey",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, idByte, n);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters(int32_t keySize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(this, ___internal_method, keySize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters(::StringW algorithm, int32_t keySize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(this, ___internal_method, algorithm, keySize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters(int32_t keySize, int32_t ivSize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(this, ___internal_method, keySize, ivSize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters(::StringW algorithm, int32_t keySize,
                                                                                                                                                   int32_t ivSize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(this, ___internal_method, algorithm, keySize, ivSize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedMacParameters(int32_t keySize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(this, ___internal_method, keySize);
}
inline ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator* Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(digest));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::Pkcs12ParametersGenerator() {}
