#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/JPake/JPakePrimeOrderGroups.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/JPake/zzzz__JPakePrimeOrderGroups_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/JPake/zzzz__JPakePrimeOrderGroup_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36dd144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups::setStaticF_SUN_JCE_1024(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*, "SUN_JCE_1024", ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*>(value));
}
inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups::getStaticF_SUN_JCE_1024() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*, "SUN_JCE_1024",
                                           ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups::setStaticF_NIST_2048(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*, "NIST_2048", ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*>(value));
}
inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups::getStaticF_NIST_2048() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*, "NIST_2048", ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups::setStaticF_NIST_3072(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*, "NIST_3072", ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups*>(
      std::forward<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*>(value));
}
inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups::getStaticF_NIST_3072() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*, "NIST_3072", ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups*>();
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups* Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups::JPakePrimeOrderGroups() {}
