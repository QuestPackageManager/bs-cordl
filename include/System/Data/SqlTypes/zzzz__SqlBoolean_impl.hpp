#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlBoolean.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBoolean_def.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlBoolean::*)(bool)>(&::System::Data::SqlTypes::SqlBoolean::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x607e8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlBoolean::*)(int32_t)>(&::System::Data::SqlTypes::SqlBoolean::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x607f448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlBoolean::*)(int32_t, bool)>(&::System::Data::SqlTypes::SqlBoolean::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x607f4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlBoolean::*)()>(&::System::Data::SqlTypes::SqlBoolean::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x607f4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlBoolean::*)()>(&::System::Data::SqlTypes::SqlBoolean::get_Value)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x607eebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.get_IsTrue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlBoolean::*)()>(&::System::Data::SqlTypes::SqlBoolean::get_IsTrue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x607f4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "get_IsTrue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.get_IsFalse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlBoolean::*)()>(&::System::Data::SqlTypes::SqlBoolean::get_IsFalse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x607f4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "get_IsFalse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.op_Implicit___System__Data__SqlTypes__SqlBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(bool)>(&::System::Data::SqlTypes::SqlBoolean::op_Implicit___System__Data__SqlTypes__SqlBoolean)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x607f504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "op_Implicit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.op_True
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::SqlTypes::SqlBoolean)>(&::System::Data::SqlTypes::SqlBoolean::op_True)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x607ed34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "op_True", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlBoolean, ::System::Data::SqlTypes::SqlBoolean)>(
    &::System::Data::SqlTypes::SqlBoolean::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x607f514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(),
                                                { "op_BitwiseAnd", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>(), ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlBoolean, ::System::Data::SqlTypes::SqlBoolean)>(
    &::System::Data::SqlTypes::SqlBoolean::op_BitwiseOr)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x607f5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(),
                                                { "op_BitwiseOr", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>(), ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.get_ByteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Data::SqlTypes::SqlBoolean::*)()>(&::System::Data::SqlTypes::SqlBoolean::get_ByteValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x607f6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "get_ByteValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SqlTypes::SqlBoolean::*)()>(&::System::Data::SqlTypes::SqlBoolean::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x607f74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlBoolean, ::System::Data::SqlTypes::SqlBoolean)>(
    &::System::Data::SqlTypes::SqlBoolean::op_Equality)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x607f82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>(), ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.And
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlBoolean, ::System::Data::SqlTypes::SqlBoolean)>(
    &::System::Data::SqlTypes::SqlBoolean::And)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x607f8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(),
                                                             { "And", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>(), ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.Or
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlBoolean, ::System::Data::SqlTypes::SqlBoolean)>(
    &::System::Data::SqlTypes::SqlBoolean::Or)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x607f948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(),
                                                             { "Or", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>(), ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlBoolean::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlBoolean::CompareTo)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x607f9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlBoolean::*)(::System::Data::SqlTypes::SqlBoolean)>(&::System::Data::SqlTypes::SqlBoolean::CompareTo)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x607fab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlBoolean::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlBoolean::Equals)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x607fbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlBoolean::*)()>(&::System::Data::SqlTypes::SqlBoolean::GetHashCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x607fcbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::SqlTypes::SqlBoolean::*)()>(
    &::System::Data::SqlTypes::SqlBoolean::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x607fd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlBoolean::*)(::System::Xml::XmlReader*)>(
    &::System::Data::SqlTypes::SqlBoolean::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x607fd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlBoolean::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::SqlTypes::SqlBoolean::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x607fe90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlBoolean.GetXsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Data::SqlTypes::SqlBoolean::GetXsdType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x607fffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
inline void System::Data::SqlTypes::SqlBoolean::setStaticF_True(::System::Data::SqlTypes::SqlBoolean value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlBoolean, "True", ::System::Data::SqlTypes::SqlBoolean>(std::forward<::System::Data::SqlTypes::SqlBoolean>(value));
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlBoolean::getStaticF_True() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlBoolean, "True", ::System::Data::SqlTypes::SqlBoolean>();
}
inline void System::Data::SqlTypes::SqlBoolean::setStaticF_False(::System::Data::SqlTypes::SqlBoolean value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlBoolean, "False", ::System::Data::SqlTypes::SqlBoolean>(std::forward<::System::Data::SqlTypes::SqlBoolean>(value));
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlBoolean::getStaticF_False() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlBoolean, "False", ::System::Data::SqlTypes::SqlBoolean>();
}
inline void System::Data::SqlTypes::SqlBoolean::setStaticF_Null(::System::Data::SqlTypes::SqlBoolean value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlBoolean, "Null", ::System::Data::SqlTypes::SqlBoolean>(std::forward<::System::Data::SqlTypes::SqlBoolean>(value));
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlBoolean::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlBoolean, "Null", ::System::Data::SqlTypes::SqlBoolean>();
}
inline void System::Data::SqlTypes::SqlBoolean::setStaticF_Zero(::System::Data::SqlTypes::SqlBoolean value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlBoolean, "Zero", ::System::Data::SqlTypes::SqlBoolean>(std::forward<::System::Data::SqlTypes::SqlBoolean>(value));
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlBoolean::getStaticF_Zero() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlBoolean, "Zero", ::System::Data::SqlTypes::SqlBoolean>();
}
inline void System::Data::SqlTypes::SqlBoolean::setStaticF_One(::System::Data::SqlTypes::SqlBoolean value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlBoolean, "One", ::System::Data::SqlTypes::SqlBoolean>(std::forward<::System::Data::SqlTypes::SqlBoolean>(value));
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlBoolean::getStaticF_One() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlBoolean, "One", ::System::Data::SqlTypes::SqlBoolean>();
}
inline void System::Data::SqlTypes::SqlBoolean::_ctor(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Data::SqlTypes::SqlBoolean::_ctor(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Data::SqlTypes::SqlBoolean::_ctor(int32_t value, bool fNull) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, fNull);
}
inline bool System::Data::SqlTypes::SqlBoolean::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool System::Data::SqlTypes::SqlBoolean::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool System::Data::SqlTypes::SqlBoolean::get_IsTrue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "get_IsTrue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool System::Data::SqlTypes::SqlBoolean::get_IsFalse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "get_IsFalse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlBoolean::op_Implicit___System__Data__SqlTypes__SqlBoolean(bool x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "op_Implicit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x);
}
inline bool System::Data::SqlTypes::SqlBoolean::op_True(::System::Data::SqlTypes::SqlBoolean x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "op_True", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlBoolean::op_BitwiseAnd(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(),
                                              { "op_BitwiseAnd", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>(), ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlBoolean::op_BitwiseOr(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(),
                                              { "op_BitwiseOr", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>(), ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline uint8_t System::Data::SqlTypes::SqlBoolean::get_ByteValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "get_ByteValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline ::StringW System::Data::SqlTypes::SqlBoolean::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlBoolean::op_Equality(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>(), ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlBoolean::And(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(),
                                                           { "And", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>(), ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlBoolean::Or(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(),
                                                           { "Or", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>(), ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline int32_t System::Data::SqlTypes::SqlBoolean::CompareTo(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlBoolean::CompareTo(::System::Data::SqlTypes::SqlBoolean value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlBoolean>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlBoolean::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlBoolean::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::SqlTypes::SqlBoolean::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(*this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlBoolean::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void System::Data::SqlTypes::SqlBoolean::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SqlTypes::SqlBoolean::GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlBoolean>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, schemaSet);
}
/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr System::Data::SqlTypes::SqlBoolean::operator ::System::Data::SqlTypes::INullable*() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* System::Data::SqlTypes::SqlBoolean::i___System__Data__SqlTypes__INullable() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Data::SqlTypes::SqlBoolean::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::SqlTypes::SqlBoolean::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::SqlTypes::SqlBoolean::operator ::System::Xml::Serialization::IXmlSerializable*() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::SqlTypes::SqlBoolean::i___System__Xml__Serialization__IXmlSerializable() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_value", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SqlTypes::SqlBoolean::SqlBoolean(uint8_t m_value) noexcept {
  this->m_value = m_value;
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlBoolean::SqlBoolean() {}
