#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\BinaryMethodCall.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryMethodCall_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Write)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5b58674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>(),
                                                             { "Write", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall.Dump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b58798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>(), { "Dump", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b5879c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_get_methodName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_get_methodName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_set_methodName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___methodName = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_get_typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_get_typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_set_typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeName = value;
}
constexpr ::ArrayW<::System::Object*>& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_get_args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_get_args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_set_args(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___args = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_get_callContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callContext;
}
constexpr ::System::Object* const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_get_callContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callContext;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_set_callContext(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callContext = value;
}
constexpr ::ArrayW<::System::Type*>& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_get_argTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___argTypes;
}
constexpr ::ArrayW<::System::Type*> const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_get_argTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___argTypes;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_set_argTypes(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___argTypes = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_get_bArgsPrimitive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bArgsPrimitive;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_get_bArgsPrimitive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bArgsPrimitive;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_set_bArgsPrimitive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bArgsPrimitive = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_get_messageEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_get_messageEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__cordl_internal_set_messageEnum(::System::Runtime::Serialization::Formatters::Binary::MessageEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messageEnum = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>(),
                                                           { "Write", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sout);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Dump() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>(), { "Dump", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::BinaryMethodCall() {}
