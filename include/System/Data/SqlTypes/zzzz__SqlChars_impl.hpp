#pragma once
// IWYU pragma private; include "System\Data\SqlTypes\SqlChars.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBytesCharsState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/SqlTypes/zzzz__SqlChars_def.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlStreamChars_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlString_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlChars::*)()>(&::System::Data::SqlTypes::SqlChars::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6087820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlChars::*)(::ArrayW<char16_t>)>(&::System::Data::SqlTypes::SqlChars::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6087840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlChars::*)(::System::Data::SqlTypes::SqlString)>(&::System::Data::SqlTypes::SqlChars::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6087870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlChars::*)()>(&::System::Data::SqlTypes::SqlChars::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60879dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars.get_Buffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::System::Data::SqlTypes::SqlChars::*)()>(&::System::Data::SqlTypes::SqlChars::get_Buffer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60879ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "get_Buffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::SqlTypes::SqlChars::*)()>(&::System::Data::SqlTypes::SqlChars::get_Length)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6087b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::System::Data::SqlTypes::SqlChars::*)()>(&::System::Data::SqlTypes::SqlChars::get_Value)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6087bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars.SetNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlChars::*)()>(&::System::Data::SqlTypes::SqlChars::SetNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6087830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "SetNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars.FStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlChars::*)()>(&::System::Data::SqlTypes::SqlChars::FStream)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6087a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "FStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars.CopyStreamToBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlChars::*)()>(&::System::Data::SqlTypes::SqlChars::CopyStreamToBuffer)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6087a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "CopyStreamToBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars.SetBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlChars::*)(::ArrayW<char16_t>)>(&::System::Data::SqlTypes::SqlChars::SetBuffer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6087db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "SetBuffer", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::SqlTypes::SqlChars::*)()>(
    &::System::Data::SqlTypes::SqlChars::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6087dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlChars::*)(::System::Xml::XmlReader*)>(
    &::System::Data::SqlTypes::SqlChars::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6087de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlChars::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::SqlTypes::SqlChars::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6087f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars.GetXsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Data::SqlTypes::SqlChars::GetXsdType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x608805c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Data::SqlTypes::SqlChars::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Data::SqlTypes::SqlChars::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60880ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlChars.get_Null
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlChars* (*)()>(&::System::Data::SqlTypes::SqlChars::get_Null)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6088124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "get_Null", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<char16_t>& System::Data::SqlTypes::SqlChars::__cordl_internal_get__rgchBuf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rgchBuf;
}
constexpr ::ArrayW<char16_t> const& System::Data::SqlTypes::SqlChars::__cordl_internal_get__rgchBuf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rgchBuf;
}
constexpr void System::Data::SqlTypes::SqlChars::__cordl_internal_set__rgchBuf(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rgchBuf = value;
}
constexpr int64_t& System::Data::SqlTypes::SqlChars::__cordl_internal_get__lCurLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lCurLen;
}
constexpr int64_t const& System::Data::SqlTypes::SqlChars::__cordl_internal_get__lCurLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lCurLen;
}
constexpr void System::Data::SqlTypes::SqlChars::__cordl_internal_set__lCurLen(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lCurLen = value;
}
constexpr ::System::Data::SqlTypes::SqlStreamChars*& System::Data::SqlTypes::SqlChars::__cordl_internal_get__stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr ::System::Data::SqlTypes::SqlStreamChars* const& System::Data::SqlTypes::SqlChars::__cordl_internal_get__stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr void System::Data::SqlTypes::SqlChars::__cordl_internal_set__stream(::System::Data::SqlTypes::SqlStreamChars* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stream = value;
}
constexpr ::System::Data::SqlTypes::SqlBytesCharsState& System::Data::SqlTypes::SqlChars::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::System::Data::SqlTypes::SqlBytesCharsState const& System::Data::SqlTypes::SqlChars::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void System::Data::SqlTypes::SqlChars::__cordl_internal_set__state(::System::Data::SqlTypes::SqlBytesCharsState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr ::ArrayW<char16_t>& System::Data::SqlTypes::SqlChars::__cordl_internal_get__rgchWorkBuf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rgchWorkBuf;
}
constexpr ::ArrayW<char16_t> const& System::Data::SqlTypes::SqlChars::__cordl_internal_get__rgchWorkBuf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rgchWorkBuf;
}
constexpr void System::Data::SqlTypes::SqlChars::__cordl_internal_set__rgchWorkBuf(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rgchWorkBuf = value;
}
inline void System::Data::SqlTypes::SqlChars::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlChars::_ctor(::ArrayW<char16_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void System::Data::SqlTypes::SqlChars::_ctor(::System::Data::SqlTypes::SqlString value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlChars::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<char16_t> System::Data::SqlTypes::SqlChars::get_Buffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "get_Buffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(this, ___internal_method);
}
inline int64_t System::Data::SqlTypes::SqlChars::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::ArrayW<char16_t> System::Data::SqlTypes::SqlChars::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlChars::SetNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "SetNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::SqlTypes::SqlChars::FStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "FStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlChars::CopyStreamToBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "CopyStreamToBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlChars::SetBuffer(::ArrayW<char16_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "SetBuffer", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::SqlTypes::SqlChars::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlChars::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline void System::Data::SqlTypes::SqlChars::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SqlTypes::SqlChars::GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, schemaSet);
}
inline void System::Data::SqlTypes::SqlChars::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                       ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Data::SqlTypes::SqlChars* System::Data::SqlTypes::SqlChars::get_Null() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlChars*>(), { "get_Null", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlChars*>(nullptr, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlChars* System::Data::SqlTypes::SqlChars::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::SqlTypes::SqlChars*>());
}
inline ::System::Data::SqlTypes::SqlChars* System::Data::SqlTypes::SqlChars::New_ctor(::ArrayW<char16_t> buffer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::SqlTypes::SqlChars*>(buffer));
}
inline ::System::Data::SqlTypes::SqlChars* System::Data::SqlTypes::SqlChars::New_ctor(::System::Data::SqlTypes::SqlString value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::SqlTypes::SqlChars*>(value));
}
/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr System::Data::SqlTypes::SqlChars::operator ::System::Data::SqlTypes::INullable*() noexcept {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* System::Data::SqlTypes::SqlChars::i___System__Data__SqlTypes__INullable() noexcept {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::SqlTypes::SqlChars::operator ::System::Xml::Serialization::IXmlSerializable*() noexcept {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::SqlTypes::SqlChars::i___System__Xml__Serialization__IXmlSerializable() noexcept {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Data::SqlTypes::SqlChars::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Data::SqlTypes::SqlChars::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlChars::SqlChars() {}
