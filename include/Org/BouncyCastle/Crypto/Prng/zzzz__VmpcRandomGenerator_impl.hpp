#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__VmpcRandomGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IRandomGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xf44fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator.AddSeedMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::AddSeedMaterial)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xf45060;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator.AddSeedMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::*)(int64_t)>(
    &::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::AddSeedMaterial)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf45130;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator.NextBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::NextBytes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf4515c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator.NextBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::NextBytes)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xf45180;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>::get(), 11));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
constexpr Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::operator ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::i___Org__BouncyCastle__Crypto__Prng__IRandomGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(static_cast<void*>(this));
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__get_n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__get_n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__set_n(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___n = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__get_P() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___P;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__get_P() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___P;
}
constexpr void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__set_P(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___P)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__set_s(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
inline ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator* Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>());
}
inline void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::AddSeedMaterial(::ArrayW<uint8_t, ::Array<uint8_t>*> seed) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::AddSeedMaterial(int64_t seed) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes);
}
inline void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t start, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes, start, len);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::VmpcRandomGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
