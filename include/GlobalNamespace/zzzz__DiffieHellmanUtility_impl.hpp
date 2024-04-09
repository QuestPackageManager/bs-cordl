#pragma once
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
constexpr ::GlobalNamespace::__DiffieHellmanUtility__KeyType::__DiffieHellmanUtility__KeyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DiffieHellmanUtility__KeyType::__DiffieHellmanUtility__KeyType() {}
constexpr ::GlobalNamespace::__DiffieHellmanUtility__KeyType GlobalNamespace::__DiffieHellmanUtility__KeyType::DiffieHellman{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__DiffieHellmanUtility__KeyType GlobalNamespace::__DiffieHellmanUtility__KeyType::ElipticalCurve{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf9d870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0._GetPreMasterSecretAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::*)()>(
        &::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::_GetPreMasterSecretAsync_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xf9d8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0*>::get(),
                                                 "<GetPreMasterSecretAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*& GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*> const&
GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::__cordl_internal_set___4__this(::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::__cordl_internal_get_clientPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientPublicKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::__cordl_internal_get_clientPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientPublicKey;
}
constexpr void GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::__cordl_internal_set_clientPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientPublicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0* GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0*>());
}
inline void GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::_GetPreMasterSecretAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0*>::get(),
                                               "<GetPreMasterSecretAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0() {}
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair.get_publicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::*)()>(
    &::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::get_publicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf9d718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*>::get(), "get_publicKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::*)(
    ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xf9d140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair.GetPreMasterSecretAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::*)(::BGNet::Core::ITaskUtility*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::GetPreMasterSecretAsync)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xf9d720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*>::get(),
                                                 "GetPreMasterSecretAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair.GetPreMasterSecret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::GetPreMasterSecret)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xf9d878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*>::get(), "GetPreMasterSecret", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IDiffieHellmanKeyPair"
constexpr GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::operator ::GlobalNamespace::IDiffieHellmanKeyPair*() noexcept {
  return static_cast<::GlobalNamespace::IDiffieHellmanKeyPair*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDiffieHellmanKeyPair"
constexpr ::GlobalNamespace::IDiffieHellmanKeyPair* GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::i___GlobalNamespace__IDiffieHellmanKeyPair() noexcept {
  return static_cast<::GlobalNamespace::IDiffieHellmanKeyPair*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*& GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::__cordl_internal_get__dhBasicAgreement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dhBasicAgreement;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*> const&
GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::__cordl_internal_get__dhBasicAgreement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dhBasicAgreement;
}
constexpr void GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::__cordl_internal_set__dhBasicAgreement(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dhBasicAgreement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::__cordl_internal_get__publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::__cordl_internal_get__publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicKey;
}
constexpr void GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::__cordl_internal_set__publicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____publicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::get_publicKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*>::get(), "get_publicKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*
GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::New_ctor(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKeyParameters,
                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*>(privateKeyParameters, publicKey));
}
inline void GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::_ctor(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKeyParameters,
                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKeyParameters, publicKey);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility* taskUtility, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*>::get(),
                                               "GetPreMasterSecretAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method, taskUtility, clientPublicKey);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::GetPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*>::get(), "GetPreMasterSecret", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, clientPublicKey);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair::__DiffieHellmanUtility__DiffieHellmanKeyPair() {}
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf9daa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0._GetPreMasterSecretAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::*)()>(
        &::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::_GetPreMasterSecretAsync_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xf9db14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0*>::get(),
                                                 "<GetPreMasterSecretAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*& GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*> const&
GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::__cordl_internal_set___4__this(::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::__cordl_internal_get_clientPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientPublicKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::__cordl_internal_get_clientPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientPublicKey;
}
constexpr void GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::__cordl_internal_set_clientPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientPublicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0* GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0*>());
}
inline void GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::_GetPreMasterSecretAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0*>::get(),
                                               "<GetPreMasterSecretAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0() {}
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair.get_publicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::*)()>(
    &::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::get_publicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf9d94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*>::get(), "get_publicKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::*)(
    ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xf9d1d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair.GetPreMasterSecretAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::*)(::BGNet::Core::ITaskUtility*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::GetPreMasterSecretAsync)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xf9d954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*>::get(),
                                                 "GetPreMasterSecretAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair.GetPreMasterSecret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::GetPreMasterSecret)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xf9daac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*>::get(), "GetPreMasterSecret",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IDiffieHellmanKeyPair"
constexpr GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::operator ::GlobalNamespace::IDiffieHellmanKeyPair*() noexcept {
  return static_cast<::GlobalNamespace::IDiffieHellmanKeyPair*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDiffieHellmanKeyPair"
constexpr ::GlobalNamespace::IDiffieHellmanKeyPair* GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::i___GlobalNamespace__IDiffieHellmanKeyPair() noexcept {
  return static_cast<::GlobalNamespace::IDiffieHellmanKeyPair*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*& GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::__cordl_internal_get__ecdhBasicAgreement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ecdhBasicAgreement;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*> const&
GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::__cordl_internal_get__ecdhBasicAgreement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ecdhBasicAgreement;
}
constexpr void GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::__cordl_internal_set__ecdhBasicAgreement(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ecdhBasicAgreement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::__cordl_internal_get__publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::__cordl_internal_get__publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicKey;
}
constexpr void GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::__cordl_internal_set__publicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____publicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::get_publicKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*>::get(), "get_publicKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*
GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKeyParameters,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*>(privateKeyParameters, publicKey));
}
inline void GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKeyParameters,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKeyParameters, publicKey);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility* taskUtility, ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*>::get(),
                                               "GetPreMasterSecretAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method, taskUtility, clientPublicKey);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::GetPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*>::get(), "GetPreMasterSecret", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, clientPublicKey);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair::__DiffieHellmanUtility__ElipticalCurveKeyPair() {}
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__OperationTimer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DiffieHellmanUtility__OperationTimer::*)(::StringW)>(
    &::GlobalNamespace::__DiffieHellmanUtility__OperationTimer::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf9db80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__OperationTimer*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__OperationTimer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DiffieHellmanUtility__OperationTimer::*)()>(
    &::GlobalNamespace::__DiffieHellmanUtility__OperationTimer::Dispose)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xf9dc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__OperationTimer*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DiffieHellmanUtility__OperationTimer.Time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DiffieHellmanUtility__OperationTimer* (*)(::StringW)>(
    &::GlobalNamespace::__DiffieHellmanUtility__OperationTimer::Time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf9d138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__OperationTimer*>::get(), "Time",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__DiffieHellmanUtility__OperationTimer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__DiffieHellmanUtility__OperationTimer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Diagnostics::Stopwatch*& GlobalNamespace::__DiffieHellmanUtility__OperationTimer::__cordl_internal_get__stopwatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopwatch;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& GlobalNamespace::__DiffieHellmanUtility__OperationTimer::__cordl_internal_get__stopwatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopwatch;
}
constexpr void GlobalNamespace::__DiffieHellmanUtility__OperationTimer::__cordl_internal_set__stopwatch(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stopwatch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__DiffieHellmanUtility__OperationTimer::__cordl_internal_get__operationName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operationName;
}
constexpr ::StringW const& GlobalNamespace::__DiffieHellmanUtility__OperationTimer::__cordl_internal_get__operationName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operationName;
}
constexpr void GlobalNamespace::__DiffieHellmanUtility__OperationTimer::__cordl_internal_set__operationName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____operationName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DiffieHellmanUtility__OperationTimer* GlobalNamespace::__DiffieHellmanUtility__OperationTimer::New_ctor(::StringW operationName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DiffieHellmanUtility__OperationTimer*>(operationName));
}
inline void GlobalNamespace::__DiffieHellmanUtility__OperationTimer::_ctor(::StringW operationName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__OperationTimer*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operationName);
}
inline void GlobalNamespace::__DiffieHellmanUtility__OperationTimer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__OperationTimer*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__DiffieHellmanUtility__OperationTimer* GlobalNamespace::__DiffieHellmanUtility__OperationTimer::Time(::StringW operation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DiffieHellmanUtility__OperationTimer*>::get(), "Time",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DiffieHellmanUtility__OperationTimer*, false>(nullptr, ___internal_method, operation);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DiffieHellmanUtility__OperationTimer::__DiffieHellmanUtility__OperationTimer() {}
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility.GenerateKeysAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::GlobalNamespace::IDiffieHellmanKeyPair*>* (*)(::BGNet::Core::ITaskUtility*, ::System::Threading::CancellationToken, ::GlobalNamespace::__DiffieHellmanUtility__KeyType)>(
    &::GlobalNamespace::DiffieHellmanUtility::GenerateKeysAsync)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xf9cc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get(), "GenerateKeysAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DiffieHellmanUtility__KeyType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility.GenerateKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDiffieHellmanKeyPair* (*)(::GlobalNamespace::__DiffieHellmanUtility__KeyType)>(
    &::GlobalNamespace::DiffieHellmanUtility::GenerateKeys)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xf991d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get(), "GenerateKeys", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DiffieHellmanUtility__KeyType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility.GenerateDiffieHellmanKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair* (*)()>(
    &::GlobalNamespace::DiffieHellmanUtility::GenerateDiffieHellmanKeys)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xf9cfb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get(),
                                                                               "GenerateDiffieHellmanKeys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility.GenerateElipticalCurveKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair* (*)()>(
    &::GlobalNamespace::DiffieHellmanUtility::GenerateElipticalCurveKeys)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xf9ce24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get(),
                                                                               "GenerateElipticalCurveKeys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility.GetPreMasterSecret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(
    ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::DiffieHellmanUtility::GetPreMasterSecret)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xf9d270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get(), "GetPreMasterSecret", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DiffieHellmanUtility.GetPreMasterSecret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(
    ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::DiffieHellmanUtility::GetPreMasterSecret)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xf9d40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get(), "GetPreMasterSecret", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DiffieHellmanUtility::setStaticF__secureRandom(::Org::BouncyCastle::Security::SecureRandom* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Security::SecureRandom*, "_secureRandom",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get>(
      std::forward<::Org::BouncyCastle::Security::SecureRandom*>(value));
}
inline ::Org::BouncyCastle::Security::SecureRandom* GlobalNamespace::DiffieHellmanUtility::getStaticF__secureRandom() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Security::SecureRandom*, "_secureRandom",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get>();
}
inline void GlobalNamespace::DiffieHellmanUtility::setStaticF__dhParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "_dhParameters",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* GlobalNamespace::DiffieHellmanUtility::getStaticF__dhParameters() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "_dhParameters",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get>();
}
inline void GlobalNamespace::DiffieHellmanUtility::setStaticF__ecParameters(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, "_ecParameters",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* GlobalNamespace::DiffieHellmanUtility::getStaticF__ecParameters() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, "_ecParameters",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get>();
}
inline void GlobalNamespace::DiffieHellmanUtility::setStaticF__ecPointFormats(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "_ecPointFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::DiffieHellmanUtility::getStaticF__ecPointFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "_ecPointFormats",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get>();
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
/// @param keyType: ::GlobalNamespace::__DiffieHellmanUtility__KeyType (default: static_cast<int32_t>(0x1))
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>*
GlobalNamespace::DiffieHellmanUtility::GenerateKeysAsync(::BGNet::Core::ITaskUtility* taskUtility, ::System::Threading::CancellationToken cancellationToken,
                                                         ::GlobalNamespace::__DiffieHellmanUtility__KeyType keyType) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get(), "GenerateKeysAsync", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DiffieHellmanUtility__KeyType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>*, false>(nullptr, ___internal_method, taskUtility, cancellationToken,
                                                                                                                                    keyType);
}
/// @param keyType: ::GlobalNamespace::__DiffieHellmanUtility__KeyType (default: static_cast<int32_t>(0x1))
inline ::GlobalNamespace::IDiffieHellmanKeyPair* GlobalNamespace::DiffieHellmanUtility::GenerateKeys(::GlobalNamespace::__DiffieHellmanUtility__KeyType keyType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get(), "GenerateKeys", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DiffieHellmanUtility__KeyType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDiffieHellmanKeyPair*, false>(nullptr, ___internal_method, keyType);
}
inline ::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair* GlobalNamespace::DiffieHellmanUtility::GenerateDiffieHellmanKeys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get(),
                                                                             "GenerateDiffieHellmanKeys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DiffieHellmanUtility__DiffieHellmanKeyPair*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair* GlobalNamespace::DiffieHellmanUtility::GenerateElipticalCurveKeys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get(),
                                                                             "GenerateElipticalCurveKeys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__DiffieHellmanUtility__ElipticalCurveKeyPair*, false>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::DiffieHellmanUtility::GetPreMasterSecret(::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* dhBasicAgreement,
                                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get(), "GetPreMasterSecret", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, dhBasicAgreement, clientPublicKey);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::DiffieHellmanUtility::GetPreMasterSecret(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* ecdhBasicAgreement,
                                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DiffieHellmanUtility*>::get(), "GetPreMasterSecret", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, ecdhBasicAgreement, clientPublicKey);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DiffieHellmanUtility::DiffieHellmanUtility() {}
