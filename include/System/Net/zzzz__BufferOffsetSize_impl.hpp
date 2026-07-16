#pragma once
// IWYU pragma private; include "System/Net/BufferOffsetSize.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
//  Writing Method size for method: ::System::Net::BufferOffsetSize._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BufferOffsetSize::*)(::ArrayW<uint8_t>, int32_t, int32_t, bool)>(&::System::Net::BufferOffsetSize::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x640fe84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BufferOffsetSize*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BufferOffsetSize._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BufferOffsetSize::*)(::ArrayW<uint8_t>, bool)>(&::System::Net::BufferOffsetSize::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x640ff28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BufferOffsetSize*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Net::BufferOffsetSize::__cordl_internal_get_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Net::BufferOffsetSize::__cordl_internal_get_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr void System::Net::BufferOffsetSize::__cordl_internal_set_Buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Buffer = value;
}
constexpr int32_t& System::Net::BufferOffsetSize::__cordl_internal_get_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr int32_t const& System::Net::BufferOffsetSize::__cordl_internal_get_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr void System::Net::BufferOffsetSize::__cordl_internal_set_Offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Offset = value;
}
constexpr int32_t& System::Net::BufferOffsetSize::__cordl_internal_get_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr int32_t const& System::Net::BufferOffsetSize::__cordl_internal_get_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr void System::Net::BufferOffsetSize::__cordl_internal_set_Size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Size = value;
}
inline void System::Net::BufferOffsetSize::_ctor(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, bool copyBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BufferOffsetSize*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, size, copyBuffer);
}
inline void System::Net::BufferOffsetSize::_ctor(::ArrayW<uint8_t> buffer, bool copyBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BufferOffsetSize*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, copyBuffer);
}
inline ::System::Net::BufferOffsetSize* System::Net::BufferOffsetSize::New_ctor(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, bool copyBuffer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::BufferOffsetSize*>(buffer, offset, size, copyBuffer));
}
inline ::System::Net::BufferOffsetSize* System::Net::BufferOffsetSize::New_ctor(::ArrayW<uint8_t> buffer, bool copyBuffer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::BufferOffsetSize*>(buffer, copyBuffer));
}
// Ctor Parameters []
constexpr ::System::Net::BufferOffsetSize::BufferOffsetSize() {}
