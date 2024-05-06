#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Data/SqlTypes/zzzz__SqlDateTime_def.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBoolean_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::SqlTypes::SqlDateTime::*)(bool)>(&::System::Data::SqlTypes::SqlDateTime::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d18574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::SqlTypes::SqlDateTime::*)(::System::DateTime)>(&::System::Data::SqlTypes::SqlDateTime::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d18580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::SqlTypes::SqlDateTime::*)(int32_t, int32_t)>(&::System::Data::SqlTypes::SqlDateTime::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2d186bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.get_IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::SqlTypes::SqlDateTime::*)()>(&::System::Data::SqlTypes::SqlDateTime::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d187ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "get_IsNull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.ToTimeSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::Data::SqlTypes::SqlDateTime)>(&::System::Data::SqlTypes::SqlDateTime::ToTimeSpan)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d187fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "ToTimeSpan", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.ToDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::System::Data::SqlTypes::SqlDateTime)>(&::System::Data::SqlTypes::SqlDateTime::ToDateTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d188a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "ToDateTime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.FromTimeSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::SqlDateTime (*)(::System::TimeSpan)>(
    &::System::Data::SqlTypes::SqlDateTime::FromTimeSpan)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2d18924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "FromTimeSpan", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.FromDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::SqlDateTime (*)(::System::DateTime)>(
    &::System::Data::SqlTypes::SqlDateTime::FromDateTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2d185ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "FromDateTime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Data::SqlTypes::SqlDateTime::*)()>(&::System::Data::SqlTypes::SqlDateTime::get_Value)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d18b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "get_Value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.get_DayTicks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::SqlTypes::SqlDateTime::*)()>(&::System::Data::SqlTypes::SqlDateTime::get_DayTicks)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2d18bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "get_DayTicks",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.get_TimeTicks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::SqlTypes::SqlDateTime::*)()>(&::System::Data::SqlTypes::SqlDateTime::get_TimeTicks)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2d18c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "get_TimeTicks",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.op_Implicit___System__Data__SqlTypes__SqlDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::SqlDateTime (*)(::System::DateTime)>(
    &::System::Data::SqlTypes::SqlDateTime::op_Implicit___System__Data__SqlTypes__SqlDateTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d18c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::SqlTypes::SqlDateTime::*)()>(&::System::Data::SqlTypes::SqlDateTime::ToString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d18c88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime)>(&::System::Data::SqlTypes::SqlDateTime::op_Equality)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d18d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.op_LessThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime)>(&::System::Data::SqlTypes::SqlDateTime::op_LessThan)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2d18dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "op_LessThan", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.op_GreaterThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime)>(&::System::Data::SqlTypes::SqlDateTime::op_GreaterThan)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2d18ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "op_GreaterThan", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.LessThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime)>(&::System::Data::SqlTypes::SqlDateTime::LessThan)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d18f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "LessThan", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.GreaterThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime)>(&::System::Data::SqlTypes::SqlDateTime::GreaterThan)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d18ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "GreaterThan", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::SqlTypes::SqlDateTime::*)(::System::Object*)>(
    &::System::Data::SqlTypes::SqlDateTime::CompareTo)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2d19078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::SqlTypes::SqlDateTime::*)(::System::Data::SqlTypes::SqlDateTime)>(
    &::System::Data::SqlTypes::SqlDateTime::CompareTo)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2d19164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::SqlTypes::SqlDateTime::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlDateTime::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2d1936c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::SqlTypes::SqlDateTime::*)()>(&::System::Data::SqlTypes::SqlDateTime::GetHashCode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2d1944c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::SqlTypes::SqlDateTime::*)()>(
    &::System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d19480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(),
                                                 "System.Xml.Serialization.IXmlSerializable.GetSchema", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::SqlTypes::SqlDateTime::*)(::System::Xml::XmlReader*)>(
    &::System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2d19488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "System.Xml.Serialization.IXmlSerializable.ReadXml",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::SqlTypes::SqlDateTime::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2d19668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "System.Xml.Serialization.IXmlSerializable.WriteXml",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDateTime.GetXsdType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(
    &::System::Data::SqlTypes::SqlDateTime::GetXsdType)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2d197b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "GetXsdType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr System::Data::SqlTypes::SqlDateTime::operator ::System::Data::SqlTypes::INullable*() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* System::Data::SqlTypes::SqlDateTime::i___System__Data__SqlTypes__INullable() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Data::SqlTypes::SqlDateTime::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::SqlTypes::SqlDateTime::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::SqlTypes::SqlDateTime::operator ::System::Xml::Serialization::IXmlSerializable*() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::SqlTypes::SqlDateTime::i___System__Xml__Serialization__IXmlSerializable() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_SQLTicksPerMillisecond(double_t value) {
  ::cordl_internals::setStaticField<double_t, "s_SQLTicksPerMillisecond", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(
      std::forward<double_t>(value));
}
inline double_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_SQLTicksPerMillisecond() {
  return ::cordl_internals::getStaticField<double_t, "s_SQLTicksPerMillisecond", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_SQLTicksPerSecond(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SQLTicksPerSecond", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_SQLTicksPerSecond() {
  return ::cordl_internals::getStaticField<int32_t, "SQLTicksPerSecond", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_SQLTicksPerMinute(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SQLTicksPerMinute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_SQLTicksPerMinute() {
  return ::cordl_internals::getStaticField<int32_t, "SQLTicksPerMinute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_SQLTicksPerHour(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SQLTicksPerHour", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_SQLTicksPerHour() {
  return ::cordl_internals::getStaticField<int32_t, "SQLTicksPerHour", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_SQLTicksPerDay(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SQLTicksPerDay", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_SQLTicksPerDay() {
  return ::cordl_internals::getStaticField<int32_t, "s_SQLTicksPerDay", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_ticksPerSecond(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "s_ticksPerSecond", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(std::forward<int64_t>(value));
}
inline int64_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_ticksPerSecond() {
  return ::cordl_internals::getStaticField<int64_t, "s_ticksPerSecond", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_SQLBaseDate(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "s_SQLBaseDate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(
      std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::Data::SqlTypes::SqlDateTime::getStaticF_s_SQLBaseDate() {
  return ::cordl_internals::getStaticField<::System::DateTime, "s_SQLBaseDate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_SQLBaseDateTicks(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "s_SQLBaseDateTicks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(std::forward<int64_t>(value));
}
inline int64_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_SQLBaseDateTicks() {
  return ::cordl_internals::getStaticField<int64_t, "s_SQLBaseDateTicks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_minYear(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_minYear", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_minYear() {
  return ::cordl_internals::getStaticField<int32_t, "s_minYear", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_maxYear(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_maxYear", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_maxYear() {
  return ::cordl_internals::getStaticField<int32_t, "s_maxYear", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_minDay(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_minDay", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_minDay() {
  return ::cordl_internals::getStaticField<int32_t, "s_minDay", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_maxDay(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_maxDay", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_maxDay() {
  return ::cordl_internals::getStaticField<int32_t, "s_maxDay", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_minTime(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_minTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_minTime() {
  return ::cordl_internals::getStaticField<int32_t, "s_minTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_maxTime(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_maxTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_maxTime() {
  return ::cordl_internals::getStaticField<int32_t, "s_maxTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_dayBase(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_dayBase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlDateTime::getStaticF_s_dayBase() {
  return ::cordl_internals::getStaticField<int32_t, "s_dayBase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_daysToMonth365(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_daysToMonth365", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Data::SqlTypes::SqlDateTime::getStaticF_s_daysToMonth365() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_daysToMonth365",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_daysToMonth366(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_daysToMonth366", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Data::SqlTypes::SqlDateTime::getStaticF_s_daysToMonth366() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "s_daysToMonth366",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_minDateTime(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "s_minDateTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(
      std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::Data::SqlTypes::SqlDateTime::getStaticF_s_minDateTime() {
  return ::cordl_internals::getStaticField<::System::DateTime, "s_minDateTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_maxDateTime(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "s_maxDateTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(
      std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::Data::SqlTypes::SqlDateTime::getStaticF_s_maxDateTime() {
  return ::cordl_internals::getStaticField<::System::DateTime, "s_maxDateTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_minTimeSpan(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "s_minTimeSpan", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(
      std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::Data::SqlTypes::SqlDateTime::getStaticF_s_minTimeSpan() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "s_minTimeSpan", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_maxTimeSpan(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "s_maxTimeSpan", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(
      std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::Data::SqlTypes::SqlDateTime::getStaticF_s_maxTimeSpan() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "s_maxTimeSpan", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_ISO8601_DateTimeFormat(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_ISO8601_DateTimeFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Data::SqlTypes::SqlDateTime::getStaticF_s_ISO8601_DateTimeFormat() {
  return ::cordl_internals::getStaticField<::StringW, "s_ISO8601_DateTimeFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_s_dateTimeFormats(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_dateTimeFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Data::SqlTypes::SqlDateTime::getStaticF_s_dateTimeFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_dateTimeFormats",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_MinValue(::System::Data::SqlTypes::SqlDateTime value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlDateTime, "MinValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(
      std::forward<::System::Data::SqlTypes::SqlDateTime>(value));
}
inline ::System::Data::SqlTypes::SqlDateTime System::Data::SqlTypes::SqlDateTime::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlDateTime, "MinValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_MaxValue(::System::Data::SqlTypes::SqlDateTime value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlDateTime, "MaxValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(
      std::forward<::System::Data::SqlTypes::SqlDateTime>(value));
}
inline ::System::Data::SqlTypes::SqlDateTime System::Data::SqlTypes::SqlDateTime::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlDateTime, "MaxValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::setStaticF_Null(::System::Data::SqlTypes::SqlDateTime value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlDateTime, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>(
      std::forward<::System::Data::SqlTypes::SqlDateTime>(value));
}
inline ::System::Data::SqlTypes::SqlDateTime System::Data::SqlTypes::SqlDateTime::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlDateTime, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get>();
}
inline void System::Data::SqlTypes::SqlDateTime::_ctor(bool fNull) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fNull);
}
inline void System::Data::SqlTypes::SqlDateTime::_ctor(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::SqlTypes::SqlDateTime::_ctor(int32_t dayTicks, int32_t timeTicks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dayTicks, timeTicks);
}
inline bool System::Data::SqlTypes::SqlDateTime::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "get_IsNull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::Data::SqlTypes::SqlDateTime::ToTimeSpan(::System::Data::SqlTypes::SqlDateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "ToTimeSpan", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Data::SqlTypes::SqlDateTime::ToDateTime(::System::Data::SqlTypes::SqlDateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "ToDateTime", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, value);
}
inline ::System::Data::SqlTypes::SqlDateTime System::Data::SqlTypes::SqlDateTime::FromTimeSpan(::System::TimeSpan value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "FromTimeSpan", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDateTime, false>(nullptr, ___internal_method, value);
}
inline ::System::Data::SqlTypes::SqlDateTime System::Data::SqlTypes::SqlDateTime::FromDateTime(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "FromDateTime", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDateTime, false>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Data::SqlTypes::SqlDateTime::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "get_Value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline int32_t System::Data::SqlTypes::SqlDateTime::get_DayTicks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "get_DayTicks",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Data::SqlTypes::SqlDateTime::get_TimeTicks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "get_TimeTicks",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlDateTime System::Data::SqlTypes::SqlDateTime::op_Implicit___System__Data__SqlTypes__SqlDateTime(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDateTime, false>(nullptr, ___internal_method, value);
}
inline ::StringW System::Data::SqlTypes::SqlDateTime::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDateTime::op_Equality(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean, false>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDateTime::op_LessThan(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "op_LessThan", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean, false>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDateTime::op_GreaterThan(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "op_GreaterThan", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean, false>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDateTime::LessThan(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "LessThan", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean, false>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDateTime::GreaterThan(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "GreaterThan", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean, false>(nullptr, ___internal_method, x, y);
}
inline int32_t System::Data::SqlTypes::SqlDateTime::CompareTo(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlDateTime::CompareTo(::System::Data::SqlTypes::SqlDateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::SqlTypes::SqlDateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlDateTime::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlDateTime::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(),
                                               "System.Xml.Serialization.IXmlSerializable.GetSchema", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*, false>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "System.Xml.Serialization.IXmlSerializable.ReadXml",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void System::Data::SqlTypes::SqlDateTime::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "System.Xml.Serialization.IXmlSerializable.WriteXml",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SqlTypes::SqlDateTime::GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlDateTime>::get(), "GetXsdType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(nullptr, ___internal_method, schemaSet);
}
// Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_day", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_time", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SqlTypes::SqlDateTime::SqlDateTime(bool m_fNotNull, int32_t m_day, int32_t m_time) noexcept {
  this->m_fNotNull = m_fNotNull;
  this->m_day = m_day;
  this->m_time = m_time;
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlDateTime::SqlDateTime() {}
