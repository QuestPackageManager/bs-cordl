#pragma once
// IWYU pragma private; include "Mono\Net\Security\BufferOffsetSize2.hpp"
#include "Mono/Net/Security/zzzz__BufferOffsetSize_impl.hpp"
#include "Mono/Net/Security/zzzz__BufferOffsetSize2_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::BufferOffsetSize2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::BufferOffsetSize2::*)(int32_t)>(&::Mono::Net::Security::BufferOffsetSize2::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fd6784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize2*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::BufferOffsetSize2.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::BufferOffsetSize2::*)()>(&::Mono::Net::Security::BufferOffsetSize2::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fd67f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize2*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::BufferOffsetSize2.MakeRoom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::BufferOffsetSize2::*)(int32_t)>(&::Mono::Net::Security::BufferOffsetSize2::MakeRoom)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5fd6858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize2*>(), { "MakeRoom", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::BufferOffsetSize2.AppendData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::BufferOffsetSize2::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Net::Security::BufferOffsetSize2::AppendData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fd6918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize2*>(),
                                                             { "AppendData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Mono::Net::Security::BufferOffsetSize2::__cordl_internal_get_InitialSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitialSize;
}
constexpr int32_t const& Mono::Net::Security::BufferOffsetSize2::__cordl_internal_get_InitialSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitialSize;
}
constexpr void Mono::Net::Security::BufferOffsetSize2::__cordl_internal_set_InitialSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InitialSize = value;
}
inline void Mono::Net::Security::BufferOffsetSize2::_ctor(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize2*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void Mono::Net::Security::BufferOffsetSize2::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize2*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Net::Security::BufferOffsetSize2::MakeRoom(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize2*>(), { "MakeRoom", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void Mono::Net::Security::BufferOffsetSize2::AppendData(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize2*>(),
                                                           { "AppendData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, size);
}
inline ::Mono::Net::Security::BufferOffsetSize2* Mono::Net::Security::BufferOffsetSize2::New_ctor(int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::BufferOffsetSize2*>(size));
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::BufferOffsetSize2::BufferOffsetSize2() {}
