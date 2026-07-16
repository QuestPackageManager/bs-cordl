#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlSingle.hpp"
#include "System/Data/SqlTypes/zzzz__SqlSingle_def.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBoolean_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlByte_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlDecimal_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlDouble_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlInt16_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlInt32_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlInt64_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlMoney_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlSingle::*)(bool)>(&::System::Data::SqlTypes::SqlSingle::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6092f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlSingle::*)(float_t)>(&::System::Data::SqlTypes::SqlSingle::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6092f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlSingle::*)(double_t)>(&::System::Data::SqlTypes::SqlSingle::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6092f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlSingle::*)()>(&::System::Data::SqlTypes::SqlSingle::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x608b5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Data::SqlTypes::SqlSingle::*)()>(&::System::Data::SqlTypes::SqlSingle::get_Value)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x608b5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_Implicit___System__Data__SqlTypes__SqlSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlSingle (*)(float_t)>(&::System::Data::SqlTypes::SqlSingle::op_Implicit___System__Data__SqlTypes__SqlSingle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6092fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SqlTypes::SqlSingle::*)()>(&::System::Data::SqlTypes::SqlSingle::ToString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6093004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlSingle (*)(::System::Data::SqlTypes::SqlSingle)>(&::System::Data::SqlTypes::SqlSingle::op_UnaryNegation)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60930a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlSingle (*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle)>(
    &::System::Data::SqlTypes::SqlSingle::op_Addition)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6093148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlSingle (*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle)>(
    &::System::Data::SqlTypes::SqlSingle::op_Subtraction)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6093264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                { "op_Subtraction", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlSingle (*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle)>(
    &::System::Data::SqlTypes::SqlSingle::op_Multiply)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6093380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlSingle (*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle)>(
    &::System::Data::SqlTypes::SqlSingle::op_Division)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x609349c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                             { "op_Division", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_Implicit___System__Data__SqlTypes__SqlSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlSingle (*)(::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlSingle::op_Implicit___System__Data__SqlTypes__SqlSingle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x60935f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_Implicit___System__Data__SqlTypes__SqlSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlSingle (*)(::System::Data::SqlTypes::SqlInt16)>(
    &::System::Data::SqlTypes::SqlSingle::op_Implicit___System__Data__SqlTypes__SqlSingle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x60936c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_Implicit___System__Data__SqlTypes__SqlSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlSingle (*)(::System::Data::SqlTypes::SqlInt32)>(
    &::System::Data::SqlTypes::SqlSingle::op_Implicit___System__Data__SqlTypes__SqlSingle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6093790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_Implicit___System__Data__SqlTypes__SqlSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlSingle (*)(::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlSingle::op_Implicit___System__Data__SqlTypes__SqlSingle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x609385c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_Implicit___System__Data__SqlTypes__SqlSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlSingle (*)(::System::Data::SqlTypes::SqlMoney)>(
    &::System::Data::SqlTypes::SqlSingle::op_Implicit___System__Data__SqlTypes__SqlSingle)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6093928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlMoney>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_Implicit___System__Data__SqlTypes__SqlSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlSingle (*)(::System::Data::SqlTypes::SqlDecimal)>(
    &::System::Data::SqlTypes::SqlSingle::op_Implicit___System__Data__SqlTypes__SqlSingle)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60939f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_Explicit___System__Data__SqlTypes__SqlSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlSingle (*)(::System::Data::SqlTypes::SqlDouble)>(
    &::System::Data::SqlTypes::SqlSingle::op_Explicit___System__Data__SqlTypes__SqlSingle)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x608bb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle)>(
    &::System::Data::SqlTypes::SqlSingle::op_Equality)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6093ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle)>(
    &::System::Data::SqlTypes::SqlSingle::op_LessThan)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6093b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                             { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle)>(
    &::System::Data::SqlTypes::SqlSingle::op_GreaterThan)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6093c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle)>(
    &::System::Data::SqlTypes::SqlSingle::LessThan)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6093d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                             { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle)>(
    &::System::Data::SqlTypes::SqlSingle::GreaterThan)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6093d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                             { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.ToSqlDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (::System::Data::SqlTypes::SqlSingle::*)()>(&::System::Data::SqlTypes::SqlSingle::ToSqlDouble)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6093e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "ToSqlDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlSingle::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlSingle::CompareTo)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6093e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlSingle::*)(::System::Data::SqlTypes::SqlSingle)>(&::System::Data::SqlTypes::SqlSingle::CompareTo)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6093f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlSingle::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlSingle::Equals)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x60940bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlSingle::*)()>(&::System::Data::SqlTypes::SqlSingle::GetHashCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60941e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::SqlTypes::SqlSingle::*)()>(
    &::System::Data::SqlTypes::SqlSingle::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6094278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlSingle::*)(::System::Xml::XmlReader*)>(
    &::System::Data::SqlTypes::SqlSingle::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6094280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlSingle::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::SqlTypes::SqlSingle::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x60943ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlSingle.GetXsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Data::SqlTypes::SqlSingle::GetXsdType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6094530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
inline void System::Data::SqlTypes::SqlSingle::setStaticF_Null(::System::Data::SqlTypes::SqlSingle value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlSingle, "Null", ::System::Data::SqlTypes::SqlSingle>(std::forward<::System::Data::SqlTypes::SqlSingle>(value));
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlSingle, "Null", ::System::Data::SqlTypes::SqlSingle>();
}
inline void System::Data::SqlTypes::SqlSingle::setStaticF_Zero(::System::Data::SqlTypes::SqlSingle value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlSingle, "Zero", ::System::Data::SqlTypes::SqlSingle>(std::forward<::System::Data::SqlTypes::SqlSingle>(value));
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::getStaticF_Zero() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlSingle, "Zero", ::System::Data::SqlTypes::SqlSingle>();
}
inline void System::Data::SqlTypes::SqlSingle::setStaticF_MinValue(::System::Data::SqlTypes::SqlSingle value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlSingle, "MinValue", ::System::Data::SqlTypes::SqlSingle>(std::forward<::System::Data::SqlTypes::SqlSingle>(value));
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlSingle, "MinValue", ::System::Data::SqlTypes::SqlSingle>();
}
inline void System::Data::SqlTypes::SqlSingle::setStaticF_MaxValue(::System::Data::SqlTypes::SqlSingle value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlSingle, "MaxValue", ::System::Data::SqlTypes::SqlSingle>(std::forward<::System::Data::SqlTypes::SqlSingle>(value));
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlSingle, "MaxValue", ::System::Data::SqlTypes::SqlSingle>();
}
inline void System::Data::SqlTypes::SqlSingle::_ctor(bool fNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fNull);
}
inline void System::Data::SqlTypes::SqlSingle::_ctor(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Data::SqlTypes::SqlSingle::_ctor(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlSingle::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t System::Data::SqlTypes::SqlSingle::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::op_Implicit___System__Data__SqlTypes__SqlSingle(float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlSingle>(nullptr, ___internal_method, x);
}
inline ::StringW System::Data::SqlTypes::SqlSingle::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::op_UnaryNegation(::System::Data::SqlTypes::SqlSingle x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlSingle>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::op_Addition(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlSingle>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::op_Subtraction(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                              { "op_Subtraction", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlSingle>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::op_Multiply(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlSingle>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::op_Division(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                           { "op_Division", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlSingle>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::op_Implicit___System__Data__SqlTypes__SqlSingle(::System::Data::SqlTypes::SqlByte x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlSingle>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::op_Implicit___System__Data__SqlTypes__SqlSingle(::System::Data::SqlTypes::SqlInt16 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlSingle>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::op_Implicit___System__Data__SqlTypes__SqlSingle(::System::Data::SqlTypes::SqlInt32 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlSingle>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::op_Implicit___System__Data__SqlTypes__SqlSingle(::System::Data::SqlTypes::SqlInt64 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlSingle>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::op_Implicit___System__Data__SqlTypes__SqlSingle(::System::Data::SqlTypes::SqlMoney x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlMoney>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlSingle>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::op_Implicit___System__Data__SqlTypes__SqlSingle(::System::Data::SqlTypes::SqlDecimal x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlSingle>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlSingle::op_Explicit___System__Data__SqlTypes__SqlSingle(::System::Data::SqlTypes::SqlDouble x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlSingle>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlSingle::op_Equality(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlSingle::op_LessThan(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                           { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlSingle::op_GreaterThan(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                              { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlSingle::LessThan(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                           { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlSingle::GreaterThan(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(),
                                                           { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>(), ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlSingle::ToSqlDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "ToSqlDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(*this, ___internal_method);
}
inline int32_t System::Data::SqlTypes::SqlSingle::CompareTo(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlSingle::CompareTo(::System::Data::SqlTypes::SqlSingle value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlSingle::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlSingle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::SqlTypes::SqlSingle::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(*this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlSingle::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void System::Data::SqlTypes::SqlSingle::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SqlTypes::SqlSingle::GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlSingle>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, schemaSet);
}
/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr System::Data::SqlTypes::SqlSingle::operator ::System::Data::SqlTypes::INullable*() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* System::Data::SqlTypes::SqlSingle::i___System__Data__SqlTypes__INullable() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Data::SqlTypes::SqlSingle::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::SqlTypes::SqlSingle::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::SqlTypes::SqlSingle::operator ::System::Xml::Serialization::IXmlSerializable*() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::SqlTypes::SqlSingle::i___System__Xml__Serialization__IXmlSerializable() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_fNotNull", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SqlTypes::SqlSingle::SqlSingle(bool _fNotNull, float_t _value) noexcept {
  this->_fNotNull = _fNotNull;
  this->_value = _value;
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlSingle::SqlSingle() {}
