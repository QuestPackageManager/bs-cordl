#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlXml.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/SqlTypes/zzzz__SqlXml_def.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlParserContext_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXml::*)()>(&::System::Data::SqlTypes::SqlXml::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6096188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.CreateReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReader* (::System::Data::SqlTypes::SqlXml::*)()>(&::System::Data::SqlTypes::SqlXml::CreateReader)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x60961b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "CreateReader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.CreateSqlXmlReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReader* (*)(::System::IO::Stream*, bool, bool)>(&::System::Data::SqlTypes::SqlXml::CreateSqlXmlReader)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6096488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(),
                                                             { "CreateSqlXmlReader", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.CreateSqlReaderDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>* (*)()>(
    &::System::Data::SqlTypes::SqlXml::CreateSqlReaderDelegate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6096640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "CreateSqlReaderDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.get_CreateSqlReaderMethodInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)()>(&::System::Data::SqlTypes::SqlXml::get_CreateSqlReaderMethodInfo)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6096378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "get_CreateSqlReaderMethodInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlXml::*)()>(&::System::Data::SqlTypes::SqlXml::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6096300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.SetNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXml::*)()>(&::System::Data::SqlTypes::SqlXml::SetNull)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x609619c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "SetNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::SqlTypes::SqlXml::*)()>(
    &::System::Data::SqlTypes::SqlXml::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6096734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXml::*)(::System::Xml::XmlReader*)>(
    &::System::Data::SqlTypes::SqlXml::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x609673c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXml::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::SqlTypes::SqlXml::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6096920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.GetXsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Data::SqlTypes::SqlXml::GetXsdType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6096ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& System::Data::SqlTypes::SqlXml::__cordl_internal_get__createSqlReaderMethodInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createSqlReaderMethodInfo;
}
constexpr ::System::Reflection::MethodInfo* const& System::Data::SqlTypes::SqlXml::__cordl_internal_get__createSqlReaderMethodInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createSqlReaderMethodInfo;
}
constexpr void System::Data::SqlTypes::SqlXml::__cordl_internal_set__createSqlReaderMethodInfo(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____createSqlReaderMethodInfo = value;
}
constexpr bool& System::Data::SqlTypes::SqlXml::__cordl_internal_get__fNotNull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fNotNull;
}
constexpr bool const& System::Data::SqlTypes::SqlXml::__cordl_internal_get__fNotNull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fNotNull;
}
constexpr void System::Data::SqlTypes::SqlXml::__cordl_internal_set__fNotNull(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fNotNull = value;
}
constexpr ::System::IO::Stream*& System::Data::SqlTypes::SqlXml::__cordl_internal_get__stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr ::System::IO::Stream* const& System::Data::SqlTypes::SqlXml::__cordl_internal_get__stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr void System::Data::SqlTypes::SqlXml::__cordl_internal_set__stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stream = value;
}
constexpr bool& System::Data::SqlTypes::SqlXml::__cordl_internal_get__firstCreateReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstCreateReader;
}
constexpr bool const& System::Data::SqlTypes::SqlXml::__cordl_internal_get__firstCreateReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstCreateReader;
}
constexpr void System::Data::SqlTypes::SqlXml::__cordl_internal_set__firstCreateReader(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstCreateReader = value;
}
inline void System::Data::SqlTypes::SqlXml::setStaticF_s_sqlReaderDelegate(
    ::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>*, "s_sqlReaderDelegate",
                                    ::System::Data::SqlTypes::SqlXml*>(
      std::forward<::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>*>(value));
}
inline ::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>*
System::Data::SqlTypes::SqlXml::getStaticF_s_sqlReaderDelegate() {
  return ::cordl_internals::getStaticField<::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>*,
                                           "s_sqlReaderDelegate", ::System::Data::SqlTypes::SqlXml*>();
}
inline void System::Data::SqlTypes::SqlXml::setStaticF_s_defaultXmlReaderSettings(::System::Xml::XmlReaderSettings* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlReaderSettings*, "s_defaultXmlReaderSettings", ::System::Data::SqlTypes::SqlXml*>(std::forward<::System::Xml::XmlReaderSettings*>(value));
}
inline ::System::Xml::XmlReaderSettings* System::Data::SqlTypes::SqlXml::getStaticF_s_defaultXmlReaderSettings() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlReaderSettings*, "s_defaultXmlReaderSettings", ::System::Data::SqlTypes::SqlXml*>();
}
inline void System::Data::SqlTypes::SqlXml::setStaticF_s_defaultXmlReaderSettingsCloseInput(::System::Xml::XmlReaderSettings* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlReaderSettings*, "s_defaultXmlReaderSettingsCloseInput", ::System::Data::SqlTypes::SqlXml*>(
      std::forward<::System::Xml::XmlReaderSettings*>(value));
}
inline ::System::Xml::XmlReaderSettings* System::Data::SqlTypes::SqlXml::getStaticF_s_defaultXmlReaderSettingsCloseInput() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlReaderSettings*, "s_defaultXmlReaderSettingsCloseInput", ::System::Data::SqlTypes::SqlXml*>();
}
inline void System::Data::SqlTypes::SqlXml::setStaticF_s_createSqlReaderMethodInfo(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "s_createSqlReaderMethodInfo", ::System::Data::SqlTypes::SqlXml*>(std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Data::SqlTypes::SqlXml::getStaticF_s_createSqlReaderMethodInfo() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "s_createSqlReaderMethodInfo", ::System::Data::SqlTypes::SqlXml*>();
}
inline void System::Data::SqlTypes::SqlXml::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlReader* System::Data::SqlTypes::SqlXml::CreateReader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "CreateReader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*>(this, ___internal_method);
}
inline ::System::Xml::XmlReader* System::Data::SqlTypes::SqlXml::CreateSqlXmlReader(::System::IO::Stream* stream, bool closeInput, bool throwTargetInvocationExceptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(),
                                                           { "CreateSqlXmlReader", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*>(nullptr, ___internal_method, stream, closeInput, throwTargetInvocationExceptions);
}
inline ::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>*
System::Data::SqlTypes::SqlXml::CreateSqlReaderDelegate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "CreateSqlReaderDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>*>(
      nullptr, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Data::SqlTypes::SqlXml::get_CreateSqlReaderMethodInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "get_CreateSqlReaderMethodInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method);
}
inline bool System::Data::SqlTypes::SqlXml::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlXml::SetNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "SetNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::SqlTypes::SqlXml::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlXml::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline void System::Data::SqlTypes::SqlXml::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SqlTypes::SqlXml::GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXml*>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, schemaSet);
}
inline ::System::Data::SqlTypes::SqlXml* System::Data::SqlTypes::SqlXml::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::SqlTypes::SqlXml*>());
}
/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr System::Data::SqlTypes::SqlXml::operator ::System::Data::SqlTypes::INullable*() noexcept {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* System::Data::SqlTypes::SqlXml::i___System__Data__SqlTypes__INullable() noexcept {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::SqlTypes::SqlXml::operator ::System::Xml::Serialization::IXmlSerializable*() noexcept {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::SqlTypes::SqlXml::i___System__Xml__Serialization__IXmlSerializable() noexcept {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlXml::SqlXml() {}
