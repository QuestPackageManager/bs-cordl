#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/__BinaryParser.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryAssemblyInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryCrossAppDomainString_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectString_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectWithMapTyped_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectWithMap_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObject_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MemberPrimitiveTyped_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MemberPrimitiveUnTyped_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MemberReference_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnd_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectNull_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectProgress_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectReader_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ParseRecord_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerStack_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SizedArray_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::IO::Stream*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x28529ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.get_SystemAssemblyInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* (
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_SystemAssemblyInfo)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2852ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                                 "get_SystemAssemblyInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.get_ObjectMapIdTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::SizedArray* (
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_ObjectMapIdTable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2852b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                                 "get_ObjectMapIdTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.get_AssemIdToAssemblyTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::SizedArray* (
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_AssemIdToAssemblyTable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2852c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                                 "get_AssemIdToAssemblyTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.get_prs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ParseRecord* (
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_prs)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2852d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "get_prs",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::Run)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x284c588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "Run",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadBegin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBegin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2852d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadBegin",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2854b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadEnd",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBoolean)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2854ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadBoolean",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2854ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadByte",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    int32_t)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBytes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2854ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadBytes",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBytes)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2854f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2854f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadChar",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t, ::Array<char16_t>*> (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    int32_t)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadChars)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2854fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadChars",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDecimal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2854fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadDecimal",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadSingle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSingle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2855078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadSingle",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDouble)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x285509c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadDouble",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt16)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28550c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadInt16",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt32)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28550e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadInt32",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt64)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2855108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadInt64",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadSByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x285512c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadSByte",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x285514c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadString",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadTimeSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadTimeSpan)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2855170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadTimeSpan",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDateTime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2855194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadDateTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadUInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt16)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2855210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadUInt16",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadUInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt32)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2855234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadUInt32",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadUInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt64)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2855258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadUInt64",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadSerializationHeaderRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSerializationHeaderRecord)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2852d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                                 "ReadSerializationHeaderRecord", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadAssembly)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2852e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadAssembly", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObject)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x28530c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadObject",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadCrossAppDomainMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadCrossAppDomainMap)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2853420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                                 "ReadCrossAppDomainMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectWithMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMap)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x28535ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadObjectWithMap",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectWithMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMap)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x28554dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadObjectWithMap",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectWithMapTyped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMapTyped)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x285368c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadObjectWithMapTyped",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectWithMapTyped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMapTyped)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x28558e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadObjectWithMapTyped",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectString)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x285371c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadObjectString",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadMemberPrimitiveTyped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberPrimitiveTyped)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x285423c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                                 "ReadMemberPrimitiveTyped", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadArray)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x2853ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadArrayAsBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadArrayAsBytes)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2855d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadArrayAsBytes",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadMemberPrimitiveUnTyped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberPrimitiveUnTyped)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2854b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                                 "ReadMemberPrimitiveUnTyped", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadMemberReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberReference)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x28545c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                                 "ReadMemberReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectNull)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x28547a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadObjectNull",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadMessageEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMessageEnd)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x285499c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadMessageEnd",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE)>(
        &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadValue)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x285604c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.GetOp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* (
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::GetOp)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28553f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "GetOp",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.PutOp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::PutOp)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2854e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "PutOp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectReader;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectReader;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_objectReader(::System::Runtime::Serialization::Formatters::Binary::ObjectReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_input(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___input)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_topId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_topId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_topId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topId = value;
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_headerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_headerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_headerId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headerId = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SizedArray*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectMapIdTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectMapIdTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SizedArray*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectMapIdTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectMapIdTable;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_objectMapIdTable(::System::Runtime::Serialization::Formatters::Binary::SizedArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectMapIdTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SizedArray*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_assemIdToAssemblyTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemIdToAssemblyTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SizedArray*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_assemIdToAssemblyTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemIdToAssemblyTable;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_assemIdToAssemblyTable(::System::Runtime::Serialization::Formatters::Binary::SizedArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assemIdToAssemblyTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_stack(::System::Runtime::Serialization::Formatters::Binary::SerStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_expectedType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectedType;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_expectedType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectedType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_expectedType(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expectedType = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_expectedTypeInformation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectedTypeInformation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_expectedTypeInformation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectedTypeInformation;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_expectedTypeInformation(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___expectedTypeInformation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_PRS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PRS;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_PRS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PRS;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_PRS(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PRS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_systemAssemblyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemAssemblyInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_systemAssemblyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemAssemblyInfo;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_systemAssemblyInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___systemAssemblyInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::BinaryReader*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_dataReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataReader;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::BinaryReader*> const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_dataReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataReader;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_dataReader(::System::IO::BinaryReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dataReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_opPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opPool;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_opPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opPool;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_opPool(::System::Runtime::Serialization::Formatters::Binary::SerStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___opPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObject*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_binaryObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryObject;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObject*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_binaryObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryObject;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_binaryObject(::System::Runtime::Serialization::Formatters::Binary::BinaryObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___binaryObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_bowm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bowm;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_bowm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bowm;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_bowm(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bowm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_bowmt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bowmt;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_bowmt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bowmt;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_bowmt(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bowmt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectString;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectString;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_objectString(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString*&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_crossAppDomainString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crossAppDomainString;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_crossAppDomainString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crossAppDomainString;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_crossAppDomainString(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___crossAppDomainString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_memberPrimitiveTyped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberPrimitiveTyped;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_memberPrimitiveTyped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberPrimitiveTyped;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_memberPrimitiveTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberPrimitiveTyped)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_byteBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_byteBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuffer;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___byteBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_memberPrimitiveUnTyped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberPrimitiveUnTyped;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_memberPrimitiveUnTyped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberPrimitiveUnTyped;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_memberPrimitiveUnTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberPrimitiveUnTyped)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberReference*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_memberReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberReference;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::MemberReference*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_memberReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberReference;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_memberReference(::System::Runtime::Serialization::Formatters::Binary::MemberReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectNull*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectNull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectNull;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ObjectNull*> const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectNull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectNull;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_objectNull(::System::Runtime::Serialization::Formatters::Binary::ObjectNull* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectNull)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::setStaticF_encoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "encoding",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get>(
      std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::getStaticF_encoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "encoding",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get>();
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::setStaticF_messageEnd(::System::Runtime::Serialization::Formatters::Binary::MessageEnd* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::Formatters::Binary::MessageEnd*, "messageEnd",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get>(
      std::forward<::System::Runtime::Serialization::Formatters::Binary::MessageEnd*>(value));
}
inline ::System::Runtime::Serialization::Formatters::Binary::MessageEnd* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::getStaticF_messageEnd() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::Formatters::Binary::MessageEnd*, "messageEnd",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get>();
}
inline ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::New_ctor(::System::IO::Stream* stream, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(stream, objectReader));
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::_ctor(::System::IO::Stream* stream, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, objectReader);
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_SystemAssemblyInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                               "get_SystemAssemblyInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::SizedArray* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_ObjectMapIdTable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                               "get_ObjectMapIdTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::SizedArray*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::SizedArray* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_AssemIdToAssemblyTable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                               "get_AssemIdToAssemblyTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::SizedArray*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_prs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "get_prs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::Run() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "Run",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBegin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadBegin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadEnd() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadEnd",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBoolean() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadBoolean",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline uint8_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadByte() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadByte",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBytes(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadBytes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, length);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> byteA, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, byteA, offset, size);
}
inline char16_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadChar() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadChar",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadChars(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadChars",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t, ::Array<char16_t>*>, false>(this, ___internal_method, length);
}
inline ::System::Decimal System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDecimal() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadDecimal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline float_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSingle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadSingle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline double_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDouble() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadDouble",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline int16_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt16() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadInt16",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt32() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadInt32",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt64() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadInt64",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int8_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSByte() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadSByte",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int8_t, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadString",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadTimeSpan() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadTimeSpan",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::System::DateTime System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDateTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadDateTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline uint16_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt16() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadUInt16",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline uint32_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt32() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadUInt32",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint64_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt64() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadUInt64",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSerializationHeaderRecord() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                               "ReadSerializationHeaderRecord", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadAssembly(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadAssembly", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObject() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadObject",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadCrossAppDomainMap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                               "ReadCrossAppDomainMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMap(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadObjectWithMap",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMap(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* record) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadObjectWithMap",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMapTyped(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadObjectWithMapTyped",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMapTyped(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* record) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadObjectWithMapTyped",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectString(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadObjectString",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberPrimitiveTyped() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                               "ReadMemberPrimitiveTyped", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadArray(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadArrayAsBytes(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadArrayAsBytes",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pr);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberPrimitiveUnTyped() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                               "ReadMemberPrimitiveUnTyped", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberReference() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(),
                                               "ReadMemberReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectNull(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadObjectNull", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMessageEnd() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadMessageEnd",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadValue(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "ReadValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, code);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::GetOp() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "GetOp",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::PutOp(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get(), "PutOp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__BinaryParser() {}
