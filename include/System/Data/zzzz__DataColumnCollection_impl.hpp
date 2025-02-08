#pragma once
// IWYU pragma private; include "System/Data/DataColumnCollection.hpp"
#include "System/Data/zzzz__InternalDataCollectionBase_impl.hpp"
#include "System/Data/zzzz__DataColumnCollection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventHandler_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
//  Writing Method size for method: ::System::Data::DataColumnCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataTable*)>(
    &::System::Data::DataColumnCollection::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x415dd90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.get_List
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Data::DataColumnCollection::*)()>(
    &::System::Data::DataColumnCollection::get_List)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x415ded8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.get_ColumnsImplementingIChangeTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> (
    ::System::Data::DataColumnCollection::*)()>(&::System::Data::DataColumnCollection::get_ColumnsImplementingIChangeTracking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x415dee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "get_ColumnsImplementingIChangeTracking",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.get_ColumnsImplementingIChangeTrackingCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataColumnCollection::*)()>(
    &::System::Data::DataColumnCollection::get_ColumnsImplementingIChangeTrackingCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x415dee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "get_ColumnsImplementingIChangeTrackingCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.get_ColumnsImplementingIRevertibleChangeTrackingCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataColumnCollection::*)()>(
    &::System::Data::DataColumnCollection::get_ColumnsImplementingIRevertibleChangeTrackingCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x415def0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(),
                                                 "get_ColumnsImplementingIRevertibleChangeTrackingCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataColumn* (::System::Data::DataColumnCollection::*)(int32_t)>(
    &::System::Data::DataColumnCollection::get_Item)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x415def8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataColumn* (::System::Data::DataColumnCollection::*)(::StringW)>(
    &::System::Data::DataColumnCollection::get_Item)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x415e028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataColumn* (::System::Data::DataColumnCollection::*)(::StringW, ::StringW)>(
    &::System::Data::DataColumnCollection::get_Item)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x415e2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::Add)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x415e364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.AddAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(int32_t, ::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::AddAt)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x415e370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "AddAt", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.add_CollectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(
    &::System::Data::DataColumnCollection::add_CollectionChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x415ea1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "add_CollectionChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.remove_CollectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(
    &::System::Data::DataColumnCollection::remove_CollectionChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x415eab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "remove_CollectionChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.add_ColumnPropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(
    &::System::Data::DataColumnCollection::add_ColumnPropertyChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x415eb54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "add_ColumnPropertyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.remove_ColumnPropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(
    &::System::Data::DataColumnCollection::remove_ColumnPropertyChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x415ebf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "remove_ColumnPropertyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.ArrayAdd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::ArrayAdd)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x415e90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "ArrayAdd", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.ArrayAdd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(int32_t, ::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::ArrayAdd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x415e8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "ArrayAdd", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.ArrayRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::ArrayRemove)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x415ecd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "ArrayRemove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.AssignName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataColumnCollection::*)()>(&::System::Data::DataColumnCollection::AssignName)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x415ef08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "AssignName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.BaseAdd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::BaseAdd)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x415e5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "BaseAdd", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.BaseGroupSwitch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(
    ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>, int32_t, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>, int32_t)>(
    &::System::Data::DataColumnCollection::BaseGroupSwitch)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x415f2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "BaseGroupSwitch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.BaseRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::BaseRemove)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x415f4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "BaseRemove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.CanRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*, bool)>(
    &::System::Data::DataColumnCollection::CanRemove)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x415f568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "CanRemove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.CheckIChangeTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::CheckIChangeTracking)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x415ec8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "CheckIChangeTracking", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)()>(&::System::Data::DataColumnCollection::Clear)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x415fdac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataColumnCollection::*)(::StringW)>(&::System::Data::DataColumnCollection::Contains)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4160080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataColumnCollection::*)(::StringW, bool)>(&::System::Data::DataColumnCollection::Contains)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4160114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataColumnCollection::*)(::StringW)>(&::System::Data::DataColumnCollection::IndexOf)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x41601b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "IndexOf", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.IndexOfCaseInsensitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataColumnCollection::*)(::StringW)>(
    &::System::Data::DataColumnCollection::IndexOfCaseInsensitive)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x415e170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "IndexOfCaseInsensitive",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.MakeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataColumnCollection::*)(int32_t)>(&::System::Data::DataColumnCollection::MakeName)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x415ef9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "MakeName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.OnCollectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataColumnCollection::OnCollectionChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x415e978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "OnCollectionChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.OnCollectionChanging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataColumnCollection::OnCollectionChanging)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x415e5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "OnCollectionChanging", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.OnColumnPropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataColumnCollection::OnColumnPropertyChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x41602b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "OnColumnPropertyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.RegisterColumnName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::StringW, ::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::RegisterColumnName)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x415f054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "RegisterColumnName", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.CanRegisterName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataColumnCollection::*)(::StringW)>(&::System::Data::DataColumnCollection::CanRegisterName)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4160308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "CanRegisterName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::Remove)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x416036c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.UnregisterName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::StringW)>(&::System::Data::DataColumnCollection::UnregisterName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x415f214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "UnregisterName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.AddColumnsImplementingIChangeTrackingList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::AddColumnsImplementingIChangeTrackingList)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x415fce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "AddColumnsImplementingIChangeTrackingList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.RemoveColumnsImplementingIChangeTrackingList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::RemoveColumnsImplementingIChangeTrackingList)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x415ee04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "RemoveColumnsImplementingIChangeTrackingList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::DataColumnCollection::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::DataColumnCollection::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::DataColumnCollection::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Data::DataColumnCollection::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::System::Collections::ArrayList* const& System::Data::DataColumnCollection::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void System::Data::DataColumnCollection::__cordl_internal_set__list(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::DataColumnCollection::__cordl_internal_get__defaultNameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultNameIndex;
}
constexpr int32_t const& System::Data::DataColumnCollection::__cordl_internal_get__defaultNameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultNameIndex;
}
constexpr void System::Data::DataColumnCollection::__cordl_internal_set__defaultNameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultNameIndex = value;
}
constexpr ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>& System::Data::DataColumnCollection::__cordl_internal_get__delayedAddRangeColumns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedAddRangeColumns;
}
constexpr ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> const& System::Data::DataColumnCollection::__cordl_internal_get__delayedAddRangeColumns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedAddRangeColumns;
}
constexpr void System::Data::DataColumnCollection::__cordl_internal_set__delayedAddRangeColumns(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____delayedAddRangeColumns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Data::DataColumn*>*& System::Data::DataColumnCollection::__cordl_internal_get__columnFromName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnFromName;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Data::DataColumn*>* const& System::Data::DataColumnCollection::__cordl_internal_get__columnFromName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnFromName;
}
constexpr void System::Data::DataColumnCollection::__cordl_internal_set__columnFromName(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Data::DataColumn*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____columnFromName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::DataColumnCollection::__cordl_internal_get__fInClear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fInClear;
}
constexpr bool const& System::Data::DataColumnCollection::__cordl_internal_get__fInClear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fInClear;
}
constexpr void System::Data::DataColumnCollection::__cordl_internal_set__fInClear(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fInClear = value;
}
constexpr ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>& System::Data::DataColumnCollection::__cordl_internal_get__columnsImplementingIChangeTracking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnsImplementingIChangeTracking;
}
constexpr ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> const& System::Data::DataColumnCollection::__cordl_internal_get__columnsImplementingIChangeTracking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnsImplementingIChangeTracking;
}
constexpr void System::Data::DataColumnCollection::__cordl_internal_set__columnsImplementingIChangeTracking(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____columnsImplementingIChangeTracking)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::DataColumnCollection::__cordl_internal_get__nColumnsImplementingIChangeTracking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nColumnsImplementingIChangeTracking;
}
constexpr int32_t const& System::Data::DataColumnCollection::__cordl_internal_get__nColumnsImplementingIChangeTracking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nColumnsImplementingIChangeTracking;
}
constexpr void System::Data::DataColumnCollection::__cordl_internal_set__nColumnsImplementingIChangeTracking(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nColumnsImplementingIChangeTracking = value;
}
constexpr int32_t& System::Data::DataColumnCollection::__cordl_internal_get__nColumnsImplementingIRevertibleChangeTracking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nColumnsImplementingIRevertibleChangeTracking;
}
constexpr int32_t const& System::Data::DataColumnCollection::__cordl_internal_get__nColumnsImplementingIRevertibleChangeTracking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nColumnsImplementingIRevertibleChangeTracking;
}
constexpr void System::Data::DataColumnCollection::__cordl_internal_set__nColumnsImplementingIRevertibleChangeTracking(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nColumnsImplementingIRevertibleChangeTracking = value;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler*& System::Data::DataColumnCollection::__cordl_internal_get_CollectionChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CollectionChanged;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& System::Data::DataColumnCollection::__cordl_internal_get_CollectionChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CollectionChanged;
}
constexpr void System::Data::DataColumnCollection::__cordl_internal_set_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CollectionChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler*& System::Data::DataColumnCollection::__cordl_internal_get_CollectionChanging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CollectionChanging;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& System::Data::DataColumnCollection::__cordl_internal_get_CollectionChanging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CollectionChanging;
}
constexpr void System::Data::DataColumnCollection::__cordl_internal_set_CollectionChanging(::System::ComponentModel::CollectionChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CollectionChanging)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler*& System::Data::DataColumnCollection::__cordl_internal_get_ColumnPropertyChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ColumnPropertyChanged;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& System::Data::DataColumnCollection::__cordl_internal_get_ColumnPropertyChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ColumnPropertyChanged;
}
constexpr void System::Data::DataColumnCollection::__cordl_internal_set_ColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ColumnPropertyChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::DataColumnCollection::_ctor(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table);
}
inline ::System::Collections::ArrayList* System::Data::DataColumnCollection::get_List() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> System::Data::DataColumnCollection::get_ColumnsImplementingIChangeTracking() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "get_ColumnsImplementingIChangeTracking",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>, false>(this, ___internal_method);
}
inline int32_t System::Data::DataColumnCollection::get_ColumnsImplementingIChangeTrackingCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "get_ColumnsImplementingIChangeTrackingCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Data::DataColumnCollection::get_ColumnsImplementingIRevertibleChangeTrackingCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(),
                                               "get_ColumnsImplementingIRevertibleChangeTrackingCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Data::DataColumn* System::Data::DataColumnCollection::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*, false>(this, ___internal_method, index);
}
inline ::System::Data::DataColumn* System::Data::DataColumnCollection::get_Item(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*, false>(this, ___internal_method, name);
}
inline ::System::Data::DataColumn* System::Data::DataColumnCollection::get_Item(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*, false>(this, ___internal_method, name, ns);
}
inline void System::Data::DataColumnCollection::Add(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline void System::Data::DataColumnCollection::AddAt(int32_t index, ::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "AddAt", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, column);
}
inline void System::Data::DataColumnCollection::add_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "add_CollectionChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::DataColumnCollection::remove_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "remove_CollectionChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::DataColumnCollection::add_ColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "add_ColumnPropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::DataColumnCollection::remove_ColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "remove_ColumnPropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::DataColumnCollection::ArrayAdd(::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "ArrayAdd", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline void System::Data::DataColumnCollection::ArrayAdd(int32_t index, ::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "ArrayAdd", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, column);
}
inline void System::Data::DataColumnCollection::ArrayRemove(::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "ArrayRemove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline ::StringW System::Data::DataColumnCollection::AssignName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "AssignName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Data::DataColumnCollection::BaseAdd(::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "BaseAdd", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline void System::Data::DataColumnCollection::BaseGroupSwitch(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> oldArray, int32_t oldLength,
                                                                ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> newArray, int32_t newLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "BaseGroupSwitch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldArray, oldLength, newArray, newLength);
}
inline void System::Data::DataColumnCollection::BaseRemove(::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "BaseRemove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline bool System::Data::DataColumnCollection::CanRemove(::System::Data::DataColumn* column, bool fThrowException) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "CanRemove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, column, fThrowException);
}
inline void System::Data::DataColumnCollection::CheckIChangeTracking(::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "CheckIChangeTracking", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline void System::Data::DataColumnCollection::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Data::DataColumnCollection::Contains(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline bool System::Data::DataColumnCollection::Contains(::StringW name, bool caseSensitive) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, caseSensitive);
}
inline int32_t System::Data::DataColumnCollection::IndexOf(::StringW columnName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "IndexOf", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, columnName);
}
inline int32_t System::Data::DataColumnCollection::IndexOfCaseInsensitive(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "IndexOfCaseInsensitive",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline ::StringW System::Data::DataColumnCollection::MakeName(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "MakeName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, index);
}
inline void System::Data::DataColumnCollection::OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "OnCollectionChanged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ccevent);
}
inline void System::Data::DataColumnCollection::OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* ccevent) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "OnCollectionChanging", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ccevent);
}
inline void System::Data::DataColumnCollection::OnColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "OnColumnPropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ccevent);
}
inline void System::Data::DataColumnCollection::RegisterColumnName(::StringW name, ::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "RegisterColumnName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, column);
}
inline bool System::Data::DataColumnCollection::CanRegisterName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "CanRegisterName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline void System::Data::DataColumnCollection::Remove(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline void System::Data::DataColumnCollection::UnregisterName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "UnregisterName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void System::Data::DataColumnCollection::AddColumnsImplementingIChangeTrackingList(::System::Data::DataColumn* dataColumn) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "AddColumnsImplementingIChangeTrackingList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataColumn);
}
inline void System::Data::DataColumnCollection::RemoveColumnsImplementingIChangeTrackingList(::System::Data::DataColumn* dataColumn) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnCollection*>::get(), "RemoveColumnsImplementingIChangeTrackingList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataColumn);
}
inline ::System::Data::DataColumnCollection* System::Data::DataColumnCollection::New_ctor(::System::Data::DataTable* table) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::DataColumnCollection*>(table));
}
// Ctor Parameters []
constexpr ::System::Data::DataColumnCollection::DataColumnCollection() {}
