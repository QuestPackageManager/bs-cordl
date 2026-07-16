#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AesTransform.hpp"
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_impl.hpp"
#include "System/Security/Cryptography/zzzz__AesTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__Aes_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::AesTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesTransform::*)(::System::Security::Cryptography::Aes*, bool, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::AesTransform::_ctor)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x5f52ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Security::Cryptography::AesTransform*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::Aes*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesTransform.ECB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::AesTransform::ECB)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f538b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesTransform*>(), { ::i2c::class_of<::System::Security::Cryptography::AesTransform*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesTransform.SubByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Security::Cryptography::AesTransform::*)(uint32_t)>(&::System::Security::Cryptography::AesTransform::SubByte)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f537e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesTransform*>(), { "SubByte", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesTransform.Encrypt128
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint32_t>)>(
    &::System::Security::Cryptography::AesTransform::Encrypt128)> {
  constexpr static std::size_t size = 0x1de4;
  constexpr static std::size_t addrs = 0x5f538c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesTransform*>(),
                                                { "Encrypt128", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesTransform.Decrypt128
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint32_t>)>(
    &::System::Security::Cryptography::AesTransform::Decrypt128)> {
  constexpr static std::size_t size = 0x1dc8;
  constexpr static std::size_t addrs = 0x5f556a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesTransform*>(),
                                                { "Decrypt128", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t>& System::Security::Cryptography::AesTransform::__cordl_internal_get_expandedKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expandedKey;
}
constexpr ::ArrayW<uint32_t> const& System::Security::Cryptography::AesTransform::__cordl_internal_get_expandedKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expandedKey;
}
constexpr void System::Security::Cryptography::AesTransform::__cordl_internal_set_expandedKey(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expandedKey = value;
}
constexpr int32_t& System::Security::Cryptography::AesTransform::__cordl_internal_get_Nk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Nk;
}
constexpr int32_t const& System::Security::Cryptography::AesTransform::__cordl_internal_get_Nk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Nk;
}
constexpr void System::Security::Cryptography::AesTransform::__cordl_internal_set_Nk(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Nk = value;
}
constexpr int32_t& System::Security::Cryptography::AesTransform::__cordl_internal_get_Nr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Nr;
}
constexpr int32_t const& System::Security::Cryptography::AesTransform::__cordl_internal_get_Nr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Nr;
}
constexpr void System::Security::Cryptography::AesTransform::__cordl_internal_set_Nr(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Nr = value;
}
inline void System::Security::Cryptography::AesTransform::setStaticF_Rcon(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "Rcon", ::System::Security::Cryptography::AesTransform*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::getStaticF_Rcon() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "Rcon", ::System::Security::Cryptography::AesTransform*>();
}
inline void System::Security::Cryptography::AesTransform::setStaticF_SBox(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "SBox", ::System::Security::Cryptography::AesTransform*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AesTransform::getStaticF_SBox() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "SBox", ::System::Security::Cryptography::AesTransform*>();
}
inline void System::Security::Cryptography::AesTransform::setStaticF_iSBox(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "iSBox", ::System::Security::Cryptography::AesTransform*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AesTransform::getStaticF_iSBox() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "iSBox", ::System::Security::Cryptography::AesTransform*>();
}
inline void System::Security::Cryptography::AesTransform::setStaticF_T0(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "T0", ::System::Security::Cryptography::AesTransform*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::getStaticF_T0() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "T0", ::System::Security::Cryptography::AesTransform*>();
}
inline void System::Security::Cryptography::AesTransform::setStaticF_T1(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "T1", ::System::Security::Cryptography::AesTransform*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::getStaticF_T1() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "T1", ::System::Security::Cryptography::AesTransform*>();
}
inline void System::Security::Cryptography::AesTransform::setStaticF_T2(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "T2", ::System::Security::Cryptography::AesTransform*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::getStaticF_T2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "T2", ::System::Security::Cryptography::AesTransform*>();
}
inline void System::Security::Cryptography::AesTransform::setStaticF_T3(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "T3", ::System::Security::Cryptography::AesTransform*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::getStaticF_T3() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "T3", ::System::Security::Cryptography::AesTransform*>();
}
inline void System::Security::Cryptography::AesTransform::setStaticF_iT0(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "iT0", ::System::Security::Cryptography::AesTransform*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::getStaticF_iT0() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "iT0", ::System::Security::Cryptography::AesTransform*>();
}
inline void System::Security::Cryptography::AesTransform::setStaticF_iT1(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "iT1", ::System::Security::Cryptography::AesTransform*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::getStaticF_iT1() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "iT1", ::System::Security::Cryptography::AesTransform*>();
}
inline void System::Security::Cryptography::AesTransform::setStaticF_iT2(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "iT2", ::System::Security::Cryptography::AesTransform*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::getStaticF_iT2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "iT2", ::System::Security::Cryptography::AesTransform*>();
}
inline void System::Security::Cryptography::AesTransform::setStaticF_iT3(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "iT3", ::System::Security::Cryptography::AesTransform*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::getStaticF_iT3() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "iT3", ::System::Security::Cryptography::AesTransform*>();
}
inline void System::Security::Cryptography::AesTransform::_ctor(::System::Security::Cryptography::Aes* algo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Security::Cryptography::AesTransform*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::Aes*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algo, encryption, key, iv);
}
inline void System::Security::Cryptography::AesTransform::ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesTransform*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output);
}
inline uint32_t System::Security::Cryptography::AesTransform::SubByte(uint32_t a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesTransform*>(), { "SubByte", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, a);
}
inline void System::Security::Cryptography::AesTransform::Encrypt128(::ArrayW<uint8_t> indata, ::ArrayW<uint8_t> outdata, ::ArrayW<uint32_t> ekey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesTransform*>(),
                                                           { "Encrypt128", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indata, outdata, ekey);
}
inline void System::Security::Cryptography::AesTransform::Decrypt128(::ArrayW<uint8_t> indata, ::ArrayW<uint8_t> outdata, ::ArrayW<uint32_t> ekey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesTransform*>(),
                                                           { "Decrypt128", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indata, outdata, ekey);
}
inline ::System::Security::Cryptography::AesTransform* System::Security::Cryptography::AesTransform::New_ctor(::System::Security::Cryptography::Aes* algo, bool encryption, ::ArrayW<uint8_t> key,
                                                                                                              ::ArrayW<uint8_t> iv) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AesTransform*>(algo, encryption, key, iv));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::AesTransform::AesTransform() {}
