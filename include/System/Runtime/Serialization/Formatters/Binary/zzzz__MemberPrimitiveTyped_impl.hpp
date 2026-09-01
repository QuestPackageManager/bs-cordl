#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\MemberPrimitiveTyped.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MemberPrimitiveTyped_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b58b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::*)(
    ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Object*)>(&::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Set)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b58b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*>(),
                                         { "Set", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Write)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b58b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*>(),
                                                             { "Write", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Read)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b58b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*>(),
                                                             { "Read", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped.Dump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b58bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*>(), { "Dump", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE&
System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::__cordl_internal_get_primitiveTypeEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___primitiveTypeEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const&
System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::__cordl_internal_get_primitiveTypeEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___primitiveTypeEnum;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::__cordl_internal_set_primitiveTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___primitiveTypeEnum = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::System::Object* const& System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::__cordl_internal_set_value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum,
                                                                                          ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*>(),
                                              { "Set", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, primitiveTypeEnum, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*>(),
                                                           { "Write", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sout);
}
inline void System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*>(),
                                                                                         { "Read", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Dump() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*>(), { "Dump", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::MemberPrimitiveTyped() {}
