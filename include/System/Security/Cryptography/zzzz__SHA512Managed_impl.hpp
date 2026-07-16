#pragma once
// IWYU pragma private; include "System/Security/Cryptography/SHA512Managed.hpp"
#include "System/Security/Cryptography/zzzz__SHA512_impl.hpp"
#include "System/Security/Cryptography/zzzz__SHA512Managed_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA512Managed::*)()>(&::System::Security::Cryptography::SHA512Managed::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b03c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA512Managed::*)()>(&::System::Security::Cryptography::SHA512Managed::Initialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b03e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { ::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed.HashCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA512Managed::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::SHA512Managed::HashCore)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b03e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { ::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed.HashFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::SHA512Managed::*)()>(&::System::Security::Cryptography::SHA512Managed::HashFinal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b04008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { ::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed.InitializeState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA512Managed::*)()>(&::System::Security::Cryptography::SHA512Managed::InitializeState)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b03d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "InitializeState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed._HashData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA512Managed::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::SHA512Managed::_HashData)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5b03e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(),
                                                             { "_HashData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed._EndHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::SHA512Managed::*)()>(&::System::Security::Cryptography::SHA512Managed::_EndHash)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5b0400c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "_EndHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed.SHATransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, uint64_t*, uint8_t*)>(&::System::Security::Cryptography::SHA512Managed::SHATransform)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x5b04190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(),
                                                             { "SHATransform", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed.RotateRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, int32_t)>(&::System::Security::Cryptography::SHA512Managed::RotateRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0487c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "RotateRight", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed.Ch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, uint64_t, uint64_t)>(&::System::Security::Cryptography::SHA512Managed::Ch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b047f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(),
                                                                                           { "Ch", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed.Maj
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, uint64_t, uint64_t)>(&::System::Security::Cryptography::SHA512Managed::Maj)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b04868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(),
                                                                                           { "Maj", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed.Sigma_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t)>(&::System::Security::Cryptography::SHA512Managed::Sigma_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b04808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "Sigma_0", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed.Sigma_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t)>(&::System::Security::Cryptography::SHA512Managed::Sigma_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b04798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "Sigma_1", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed.sigma_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t)>(&::System::Security::Cryptography::SHA512Managed::sigma_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b04884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "sigma_0", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed.sigma_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t)>(&::System::Security::Cryptography::SHA512Managed::sigma_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b048e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "sigma_1", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA512Managed.SHA512Expand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*)>(&::System::Security::Cryptography::SHA512Managed::SHA512Expand)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b046ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "SHA512Expand", {}, { ::i2c::type_of<uint64_t*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::SHA512Managed::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::SHA512Managed::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void System::Security::Cryptography::SHA512Managed::__cordl_internal_set__buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buffer = value;
}
constexpr uint64_t& System::Security::Cryptography::SHA512Managed::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr uint64_t const& System::Security::Cryptography::SHA512Managed::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void System::Security::Cryptography::SHA512Managed::__cordl_internal_set__count(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
constexpr ::ArrayW<uint64_t>& System::Security::Cryptography::SHA512Managed::__cordl_internal_get__stateSHA512() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateSHA512;
}
constexpr ::ArrayW<uint64_t> const& System::Security::Cryptography::SHA512Managed::__cordl_internal_get__stateSHA512() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateSHA512;
}
constexpr void System::Security::Cryptography::SHA512Managed::__cordl_internal_set__stateSHA512(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stateSHA512 = value;
}
constexpr ::ArrayW<uint64_t>& System::Security::Cryptography::SHA512Managed::__cordl_internal_get__W() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____W;
}
constexpr ::ArrayW<uint64_t> const& System::Security::Cryptography::SHA512Managed::__cordl_internal_get__W() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____W;
}
constexpr void System::Security::Cryptography::SHA512Managed::__cordl_internal_set__W(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____W = value;
}
inline void System::Security::Cryptography::SHA512Managed::setStaticF__K(::ArrayW<uint64_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint64_t>, "_K", ::System::Security::Cryptography::SHA512Managed*>(std::forward<::ArrayW<uint64_t>>(value));
}
inline ::ArrayW<uint64_t> System::Security::Cryptography::SHA512Managed::getStaticF__K() {
  return ::cordl_internals::getStaticField<::ArrayW<uint64_t>, "_K", ::System::Security::Cryptography::SHA512Managed*>();
}
inline void System::Security::Cryptography::SHA512Managed::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA512Managed::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA512Managed::HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgb, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::SHA512Managed::HashFinal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA512Managed::InitializeState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "InitializeState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA512Managed::_HashData(::ArrayW<uint8_t> partIn, int32_t ibStart, int32_t cbSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(),
                                                           { "_HashData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partIn, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::SHA512Managed::_EndHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "_EndHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA512Managed::SHATransform(uint64_t* expandedBuffer, uint64_t* state, uint8_t* block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(),
                                                           { "SHATransform", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expandedBuffer, state, block);
}
inline uint64_t System::Security::Cryptography::SHA512Managed::RotateRight(uint64_t x, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "RotateRight", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, x, n);
}
inline uint64_t System::Security::Cryptography::SHA512Managed::Ch(uint64_t x, uint64_t y, uint64_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(),
                                                                                         { "Ch", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, x, y, z);
}
inline uint64_t System::Security::Cryptography::SHA512Managed::Maj(uint64_t x, uint64_t y, uint64_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(),
                                                                                         { "Maj", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, x, y, z);
}
inline uint64_t System::Security::Cryptography::SHA512Managed::Sigma_0(uint64_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "Sigma_0", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, x);
}
inline uint64_t System::Security::Cryptography::SHA512Managed::Sigma_1(uint64_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "Sigma_1", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, x);
}
inline uint64_t System::Security::Cryptography::SHA512Managed::sigma_0(uint64_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "sigma_0", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, x);
}
inline uint64_t System::Security::Cryptography::SHA512Managed::sigma_1(uint64_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "sigma_1", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, x);
}
inline void System::Security::Cryptography::SHA512Managed::SHA512Expand(uint64_t* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA512Managed*>(), { "SHA512Expand", {}, { ::i2c::type_of<uint64_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x);
}
inline ::System::Security::Cryptography::SHA512Managed* System::Security::Cryptography::SHA512Managed::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::SHA512Managed*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::SHA512Managed::SHA512Managed() {}
