#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlDecimal.hpp"
#include "System/Data/SqlTypes/zzzz__SqlDecimal_def.hpp"
#include "System/Data/SqlTypes/zzzz__EComparison_def.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBoolean_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlByte_def.hpp"
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
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.CalculatePrecision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::CalculatePrecision)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6084290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "CalculatePrecision", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.VerifyPrecision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlDecimal::*)(uint8_t)>(&::System::Data::SqlTypes::SqlDecimal::VerifyPrecision)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x60844cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "VerifyPrecision", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDecimal::*)(bool)>(&::System::Data::SqlTypes::SqlDecimal::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60846f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDecimal::*)(::System::Decimal)>(&::System::Data::SqlTypes::SqlDecimal::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6084760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { ".ctor", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDecimal::*)(int32_t)>(&::System::Data::SqlTypes::SqlDecimal::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x60848cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDecimal::*)(int64_t)>(&::System::Data::SqlTypes::SqlDecimal::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6084b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDecimal::*)(::ArrayW<uint32_t>, uint8_t, uint8_t, uint8_t, bool)>(
    &::System::Data::SqlTypes::SqlDecimal::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6084f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                            { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::get_IsNull)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6085230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::get_Value)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x60852a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.get_IsPositive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::get_IsPositive)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6085460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "get_IsPositive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.SetPositive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::SetPositive)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60851c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "SetPositive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.SetSignBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDecimal::*)(bool)>(&::System::Data::SqlTypes::SqlDecimal::SetSignBit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6085520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "SetSignBit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.get_Scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::get_Scale)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x60855b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "get_Scale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.get_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::get_Data)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x608564c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "get_Data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::ToString)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x608574c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDecimal (*)(::StringW)>(&::System::Data::SqlTypes::SqlDecimal::Parse)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x6085b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::ToDouble)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6086470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "ToDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::ToDecimal)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x60852fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "ToDecimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_Implicit___System__Data__SqlTypes__SqlDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDecimal (*)(::System::Decimal)>(
    &::System::Data::SqlTypes::SqlDecimal::op_Implicit___System__Data__SqlTypes__SqlDecimal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60865d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_Implicit___System__Data__SqlTypes__SqlDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDecimal (*)(int64_t)>(&::System::Data::SqlTypes::SqlDecimal::op_Implicit___System__Data__SqlTypes__SqlDecimal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60865ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_Implicit", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDecimal (*)(::System::Data::SqlTypes::SqlDecimal)>(&::System::Data::SqlTypes::SqlDecimal::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x608660c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDecimal (*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal)>(
    &::System::Data::SqlTypes::SqlDecimal::op_Addition)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x6086734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDecimal (*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal)>(
    &::System::Data::SqlTypes::SqlDecimal::op_Subtraction)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6087224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                { "op_Subtraction", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDecimal (*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal)>(
    &::System::Data::SqlTypes::SqlDecimal::op_Multiply)> {
  constexpr static std::size_t size = 0x8e0;
  constexpr static std::size_t addrs = 0x60872dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                { "op_Multiply", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDecimal (*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal)>(
    &::System::Data::SqlTypes::SqlDecimal::op_Division)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x6087bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                { "op_Division", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_Implicit___System__Data__SqlTypes__SqlDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDecimal (*)(::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlDecimal::op_Implicit___System__Data__SqlTypes__SqlDecimal)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6088848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_Implicit___System__Data__SqlTypes__SqlDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDecimal (*)(::System::Data::SqlTypes::SqlInt16)>(
    &::System::Data::SqlTypes::SqlDecimal::op_Implicit___System__Data__SqlTypes__SqlDecimal)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x608892c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_Implicit___System__Data__SqlTypes__SqlDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDecimal (*)(::System::Data::SqlTypes::SqlInt32)>(
    &::System::Data::SqlTypes::SqlDecimal::op_Implicit___System__Data__SqlTypes__SqlDecimal)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6088a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_Implicit___System__Data__SqlTypes__SqlDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDecimal (*)(::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlDecimal::op_Implicit___System__Data__SqlTypes__SqlDecimal)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6088be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_Implicit___System__Data__SqlTypes__SqlDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDecimal (*)(::System::Data::SqlTypes::SqlMoney)>(
    &::System::Data::SqlTypes::SqlDecimal::op_Implicit___System__Data__SqlTypes__SqlDecimal)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6088cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlMoney>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.ZeroToMaxLen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t)>(&::System::Data::SqlTypes::SqlDecimal::ZeroToMaxLen)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60887cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "ZeroToMaxLen", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.FZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::FZero)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60851a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "FZero", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.FGt10_38
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::FGt10_38)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60871bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "FGt10_38", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.FGt10_38
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlDecimal::*)(::ArrayW<uint32_t>)>(&::System::Data::SqlTypes::SqlDecimal::FGt10_38)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6088ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "FGt10_38", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.BGetPrecUI4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint32_t)>(&::System::Data::SqlTypes::SqlDecimal::BGetPrecUI4)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x60849a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "BGetPrecUI4", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.BGetPrecUI8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint64_t)>(&::System::Data::SqlTypes::SqlDecimal::BGetPrecUI8)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x6084c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "BGetPrecUI8", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.AddULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDecimal::*)(uint32_t)>(&::System::Data::SqlTypes::SqlDecimal::AddULong)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6086294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "AddULong", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.MultByULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDecimal::*)(uint32_t)>(&::System::Data::SqlTypes::SqlDecimal::MultByULong)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6086080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "MultByULong", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.DivByULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Data::SqlTypes::SqlDecimal::*)(uint32_t)>(&::System::Data::SqlTypes::SqlDecimal::DivByULong)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6088fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "DivByULong", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.AdjustScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDecimal::*)(int32_t, bool)>(&::System::Data::SqlTypes::SqlDecimal::AdjustScale)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x6086d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "AdjustScale", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.LAbsCmp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlDecimal::*)(::System::Data::SqlTypes::SqlDecimal)>(&::System::Data::SqlTypes::SqlDecimal::LAbsCmp)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x608705c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "LAbsCmp", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.MpMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t, ::ArrayW<uint32_t>, ::by_ref<int32_t>)>(&::System::Data::SqlTypes::SqlDecimal::MpMove)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60891e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                            { "MpMove", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.MpSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::by_ref<int32_t>, uint32_t)>(&::System::Data::SqlTypes::SqlDecimal::MpSet)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6089244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                             { "MpSet", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.MpNormalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::by_ref<int32_t>)>(&::System::Data::SqlTypes::SqlDecimal::MpNormalize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6089270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                                                           { "MpNormalize", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.MpMul1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::by_ref<int32_t>, uint32_t)>(&::System::Data::SqlTypes::SqlDecimal::MpMul1)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x60892c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                             { "MpMul1", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.MpDiv1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::by_ref<int32_t>, uint32_t, ::by_ref<uint32_t>)>(&::System::Data::SqlTypes::SqlDecimal::MpDiv1)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6085a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                            { "MpDiv1", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.DWL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t, uint32_t)>(&::System::Data::SqlTypes::SqlDecimal::DWL)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60893d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "DWL", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.HI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t)>(&::System::Data::SqlTypes::SqlDecimal::HI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60893c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "HI", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.LO
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t)>(&::System::Data::SqlTypes::SqlDecimal::LO)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60893d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "LO", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.MpDiv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t, ::ArrayW<uint32_t>, int32_t, ::ArrayW<uint32_t>, ::by_ref<int32_t>, ::ArrayW<uint32_t>,
                                                                ::by_ref<int32_t>)>(&::System::Data::SqlTypes::SqlDecimal::MpDiv)> {
  constexpr static std::size_t size = 0x7fc;
  constexpr static std::size_t addrs = 0x6087fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                                                           { "MpDiv",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                               ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.CompareNm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::EComparison (::System::Data::SqlTypes::SqlDecimal::*)(::System::Data::SqlTypes::SqlDecimal)>(
    &::System::Data::SqlTypes::SqlDecimal::CompareNm)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x60893e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "CompareNm", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.CheckValidPrecScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, uint8_t)>(&::System::Data::SqlTypes::SqlDecimal::CheckValidPrecScale)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60850c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "CheckValidPrecScale", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal)>(
    &::System::Data::SqlTypes::SqlDecimal::op_Equality)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6089640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal)>(
    &::System::Data::SqlTypes::SqlDecimal::op_LessThan)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6089740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal)>(
    &::System::Data::SqlTypes::SqlDecimal::op_GreaterThan)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6089840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal)>(
    &::System::Data::SqlTypes::SqlDecimal::LessThan)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6089940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                             { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal)>(
    &::System::Data::SqlTypes::SqlDecimal::GreaterThan)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x60899d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.ToSqlDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::ToSqlDouble)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6089a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "ToSqlDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.ToSqlInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::ToSqlInt64)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6089ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "ToSqlInt64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.ToSqlMoney
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlMoney (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::ToSqlMoney)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6089de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "ToSqlMoney", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.ChFromDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(uint32_t)>(&::System::Data::SqlTypes::SqlDecimal::ChFromDigit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6085b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "ChFromDigit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.StoreFromWorkingArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDecimal::*)(::ArrayW<uint32_t>)>(&::System::Data::SqlTypes::SqlDecimal::StoreFromWorkingArray)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6088f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "StoreFromWorkingArray", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.SetToZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::SetToZero)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6086004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "SetToZero", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlDecimal::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlDecimal::CompareTo)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6089f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlDecimal::*)(::System::Data::SqlTypes::SqlDecimal)>(&::System::Data::SqlTypes::SqlDecimal::CompareTo)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x608a048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlDecimal::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlDecimal::Equals)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x608a1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlDecimal::*)()>(&::System::Data::SqlTypes::SqlDecimal::GetHashCode)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x608a360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::SqlTypes::SqlDecimal::*)()>(
    &::System::Data::SqlTypes::SqlDecimal::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x608a468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDecimal::*)(::System::Xml::XmlReader*)>(
    &::System::Data::SqlTypes::SqlDecimal::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x608a470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDecimal::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::SqlTypes::SqlDecimal::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x608a5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDecimal.GetXsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Data::SqlTypes::SqlDecimal::GetXsdType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x608a744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_NUMERIC_MAX_PRECISION(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "s_NUMERIC_MAX_PRECISION", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_NUMERIC_MAX_PRECISION() {
  return ::cordl_internals::getStaticField<uint8_t, "s_NUMERIC_MAX_PRECISION", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_MaxPrecision(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "MaxPrecision", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::getStaticF_MaxPrecision() {
  return ::cordl_internals::getStaticField<uint8_t, "MaxPrecision", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_MaxScale(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "MaxScale", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::getStaticF_MaxScale() {
  return ::cordl_internals::getStaticField<uint8_t, "MaxScale", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_bNullMask(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "s_bNullMask", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_bNullMask() {
  return ::cordl_internals::getStaticField<uint8_t, "s_bNullMask", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_bIsNull(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "s_bIsNull", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_bIsNull() {
  return ::cordl_internals::getStaticField<uint8_t, "s_bIsNull", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_bNotNull(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "s_bNotNull", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_bNotNull() {
  return ::cordl_internals::getStaticField<uint8_t, "s_bNotNull", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_bReverseNullMask(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "s_bReverseNullMask", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_bReverseNullMask() {
  return ::cordl_internals::getStaticField<uint8_t, "s_bReverseNullMask", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_bSignMask(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "s_bSignMask", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_bSignMask() {
  return ::cordl_internals::getStaticField<uint8_t, "s_bSignMask", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_bPositive(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "s_bPositive", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_bPositive() {
  return ::cordl_internals::getStaticField<uint8_t, "s_bPositive", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_bNegative(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "s_bNegative", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_bNegative() {
  return ::cordl_internals::getStaticField<uint8_t, "s_bNegative", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_bReverseSignMask(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "s_bReverseSignMask", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_bReverseSignMask() {
  return ::cordl_internals::getStaticField<uint8_t, "s_bReverseSignMask", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_uiZero(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_uiZero", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint32_t>(value));
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_uiZero() {
  return ::cordl_internals::getStaticField<uint32_t, "s_uiZero", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_cNumeMax(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_cNumeMax", ::System::Data::SqlTypes::SqlDecimal>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_cNumeMax() {
  return ::cordl_internals::getStaticField<int32_t, "s_cNumeMax", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_lInt32Base(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "s_lInt32Base", ::System::Data::SqlTypes::SqlDecimal>(std::forward<int64_t>(value));
}
inline int64_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_lInt32Base() {
  return ::cordl_internals::getStaticField<int64_t, "s_lInt32Base", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_ulInt32Base(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "s_ulInt32Base", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_ulInt32Base() {
  return ::cordl_internals::getStaticField<uint64_t, "s_ulInt32Base", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_ulInt32BaseForMod(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "s_ulInt32BaseForMod", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_ulInt32BaseForMod() {
  return ::cordl_internals::getStaticField<uint64_t, "s_ulInt32BaseForMod", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_llMax(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "s_llMax", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_llMax() {
  return ::cordl_internals::getStaticField<uint64_t, "s_llMax", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_ulBase10(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_ulBase10", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint32_t>(value));
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_ulBase10() {
  return ::cordl_internals::getStaticField<uint32_t, "s_ulBase10", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_DUINT_BASE(double_t value) {
  ::cordl_internals::setStaticField<double_t, "s_DUINT_BASE", ::System::Data::SqlTypes::SqlDecimal>(std::forward<double_t>(value));
}
inline double_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_DUINT_BASE() {
  return ::cordl_internals::getStaticField<double_t, "s_DUINT_BASE", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_DUINT_BASE2(double_t value) {
  ::cordl_internals::setStaticField<double_t, "s_DUINT_BASE2", ::System::Data::SqlTypes::SqlDecimal>(std::forward<double_t>(value));
}
inline double_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_DUINT_BASE2() {
  return ::cordl_internals::getStaticField<double_t, "s_DUINT_BASE2", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_DUINT_BASE3(double_t value) {
  ::cordl_internals::setStaticField<double_t, "s_DUINT_BASE3", ::System::Data::SqlTypes::SqlDecimal>(std::forward<double_t>(value));
}
inline double_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_DUINT_BASE3() {
  return ::cordl_internals::getStaticField<double_t, "s_DUINT_BASE3", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_DMAX_NUME(double_t value) {
  ::cordl_internals::setStaticField<double_t, "s_DMAX_NUME", ::System::Data::SqlTypes::SqlDecimal>(std::forward<double_t>(value));
}
inline double_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_DMAX_NUME() {
  return ::cordl_internals::getStaticField<double_t, "s_DMAX_NUME", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_DBL_DIG(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_DBL_DIG", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint32_t>(value));
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_DBL_DIG() {
  return ::cordl_internals::getStaticField<uint32_t, "s_DBL_DIG", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_cNumeDivScaleMin(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "s_cNumeDivScaleMin", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_cNumeDivScaleMin() {
  return ::cordl_internals::getStaticField<uint8_t, "s_cNumeDivScaleMin", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_rgulShiftBase(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "s_rgulShiftBase", ::System::Data::SqlTypes::SqlDecimal>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Data::SqlTypes::SqlDecimal::getStaticF_s_rgulShiftBase() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "s_rgulShiftBase", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_decimalHelpersLo(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "s_decimalHelpersLo", ::System::Data::SqlTypes::SqlDecimal>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Data::SqlTypes::SqlDecimal::getStaticF_s_decimalHelpersLo() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "s_decimalHelpersLo", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_decimalHelpersMid(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "s_decimalHelpersMid", ::System::Data::SqlTypes::SqlDecimal>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Data::SqlTypes::SqlDecimal::getStaticF_s_decimalHelpersMid() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "s_decimalHelpersMid", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_decimalHelpersHi(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "s_decimalHelpersHi", ::System::Data::SqlTypes::SqlDecimal>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Data::SqlTypes::SqlDecimal::getStaticF_s_decimalHelpersHi() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "s_decimalHelpersHi", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_decimalHelpersHiHi(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "s_decimalHelpersHiHi", ::System::Data::SqlTypes::SqlDecimal>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Data::SqlTypes::SqlDecimal::getStaticF_s_decimalHelpersHiHi() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "s_decimalHelpersHiHi", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_rgCLenFromPrec(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_rgCLenFromPrec", ::System::Data::SqlTypes::SqlDecimal>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Data::SqlTypes::SqlDecimal::getStaticF_s_rgCLenFromPrec() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_rgCLenFromPrec", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_ulT1(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_ulT1", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint32_t>(value));
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_ulT1() {
  return ::cordl_internals::getStaticField<uint32_t, "s_ulT1", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_ulT2(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_ulT2", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint32_t>(value));
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_ulT2() {
  return ::cordl_internals::getStaticField<uint32_t, "s_ulT2", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_ulT3(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_ulT3", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint32_t>(value));
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_ulT3() {
  return ::cordl_internals::getStaticField<uint32_t, "s_ulT3", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_ulT4(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_ulT4", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint32_t>(value));
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_ulT4() {
  return ::cordl_internals::getStaticField<uint32_t, "s_ulT4", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_ulT5(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_ulT5", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint32_t>(value));
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_ulT5() {
  return ::cordl_internals::getStaticField<uint32_t, "s_ulT5", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_ulT6(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_ulT6", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint32_t>(value));
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_ulT6() {
  return ::cordl_internals::getStaticField<uint32_t, "s_ulT6", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_ulT7(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_ulT7", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint32_t>(value));
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_ulT7() {
  return ::cordl_internals::getStaticField<uint32_t, "s_ulT7", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_ulT8(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_ulT8", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint32_t>(value));
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_ulT8() {
  return ::cordl_internals::getStaticField<uint32_t, "s_ulT8", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_ulT9(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_ulT9", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint32_t>(value));
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_ulT9() {
  return ::cordl_internals::getStaticField<uint32_t, "s_ulT9", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_dwlT10(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "s_dwlT10", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_dwlT10() {
  return ::cordl_internals::getStaticField<uint64_t, "s_dwlT10", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_dwlT11(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "s_dwlT11", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_dwlT11() {
  return ::cordl_internals::getStaticField<uint64_t, "s_dwlT11", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_dwlT12(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "s_dwlT12", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_dwlT12() {
  return ::cordl_internals::getStaticField<uint64_t, "s_dwlT12", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_dwlT13(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "s_dwlT13", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_dwlT13() {
  return ::cordl_internals::getStaticField<uint64_t, "s_dwlT13", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_dwlT14(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "s_dwlT14", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_dwlT14() {
  return ::cordl_internals::getStaticField<uint64_t, "s_dwlT14", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_dwlT15(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "s_dwlT15", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_dwlT15() {
  return ::cordl_internals::getStaticField<uint64_t, "s_dwlT15", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_dwlT16(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "s_dwlT16", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_dwlT16() {
  return ::cordl_internals::getStaticField<uint64_t, "s_dwlT16", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_dwlT17(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "s_dwlT17", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_dwlT17() {
  return ::cordl_internals::getStaticField<uint64_t, "s_dwlT17", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_dwlT18(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "s_dwlT18", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_dwlT18() {
  return ::cordl_internals::getStaticField<uint64_t, "s_dwlT18", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_s_dwlT19(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "s_dwlT19", ::System::Data::SqlTypes::SqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Data::SqlTypes::SqlDecimal::getStaticF_s_dwlT19() {
  return ::cordl_internals::getStaticField<uint64_t, "s_dwlT19", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_Null(::System::Data::SqlTypes::SqlDecimal value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlDecimal, "Null", ::System::Data::SqlTypes::SqlDecimal>(std::forward<::System::Data::SqlTypes::SqlDecimal>(value));
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlDecimal, "Null", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_MinValue(::System::Data::SqlTypes::SqlDecimal value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlDecimal, "MinValue", ::System::Data::SqlTypes::SqlDecimal>(std::forward<::System::Data::SqlTypes::SqlDecimal>(value));
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlDecimal, "MinValue", ::System::Data::SqlTypes::SqlDecimal>();
}
inline void System::Data::SqlTypes::SqlDecimal::setStaticF_MaxValue(::System::Data::SqlTypes::SqlDecimal value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlDecimal, "MaxValue", ::System::Data::SqlTypes::SqlDecimal>(std::forward<::System::Data::SqlTypes::SqlDecimal>(value));
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlDecimal, "MaxValue", ::System::Data::SqlTypes::SqlDecimal>();
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::CalculatePrecision() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "CalculatePrecision", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline bool System::Data::SqlTypes::SqlDecimal::VerifyPrecision(uint8_t precision) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "VerifyPrecision", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, precision);
}
inline void System::Data::SqlTypes::SqlDecimal::_ctor(bool fNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fNull);
}
inline void System::Data::SqlTypes::SqlDecimal::_ctor(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { ".ctor", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Data::SqlTypes::SqlDecimal::_ctor(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Data::SqlTypes::SqlDecimal::_ctor(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Data::SqlTypes::SqlDecimal::_ctor(::ArrayW<uint32_t> rglData, uint8_t bLen, uint8_t bPrec, uint8_t bScale, bool fPositive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                          { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rglData, bLen, bPrec, bScale, fPositive);
}
inline bool System::Data::SqlTypes::SqlDecimal::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Decimal System::Data::SqlTypes::SqlDecimal::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(*this, ___internal_method);
}
inline bool System::Data::SqlTypes::SqlDecimal::get_IsPositive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "get_IsPositive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlDecimal::SetPositive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "SetPositive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlDecimal::SetSignBit(bool fPositive) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "SetSignBit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fPositive);
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::get_Scale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "get_Scale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline ::ArrayW<int32_t> System::Data::SqlTypes::SqlDecimal::get_Data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(*this, ___internal_method);
}
inline ::StringW System::Data::SqlTypes::SqlDecimal::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::Parse(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDecimal>(nullptr, ___internal_method, s);
}
inline double_t System::Data::SqlTypes::SqlDecimal::ToDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "ToDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::System::Decimal System::Data::SqlTypes::SqlDecimal::ToDecimal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "ToDecimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::op_Implicit___System__Data__SqlTypes__SqlDecimal(::System::Decimal x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDecimal>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::op_Implicit___System__Data__SqlTypes__SqlDecimal(int64_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_Implicit", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDecimal>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::op_UnaryNegation(::System::Data::SqlTypes::SqlDecimal x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDecimal>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::op_Addition(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDecimal>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::op_Subtraction(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                              { "op_Subtraction", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDecimal>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::op_Multiply(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDecimal>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::op_Division(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                           { "op_Division", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDecimal>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::op_Implicit___System__Data__SqlTypes__SqlDecimal(::System::Data::SqlTypes::SqlByte x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDecimal>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::op_Implicit___System__Data__SqlTypes__SqlDecimal(::System::Data::SqlTypes::SqlInt16 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDecimal>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::op_Implicit___System__Data__SqlTypes__SqlDecimal(::System::Data::SqlTypes::SqlInt32 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDecimal>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::op_Implicit___System__Data__SqlTypes__SqlDecimal(::System::Data::SqlTypes::SqlInt64 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDecimal>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlDecimal::op_Implicit___System__Data__SqlTypes__SqlDecimal(::System::Data::SqlTypes::SqlMoney x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlMoney>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDecimal>(nullptr, ___internal_method, x);
}
inline void System::Data::SqlTypes::SqlDecimal::ZeroToMaxLen(::ArrayW<uint32_t> rgulData, int32_t cUI4sCur) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "ZeroToMaxLen", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rgulData, cUI4sCur);
}
inline bool System::Data::SqlTypes::SqlDecimal::FZero() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "FZero", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool System::Data::SqlTypes::SqlDecimal::FGt10_38() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "FGt10_38", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool System::Data::SqlTypes::SqlDecimal::FGt10_38(::ArrayW<uint32_t> rglData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "FGt10_38", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rglData);
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::BGetPrecUI4(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "BGetPrecUI4", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Data::SqlTypes::SqlDecimal::BGetPrecUI8(uint64_t dwlVal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "BGetPrecUI8", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, dwlVal);
}
inline void System::Data::SqlTypes::SqlDecimal::AddULong(uint32_t ulAdd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "AddULong", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ulAdd);
}
inline void System::Data::SqlTypes::SqlDecimal::MultByULong(uint32_t uiMultiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "MultByULong", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, uiMultiplier);
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::DivByULong(uint32_t iDivisor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "DivByULong", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, iDivisor);
}
inline void System::Data::SqlTypes::SqlDecimal::AdjustScale(int32_t digits, bool fRound) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "AdjustScale", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, digits, fRound);
}
inline int32_t System::Data::SqlTypes::SqlDecimal::LAbsCmp(::System::Data::SqlTypes::SqlDecimal snumOp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "LAbsCmp", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, snumOp);
}
inline void System::Data::SqlTypes::SqlDecimal::MpMove(::ArrayW<uint32_t> rgulS, int32_t ciulS, ::ArrayW<uint32_t> rgulD, ::by_ref<int32_t> ciulD) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                          { "MpMove", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rgulS, ciulS, rgulD, ciulD);
}
inline void System::Data::SqlTypes::SqlDecimal::MpSet(::ArrayW<uint32_t> rgulD, ::by_ref<int32_t> ciulD, uint32_t iulN) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                           { "MpSet", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rgulD, ciulD, iulN);
}
inline void System::Data::SqlTypes::SqlDecimal::MpNormalize(::ArrayW<uint32_t> rgulU, ::by_ref<int32_t> ciulU) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "MpNormalize", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rgulU, ciulU);
}
inline void System::Data::SqlTypes::SqlDecimal::MpMul1(::ArrayW<uint32_t> piulD, ::by_ref<int32_t> ciulD, uint32_t iulX) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                           { "MpMul1", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, piulD, ciulD, iulX);
}
inline void System::Data::SqlTypes::SqlDecimal::MpDiv1(::ArrayW<uint32_t> rgulU, ::by_ref<int32_t> ciulU, uint32_t iulD, ::by_ref<uint32_t> iulR) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                          { "MpDiv1", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rgulU, ciulU, iulD, iulR);
}
inline uint64_t System::Data::SqlTypes::SqlDecimal::DWL(uint32_t lo, uint32_t hi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "DWL", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, lo, hi);
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::HI(uint64_t x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "HI", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline uint32_t System::Data::SqlTypes::SqlDecimal::LO(uint64_t x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "LO", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline void System::Data::SqlTypes::SqlDecimal::MpDiv(::ArrayW<uint32_t> rgulU, int32_t ciulU, ::ArrayW<uint32_t> rgulD, int32_t ciulD, ::ArrayW<uint32_t> rgulQ, ::by_ref<int32_t> ciulQ,
                                                      ::ArrayW<uint32_t> rgulR, ::by_ref<int32_t> ciulR) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                       { "MpDiv",
                                         {},
                                         { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rgulU, ciulU, rgulD, ciulD, rgulQ, ciulQ, rgulR, ciulR);
}
inline ::System::Data::SqlTypes::EComparison System::Data::SqlTypes::SqlDecimal::CompareNm(::System::Data::SqlTypes::SqlDecimal snumOp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "CompareNm", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::EComparison>(*this, ___internal_method, snumOp);
}
inline void System::Data::SqlTypes::SqlDecimal::CheckValidPrecScale(uint8_t bPrec, uint8_t bScale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "CheckValidPrecScale", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bPrec, bScale);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDecimal::op_Equality(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDecimal::op_LessThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                           { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDecimal::op_GreaterThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                              { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDecimal::LessThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                           { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDecimal::GreaterThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(),
                                                           { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDecimal::ToSqlDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "ToSqlDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlDecimal::ToSqlInt64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "ToSqlInt64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlMoney System::Data::SqlTypes::SqlDecimal::ToSqlMoney() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "ToSqlMoney", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlMoney>(*this, ___internal_method);
}
inline char16_t System::Data::SqlTypes::SqlDecimal::ChFromDigit(uint32_t uiDigit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "ChFromDigit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, uiDigit);
}
inline void System::Data::SqlTypes::SqlDecimal::StoreFromWorkingArray(::ArrayW<uint32_t> rguiData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "StoreFromWorkingArray", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rguiData);
}
inline void System::Data::SqlTypes::SqlDecimal::SetToZero() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "SetToZero", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t System::Data::SqlTypes::SqlDecimal::CompareTo(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlDecimal::CompareTo(::System::Data::SqlTypes::SqlDecimal value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlDecimal::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlDecimal::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::SqlTypes::SqlDecimal::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(*this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlDecimal::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void System::Data::SqlTypes::SqlDecimal::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SqlTypes::SqlDecimal::GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDecimal>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, schemaSet);
}
/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr System::Data::SqlTypes::SqlDecimal::operator ::System::Data::SqlTypes::INullable*() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* System::Data::SqlTypes::SqlDecimal::i___System__Data__SqlTypes__INullable() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Data::SqlTypes::SqlDecimal::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::SqlTypes::SqlDecimal::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::SqlTypes::SqlDecimal::operator ::System::Xml::Serialization::IXmlSerializable*() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::SqlTypes::SqlDecimal::i___System__Xml__Serialization__IXmlSerializable() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_bStatus", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bLen", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_bPrec", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bScale", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_data1", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_data2", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_data3", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_data4", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SqlTypes::SqlDecimal::SqlDecimal(uint8_t _bStatus, uint8_t _bLen, uint8_t _bPrec, uint8_t _bScale, uint32_t _data1, uint32_t _data2, uint32_t _data3,
                                                           uint32_t _data4) noexcept {
  this->_bStatus = _bStatus;
  this->_bLen = _bLen;
  this->_bPrec = _bPrec;
  this->_bScale = _bScale;
  this->_data1 = _data1;
  this->_data2 = _data2;
  this->_data3 = _data3;
  this->_data4 = _data4;
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlDecimal::SqlDecimal() {}
