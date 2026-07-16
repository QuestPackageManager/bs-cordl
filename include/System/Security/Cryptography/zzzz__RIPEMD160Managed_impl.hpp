#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RIPEMD160Managed.hpp"
#include "System/Security/Cryptography/zzzz__RIPEMD160_impl.hpp"
#include "System/Security/Cryptography/zzzz__RIPEMD160Managed_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RIPEMD160Managed._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RIPEMD160Managed::*)()>(&::System::Security::Cryptography::RIPEMD160Managed::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5af995c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RIPEMD160Managed.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RIPEMD160Managed::*)()>(&::System::Security::Cryptography::RIPEMD160Managed::Initialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5afe494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), { ::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RIPEMD160Managed.HashCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RIPEMD160Managed::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::RIPEMD160Managed::HashCore)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5afe4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), { ::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RIPEMD160Managed.HashFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RIPEMD160Managed::*)()>(&::System::Security::Cryptography::RIPEMD160Managed::HashFinal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5afe650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), { ::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RIPEMD160Managed.InitializeState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RIPEMD160Managed::*)()>(&::System::Security::Cryptography::RIPEMD160Managed::InitializeState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5afe410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), { "InitializeState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RIPEMD160Managed._HashData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RIPEMD160Managed::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::RIPEMD160Managed::_HashData)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5afe4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(),
                                                             { "_HashData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RIPEMD160Managed._EndHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RIPEMD160Managed::*)()>(&::System::Security::Cryptography::RIPEMD160Managed::_EndHash)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5afe654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), { "_EndHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RIPEMD160Managed.MDTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, uint32_t*, uint8_t*)>(&::System::Security::Cryptography::RIPEMD160Managed::MDTransform)> {
  constexpr static std::size_t size = 0x1680;
  constexpr static std::size_t addrs = 0x5afe7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(),
                                                             { "MDTransform", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RIPEMD160Managed.F
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t, uint32_t)>(&::System::Security::Cryptography::RIPEMD160Managed::F)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5affe5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(),
                                                                                           { "F", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RIPEMD160Managed.G
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t, uint32_t)>(&::System::Security::Cryptography::RIPEMD160Managed::G)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5affe68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(),
                                                                                           { "G", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RIPEMD160Managed.H
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t, uint32_t)>(&::System::Security::Cryptography::RIPEMD160Managed::H)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5affe78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(),
                                                                                           { "H", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RIPEMD160Managed.I
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t, uint32_t)>(&::System::Security::Cryptography::RIPEMD160Managed::I)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5affe84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(),
                                                                                           { "I", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RIPEMD160Managed.J
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t, uint32_t)>(&::System::Security::Cryptography::RIPEMD160Managed::J)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5affe94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(),
                                                                                           { "J", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::RIPEMD160Managed::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::RIPEMD160Managed::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void System::Security::Cryptography::RIPEMD160Managed::__cordl_internal_set__buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buffer = value;
}
constexpr int64_t& System::Security::Cryptography::RIPEMD160Managed::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int64_t const& System::Security::Cryptography::RIPEMD160Managed::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void System::Security::Cryptography::RIPEMD160Managed::__cordl_internal_set__count(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
constexpr ::ArrayW<uint32_t>& System::Security::Cryptography::RIPEMD160Managed::__cordl_internal_get__stateMD160() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateMD160;
}
constexpr ::ArrayW<uint32_t> const& System::Security::Cryptography::RIPEMD160Managed::__cordl_internal_get__stateMD160() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateMD160;
}
constexpr void System::Security::Cryptography::RIPEMD160Managed::__cordl_internal_set__stateMD160(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stateMD160 = value;
}
constexpr ::ArrayW<uint32_t>& System::Security::Cryptography::RIPEMD160Managed::__cordl_internal_get__blockDWords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockDWords;
}
constexpr ::ArrayW<uint32_t> const& System::Security::Cryptography::RIPEMD160Managed::__cordl_internal_get__blockDWords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockDWords;
}
constexpr void System::Security::Cryptography::RIPEMD160Managed::__cordl_internal_set__blockDWords(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blockDWords = value;
}
inline void System::Security::Cryptography::RIPEMD160Managed::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::RIPEMD160Managed::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::RIPEMD160Managed::HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgb, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RIPEMD160Managed::HashFinal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::RIPEMD160Managed::InitializeState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), { "InitializeState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::RIPEMD160Managed::_HashData(::ArrayW<uint8_t> partIn, int32_t ibStart, int32_t cbSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(),
                                                           { "_HashData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partIn, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RIPEMD160Managed::_EndHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(), { "_EndHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::RIPEMD160Managed::MDTransform(uint32_t* blockDWords, uint32_t* state, uint8_t* block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(),
                                                           { "MDTransform", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, blockDWords, state, block);
}
inline uint32_t System::Security::Cryptography::RIPEMD160Managed::F(uint32_t x, uint32_t y, uint32_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(),
                                                                                         { "F", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x, y, z);
}
inline uint32_t System::Security::Cryptography::RIPEMD160Managed::G(uint32_t x, uint32_t y, uint32_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(),
                                                                                         { "G", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x, y, z);
}
inline uint32_t System::Security::Cryptography::RIPEMD160Managed::H(uint32_t x, uint32_t y, uint32_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(),
                                                                                         { "H", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x, y, z);
}
inline uint32_t System::Security::Cryptography::RIPEMD160Managed::I(uint32_t x, uint32_t y, uint32_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(),
                                                                                         { "I", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x, y, z);
}
inline uint32_t System::Security::Cryptography::RIPEMD160Managed::J(uint32_t x, uint32_t y, uint32_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RIPEMD160Managed*>(),
                                                                                         { "J", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x, y, z);
}
inline ::System::Security::Cryptography::RIPEMD160Managed* System::Security::Cryptography::RIPEMD160Managed::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RIPEMD160Managed*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RIPEMD160Managed::RIPEMD160Managed() {}
