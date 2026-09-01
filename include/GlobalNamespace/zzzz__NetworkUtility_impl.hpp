#pragma once
// IWYU pragma private; include "GlobalNamespace\NetworkUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkUtility_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkUtility.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::NetworkUtility::Init)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x333b704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkUtility*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkUtility.EncryptName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::NetworkUtility::EncryptName)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x333b7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkUtility*>(), { "EncryptName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkUtility.DecryptName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::NetworkUtility::DecryptName)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x333bb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkUtility*>(), { "DecryptName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkUtility.GenerateId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::NetworkUtility::GenerateId)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x333befc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkUtility*>(), { "GenerateId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkUtility.GetHashBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::NetworkUtility::GetHashBase64)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x333bf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkUtility*>(), { "GetHashBase64", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkUtility::setStaticF__nameEncryptionKey(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_nameEncryptionKey", ::GlobalNamespace::NetworkUtility*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> GlobalNamespace::NetworkUtility::getStaticF__nameEncryptionKey() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_nameEncryptionKey", ::GlobalNamespace::NetworkUtility*>();
}
inline void GlobalNamespace::NetworkUtility::setStaticF__nameEncryptionIv(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_nameEncryptionIv", ::GlobalNamespace::NetworkUtility*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> GlobalNamespace::NetworkUtility::getStaticF__nameEncryptionIv() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_nameEncryptionIv", ::GlobalNamespace::NetworkUtility*>();
}
inline void GlobalNamespace::NetworkUtility::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkUtility*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkUtility::EncryptName(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkUtility*>(), { "EncryptName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text);
}
inline ::StringW GlobalNamespace::NetworkUtility::DecryptName(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkUtility*>(), { "DecryptName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text);
}
inline ::StringW GlobalNamespace::NetworkUtility::GenerateId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkUtility*>(), { "GenerateId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkUtility::GetHashBase64(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkUtility*>(), { "GetHashBase64", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkUtility::NetworkUtility() {}
