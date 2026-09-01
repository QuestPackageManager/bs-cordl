#pragma once
// IWYU pragma private; include "System\Xml\BitStack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__BitStack_def.hpp"
//  Writing Method size for method: ::System::Xml::BitStack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::BitStack::*)()>(&::System::Xml::BitStack::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61ac63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BitStack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BitStack.PushBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::BitStack::*)(bool)>(&::System::Xml::BitStack::PushBit)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x61ac648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BitStack*>(), { "PushBit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BitStack.PopBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::BitStack::*)()>(&::System::Xml::BitStack::PopBit)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61ac760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BitStack*>(), { "PopBit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BitStack.PeekBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::BitStack::*)()>(&::System::Xml::BitStack::PeekBit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61ac7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BitStack*>(), { "PeekBit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BitStack.PushCurr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::BitStack::*)()>(&::System::Xml::BitStack::PushCurr)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x61ac680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BitStack*>(), { "PushCurr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BitStack.PopCurr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::BitStack::*)()>(&::System::Xml::BitStack::PopCurr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x61ac788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BitStack*>(), { "PopCurr", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t>& System::Xml::BitStack::__cordl_internal_get_bitStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitStack;
}
constexpr ::ArrayW<uint32_t> const& System::Xml::BitStack::__cordl_internal_get_bitStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitStack;
}
constexpr void System::Xml::BitStack::__cordl_internal_set_bitStack(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bitStack = value;
}
constexpr int32_t& System::Xml::BitStack::__cordl_internal_get_stackPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackPos;
}
constexpr int32_t const& System::Xml::BitStack::__cordl_internal_get_stackPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackPos;
}
constexpr void System::Xml::BitStack::__cordl_internal_set_stackPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stackPos = value;
}
constexpr uint32_t& System::Xml::BitStack::__cordl_internal_get_curr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curr;
}
constexpr uint32_t const& System::Xml::BitStack::__cordl_internal_get_curr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curr;
}
constexpr void System::Xml::BitStack::__cordl_internal_set_curr(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curr = value;
}
inline void System::Xml::BitStack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BitStack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::BitStack::PushBit(bool bit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BitStack*>(), { "PushBit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bit);
}
inline bool System::Xml::BitStack::PopBit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BitStack*>(), { "PopBit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::BitStack::PeekBit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BitStack*>(), { "PeekBit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::BitStack::PushCurr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BitStack*>(), { "PushCurr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::BitStack::PopCurr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BitStack*>(), { "PopCurr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::BitStack* System::Xml::BitStack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::BitStack*>());
}
// Ctor Parameters []
constexpr ::System::Xml::BitStack::BitStack() {}
