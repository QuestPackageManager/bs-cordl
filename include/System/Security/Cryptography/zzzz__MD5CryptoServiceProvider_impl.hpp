#pragma once
// IWYU pragma private; include "System\Security\Cryptography\MD5CryptoServiceProvider.hpp"
#include "System/Security/Cryptography/zzzz__MD5_impl.hpp"
#include "System/Security/Cryptography/zzzz__MD5CryptoServiceProvider_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::MD5CryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MD5CryptoServiceProvider::*)()>(&::System::Security::Cryptography::MD5CryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b0ac00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MD5CryptoServiceProvider.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MD5CryptoServiceProvider::*)()>(&::System::Security::Cryptography::MD5CryptoServiceProvider::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b0d1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MD5CryptoServiceProvider.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MD5CryptoServiceProvider::*)(bool)>(
    &::System::Security::Cryptography::MD5CryptoServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b0d248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MD5CryptoServiceProvider.HashCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MD5CryptoServiceProvider::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::MD5CryptoServiceProvider::HashCore)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b0d2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MD5CryptoServiceProvider.HashFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::MD5CryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::MD5CryptoServiceProvider::HashFinal)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b0e02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MD5CryptoServiceProvider.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MD5CryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::MD5CryptoServiceProvider::Initialize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b0e2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MD5CryptoServiceProvider.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MD5CryptoServiceProvider::*)(::ArrayW<uint8_t>, int32_t)>(
    &::System::Security::Cryptography::MD5CryptoServiceProvider::ProcessBlock)> {
  constexpr static std::size_t size = 0xc74;
  constexpr static std::size_t addrs = 0x5b0d3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(),
                                                                                           { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MD5CryptoServiceProvider.ProcessFinalBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MD5CryptoServiceProvider::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::MD5CryptoServiceProvider::ProcessFinalBlock)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5b0e108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(),
                                                             { "ProcessFinalBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MD5CryptoServiceProvider.AddLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MD5CryptoServiceProvider::*)(uint64_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Security::Cryptography::MD5CryptoServiceProvider::AddLength)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5b0e338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(),
                                                             { "AddLength", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t>& System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_get__H() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____H;
}
constexpr ::ArrayW<uint32_t> const& System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_get__H() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____H;
}
constexpr void System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_set__H(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____H = value;
}
constexpr ::ArrayW<uint32_t>& System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_get_buff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buff;
}
constexpr ::ArrayW<uint32_t> const& System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_get_buff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buff;
}
constexpr void System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_set_buff(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buff = value;
}
constexpr uint64_t& System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr uint64_t const& System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_set_count(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_get__ProcessingBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProcessingBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_get__ProcessingBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProcessingBuffer;
}
constexpr void System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_set__ProcessingBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ProcessingBuffer = value;
}
constexpr int32_t& System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_get__ProcessingBufferCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProcessingBufferCount;
}
constexpr int32_t const& System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_get__ProcessingBufferCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProcessingBufferCount;
}
constexpr void System::Security::Cryptography::MD5CryptoServiceProvider::__cordl_internal_set__ProcessingBufferCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ProcessingBufferCount = value;
}
inline void System::Security::Cryptography::MD5CryptoServiceProvider::setStaticF_K(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "K", ::System::Security::Cryptography::MD5CryptoServiceProvider*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Security::Cryptography::MD5CryptoServiceProvider::getStaticF_K() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "K", ::System::Security::Cryptography::MD5CryptoServiceProvider*>();
}
inline void System::Security::Cryptography::MD5CryptoServiceProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::MD5CryptoServiceProvider::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::MD5CryptoServiceProvider::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::MD5CryptoServiceProvider::HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgb, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::MD5CryptoServiceProvider::HashFinal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::MD5CryptoServiceProvider::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::MD5CryptoServiceProvider::ProcessBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(),
                                                                                         { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputBuffer, inputOffset);
}
inline void System::Security::Cryptography::MD5CryptoServiceProvider::ProcessFinalBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(),
                                                           { "ProcessFinalBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline void System::Security::Cryptography::MD5CryptoServiceProvider::AddLength(uint64_t length, ::ArrayW<uint8_t> buffer, int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::MD5CryptoServiceProvider*>(),
                                                           { "AddLength", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length, buffer, position);
}
inline ::System::Security::Cryptography::MD5CryptoServiceProvider* System::Security::Cryptography::MD5CryptoServiceProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::MD5CryptoServiceProvider*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::MD5CryptoServiceProvider::MD5CryptoServiceProvider() {}
