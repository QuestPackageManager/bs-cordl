#pragma once
// IWYU pragma private; include "System\Security\Cryptography\SHA1Internal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__SHA1Internal_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Internal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1Internal::*)()>(&::System::Security::Cryptography::SHA1Internal::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b0f9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Internal.HashCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1Internal::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::SHA1Internal::HashCore)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b0fae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(),
                                                             { "HashCore", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Internal.HashFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::SHA1Internal::*)()>(&::System::Security::Cryptography::SHA1Internal::HashFinal)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b10408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(), { "HashFinal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Internal.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1Internal::*)()>(&::System::Security::Cryptography::SHA1Internal::Initialize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b0fa58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Internal.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1Internal::*)(::ArrayW<uint8_t>, uint32_t)>(
    &::System::Security::Cryptography::SHA1Internal::ProcessBlock)> {
  constexpr static std::size_t size = 0x828;
  constexpr static std::size_t addrs = 0x5b0fbe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(),
                                                                                           { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Internal.InitialiseBuff
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint8_t>, uint32_t)>(&::System::Security::Cryptography::SHA1Internal::InitialiseBuff)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x5b106b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(),
                                                             { "InitialiseBuff", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Internal.FillBuff
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>)>(&::System::Security::Cryptography::SHA1Internal::FillBuff)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5b10d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(), { "FillBuff", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Internal.ProcessFinalBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1Internal::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::SHA1Internal::ProcessFinalBlock)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5b104e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(),
                                                             { "ProcessFinalBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1Internal.AddLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1Internal::*)(uint64_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Security::Cryptography::SHA1Internal::AddLength)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5b10ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(),
                                                             { "AddLength", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t>& System::Security::Cryptography::SHA1Internal::__cordl_internal_get__H() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____H;
}
constexpr ::ArrayW<uint32_t> const& System::Security::Cryptography::SHA1Internal::__cordl_internal_get__H() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____H;
}
constexpr void System::Security::Cryptography::SHA1Internal::__cordl_internal_set__H(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____H = value;
}
constexpr uint64_t& System::Security::Cryptography::SHA1Internal::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr uint64_t const& System::Security::Cryptography::SHA1Internal::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void System::Security::Cryptography::SHA1Internal::__cordl_internal_set_count(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::SHA1Internal::__cordl_internal_get__ProcessingBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProcessingBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::SHA1Internal::__cordl_internal_get__ProcessingBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProcessingBuffer;
}
constexpr void System::Security::Cryptography::SHA1Internal::__cordl_internal_set__ProcessingBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ProcessingBuffer = value;
}
constexpr int32_t& System::Security::Cryptography::SHA1Internal::__cordl_internal_get__ProcessingBufferCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProcessingBufferCount;
}
constexpr int32_t const& System::Security::Cryptography::SHA1Internal::__cordl_internal_get__ProcessingBufferCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProcessingBufferCount;
}
constexpr void System::Security::Cryptography::SHA1Internal::__cordl_internal_set__ProcessingBufferCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ProcessingBufferCount = value;
}
constexpr ::ArrayW<uint32_t>& System::Security::Cryptography::SHA1Internal::__cordl_internal_get_buff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buff;
}
constexpr ::ArrayW<uint32_t> const& System::Security::Cryptography::SHA1Internal::__cordl_internal_get_buff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buff;
}
constexpr void System::Security::Cryptography::SHA1Internal::__cordl_internal_set_buff(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buff = value;
}
inline void System::Security::Cryptography::SHA1Internal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA1Internal::HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(),
                                                           { "HashCore", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgb, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::SHA1Internal::HashFinal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(), { "HashFinal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA1Internal::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA1Internal::ProcessBlock(::ArrayW<uint8_t> inputBuffer, uint32_t inputOffset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(),
                                                                                         { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputBuffer, inputOffset);
}
inline void System::Security::Cryptography::SHA1Internal::InitialiseBuff(::ArrayW<uint32_t> buff, ::ArrayW<uint8_t> input, uint32_t inputOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(),
                                                           { "InitialiseBuff", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buff, input, inputOffset);
}
inline void System::Security::Cryptography::SHA1Internal::FillBuff(::ArrayW<uint32_t> buff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(), { "FillBuff", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buff);
}
inline void System::Security::Cryptography::SHA1Internal::ProcessFinalBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(),
                                                           { "ProcessFinalBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline void System::Security::Cryptography::SHA1Internal::AddLength(uint64_t length, ::ArrayW<uint8_t> buffer, int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1Internal*>(),
                                                           { "AddLength", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length, buffer, position);
}
inline ::System::Security::Cryptography::SHA1Internal* System::Security::Cryptography::SHA1Internal::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::SHA1Internal*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::SHA1Internal::SHA1Internal() {}
