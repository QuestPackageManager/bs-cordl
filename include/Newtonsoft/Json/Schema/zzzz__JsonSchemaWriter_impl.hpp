#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Schema\JsonSchemaWriter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaWriter_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaResolver_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaType_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaWriter_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchema_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter___c::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaWriter___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d68424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter___c._WriteType_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Schema::JsonSchemaWriter___c::*)(::Newtonsoft::Json::Schema::JsonSchemaType)>(
    &::Newtonsoft::Json::Schema::JsonSchemaWriter___c::_WriteType_b__7_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d68428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter___c*>(),
                                                                                           { "<WriteType>b__7_0", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaType>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Schema::JsonSchemaWriter___c::setStaticF___9(::Newtonsoft::Json::Schema::JsonSchemaWriter___c* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Schema::JsonSchemaWriter___c*, "<>9", ::Newtonsoft::Json::Schema::JsonSchemaWriter___c*>(
      std::forward<::Newtonsoft::Json::Schema::JsonSchemaWriter___c*>(value));
}
inline ::Newtonsoft::Json::Schema::JsonSchemaWriter___c* Newtonsoft::Json::Schema::JsonSchemaWriter___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Schema::JsonSchemaWriter___c*, "<>9", ::Newtonsoft::Json::Schema::JsonSchemaWriter___c*>();
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter___c::setStaticF___9__7_0(::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaType, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaType, bool>*, "<>9__7_0", ::Newtonsoft::Json::Schema::JsonSchemaWriter___c*>(
      std::forward<::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaType, bool>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaType, bool>* Newtonsoft::Json::Schema::JsonSchemaWriter___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaType, bool>*, "<>9__7_0", ::Newtonsoft::Json::Schema::JsonSchemaWriter___c*>();
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Schema::JsonSchemaWriter___c::_WriteType_b__7_0(::Newtonsoft::Json::Schema::JsonSchemaType v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter___c*>(),
                                                                                         { "<WriteType>b__7_0", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, v);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaWriter___c* Newtonsoft::Json::Schema::JsonSchemaWriter___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Schema::JsonSchemaWriter___c*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaWriter___c::JsonSchemaWriter___c() {}
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter::*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Schema::JsonSchemaResolver*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaWriter::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d5dde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter.ReferenceOrWriteSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter::*)(::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaWriter::ReferenceOrWriteSchema)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d67514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(),
                                                                                           { "ReferenceOrWriteSchema", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter.WriteSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter::*)(::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaWriter::WriteSchema)> {
  constexpr static std::size_t size = 0x1050;
  constexpr static std::size_t addrs = 0x5d5de50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(), { "WriteSchema", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter.WriteSchemaDictionaryIfNotNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaWriter::WriteSchemaDictionaryIfNotNull)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5d67bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(),
                                                             { "WriteSchemaDictionaryIfNotNull",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter.WriteItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter::*)(::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaWriter::WriteItems)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x5d67f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(), { "WriteItems", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter.WriteType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter::*)(::StringW, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Schema::JsonSchemaType)>(
    &::Newtonsoft::Json::Schema::JsonSchemaWriter::WriteType)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x5d6766c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(),
                            { "WriteType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaWriter.WritePropertyIfNotNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaWriter::*)(::Newtonsoft::Json::JsonWriter*, ::StringW, ::System::Object*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaWriter::WritePropertyIfNotNull)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d67608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(),
                                         { "WritePropertyIfNotNull", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::JsonWriter*& Newtonsoft::Json::Schema::JsonSchemaWriter::__cordl_internal_get__writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr ::Newtonsoft::Json::JsonWriter* const& Newtonsoft::Json::Schema::JsonSchemaWriter::__cordl_internal_get__writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaWriter::__cordl_internal_set__writer(::Newtonsoft::Json::JsonWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writer = value;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaResolver*& Newtonsoft::Json::Schema::JsonSchemaWriter::__cordl_internal_get__resolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolver;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaResolver* const& Newtonsoft::Json::Schema::JsonSchemaWriter::__cordl_internal_get__resolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolver;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaWriter::__cordl_internal_set__resolver(::Newtonsoft::Json::Schema::JsonSchemaResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resolver = value;
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter::_ctor(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, resolver);
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter::ReferenceOrWriteSchema(::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(),
                                                                                         { "ReferenceOrWriteSchema", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter::WriteSchema(::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(), { "WriteSchema", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter::WriteSchemaDictionaryIfNotNull(::Newtonsoft::Json::JsonWriter* writer, ::StringW propertyName,
                                                                                       ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* properties) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(),
                                                           { "WriteSchemaDictionaryIfNotNull",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, propertyName, properties);
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter::WriteItems(::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(), { "WriteItems", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter::WriteType(::StringW propertyName, ::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Schema::JsonSchemaType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(),
                          { "WriteType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, writer, type);
}
inline void Newtonsoft::Json::Schema::JsonSchemaWriter::WritePropertyIfNotNull(::Newtonsoft::Json::JsonWriter* writer, ::StringW propertyName, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(),
                                       { "WritePropertyIfNotNull", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, propertyName, value);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaWriter* Newtonsoft::Json::Schema::JsonSchemaWriter::New_ctor(::Newtonsoft::Json::JsonWriter* writer,
                                                                                                          ::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Schema::JsonSchemaWriter*>(writer, resolver));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaWriter::JsonSchemaWriter() {}
