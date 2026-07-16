#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DESTransform.hpp"
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_impl.hpp"
#include "System/Security/Cryptography/zzzz__DESTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DESTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DESTransform::*)(::System::Security::Cryptography::SymmetricAlgorithm*, bool, ::ArrayW<uint8_t>,
                                                                                                                ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DESTransform::_ctor)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5b09814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Security::Cryptography::SymmetricAlgorithm*>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESTransform.CipherFunct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Security::Cryptography::DESTransform::*)(uint32_t, int32_t)>(&::System::Security::Cryptography::DESTransform::CipherFunct)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5b09ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(), { "CipherFunct", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESTransform.Permutation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint32_t>, bool)>(&::System::Security::Cryptography::DESTransform::Permutation)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5b0a0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(),
                            { "Permutation", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESTransform.BSwap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DESTransform::BSwap)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b0a3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(), { "BSwap", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESTransform.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DESTransform::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DESTransform::SetKey)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5b09b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(), { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESTransform.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DESTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::DESTransform::ProcessBlock)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5b0a428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(),
                                                                                           { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESTransform.ECB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DESTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::DESTransform::ECB)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b0a7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(), { ::i2c::class_of<::System::Security::Cryptography::DESTransform*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESTransform.GetStrongKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::System::Security::Cryptography::DESTransform::GetStrongKey)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b09a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(), { "GetStrongKey", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::DESTransform::__cordl_internal_get_keySchedule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySchedule;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::DESTransform::__cordl_internal_get_keySchedule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySchedule;
}
constexpr void System::Security::Cryptography::DESTransform::__cordl_internal_set_keySchedule(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keySchedule = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::DESTransform::__cordl_internal_get_byteBuff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuff;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::DESTransform::__cordl_internal_get_byteBuff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuff;
}
constexpr void System::Security::Cryptography::DESTransform::__cordl_internal_set_byteBuff(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteBuff = value;
}
constexpr ::ArrayW<uint32_t>& System::Security::Cryptography::DESTransform::__cordl_internal_get_dwordBuff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dwordBuff;
}
constexpr ::ArrayW<uint32_t> const& System::Security::Cryptography::DESTransform::__cordl_internal_get_dwordBuff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dwordBuff;
}
constexpr void System::Security::Cryptography::DESTransform::__cordl_internal_set_dwordBuff(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dwordBuff = value;
}
inline void System::Security::Cryptography::DESTransform::setStaticF_KEY_BIT_SIZE(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "KEY_BIT_SIZE", ::System::Security::Cryptography::DESTransform*>(std::forward<int32_t>(value));
}
inline int32_t System::Security::Cryptography::DESTransform::getStaticF_KEY_BIT_SIZE() {
  return ::cordl_internals::getStaticField<int32_t, "KEY_BIT_SIZE", ::System::Security::Cryptography::DESTransform*>();
}
inline void System::Security::Cryptography::DESTransform::setStaticF_KEY_BYTE_SIZE(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "KEY_BYTE_SIZE", ::System::Security::Cryptography::DESTransform*>(std::forward<int32_t>(value));
}
inline int32_t System::Security::Cryptography::DESTransform::getStaticF_KEY_BYTE_SIZE() {
  return ::cordl_internals::getStaticField<int32_t, "KEY_BYTE_SIZE", ::System::Security::Cryptography::DESTransform*>();
}
inline void System::Security::Cryptography::DESTransform::setStaticF_BLOCK_BIT_SIZE(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BLOCK_BIT_SIZE", ::System::Security::Cryptography::DESTransform*>(std::forward<int32_t>(value));
}
inline int32_t System::Security::Cryptography::DESTransform::getStaticF_BLOCK_BIT_SIZE() {
  return ::cordl_internals::getStaticField<int32_t, "BLOCK_BIT_SIZE", ::System::Security::Cryptography::DESTransform*>();
}
inline void System::Security::Cryptography::DESTransform::setStaticF_BLOCK_BYTE_SIZE(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BLOCK_BYTE_SIZE", ::System::Security::Cryptography::DESTransform*>(std::forward<int32_t>(value));
}
inline int32_t System::Security::Cryptography::DESTransform::getStaticF_BLOCK_BYTE_SIZE() {
  return ::cordl_internals::getStaticField<int32_t, "BLOCK_BYTE_SIZE", ::System::Security::Cryptography::DESTransform*>();
}
inline void System::Security::Cryptography::DESTransform::setStaticF_spBoxes(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "spBoxes", ::System::Security::Cryptography::DESTransform*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Security::Cryptography::DESTransform::getStaticF_spBoxes() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "spBoxes", ::System::Security::Cryptography::DESTransform*>();
}
inline void System::Security::Cryptography::DESTransform::setStaticF_PC1(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "PC1", ::System::Security::Cryptography::DESTransform*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DESTransform::getStaticF_PC1() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "PC1", ::System::Security::Cryptography::DESTransform*>();
}
inline void System::Security::Cryptography::DESTransform::setStaticF_leftRotTotal(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "leftRotTotal", ::System::Security::Cryptography::DESTransform*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DESTransform::getStaticF_leftRotTotal() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "leftRotTotal", ::System::Security::Cryptography::DESTransform*>();
}
inline void System::Security::Cryptography::DESTransform::setStaticF_PC2(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "PC2", ::System::Security::Cryptography::DESTransform*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DESTransform::getStaticF_PC2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "PC2", ::System::Security::Cryptography::DESTransform*>();
}
inline void System::Security::Cryptography::DESTransform::setStaticF_ipTab(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "ipTab", ::System::Security::Cryptography::DESTransform*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Security::Cryptography::DESTransform::getStaticF_ipTab() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "ipTab", ::System::Security::Cryptography::DESTransform*>();
}
inline void System::Security::Cryptography::DESTransform::setStaticF_fpTab(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "fpTab", ::System::Security::Cryptography::DESTransform*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Security::Cryptography::DESTransform::getStaticF_fpTab() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "fpTab", ::System::Security::Cryptography::DESTransform*>();
}
inline void System::Security::Cryptography::DESTransform::_ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Security::Cryptography::SymmetricAlgorithm*>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, symmAlgo, encryption, key, iv);
}
inline uint32_t System::Security::Cryptography::DESTransform::CipherFunct(uint32_t r, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(), { "CipherFunct", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, r, n);
}
inline void System::Security::Cryptography::DESTransform::Permutation(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output, ::ArrayW<uint32_t> permTab, bool preSwap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(),
                          { "Permutation", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, output, permTab, preSwap);
}
inline void System::Security::Cryptography::DESTransform::BSwap(::ArrayW<uint8_t> byteBuff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(), { "BSwap", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, byteBuff);
}
inline void System::Security::Cryptography::DESTransform::SetKey(::ArrayW<uint8_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(), { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::DESTransform::ProcessBlock(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(),
                                                                                         { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output);
}
inline void System::Security::Cryptography::DESTransform::ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::DESTransform*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DESTransform::GetStrongKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESTransform*>(), { "GetStrongKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::DESTransform* System::Security::Cryptography::DESTransform::New_ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption,
                                                                                                              ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DESTransform*>(symmAlgo, encryption, key, iv));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DESTransform::DESTransform() {}
