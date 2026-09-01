#pragma once
// IWYU pragma private; include "System\Security\Cryptography\SHA256Managed.hpp"
#include "System/Security/Cryptography/zzzz__SHA256_impl.hpp"
#include "System/Security/Cryptography/zzzz__SHA256Managed_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA256Managed::*)()>(&::System::Security::Cryptography::SHA256Managed::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b0411c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA256Managed::*)()>(&::System::Security::Cryptography::SHA256Managed::Initialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b042a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { ::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed.HashCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA256Managed::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::SHA256Managed::HashCore)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b042ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { ::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed.HashFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::SHA256Managed::*)()>(&::System::Security::Cryptography::SHA256Managed::HashFinal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b044ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { ::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed.InitializeState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA256Managed::*)()>(&::System::Security::Cryptography::SHA256Managed::InitializeState)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b041e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "InitializeState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed._HashData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA256Managed::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::SHA256Managed::_HashData)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5b042f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(),
                                                             { "_HashData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed._EndHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::SHA256Managed::*)()>(&::System::Security::Cryptography::SHA256Managed::_EndHash)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5b044b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "_EndHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed.SHATransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, uint32_t*, uint8_t*)>(&::System::Security::Cryptography::SHA256Managed::SHATransform)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x5b04634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(),
                                                             { "SHATransform", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed.RotateRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::System::Security::Cryptography::SHA256Managed::RotateRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b04d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "RotateRight", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed.Ch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t, uint32_t)>(&::System::Security::Cryptography::SHA256Managed::Ch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b04cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(),
                                                                                           { "Ch", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed.Maj
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t, uint32_t)>(&::System::Security::Cryptography::SHA256Managed::Maj)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b04d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(),
                                                                                           { "Maj", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed.sigma_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::System::Security::Cryptography::SHA256Managed::sigma_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b04d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "sigma_0", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed.sigma_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::System::Security::Cryptography::SHA256Managed::sigma_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b04dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "sigma_1", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed.Sigma_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::System::Security::Cryptography::SHA256Managed::Sigma_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b04cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "Sigma_0", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed.Sigma_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::System::Security::Cryptography::SHA256Managed::Sigma_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b04c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "Sigma_1", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA256Managed.SHA256Expand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*)>(&::System::Security::Cryptography::SHA256Managed::SHA256Expand)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b04bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "SHA256Expand", {}, { ::i2c::type_of<uint32_t*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::SHA256Managed::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::SHA256Managed::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void System::Security::Cryptography::SHA256Managed::__cordl_internal_set__buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buffer = value;
}
constexpr int64_t& System::Security::Cryptography::SHA256Managed::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int64_t const& System::Security::Cryptography::SHA256Managed::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void System::Security::Cryptography::SHA256Managed::__cordl_internal_set__count(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
constexpr ::ArrayW<uint32_t>& System::Security::Cryptography::SHA256Managed::__cordl_internal_get__stateSHA256() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateSHA256;
}
constexpr ::ArrayW<uint32_t> const& System::Security::Cryptography::SHA256Managed::__cordl_internal_get__stateSHA256() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateSHA256;
}
constexpr void System::Security::Cryptography::SHA256Managed::__cordl_internal_set__stateSHA256(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stateSHA256 = value;
}
constexpr ::ArrayW<uint32_t>& System::Security::Cryptography::SHA256Managed::__cordl_internal_get__W() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____W;
}
constexpr ::ArrayW<uint32_t> const& System::Security::Cryptography::SHA256Managed::__cordl_internal_get__W() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____W;
}
constexpr void System::Security::Cryptography::SHA256Managed::__cordl_internal_set__W(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____W = value;
}
inline void System::Security::Cryptography::SHA256Managed::setStaticF__K(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "_K", ::System::Security::Cryptography::SHA256Managed*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Security::Cryptography::SHA256Managed::getStaticF__K() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "_K", ::System::Security::Cryptography::SHA256Managed*>();
}
inline void System::Security::Cryptography::SHA256Managed::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA256Managed::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA256Managed::HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgb, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::SHA256Managed::HashFinal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA256Managed::InitializeState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "InitializeState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA256Managed::_HashData(::ArrayW<uint8_t> partIn, int32_t ibStart, int32_t cbSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(),
                                                           { "_HashData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partIn, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::SHA256Managed::_EndHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "_EndHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA256Managed::SHATransform(uint32_t* expandedBuffer, uint32_t* state, uint8_t* block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(),
                                                           { "SHATransform", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expandedBuffer, state, block);
}
inline uint32_t System::Security::Cryptography::SHA256Managed::RotateRight(uint32_t x, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "RotateRight", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x, n);
}
inline uint32_t System::Security::Cryptography::SHA256Managed::Ch(uint32_t x, uint32_t y, uint32_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(),
                                                                                         { "Ch", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x, y, z);
}
inline uint32_t System::Security::Cryptography::SHA256Managed::Maj(uint32_t x, uint32_t y, uint32_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(),
                                                                                         { "Maj", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x, y, z);
}
inline uint32_t System::Security::Cryptography::SHA256Managed::sigma_0(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "sigma_0", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline uint32_t System::Security::Cryptography::SHA256Managed::sigma_1(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "sigma_1", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline uint32_t System::Security::Cryptography::SHA256Managed::Sigma_0(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "Sigma_0", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline uint32_t System::Security::Cryptography::SHA256Managed::Sigma_1(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "Sigma_1", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline void System::Security::Cryptography::SHA256Managed::SHA256Expand(uint32_t* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA256Managed*>(), { "SHA256Expand", {}, { ::i2c::type_of<uint32_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x);
}
inline ::System::Security::Cryptography::SHA256Managed* System::Security::Cryptography::SHA256Managed::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::SHA256Managed*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::SHA256Managed::SHA256Managed() {}
