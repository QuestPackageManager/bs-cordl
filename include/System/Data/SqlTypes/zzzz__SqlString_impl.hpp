#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlString.hpp"
#include "System/Data/SqlTypes/zzzz__SqlCompareOptions_impl.hpp"
#include "System/Globalization/zzzz__CompareOptions_impl.hpp"
#include "System/Data/SqlTypes/zzzz__SqlString_def.hpp"
#include "System/Data/SqlTypes/zzzz__EComparison_def.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBoolean_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlCompareOptions_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/Text/zzzz__UnicodeEncoding_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlString::*)(bool)>(&::System::Data::SqlTypes::SqlString::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6094640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlString::*)(::StringW, int32_t, ::System::Data::SqlTypes::SqlCompareOptions)>(
    &::System::Data::SqlTypes::SqlString::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6094650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::SqlTypes::SqlCompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlString::*)(::StringW)>(&::System::Data::SqlTypes::SqlString::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6094790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlString::*)(int32_t, ::System::Data::SqlTypes::SqlCompareOptions, ::StringW,
                                                                                                     ::System::Globalization::CompareInfo*)>(&::System::Data::SqlTypes::SqlString::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6094854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { ".ctor",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::SqlTypes::SqlCompareOptions>(),
                                                                                                            ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlString::*)()>(&::System::Data::SqlTypes::SqlString::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6082124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SqlTypes::SqlString::*)()>(&::System::Data::SqlTypes::SqlString::get_Value)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6082134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.SetCompareInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlString::*)()>(&::System::Data::SqlTypes::SqlString::SetCompareInfo)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60948ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "SetCompareInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.op_Implicit___System__Data__SqlTypes__SqlString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlString (*)(::StringW)>(&::System::Data::SqlTypes::SqlString::op_Implicit___System__Data__SqlTypes__SqlString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6094970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SqlTypes::SqlString::*)()>(&::System::Data::SqlTypes::SqlString::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6094984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlString>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlString (*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString)>(
    &::System::Data::SqlTypes::SqlString::op_Addition)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6094a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlString>(), ::i2c::type_of<::System::Data::SqlTypes::SqlString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.StringCompare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString)>(&::System::Data::SqlTypes::SqlString::StringCompare)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6094b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(),
                                                { "StringCompare", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlString>(), ::i2c::type_of<::System::Data::SqlTypes::SqlString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString,
                                                                                                ::System::Data::SqlTypes::EComparison)>(&::System::Data::SqlTypes::SqlString::Compare)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x609510c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "Compare",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::Data::SqlTypes::SqlString>(), ::i2c::type_of<::System::Data::SqlTypes::SqlString>(),
                                                                                        ::i2c::type_of<::System::Data::SqlTypes::EComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString)>(
    &::System::Data::SqlTypes::SqlString::op_Equality)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6095268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlString>(), ::i2c::type_of<::System::Data::SqlTypes::SqlString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.ValidateSqlCompareOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Data::SqlTypes::SqlCompareOptions)>(&::System::Data::SqlTypes::SqlString::ValidateSqlCompareOptions)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x60946e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(),
                                                                                           { "ValidateSqlCompareOptions", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlCompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.CompareOptionsFromSqlCompareOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CompareOptions (*)(::System::Data::SqlTypes::SqlCompareOptions)>(
    &::System::Data::SqlTypes::SqlString::CompareOptionsFromSqlCompareOptions)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6095060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "CompareOptionsFromSqlCompareOptions", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlCompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.FBinarySort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlString::*)()>(&::System::Data::SqlTypes::SqlString::FBinarySort)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60952f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "FBinarySort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.CompareBinary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString)>(&::System::Data::SqlTypes::SqlString::CompareBinary)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6094d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(),
                                                { "CompareBinary", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlString>(), ::i2c::type_of<::System::Data::SqlTypes::SqlString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.CompareBinary2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString)>(&::System::Data::SqlTypes::SqlString::CompareBinary2)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6094f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(),
                                                { "CompareBinary2", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlString>(), ::i2c::type_of<::System::Data::SqlTypes::SqlString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlString::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlString::CompareTo)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6095360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlString::*)(::System::Data::SqlTypes::SqlString)>(&::System::Data::SqlTypes::SqlString::CompareTo)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6095470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlString::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlString::Equals)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6095560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlString>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlString::*)()>(&::System::Data::SqlTypes::SqlString::GetHashCode)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x60956e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlString>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::SqlTypes::SqlString::*)()>(
    &::System::Data::SqlTypes::SqlString::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6095910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlString::*)(::System::Xml::XmlReader*)>(
    &::System::Data::SqlTypes::SqlString::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6095918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlString::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::SqlTypes::SqlString::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6095a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlString.GetXsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Data::SqlTypes::SqlString::GetXsdType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6095b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
inline void System::Data::SqlTypes::SqlString::setStaticF_Null(::System::Data::SqlTypes::SqlString value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlString, "Null", ::System::Data::SqlTypes::SqlString>(std::forward<::System::Data::SqlTypes::SqlString>(value));
}
inline ::System::Data::SqlTypes::SqlString System::Data::SqlTypes::SqlString::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlString, "Null", ::System::Data::SqlTypes::SqlString>();
}
inline void System::Data::SqlTypes::SqlString::setStaticF_s_unicodeEncoding(::System::Text::UnicodeEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "s_unicodeEncoding", ::System::Data::SqlTypes::SqlString>(std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::Data::SqlTypes::SqlString::getStaticF_s_unicodeEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "s_unicodeEncoding", ::System::Data::SqlTypes::SqlString>();
}
inline void System::Data::SqlTypes::SqlString::setStaticF_IgnoreCase(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "IgnoreCase", ::System::Data::SqlTypes::SqlString>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlString::getStaticF_IgnoreCase() {
  return ::cordl_internals::getStaticField<int32_t, "IgnoreCase", ::System::Data::SqlTypes::SqlString>();
}
inline void System::Data::SqlTypes::SqlString::setStaticF_IgnoreWidth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "IgnoreWidth", ::System::Data::SqlTypes::SqlString>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlString::getStaticF_IgnoreWidth() {
  return ::cordl_internals::getStaticField<int32_t, "IgnoreWidth", ::System::Data::SqlTypes::SqlString>();
}
inline void System::Data::SqlTypes::SqlString::setStaticF_IgnoreNonSpace(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "IgnoreNonSpace", ::System::Data::SqlTypes::SqlString>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlString::getStaticF_IgnoreNonSpace() {
  return ::cordl_internals::getStaticField<int32_t, "IgnoreNonSpace", ::System::Data::SqlTypes::SqlString>();
}
inline void System::Data::SqlTypes::SqlString::setStaticF_IgnoreKanaType(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "IgnoreKanaType", ::System::Data::SqlTypes::SqlString>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlString::getStaticF_IgnoreKanaType() {
  return ::cordl_internals::getStaticField<int32_t, "IgnoreKanaType", ::System::Data::SqlTypes::SqlString>();
}
inline void System::Data::SqlTypes::SqlString::setStaticF_BinarySort(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BinarySort", ::System::Data::SqlTypes::SqlString>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlString::getStaticF_BinarySort() {
  return ::cordl_internals::getStaticField<int32_t, "BinarySort", ::System::Data::SqlTypes::SqlString>();
}
inline void System::Data::SqlTypes::SqlString::setStaticF_BinarySort2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BinarySort2", ::System::Data::SqlTypes::SqlString>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlString::getStaticF_BinarySort2() {
  return ::cordl_internals::getStaticField<int32_t, "BinarySort2", ::System::Data::SqlTypes::SqlString>();
}
inline void System::Data::SqlTypes::SqlString::setStaticF_s_iDefaultFlag(::System::Data::SqlTypes::SqlCompareOptions value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlCompareOptions, "s_iDefaultFlag", ::System::Data::SqlTypes::SqlString>(
      std::forward<::System::Data::SqlTypes::SqlCompareOptions>(value));
}
inline ::System::Data::SqlTypes::SqlCompareOptions System::Data::SqlTypes::SqlString::getStaticF_s_iDefaultFlag() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlCompareOptions, "s_iDefaultFlag", ::System::Data::SqlTypes::SqlString>();
}
inline void System::Data::SqlTypes::SqlString::setStaticF_s_iValidCompareOptionMask(::System::Globalization::CompareOptions value) {
  ::cordl_internals::setStaticField<::System::Globalization::CompareOptions, "s_iValidCompareOptionMask", ::System::Data::SqlTypes::SqlString>(
      std::forward<::System::Globalization::CompareOptions>(value));
}
inline ::System::Globalization::CompareOptions System::Data::SqlTypes::SqlString::getStaticF_s_iValidCompareOptionMask() {
  return ::cordl_internals::getStaticField<::System::Globalization::CompareOptions, "s_iValidCompareOptionMask", ::System::Data::SqlTypes::SqlString>();
}
inline void System::Data::SqlTypes::SqlString::setStaticF_s_iValidSqlCompareOptionMask(::System::Data::SqlTypes::SqlCompareOptions value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlCompareOptions, "s_iValidSqlCompareOptionMask", ::System::Data::SqlTypes::SqlString>(
      std::forward<::System::Data::SqlTypes::SqlCompareOptions>(value));
}
inline ::System::Data::SqlTypes::SqlCompareOptions System::Data::SqlTypes::SqlString::getStaticF_s_iValidSqlCompareOptionMask() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlCompareOptions, "s_iValidSqlCompareOptionMask", ::System::Data::SqlTypes::SqlString>();
}
inline void System::Data::SqlTypes::SqlString::setStaticF_s_lcidUSEnglish(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_lcidUSEnglish", ::System::Data::SqlTypes::SqlString>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlString::getStaticF_s_lcidUSEnglish() {
  return ::cordl_internals::getStaticField<int32_t, "s_lcidUSEnglish", ::System::Data::SqlTypes::SqlString>();
}
inline void System::Data::SqlTypes::SqlString::setStaticF_s_lcidBinary(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_lcidBinary", ::System::Data::SqlTypes::SqlString>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlString::getStaticF_s_lcidBinary() {
  return ::cordl_internals::getStaticField<int32_t, "s_lcidBinary", ::System::Data::SqlTypes::SqlString>();
}
inline void System::Data::SqlTypes::SqlString::_ctor(bool fNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fNull);
}
inline void System::Data::SqlTypes::SqlString::_ctor(::StringW data, int32_t lcid, ::System::Data::SqlTypes::SqlCompareOptions compareOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::SqlTypes::SqlCompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, lcid, compareOptions);
}
inline void System::Data::SqlTypes::SqlString::_ctor(::StringW data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
inline void System::Data::SqlTypes::SqlString::_ctor(int32_t lcid, ::System::Data::SqlTypes::SqlCompareOptions compareOptions, ::StringW data, ::System::Globalization::CompareInfo* cmpInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { ".ctor",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::SqlTypes::SqlCompareOptions>(),
                                                                                                          ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lcid, compareOptions, data, cmpInfo);
}
inline bool System::Data::SqlTypes::SqlString::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW System::Data::SqlTypes::SqlString::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlString::SetCompareInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "SetCompareInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlString System::Data::SqlTypes::SqlString::op_Implicit___System__Data__SqlTypes__SqlString(::StringW x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlString>(nullptr, ___internal_method, x);
}
inline ::StringW System::Data::SqlTypes::SqlString::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlString>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlString System::Data::SqlTypes::SqlString::op_Addition(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlString>(), ::i2c::type_of<::System::Data::SqlTypes::SqlString>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlString>(nullptr, ___internal_method, x, y);
}
inline int32_t System::Data::SqlTypes::SqlString::StringCompare(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(),
                                                           { "StringCompare", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlString>(), ::i2c::type_of<::System::Data::SqlTypes::SqlString>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlString::Compare(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y,
                                                                                       ::System::Data::SqlTypes::EComparison ecExpectedResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "Compare",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Data::SqlTypes::SqlString>(), ::i2c::type_of<::System::Data::SqlTypes::SqlString>(),
                                                                                      ::i2c::type_of<::System::Data::SqlTypes::EComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y, ecExpectedResult);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlString::op_Equality(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlString>(), ::i2c::type_of<::System::Data::SqlTypes::SqlString>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline void System::Data::SqlTypes::SqlString::ValidateSqlCompareOptions(::System::Data::SqlTypes::SqlCompareOptions compareOptions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(),
                                                                                         { "ValidateSqlCompareOptions", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlCompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, compareOptions);
}
inline ::System::Globalization::CompareOptions System::Data::SqlTypes::SqlString::CompareOptionsFromSqlCompareOptions(::System::Data::SqlTypes::SqlCompareOptions compareOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "CompareOptionsFromSqlCompareOptions", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlCompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CompareOptions>(nullptr, ___internal_method, compareOptions);
}
inline bool System::Data::SqlTypes::SqlString::FBinarySort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "FBinarySort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t System::Data::SqlTypes::SqlString::CompareBinary(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(),
                                                           { "CompareBinary", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlString>(), ::i2c::type_of<::System::Data::SqlTypes::SqlString>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline int32_t System::Data::SqlTypes::SqlString::CompareBinary2(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(),
                                              { "CompareBinary2", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlString>(), ::i2c::type_of<::System::Data::SqlTypes::SqlString>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline int32_t System::Data::SqlTypes::SqlString::CompareTo(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlString::CompareTo(::System::Data::SqlTypes::SqlString value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlString>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlString::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlString>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlString::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlString>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::SqlTypes::SqlString::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(*this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlString::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void System::Data::SqlTypes::SqlString::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SqlTypes::SqlString::GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlString>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, schemaSet);
}
/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr System::Data::SqlTypes::SqlString::operator ::System::Data::SqlTypes::INullable*() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* System::Data::SqlTypes::SqlString::i___System__Data__SqlTypes__INullable() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Data::SqlTypes::SqlString::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::SqlTypes::SqlString::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::SqlTypes::SqlString::operator ::System::Xml::Serialization::IXmlSerializable*() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::SqlTypes::SqlString::i___System__Xml__Serialization__IXmlSerializable() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_value", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cmpInfo", ty: "::System::Globalization::CompareInfo*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_lcid", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flag", ty: "::System::Data::SqlTypes::SqlCompareOptions", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SqlTypes::SqlString::SqlString(::StringW m_value, ::System::Globalization::CompareInfo* m_cmpInfo, int32_t m_lcid, ::System::Data::SqlTypes::SqlCompareOptions m_flag,
                                                         bool m_fNotNull) noexcept {
  this->m_value = m_value;
  this->m_cmpInfo = m_cmpInfo;
  this->m_lcid = m_lcid;
  this->m_flag = m_flag;
  this->m_fNotNull = m_fNotNull;
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlString::SqlString() {}
