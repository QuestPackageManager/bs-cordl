#pragma once
// IWYU pragma private; include "System\Xml\ByteStack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__ByteStack_def.hpp"
//  Writing Method size for method: ::System::Xml::ByteStack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ByteStack::*)(int32_t)>(&::System::Xml::ByteStack::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61ac944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ByteStack*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ByteStack.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ByteStack::*)(uint8_t)>(&::System::Xml::ByteStack::Push)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x61ac9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ByteStack*>(), { "Push", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ByteStack.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Xml::ByteStack::*)()>(&::System::Xml::ByteStack::Pop)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x61aca88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ByteStack*>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Xml::ByteStack::__cordl_internal_get_stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::ByteStack::__cordl_internal_get_stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr void System::Xml::ByteStack::__cordl_internal_set_stack(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stack = value;
}
constexpr int32_t& System::Xml::ByteStack::__cordl_internal_get_growthRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___growthRate;
}
constexpr int32_t const& System::Xml::ByteStack::__cordl_internal_get_growthRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___growthRate;
}
constexpr void System::Xml::ByteStack::__cordl_internal_set_growthRate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___growthRate = value;
}
constexpr int32_t& System::Xml::ByteStack::__cordl_internal_get_top() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___top;
}
constexpr int32_t const& System::Xml::ByteStack::__cordl_internal_get_top() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___top;
}
constexpr void System::Xml::ByteStack::__cordl_internal_set_top(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___top = value;
}
constexpr int32_t& System::Xml::ByteStack::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr int32_t const& System::Xml::ByteStack::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void System::Xml::ByteStack::__cordl_internal_set_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
inline void System::Xml::ByteStack::_ctor(int32_t growthRate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ByteStack*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, growthRate);
}
inline void System::Xml::ByteStack::Push(uint8_t data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ByteStack*>(), { "Push", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline uint8_t System::Xml::ByteStack::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ByteStack*>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::System::Xml::ByteStack* System::Xml::ByteStack::New_ctor(int32_t growthRate) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::ByteStack*>(growthRate));
}
// Ctor Parameters []
constexpr ::System::Xml::ByteStack::ByteStack() {}
