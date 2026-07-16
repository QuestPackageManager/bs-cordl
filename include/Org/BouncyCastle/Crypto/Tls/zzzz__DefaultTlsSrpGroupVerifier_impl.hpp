#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DefaultTlsSrpGroupVerifier.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DefaultTlsSrpGroupVerifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpGroupVerifier_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x343edb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x343ee1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::*)(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::Accept)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x343ee24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier.AreGroupsEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::*)(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*,
                                                                                                                              ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::AreGroupsEqual)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x343f144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier.AreParametersEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::AreParametersEqual)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x343f1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::__cordl_internal_get_mGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mGroups;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::__cordl_internal_get_mGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mGroups;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::__cordl_internal_set_mGroups(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mGroups = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::setStaticF_DefaultGroups(::System::Collections::IList* value) {
  ::cordl_internals::setStaticField<::System::Collections::IList*, "DefaultGroups", ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(std::forward<::System::Collections::IList*>(value));
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::getStaticF_DefaultGroups() {
  return ::cordl_internals::getStaticField<::System::Collections::IList*, "DefaultGroups", ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>();
}
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::_ctor(::System::Collections::IList* groups) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groups);
}
inline bool Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::Accept(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, group);
}
inline bool Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::AreGroupsEqual(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* a,
                                                                                       ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline bool Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::AreParametersEqual(::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier* Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>());
}
inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier* Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::New_ctor(::System::Collections::IList* groups) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*>(groups));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier"
constexpr Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::operator ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::i___Org__BouncyCastle__Crypto__Tls__TlsSrpGroupVerifier() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier::DefaultTlsSrpGroupVerifier() {}
