#pragma once
// IWYU pragma private; include "GlobalNamespace/DiffieHellmanUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DiffieHellmanUtility_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "GlobalNamespace/zzzz__DiffieHellmanUtility_def.hpp"
#include "GlobalNamespace/zzzz__IDiffieHellmanKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__DHBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECDHBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DiffieHellmanUtility_KeyType::DiffieHellmanUtility_KeyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DiffieHellmanUtility_KeyType::DiffieHellmanUtility_KeyType() {}
constexpr ::GlobalNamespace::DiffieHellmanUtility_KeyType GlobalNamespace::DiffieHellmanUtility_KeyType::DiffieHellman{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::DiffieHellmanUtility_KeyType GlobalNamespace::DiffieHellmanUtility_KeyType::ElipticalCurve{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x332d15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0._GetPreMasterSecretAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::_GetPreMasterSecretAsync_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x332d1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0*>(), { "<GetPreMasterSecretAsync>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair*& GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair* const& GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::__cordl_internal_set___4__this(::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::__cordl_internal_get_clientPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientPublicKey;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::__cordl_internal_get_clientPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientPublicKey;
}
constexpr void GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::__cordl_internal_set_clientPublicKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clientPublicKey = value;
}
inline void GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::_GetPreMasterSecretAsync_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0*>(), { "<GetPreMasterSecretAsync>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0* GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::DiffieHellmanKeyPair_DiffieHellmanUtility___c__DisplayClass5_0() {}
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair.get_publicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::*)()>(
    &::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::get_publicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x332cfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair*>(), { "get_publicKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::*)(
    ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*, ::ArrayW<uint8_t>)>(&::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x332c8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair.GetPreMasterSecretAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::*)(::BGNet::Core::ITaskUtility*, ::ArrayW<uint8_t>)>(
        &::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::GetPreMasterSecretAsync)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x332cfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair*>(),
                                                             { "GetPreMasterSecretAsync", {}, { ::i2c::type_of<::BGNet::Core::ITaskUtility*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair.GetPreMasterSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::*)(::ArrayW<uint8_t>)>(
    &::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::GetPreMasterSecret)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x332d160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair*>(), { "GetPreMasterSecret", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*& GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::__cordl_internal_get__dhBasicAgreement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dhBasicAgreement;
}
constexpr ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* const& GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::__cordl_internal_get__dhBasicAgreement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dhBasicAgreement;
}
constexpr void GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::__cordl_internal_set__dhBasicAgreement(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dhBasicAgreement = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::__cordl_internal_get__publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicKey;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::__cordl_internal_get__publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicKey;
}
constexpr void GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::__cordl_internal_set__publicKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____publicKey = value;
}
inline ::ArrayW<uint8_t> GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::get_publicKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair*>(), { "get_publicKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::_ctor(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKeyParameters, ::ArrayW<uint8_t> publicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKeyParameters, publicKey);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                                                                  ::ArrayW<uint8_t> clientPublicKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair*>(),
                                                           { "GetPreMasterSecretAsync", {}, { ::i2c::type_of<::BGNet::Core::ITaskUtility*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, taskUtility, clientPublicKey);
}
inline ::ArrayW<uint8_t> GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::GetPreMasterSecret(::ArrayW<uint8_t> clientPublicKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair*>(), { "GetPreMasterSecret", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, clientPublicKey);
}
inline ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair*
GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::New_ctor(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKeyParameters, ::ArrayW<uint8_t> publicKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair*>(privateKeyParameters, publicKey));
}
/// @brief Convert operator to "::GlobalNamespace::IDiffieHellmanKeyPair"
constexpr GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::operator ::GlobalNamespace::IDiffieHellmanKeyPair*() noexcept {
  return static_cast<::GlobalNamespace::IDiffieHellmanKeyPair*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDiffieHellmanKeyPair"
constexpr ::GlobalNamespace::IDiffieHellmanKeyPair* GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::i___GlobalNamespace__IDiffieHellmanKeyPair() noexcept {
  return static_cast<::GlobalNamespace::IDiffieHellmanKeyPair*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair::DiffieHellmanUtility_DiffieHellmanKeyPair() {}
//  Writing Method size for method: ::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x332d3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0._GetPreMasterSecretAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::_GetPreMasterSecretAsync_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x332d434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0*>(), { "<GetPreMasterSecretAsync>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair*& GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair* const&
GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::__cordl_internal_set___4__this(::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::__cordl_internal_get_clientPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientPublicKey;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::__cordl_internal_get_clientPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientPublicKey;
}
constexpr void GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::__cordl_internal_set_clientPublicKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clientPublicKey = value;
}
inline void GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::_GetPreMasterSecretAsync_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0*>(), { "<GetPreMasterSecretAsync>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0* GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0::ElipticalCurveKeyPair_DiffieHellmanUtility___c__DisplayClass5_0() {}
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair.get_publicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::*)()>(
    &::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::get_publicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x332d23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair*>(), { "get_publicKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::*)(
    ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*, ::ArrayW<uint8_t>)>(&::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x332c948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair.GetPreMasterSecretAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::*)(::BGNet::Core::ITaskUtility*, ::ArrayW<uint8_t>)>(
        &::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::GetPreMasterSecretAsync)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x332d244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair*>(),
                                                             { "GetPreMasterSecretAsync", {}, { ::i2c::type_of<::BGNet::Core::ITaskUtility*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair.GetPreMasterSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::*)(::ArrayW<uint8_t>)>(
    &::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::GetPreMasterSecret)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x332d3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair*>(), { "GetPreMasterSecret", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*& GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::__cordl_internal_get__ecdhBasicAgreement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ecdhBasicAgreement;
}
constexpr ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* const& GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::__cordl_internal_get__ecdhBasicAgreement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ecdhBasicAgreement;
}
constexpr void GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::__cordl_internal_set__ecdhBasicAgreement(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ecdhBasicAgreement = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::__cordl_internal_get__publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicKey;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::__cordl_internal_get__publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicKey;
}
constexpr void GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::__cordl_internal_set__publicKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____publicKey = value;
}
inline ::ArrayW<uint8_t> GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::get_publicKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair*>(), { "get_publicKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKeyParameters, ::ArrayW<uint8_t> publicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKeyParameters, publicKey);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                                                                   ::ArrayW<uint8_t> clientPublicKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair*>(),
                                                           { "GetPreMasterSecretAsync", {}, { ::i2c::type_of<::BGNet::Core::ITaskUtility*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, taskUtility, clientPublicKey);
}
inline ::ArrayW<uint8_t> GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::GetPreMasterSecret(::ArrayW<uint8_t> clientPublicKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair*>(), { "GetPreMasterSecret", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, clientPublicKey);
}
inline ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair*
GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKeyParameters, ::ArrayW<uint8_t> publicKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair*>(privateKeyParameters, publicKey));
}
/// @brief Convert operator to "::GlobalNamespace::IDiffieHellmanKeyPair"
constexpr GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::operator ::GlobalNamespace::IDiffieHellmanKeyPair*() noexcept {
  return static_cast<::GlobalNamespace::IDiffieHellmanKeyPair*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDiffieHellmanKeyPair"
constexpr ::GlobalNamespace::IDiffieHellmanKeyPair* GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::i___GlobalNamespace__IDiffieHellmanKeyPair() noexcept {
  return static_cast<::GlobalNamespace::IDiffieHellmanKeyPair*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair::DiffieHellmanUtility_ElipticalCurveKeyPair() {}
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility_OperationTimer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiffieHellmanUtility_OperationTimer::*)(::StringW)>(&::GlobalNamespace::DiffieHellmanUtility_OperationTimer::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x332d4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_OperationTimer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility_OperationTimer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DiffieHellmanUtility_OperationTimer::*)()>(&::GlobalNamespace::DiffieHellmanUtility_OperationTimer::Dispose)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x332d510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_OperationTimer*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility_OperationTimer.Time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DiffieHellmanUtility_OperationTimer* (*)(::StringW)>(&::GlobalNamespace::DiffieHellmanUtility_OperationTimer::Time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x332c8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_OperationTimer*>(), { "Time", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Diagnostics::Stopwatch*& GlobalNamespace::DiffieHellmanUtility_OperationTimer::__cordl_internal_get__stopwatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopwatch;
}
constexpr ::System::Diagnostics::Stopwatch* const& GlobalNamespace::DiffieHellmanUtility_OperationTimer::__cordl_internal_get__stopwatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopwatch;
}
constexpr void GlobalNamespace::DiffieHellmanUtility_OperationTimer::__cordl_internal_set__stopwatch(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stopwatch = value;
}
constexpr ::StringW& GlobalNamespace::DiffieHellmanUtility_OperationTimer::__cordl_internal_get__operationName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operationName;
}
constexpr ::StringW const& GlobalNamespace::DiffieHellmanUtility_OperationTimer::__cordl_internal_get__operationName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operationName;
}
constexpr void GlobalNamespace::DiffieHellmanUtility_OperationTimer::__cordl_internal_set__operationName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____operationName = value;
}
inline void GlobalNamespace::DiffieHellmanUtility_OperationTimer::_ctor(::StringW operationName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_OperationTimer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationName);
}
inline void GlobalNamespace::DiffieHellmanUtility_OperationTimer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_OperationTimer*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DiffieHellmanUtility_OperationTimer* GlobalNamespace::DiffieHellmanUtility_OperationTimer::Time(::StringW operation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility_OperationTimer*>(), { "Time", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DiffieHellmanUtility_OperationTimer*>(nullptr, ___internal_method, operation);
}
inline ::GlobalNamespace::DiffieHellmanUtility_OperationTimer* GlobalNamespace::DiffieHellmanUtility_OperationTimer::New_ctor(::StringW operationName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DiffieHellmanUtility_OperationTimer*>(operationName));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::DiffieHellmanUtility_OperationTimer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::DiffieHellmanUtility_OperationTimer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DiffieHellmanUtility_OperationTimer::DiffieHellmanUtility_OperationTimer() {}
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility.GenerateKeysAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>* (*)(::BGNet::Core::ITaskUtility*, ::System::Threading::CancellationToken,
                                                                                       ::GlobalNamespace::DiffieHellmanUtility_KeyType)>(&::GlobalNamespace::DiffieHellmanUtility::GenerateKeysAsync)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x332c254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility*>(),
                                                                                           { "GenerateKeysAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::BGNet::Core::ITaskUtility*>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::DiffieHellmanUtility_KeyType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility.GenerateKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IDiffieHellmanKeyPair* (*)(::GlobalNamespace::DiffieHellmanUtility_KeyType)>(
    &::GlobalNamespace::DiffieHellmanUtility::GenerateKeys)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x332c3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility*>(), { "GenerateKeys", {}, { ::i2c::type_of<::GlobalNamespace::DiffieHellmanUtility_KeyType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility.GenerateDiffieHellmanKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair* (*)()>(&::GlobalNamespace::DiffieHellmanUtility::GenerateDiffieHellmanKeys)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x332c698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility*>(), { "GenerateDiffieHellmanKeys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility.GenerateElipticalCurveKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair* (*)()>(&::GlobalNamespace::DiffieHellmanUtility::GenerateElipticalCurveKeys)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x332c45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility*>(), { "GenerateElipticalCurveKeys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility.GetPreMasterSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*, ::ArrayW<uint8_t>)>(
    &::GlobalNamespace::DiffieHellmanUtility::GetPreMasterSecret)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x332c9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility*>(),
                                                { "GetPreMasterSecret", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility.GetPreMasterSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*, ::ArrayW<uint8_t>)>(
    &::GlobalNamespace::DiffieHellmanUtility::GetPreMasterSecret)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x332cc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility*>(),
                                                { "GetPreMasterSecret", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DiffieHellmanUtility::setStaticF__secureRandom(::Org::BouncyCastle::Security::SecureRandom* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Security::SecureRandom*, "_secureRandom", ::GlobalNamespace::DiffieHellmanUtility*>(
      std::forward<::Org::BouncyCastle::Security::SecureRandom*>(value));
}
inline ::Org::BouncyCastle::Security::SecureRandom* GlobalNamespace::DiffieHellmanUtility::getStaticF__secureRandom() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Security::SecureRandom*, "_secureRandom", ::GlobalNamespace::DiffieHellmanUtility*>();
}
inline void GlobalNamespace::DiffieHellmanUtility::setStaticF__dhParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "_dhParameters", ::GlobalNamespace::DiffieHellmanUtility*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* GlobalNamespace::DiffieHellmanUtility::getStaticF__dhParameters() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "_dhParameters", ::GlobalNamespace::DiffieHellmanUtility*>();
}
inline void GlobalNamespace::DiffieHellmanUtility::setStaticF__ecParameters(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, "_ecParameters", ::GlobalNamespace::DiffieHellmanUtility*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* GlobalNamespace::DiffieHellmanUtility::getStaticF__ecParameters() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, "_ecParameters", ::GlobalNamespace::DiffieHellmanUtility*>();
}
inline void GlobalNamespace::DiffieHellmanUtility::setStaticF__ecPointFormats(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_ecPointFormats", ::GlobalNamespace::DiffieHellmanUtility*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> GlobalNamespace::DiffieHellmanUtility::getStaticF__ecPointFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_ecPointFormats", ::GlobalNamespace::DiffieHellmanUtility*>();
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>*
GlobalNamespace::DiffieHellmanUtility::GenerateKeysAsync(::BGNet::Core::ITaskUtility* taskUtility, ::System::Threading::CancellationToken cancellationToken,
                                                         ::GlobalNamespace::DiffieHellmanUtility_KeyType keyType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility*>(),
                                                                                         { "GenerateKeysAsync",
                                                                                           {},
                                                                                           { ::i2c::type_of<::BGNet::Core::ITaskUtility*>(), ::i2c::type_of<::System::Threading::CancellationToken>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::DiffieHellmanUtility_KeyType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>*>(nullptr, ___internal_method, taskUtility, cancellationToken, keyType);
}
inline ::GlobalNamespace::IDiffieHellmanKeyPair* GlobalNamespace::DiffieHellmanUtility::GenerateKeys(::GlobalNamespace::DiffieHellmanUtility_KeyType keyType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility*>(), { "GenerateKeys", {}, { ::i2c::type_of<::GlobalNamespace::DiffieHellmanUtility_KeyType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDiffieHellmanKeyPair*>(nullptr, ___internal_method, keyType);
}
inline ::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair* GlobalNamespace::DiffieHellmanUtility::GenerateDiffieHellmanKeys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility*>(), { "GenerateDiffieHellmanKeys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DiffieHellmanUtility_DiffieHellmanKeyPair*>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair* GlobalNamespace::DiffieHellmanUtility::GenerateElipticalCurveKeys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility*>(), { "GenerateElipticalCurveKeys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DiffieHellmanUtility_ElipticalCurveKeyPair*>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> GlobalNamespace::DiffieHellmanUtility::GetPreMasterSecret(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* dhBasicAgreement, ::ArrayW<uint8_t> clientPublicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility*>(),
                                              { "GetPreMasterSecret", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, dhBasicAgreement, clientPublicKey);
}
inline ::ArrayW<uint8_t> GlobalNamespace::DiffieHellmanUtility::GetPreMasterSecret(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* ecdhBasicAgreement, ::ArrayW<uint8_t> clientPublicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DiffieHellmanUtility*>(),
                                              { "GetPreMasterSecret", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, ecdhBasicAgreement, clientPublicKey);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DiffieHellmanUtility::DiffieHellmanUtility() {}
