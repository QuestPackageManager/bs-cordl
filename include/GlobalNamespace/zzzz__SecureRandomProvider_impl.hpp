#pragma once
// IWYU pragma private; include "GlobalNamespace\SecureRandomProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SecureRandomProvider_def.hpp"
#include "GlobalNamespace/zzzz__SecureRandomProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider_SecureRandomState.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecureRandomProvider_SecureRandomState::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::GlobalNamespace::SecureRandomProvider_SecureRandomState::GetBytes)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3340920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider_SecureRandomState*>(),
                                                             { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider_SecureRandomState.GetByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::GlobalNamespace::SecureRandomProvider_SecureRandomState::*)()>(&::GlobalNamespace::SecureRandomProvider_SecureRandomState::GetByte)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3340a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider_SecureRandomState*>(), { "GetByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider_SecureRandomState.FillBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecureRandomProvider_SecureRandomState::*)()>(&::GlobalNamespace::SecureRandomProvider_SecureRandomState::FillBuffer)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3340c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider_SecureRandomState*>(), { "FillBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider_SecureRandomState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecureRandomProvider_SecureRandomState::*)()>(&::GlobalNamespace::SecureRandomProvider_SecureRandomState::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3340bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider_SecureRandomState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& GlobalNamespace::SecureRandomProvider_SecureRandomState::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& GlobalNamespace::SecureRandomProvider_SecureRandomState::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::SecureRandomProvider_SecureRandomState::__cordl_internal_set__random(::System::Security::Cryptography::RandomNumberGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____random = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::SecureRandomProvider_SecureRandomState::__cordl_internal_get__randomBuffer0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomBuffer0;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::SecureRandomProvider_SecureRandomState::__cordl_internal_get__randomBuffer0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomBuffer0;
}
constexpr void GlobalNamespace::SecureRandomProvider_SecureRandomState::__cordl_internal_set__randomBuffer0(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomBuffer0 = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::SecureRandomProvider_SecureRandomState::__cordl_internal_get__randomBuffer1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomBuffer1;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::SecureRandomProvider_SecureRandomState::__cordl_internal_get__randomBuffer1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomBuffer1;
}
constexpr void GlobalNamespace::SecureRandomProvider_SecureRandomState::__cordl_internal_set__randomBuffer1(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomBuffer1 = value;
}
constexpr int32_t& GlobalNamespace::SecureRandomProvider_SecureRandomState::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& GlobalNamespace::SecureRandomProvider_SecureRandomState::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void GlobalNamespace::SecureRandomProvider_SecureRandomState::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
inline void GlobalNamespace::SecureRandomProvider_SecureRandomState::GetBytes(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider_SecureRandomState*>(),
                                                           { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, length);
}
inline uint8_t GlobalNamespace::SecureRandomProvider_SecureRandomState::GetByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider_SecureRandomState*>(), { "GetByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void GlobalNamespace::SecureRandomProvider_SecureRandomState::FillBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider_SecureRandomState*>(), { "FillBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecureRandomProvider_SecureRandomState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider_SecureRandomState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SecureRandomProvider_SecureRandomState* GlobalNamespace::SecureRandomProvider_SecureRandomState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SecureRandomProvider_SecureRandomState*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SecureRandomProvider_SecureRandomState::SecureRandomProvider_SecureRandomState() {}
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t)>(&::GlobalNamespace::SecureRandomProvider::GetBytes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3340878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider*>(), { "GetBytes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider.GetByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)()>(&::GlobalNamespace::SecureRandomProvider::GetByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x33409d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider*>(), { "GetByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::GlobalNamespace::SecureRandomProvider::GetBytes)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3330d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider*>(),
                                                             { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::SecureRandomProvider::GetBytes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3340ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider*>(), { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SecureRandomProvider::setStaticF__secureRandomState(::GlobalNamespace::SecureRandomProvider_SecureRandomState* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::SecureRandomProvider_SecureRandomState*, "_secureRandomState", ::GlobalNamespace::SecureRandomProvider*>(
      std::forward<::GlobalNamespace::SecureRandomProvider_SecureRandomState*>(value));
}
inline ::GlobalNamespace::SecureRandomProvider_SecureRandomState* GlobalNamespace::SecureRandomProvider::getStaticF__secureRandomState() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::SecureRandomProvider_SecureRandomState*, "_secureRandomState", ::GlobalNamespace::SecureRandomProvider*>();
}
inline ::ArrayW<uint8_t> GlobalNamespace::SecureRandomProvider::GetBytes(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider*>(), { "GetBytes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, length);
}
inline uint8_t GlobalNamespace::SecureRandomProvider::GetByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider*>(), { "GetByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SecureRandomProvider::GetBytes(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider*>(),
                                                           { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, offset, length);
}
inline void GlobalNamespace::SecureRandomProvider::GetBytes(::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SecureRandomProvider*>(), { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SecureRandomProvider::SecureRandomProvider() {}
