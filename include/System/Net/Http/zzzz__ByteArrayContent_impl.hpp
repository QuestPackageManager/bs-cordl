#pragma once
// IWYU pragma private; include "System\Net\Http\ByteArrayContent.hpp"
#include "System/Net/Http/zzzz__HttpContent_impl.hpp"
#include "System/Net/Http/zzzz__ByteArrayContent_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__TransportContext_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Net::Http::ByteArrayContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::ByteArrayContent::*)(::ArrayW<uint8_t>)>(&::System::Net::Http::ByteArrayContent::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60dac6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::ByteArrayContent*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::ByteArrayContent.CreateContentReadStreamAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::Http::ByteArrayContent::*)()>(
    &::System::Net::Http::ByteArrayContent::CreateContentReadStreamAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x60dacd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::ByteArrayContent*>(), { ::i2c::class_of<::System::Net::Http::ByteArrayContent*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::ByteArrayContent.SerializeToStreamAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::Http::ByteArrayContent::*)(::System::IO::Stream*, ::System::Net::TransportContext*)>(
    &::System::Net::Http::ByteArrayContent::SerializeToStreamAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60dad90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::ByteArrayContent*>(), { ::i2c::class_of<::System::Net::Http::ByteArrayContent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::ByteArrayContent.TryComputeLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::ByteArrayContent::*)(::by_ref<int64_t>)>(&::System::Net::Http::ByteArrayContent::TryComputeLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60dadb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::ByteArrayContent*>(), { ::i2c::class_of<::System::Net::Http::ByteArrayContent*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Net::Http::ByteArrayContent::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::ArrayW<uint8_t> const& System::Net::Http::ByteArrayContent::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void System::Net::Http::ByteArrayContent::__cordl_internal_set_content(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
constexpr int32_t& System::Net::Http::ByteArrayContent::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr int32_t const& System::Net::Http::ByteArrayContent::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void System::Net::Http::ByteArrayContent::__cordl_internal_set_offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr int32_t& System::Net::Http::ByteArrayContent::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& System::Net::Http::ByteArrayContent::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void System::Net::Http::ByteArrayContent::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
inline void System::Net::Http::ByteArrayContent::_ctor(::ArrayW<uint8_t> content) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::ByteArrayContent*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::Http::ByteArrayContent::CreateContentReadStreamAsync() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::ByteArrayContent*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::Http::ByteArrayContent::SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::ByteArrayContent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, stream, context);
}
inline bool System::Net::Http::ByteArrayContent::TryComputeLength(::by_ref<int64_t> length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::ByteArrayContent*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, length);
}
inline ::System::Net::Http::ByteArrayContent* System::Net::Http::ByteArrayContent::New_ctor(::ArrayW<uint8_t> content) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::ByteArrayContent*>(content));
}
// Ctor Parameters []
constexpr ::System::Net::Http::ByteArrayContent::ByteArrayContent() {}
