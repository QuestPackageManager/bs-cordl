#pragma once
// IWYU pragma private; include "Mono\Net\Security\BufferOffsetSize.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__BufferOffsetSize_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::BufferOffsetSize.get_EndOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Net::Security::BufferOffsetSize::*)()>(&::Mono::Net::Security::BufferOffsetSize::get_EndOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fd65d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize*>(), { "get_EndOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::BufferOffsetSize.get_Remaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Net::Security::BufferOffsetSize::*)()>(&::Mono::Net::Security::BufferOffsetSize::get_Remaining)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fd65dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize*>(), { "get_Remaining", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::BufferOffsetSize._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::BufferOffsetSize::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Net::Security::BufferOffsetSize::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5fd6600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::BufferOffsetSize.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Net::Security::BufferOffsetSize::*)()>(&::Mono::Net::Security::BufferOffsetSize::ToString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fd66d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize*>(), { ::i2c::class_of<::Mono::Net::Security::BufferOffsetSize*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Mono::Net::Security::BufferOffsetSize::__cordl_internal_get_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr ::ArrayW<uint8_t> const& Mono::Net::Security::BufferOffsetSize::__cordl_internal_get_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr void Mono::Net::Security::BufferOffsetSize::__cordl_internal_set_Buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Buffer = value;
}
constexpr int32_t& Mono::Net::Security::BufferOffsetSize::__cordl_internal_get_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr int32_t const& Mono::Net::Security::BufferOffsetSize::__cordl_internal_get_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr void Mono::Net::Security::BufferOffsetSize::__cordl_internal_set_Offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Offset = value;
}
constexpr int32_t& Mono::Net::Security::BufferOffsetSize::__cordl_internal_get_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr int32_t const& Mono::Net::Security::BufferOffsetSize::__cordl_internal_get_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr void Mono::Net::Security::BufferOffsetSize::__cordl_internal_set_Size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Size = value;
}
constexpr int32_t& Mono::Net::Security::BufferOffsetSize::__cordl_internal_get_TotalBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalBytes;
}
constexpr int32_t const& Mono::Net::Security::BufferOffsetSize::__cordl_internal_get_TotalBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalBytes;
}
constexpr void Mono::Net::Security::BufferOffsetSize::__cordl_internal_set_TotalBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TotalBytes = value;
}
constexpr bool& Mono::Net::Security::BufferOffsetSize::__cordl_internal_get_Complete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Complete;
}
constexpr bool const& Mono::Net::Security::BufferOffsetSize::__cordl_internal_get_Complete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Complete;
}
constexpr void Mono::Net::Security::BufferOffsetSize::__cordl_internal_set_Complete(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Complete = value;
}
inline int32_t Mono::Net::Security::BufferOffsetSize::get_EndOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize*>(), { "get_EndOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Mono::Net::Security::BufferOffsetSize::get_Remaining() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize*>(), { "get_Remaining", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mono::Net::Security::BufferOffsetSize::_ctor(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::BufferOffsetSize*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, size);
}
inline ::StringW Mono::Net::Security::BufferOffsetSize::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::BufferOffsetSize*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mono::Net::Security::BufferOffsetSize* Mono::Net::Security::BufferOffsetSize::New_ctor(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::BufferOffsetSize*>(buffer, offset, size));
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::BufferOffsetSize::BufferOffsetSize() {}
