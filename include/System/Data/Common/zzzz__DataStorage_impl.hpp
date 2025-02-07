#pragma once
// IWYU pragma private; include "System/Data/Common/DataStorage.hpp"
#include "System/Data/Common/zzzz__StorageType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/Data/Common/zzzz__StorageType_def.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataSetDateTime_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Tuple_4_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::Common::DataStorage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::DataStorage::*)(
    ::System::Data::DataColumn*, ::System::Type*, ::System::Object*, ::System::Data::Common::StorageType)>(&::System::Data::Common::DataStorage::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x41dffb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::DataStorage::*)(
    ::System::Data::DataColumn*, ::System::Type*, ::System::Object*, ::System::Object*, ::System::Data::Common::StorageType)>(&::System::Data::Common::DataStorage::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x41e4a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::DataStorage::*)(
    ::System::Data::DataColumn*, ::System::Type*, ::System::Object*, ::System::Object*, bool, ::System::Data::Common::StorageType)>(&::System::Data::Common::DataStorage::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x41e490c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.get_DateTimeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataSetDateTime (::System::Data::Common::DataStorage::*)()>(
    &::System::Data::Common::DataStorage::get_DateTimeMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x41e4a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "get_DateTimeMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.get_FormatProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IFormatProvider* (::System::Data::Common::DataStorage::*)()>(
    &::System::Data::Common::DataStorage::get_FormatProvider)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x41e1354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                               "get_FormatProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.Aggregate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Data::Common::DataStorage::*)(::ArrayW<int32_t, ::Array<int32_t>*>, ::System::Data::AggregateType)>(&::System::Data::Common::DataStorage::Aggregate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x41e1f90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.AggregateCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::DataStorage::*)(::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::System::Data::Common::DataStorage::AggregateCount)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x41e4aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "AggregateCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.CompareBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Common::DataStorage::*)(int32_t, int32_t)>(
    &::System::Data::Common::DataStorage::CompareBits)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x41e018c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "CompareBits", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Common::DataStorage::*)(int32_t, int32_t)>(&::System::Data::Common::DataStorage::Compare)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.CompareValueTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Common::DataStorage::*)(int32_t, ::System::Object*)>(
    &::System::Data::Common::DataStorage::CompareValueTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.ConvertValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::DataStorage::*)(::System::Object*)>(
    &::System::Data::Common::DataStorage::ConvertValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x41e4b6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.CopyBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::DataStorage::*)(int32_t, int32_t)>(&::System::Data::Common::DataStorage::CopyBits)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x41e13c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "CopyBits", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::DataStorage::*)(int32_t, int32_t)>(&::System::Data::Common::DataStorage::Copy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::DataStorage::*)(int32_t)>(&::System::Data::Common::DataStorage::Get)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.GetBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::DataStorage::*)(int32_t)>(&::System::Data::Common::DataStorage::GetBits)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x41e14c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "GetBits", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.GetStringLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::Common::DataStorage::*)(int32_t)>(&::System::Data::Common::DataStorage::GetStringLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x41e4b74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.HasValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Common::DataStorage::*)(int32_t)>(&::System::Data::Common::DataStorage::HasValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x41e0324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "HasValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::Common::DataStorage::*)(int32_t)>(&::System::Data::Common::DataStorage::IsNull)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x41e4b7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::DataStorage::*)(int32_t, ::System::Object*)>(
    &::System::Data::Common::DataStorage::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.SetNullBit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::DataStorage::*)(int32_t, bool)>(&::System::Data::Common::DataStorage::SetNullBit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x41e1624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "SetNullBit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.SetCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::DataStorage::*)(int32_t)>(&::System::Data::Common::DataStorage::SetCapacity)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x41e1704;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::DataStorage::*)(::StringW)>(
    &::System::Data::Common::DataStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.ConvertXmlToObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Data::Common::DataStorage::*)(::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlRootAttribute*)>(&::System::Data::Common::DataStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x41e4b98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::Common::DataStorage::*)(::System::Object*)>(
    &::System::Data::Common::DataStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.ConvertObjectToXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::DataStorage::*)(
    ::System::Object*, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlRootAttribute*)>(&::System::Data::Common::DataStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x41e4bd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.CreateStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Data::Common::DataStorage* (*)(::System::Data::DataColumn*, ::System::Type*, ::System::Data::Common::StorageType)>(&::System::Data::Common::DataStorage::CreateStorage)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0x41e4c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "CreateStorage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.GetStorageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Common::StorageType (*)(::System::Type*)>(&::System::Data::Common::DataStorage::GetStorageType)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x41e62b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "GetStorageType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.GetTypeStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Data::Common::StorageType)>(&::System::Data::Common::DataStorage::GetTypeStorage)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x41e63cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "GetTypeStorage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.IsTypeCustomType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::System::Data::Common::DataStorage::IsTypeCustomType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x41e6448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "IsTypeCustomType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.IsTypeCustomType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&::System::Data::Common::DataStorage::IsTypeCustomType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x41e4a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "IsTypeCustomType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.IsSqlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&::System::Data::Common::DataStorage::IsSqlType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x41e64c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "IsSqlType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.IsSqlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::System::Data::Common::DataStorage::IsSqlType)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x41e64cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "IsSqlType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.DetermineIfValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::Common::StorageType, ::System::Type*)>(
    &::System::Data::Common::DataStorage::DetermineIfValueType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x41e4a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "DetermineIfValueType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.ImplementsInterfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Data::Common::StorageType, ::System::Type*, ::ByRef<bool>, ::ByRef<bool>, ::ByRef<bool>,
                                                                                           ::ByRef<bool>, ::ByRef<bool>)>(&::System::Data::Common::DataStorage::ImplementsInterfaces)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x41e65c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "ImplementsInterfaces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.InspectTypeForInterfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Tuple_4<bool, bool, bool, bool>* (*)(::System::Type*)>(
    &::System::Data::Common::DataStorage::InspectTypeForInterfaces)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x41e671c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "InspectTypeForInterfaces",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.ImplementsINullableValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::Common::StorageType, ::System::Type*)>(
    &::System::Data::Common::DataStorage::ImplementsINullableValue)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x41e68d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "ImplementsINullableValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.IsObjectNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*)>(&::System::Data::Common::DataStorage::IsObjectNull)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x41e69a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "IsObjectNull", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.IsObjectSqlNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*)>(&::System::Data::Common::DataStorage::IsObjectSqlNull)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x41e6a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "IsObjectSqlNull", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.GetEmptyStorageInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::DataStorage::*)(int32_t)>(
    &::System::Data::Common::DataStorage::GetEmptyStorageInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x41e6afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "GetEmptyStorageInternal",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.CopyValueInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::DataStorage::*)(int32_t, ::System::Object*, ::System::Collections::BitArray*, int32_t)>(
    &::System::Data::Common::DataStorage::CopyValueInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x41e6b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "CopyValueInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::BitArray*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.SetStorageInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::DataStorage::*)(::System::Object*, ::System::Collections::BitArray*)>(
    &::System::Data::Common::DataStorage::SetStorageInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x41e6b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "SetStorageInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::BitArray*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.GetEmptyStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::Common::DataStorage::*)(int32_t)>(
    &::System::Data::Common::DataStorage::GetEmptyStorage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.CopyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::DataStorage::*)(int32_t, ::System::Object*, ::System::Collections::BitArray*, int32_t)>(
    &::System::Data::Common::DataStorage::CopyValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.SetStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::DataStorage::*)(::System::Object*, ::System::Collections::BitArray*)>(
    &::System::Data::Common::DataStorage::SetStorage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.SetNullStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Common::DataStorage::*)(::System::Collections::BitArray*)>(
    &::System::Data::Common::DataStorage::SetNullStorage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x41e6b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "SetNullStorage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::BitArray*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::StringW)>(&::System::Data::Common::DataStorage::GetType)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x41e6b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::DataStorage.GetQualifiedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*)>(&::System::Data::Common::DataStorage::GetQualifiedName)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x41e6c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "GetQualifiedName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataColumn*& System::Data::Common::DataStorage::__cordl_internal_get__column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column;
}
constexpr ::System::Data::DataColumn* const& System::Data::Common::DataStorage::__cordl_internal_get__column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column;
}
constexpr void System::Data::Common::DataStorage::__cordl_internal_set__column(::System::Data::DataColumn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____column)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataTable*& System::Data::Common::DataStorage::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::Common::DataStorage::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::Common::DataStorage::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Data::Common::DataStorage::__cordl_internal_get__dataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataType;
}
constexpr ::System::Type* const& System::Data::Common::DataStorage::__cordl_internal_get__dataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataType;
}
constexpr void System::Data::Common::DataStorage::__cordl_internal_set__dataType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::Common::StorageType& System::Data::Common::DataStorage::__cordl_internal_get__storageTypeCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storageTypeCode;
}
constexpr ::System::Data::Common::StorageType const& System::Data::Common::DataStorage::__cordl_internal_get__storageTypeCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storageTypeCode;
}
constexpr void System::Data::Common::DataStorage::__cordl_internal_set__storageTypeCode(::System::Data::Common::StorageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____storageTypeCode = value;
}
constexpr ::System::Collections::BitArray*& System::Data::Common::DataStorage::__cordl_internal_get__dbNullBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dbNullBits;
}
constexpr ::System::Collections::BitArray* const& System::Data::Common::DataStorage::__cordl_internal_get__dbNullBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dbNullBits;
}
constexpr void System::Data::Common::DataStorage::__cordl_internal_set__dbNullBits(::System::Collections::BitArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dbNullBits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::Common::DataStorage::__cordl_internal_get__defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
constexpr ::System::Object* const& System::Data::Common::DataStorage::__cordl_internal_get__defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
constexpr void System::Data::Common::DataStorage::__cordl_internal_set__defaultValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::Common::DataStorage::__cordl_internal_get__nullValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullValue;
}
constexpr ::System::Object* const& System::Data::Common::DataStorage::__cordl_internal_get__nullValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullValue;
}
constexpr void System::Data::Common::DataStorage::__cordl_internal_set__nullValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nullValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::Common::DataStorage::__cordl_internal_get__isCloneable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCloneable;
}
constexpr bool const& System::Data::Common::DataStorage::__cordl_internal_get__isCloneable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCloneable;
}
constexpr void System::Data::Common::DataStorage::__cordl_internal_set__isCloneable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isCloneable = value;
}
constexpr bool& System::Data::Common::DataStorage::__cordl_internal_get__isCustomDefinedType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCustomDefinedType;
}
constexpr bool const& System::Data::Common::DataStorage::__cordl_internal_get__isCustomDefinedType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCustomDefinedType;
}
constexpr void System::Data::Common::DataStorage::__cordl_internal_set__isCustomDefinedType(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isCustomDefinedType = value;
}
constexpr bool& System::Data::Common::DataStorage::__cordl_internal_get__isStringType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isStringType;
}
constexpr bool const& System::Data::Common::DataStorage::__cordl_internal_get__isStringType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isStringType;
}
constexpr void System::Data::Common::DataStorage::__cordl_internal_set__isStringType(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isStringType = value;
}
constexpr bool& System::Data::Common::DataStorage::__cordl_internal_get__isValueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isValueType;
}
constexpr bool const& System::Data::Common::DataStorage::__cordl_internal_get__isValueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isValueType;
}
constexpr void System::Data::Common::DataStorage::__cordl_internal_set__isValueType(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isValueType = value;
}
inline void System::Data::Common::DataStorage::setStaticF_s_storageClassType(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "s_storageClassType",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get>(
      std::forward<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>(value));
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Data::Common::DataStorage::getStaticF_s_storageClassType() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "s_storageClassType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get>();
}
inline void System::Data::Common::DataStorage::setStaticF_s_inspectTypeForInterfaces(::System::Func_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>*, "s_inspectTypeForInterfaces",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get>(
      std::forward<::System::Func_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>*>(value));
}
inline ::System::Func_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>* System::Data::Common::DataStorage::getStaticF_s_inspectTypeForInterfaces() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>*, "s_inspectTypeForInterfaces",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get>();
}
inline void
System::Data::Common::DataStorage::setStaticF_s_typeImplementsInterface(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>*, "s_typeImplementsInterface",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>*
System::Data::Common::DataStorage::getStaticF_s_typeImplementsInterface() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>*, "s_typeImplementsInterface",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get>();
}
inline void System::Data::Common::DataStorage::_ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue, ::System::Data::Common::StorageType storageType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column, type, defaultValue, storageType);
}
inline void System::Data::Common::DataStorage::_ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue, ::System::Object* nullValue,
                                                     ::System::Data::Common::StorageType storageType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column, type, defaultValue, nullValue, storageType);
}
inline void System::Data::Common::DataStorage::_ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue, ::System::Object* nullValue, bool isICloneable,
                                                     ::System::Data::Common::StorageType storageType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column, type, defaultValue, nullValue, isICloneable, storageType);
}
inline ::System::Data::DataSetDateTime System::Data::Common::DataStorage::get_DateTimeMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "get_DateTimeMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataSetDateTime, false>(this, ___internal_method);
}
inline ::System::IFormatProvider* System::Data::Common::DataStorage::get_FormatProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "get_FormatProvider",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IFormatProvider*, false>(this, ___internal_method);
}
inline ::System::Object* System::Data::Common::DataStorage::Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> recordNos, ::System::Data::AggregateType kind) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, recordNos, kind);
}
inline ::System::Object* System::Data::Common::DataStorage::AggregateCount(::ArrayW<int32_t, ::Array<int32_t>*> recordNos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "AggregateCount", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, recordNos);
}
inline int32_t System::Data::Common::DataStorage::CompareBits(int32_t recordNo1, int32_t recordNo2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "CompareBits", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, recordNo1, recordNo2);
}
inline int32_t System::Data::Common::DataStorage::Compare(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, recordNo1, recordNo2);
}
inline int32_t System::Data::Common::DataStorage::CompareValueTo(int32_t recordNo1, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, recordNo1, value);
}
inline ::System::Object* System::Data::Common::DataStorage::ConvertValue(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value);
}
inline void System::Data::Common::DataStorage::CopyBits(int32_t srcRecordNo, int32_t dstRecordNo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "CopyBits", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, srcRecordNo, dstRecordNo);
}
inline void System::Data::Common::DataStorage::Copy(int32_t recordNo1, int32_t recordNo2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordNo1, recordNo2);
}
inline ::System::Object* System::Data::Common::DataStorage::Get(int32_t recordNo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, recordNo);
}
inline ::System::Object* System::Data::Common::DataStorage::GetBits(int32_t recordNo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "GetBits", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, recordNo);
}
inline int32_t System::Data::Common::DataStorage::GetStringLength(int32_t record) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, record);
}
inline bool System::Data::Common::DataStorage::HasValue(int32_t recordNo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "HasValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, recordNo);
}
inline bool System::Data::Common::DataStorage::IsNull(int32_t recordNo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, recordNo);
}
inline void System::Data::Common::DataStorage::Set(int32_t recordNo, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordNo, value);
}
inline void System::Data::Common::DataStorage::SetNullBit(int32_t recordNo, bool flag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "SetNullBit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordNo, flag);
}
inline void System::Data::Common::DataStorage::SetCapacity(int32_t capacity) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline ::System::Object* System::Data::Common::DataStorage::ConvertXmlToObject(::StringW s) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, s);
}
inline ::System::Object* System::Data::Common::DataStorage::ConvertXmlToObject(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlReader, xmlAttrib);
}
inline ::StringW System::Data::Common::DataStorage::ConvertObjectToXml(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline void System::Data::Common::DataStorage::ConvertObjectToXml(::System::Object* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, xmlWriter, xmlAttrib);
}
inline ::System::Data::Common::DataStorage* System::Data::Common::DataStorage::CreateStorage(::System::Data::DataColumn* column, ::System::Type* dataType,
                                                                                             ::System::Data::Common::StorageType typeCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "CreateStorage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Common::DataStorage*, false>(nullptr, ___internal_method, column, dataType, typeCode);
}
inline ::System::Data::Common::StorageType System::Data::Common::DataStorage::GetStorageType(::System::Type* dataType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "GetStorageType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Common::StorageType, false>(nullptr, ___internal_method, dataType);
}
inline ::System::Type* System::Data::Common::DataStorage::GetTypeStorage(::System::Data::Common::StorageType storageType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "GetTypeStorage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, storageType);
}
inline bool System::Data::Common::DataStorage::IsTypeCustomType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "IsTypeCustomType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
inline bool System::Data::Common::DataStorage::IsTypeCustomType(::System::Data::Common::StorageType typeCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "IsTypeCustomType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, typeCode);
}
inline bool System::Data::Common::DataStorage::IsSqlType(::System::Data::Common::StorageType storageType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "IsSqlType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, storageType);
}
inline bool System::Data::Common::DataStorage::IsSqlType(::System::Type* dataType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "IsSqlType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dataType);
}
inline bool System::Data::Common::DataStorage::DetermineIfValueType(::System::Data::Common::StorageType typeCode, ::System::Type* dataType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "DetermineIfValueType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, typeCode, dataType);
}
inline void System::Data::Common::DataStorage::ImplementsInterfaces(::System::Data::Common::StorageType typeCode, ::System::Type* dataType, ::ByRef<bool> sqlType, ::ByRef<bool> nullable,
                                                                    ::ByRef<bool> xmlSerializable, ::ByRef<bool> changeTracking, ::ByRef<bool> revertibleChangeTracking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "ImplementsInterfaces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, typeCode, dataType, sqlType, nullable, xmlSerializable, changeTracking, revertibleChangeTracking);
}
inline ::System::Tuple_4<bool, bool, bool, bool>* System::Data::Common::DataStorage::InspectTypeForInterfaces(::System::Type* dataType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "InspectTypeForInterfaces",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Tuple_4<bool, bool, bool, bool>*, false>(nullptr, ___internal_method, dataType);
}
inline bool System::Data::Common::DataStorage::ImplementsINullableValue(::System::Data::Common::StorageType typeCode, ::System::Type* dataType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "ImplementsINullableValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Common::StorageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, typeCode, dataType);
}
inline bool System::Data::Common::DataStorage::IsObjectNull(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "IsObjectNull", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
inline bool System::Data::Common::DataStorage::IsObjectSqlNull(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "IsObjectSqlNull", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
inline ::System::Object* System::Data::Common::DataStorage::GetEmptyStorageInternal(int32_t recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "GetEmptyStorageInternal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, recordCount);
}
inline void System::Data::Common::DataStorage::CopyValueInternal(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "CopyValueInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::BitArray*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record, store, nullbits, storeIndex);
}
inline void System::Data::Common::DataStorage::SetStorageInternal(::System::Object* store, ::System::Collections::BitArray* nullbits) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "SetStorageInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::BitArray*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, store, nullbits);
}
inline ::System::Object* System::Data::Common::DataStorage::GetEmptyStorage(int32_t recordCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, recordCount);
}
inline void System::Data::Common::DataStorage::CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record, store, nullbits, storeIndex);
}
inline void System::Data::Common::DataStorage::SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, store, nullbits);
}
inline void System::Data::Common::DataStorage::SetNullStorage(::System::Collections::BitArray* nullbits) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "SetNullStorage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::BitArray*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nullbits);
}
inline ::System::Type* System::Data::Common::DataStorage::GetType(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, value);
}
inline ::StringW System::Data::Common::DataStorage::GetQualifiedName(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Common::DataStorage*>::get(), "GetQualifiedName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
inline ::System::Data::Common::DataStorage* System::Data::Common::DataStorage::New_ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue,
                                                                                        ::System::Data::Common::StorageType storageType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Common::DataStorage*>(column, type, defaultValue, storageType));
}
inline ::System::Data::Common::DataStorage* System::Data::Common::DataStorage::New_ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue,
                                                                                        ::System::Object* nullValue, ::System::Data::Common::StorageType storageType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Common::DataStorage*>(column, type, defaultValue, nullValue, storageType));
}
inline ::System::Data::Common::DataStorage* System::Data::Common::DataStorage::New_ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue,
                                                                                        ::System::Object* nullValue, bool isICloneable, ::System::Data::Common::StorageType storageType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Common::DataStorage*>(column, type, defaultValue, nullValue, isICloneable, storageType));
}
// Ctor Parameters []
constexpr ::System::Data::Common::DataStorage::DataStorage() {}
