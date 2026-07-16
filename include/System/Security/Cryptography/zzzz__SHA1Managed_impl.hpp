#pragma once
// IWYU pragma private; include "System/Security/Cryptography/SHA1Managed.hpp"
#include "System/Security/Cryptography/zzzz__SHA1_impl.hpp"
#include "System/Security/Cryptography/zzzz__SHA1Managed_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Managed._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1Managed::*)()>(&::System::Security::Cryptography::SHA1Managed::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b013c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Managed.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1Managed::*)()>(&::System::Security::Cryptography::SHA1Managed::Initialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b01520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), { ::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Managed.HashCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1Managed::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::SHA1Managed::HashCore)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b01564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), { ::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Managed.HashFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::SHA1Managed::*)()>(&::System::Security::Cryptography::SHA1Managed::HashFinal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b016dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), { ::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Managed.InitializeState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1Managed::*)()>(&::System::Security::Cryptography::SHA1Managed::InitializeState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b0149c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), { "InitializeState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Managed._HashData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1Managed::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::SHA1Managed::_HashData)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5b01568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(),
                                                             { "_HashData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Managed._EndHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::SHA1Managed::*)()>(&::System::Security::Cryptography::SHA1Managed::_EndHash)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5b016e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), { "_EndHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Managed.SHATransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, uint32_t*, uint8_t*)>(&::System::Security::Cryptography::SHA1Managed::SHATransform)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x5b01864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(),
                                                             { "SHATransform", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Managed.SHAExpand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*)>(&::System::Security::Cryptography::SHA1Managed::SHAExpand)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b01d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), { "SHAExpand", {}, { ::i2c::type_of<uint32_t*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::SHA1Managed::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::SHA1Managed::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void System::Security::Cryptography::SHA1Managed::__cordl_internal_set__buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buffer = value;
}
constexpr int64_t& System::Security::Cryptography::SHA1Managed::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int64_t const& System::Security::Cryptography::SHA1Managed::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void System::Security::Cryptography::SHA1Managed::__cordl_internal_set__count(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
constexpr ::ArrayW<uint32_t>& System::Security::Cryptography::SHA1Managed::__cordl_internal_get__stateSHA1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateSHA1;
}
constexpr ::ArrayW<uint32_t> const& System::Security::Cryptography::SHA1Managed::__cordl_internal_get__stateSHA1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateSHA1;
}
constexpr void System::Security::Cryptography::SHA1Managed::__cordl_internal_set__stateSHA1(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stateSHA1 = value;
}
constexpr ::ArrayW<uint32_t>& System::Security::Cryptography::SHA1Managed::__cordl_internal_get__expandedBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandedBuffer;
}
constexpr ::ArrayW<uint32_t> const& System::Security::Cryptography::SHA1Managed::__cordl_internal_get__expandedBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandedBuffer;
}
constexpr void System::Security::Cryptography::SHA1Managed::__cordl_internal_set__expandedBuffer(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expandedBuffer = value;
}
inline void System::Security::Cryptography::SHA1Managed::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA1Managed::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA1Managed::HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgb, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::SHA1Managed::HashFinal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA1Managed::InitializeState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), { "InitializeState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA1Managed::_HashData(::ArrayW<uint8_t> partIn, int32_t ibStart, int32_t cbSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(),
                                                           { "_HashData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partIn, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::SHA1Managed::_EndHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), { "_EndHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA1Managed::SHATransform(uint32_t* expandedBuffer, uint32_t* state, uint8_t* block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(),
                                                           { "SHATransform", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expandedBuffer, state, block);
}
inline void System::Security::Cryptography::SHA1Managed::SHAExpand(uint32_t* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Managed*>(), { "SHAExpand", {}, { ::i2c::type_of<uint32_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x);
}
inline ::System::Security::Cryptography::SHA1Managed* System::Security::Cryptography::SHA1Managed::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::SHA1Managed*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::SHA1Managed::SHA1Managed() {}
