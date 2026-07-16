#pragma once
// IWYU pragma private; include "System/Data/DataColumnCollection.hpp"
#include "System/Data/zzzz__DataColumn_impl.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataTable*)>(&::System::Data::DataColumnCollection::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x601b040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.get_List
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Data::DataColumnCollection::*)()>(&::System::Data::DataColumnCollection::get_List)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601b1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { ::i2c::class_of<::System::Data::DataColumnCollection*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.get_ColumnsImplementingIChangeTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataColumn*> (::System::Data::DataColumnCollection::*)()>(
    &::System::Data::DataColumnCollection::get_ColumnsImplementingIChangeTracking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601b1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "get_ColumnsImplementingIChangeTracking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.get_ColumnsImplementingIChangeTrackingCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataColumnCollection::*)()>(&::System::Data::DataColumnCollection::get_ColumnsImplementingIChangeTrackingCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601b1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "get_ColumnsImplementingIChangeTrackingCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.get_ColumnsImplementingIRevertibleChangeTrackingCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataColumnCollection::*)()>(
    &::System::Data::DataColumnCollection::get_ColumnsImplementingIRevertibleChangeTrackingCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601b1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "get_ColumnsImplementingIRevertibleChangeTrackingCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataColumn* (::System::Data::DataColumnCollection::*)(int32_t)>(&::System::Data::DataColumnCollection::get_Item)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x601b1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataColumn* (::System::Data::DataColumnCollection::*)(::StringW)>(&::System::Data::DataColumnCollection::get_Item)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x601b31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataColumn* (::System::Data::DataColumnCollection::*)(::StringW, ::StringW)>(&::System::Data::DataColumnCollection::get_Item)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x601b5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(&::System::Data::DataColumnCollection::Add)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x601b668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.AddAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(int32_t, ::System::Data::DataColumn*)>(&::System::Data::DataColumnCollection::AddAt)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x601b674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "AddAt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.add_CollectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(
    &::System::Data::DataColumnCollection::add_CollectionChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x601bce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "add_CollectionChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.remove_CollectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(
    &::System::Data::DataColumnCollection::remove_CollectionChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x601bd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(),
                                                             { "remove_CollectionChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.add_ColumnPropertyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(
    &::System::Data::DataColumnCollection::add_ColumnPropertyChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x601be38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(),
                                                             { "add_ColumnPropertyChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.remove_ColumnPropertyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(
    &::System::Data::DataColumnCollection::remove_ColumnPropertyChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x601bee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(),
                                                             { "remove_ColumnPropertyChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.ArrayAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(&::System::Data::DataColumnCollection::ArrayAdd)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x601bbc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "ArrayAdd", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.ArrayAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(int32_t, ::System::Data::DataColumn*)>(&::System::Data::DataColumnCollection::ArrayAdd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x601bb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "ArrayAdd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.ArrayRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(&::System::Data::DataColumnCollection::ArrayRemove)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x601bfd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "ArrayRemove", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.AssignName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataColumnCollection::*)()>(&::System::Data::DataColumnCollection::AssignName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x601c20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "AssignName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.BaseAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(&::System::Data::DataColumnCollection::BaseAdd)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x601b8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "BaseAdd", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.BaseGroupSwitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::ArrayW<::System::Data::DataColumn*>, int32_t, ::ArrayW<::System::Data::DataColumn*>, int32_t)>(
    &::System::Data::DataColumnCollection::BaseGroupSwitch)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x601c620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "BaseGroupSwitch",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<int32_t>(),
                                                                                                              ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.BaseRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(&::System::Data::DataColumnCollection::BaseRemove)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x601c804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "BaseRemove", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.CanRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*, bool)>(&::System::Data::DataColumnCollection::CanRemove)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x601c8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "CanRemove", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.CheckIChangeTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(&::System::Data::DataColumnCollection::CheckIChangeTracking)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x601bf90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "CheckIChangeTracking", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)()>(&::System::Data::DataColumnCollection::Clear)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x601d110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumnCollection::*)(::StringW)>(&::System::Data::DataColumnCollection::Contains)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x601d3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumnCollection::*)(::StringW, bool)>(&::System::Data::DataColumnCollection::Contains)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x601d484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataColumnCollection::*)(::StringW)>(&::System::Data::DataColumnCollection::IndexOf)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x601d52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.IndexOfCaseInsensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataColumnCollection::*)(::StringW)>(&::System::Data::DataColumnCollection::IndexOfCaseInsensitive)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x601b468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "IndexOfCaseInsensitive", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.MakeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataColumnCollection::*)(int32_t)>(&::System::Data::DataColumnCollection::MakeName)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x601c2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "MakeName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.OnCollectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataColumnCollection::OnCollectionChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x601bc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(),
                                                                                           { "OnCollectionChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.OnCollectionChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataColumnCollection::OnCollectionChanging)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x601b8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "OnCollectionChanging", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.OnColumnPropertyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataColumnCollection::OnColumnPropertyChanged)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x601d62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "OnColumnPropertyChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.RegisterColumnName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::StringW, ::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::RegisterColumnName)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x601c384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "RegisterColumnName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.CanRegisterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumnCollection::*)(::StringW)>(&::System::Data::DataColumnCollection::CanRegisterName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x601d668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "CanRegisterName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(&::System::Data::DataColumnCollection::Remove)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x601d6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "Remove", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.UnregisterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::StringW)>(&::System::Data::DataColumnCollection::UnregisterName)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x601c55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "UnregisterName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.AddColumnsImplementingIChangeTrackingList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::AddColumnsImplementingIChangeTrackingList)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x601d044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(),
                                                                                           { "AddColumnsImplementingIChangeTrackingList", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnCollection.RemoveColumnsImplementingIChangeTrackingList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnCollection::*)(::System::Data::DataColumn*)>(
    &::System::Data::DataColumnCollection::RemoveColumnsImplementingIChangeTrackingList)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x601c104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(),
                                                                                           { "RemoveColumnsImplementingIChangeTrackingList", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
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
  this->____table = value;
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
  this->____list = value;
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
constexpr ::ArrayW<::System::Data::DataColumn*>& System::Data::DataColumnCollection::__cordl_internal_get__delayedAddRangeColumns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedAddRangeColumns;
}
constexpr ::ArrayW<::System::Data::DataColumn*> const& System::Data::DataColumnCollection::__cordl_internal_get__delayedAddRangeColumns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedAddRangeColumns;
}
constexpr void System::Data::DataColumnCollection::__cordl_internal_set__delayedAddRangeColumns(::ArrayW<::System::Data::DataColumn*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delayedAddRangeColumns = value;
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
  this->____columnFromName = value;
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
constexpr ::ArrayW<::System::Data::DataColumn*>& System::Data::DataColumnCollection::__cordl_internal_get__columnsImplementingIChangeTracking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnsImplementingIChangeTracking;
}
constexpr ::ArrayW<::System::Data::DataColumn*> const& System::Data::DataColumnCollection::__cordl_internal_get__columnsImplementingIChangeTracking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnsImplementingIChangeTracking;
}
constexpr void System::Data::DataColumnCollection::__cordl_internal_set__columnsImplementingIChangeTracking(::ArrayW<::System::Data::DataColumn*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnsImplementingIChangeTracking = value;
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
  this->___CollectionChanged = value;
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
  this->___CollectionChanging = value;
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
  this->___ColumnPropertyChanged = value;
}
inline void System::Data::DataColumnCollection::_ctor(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline ::System::Collections::ArrayList* System::Data::DataColumnCollection::get_List() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumnCollection*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataColumn*> System::Data::DataColumnCollection::get_ColumnsImplementingIChangeTracking() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "get_ColumnsImplementingIChangeTracking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*>>(this, ___internal_method);
}
inline int32_t System::Data::DataColumnCollection::get_ColumnsImplementingIChangeTrackingCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "get_ColumnsImplementingIChangeTrackingCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Data::DataColumnCollection::get_ColumnsImplementingIRevertibleChangeTrackingCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "get_ColumnsImplementingIRevertibleChangeTrackingCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Data::DataColumn* System::Data::DataColumnCollection::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*>(this, ___internal_method, index);
}
inline ::System::Data::DataColumn* System::Data::DataColumnCollection::get_Item(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*>(this, ___internal_method, name);
}
inline ::System::Data::DataColumn* System::Data::DataColumnCollection::get_Item(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*>(this, ___internal_method, name, ns);
}
inline void System::Data::DataColumnCollection::Add(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void System::Data::DataColumnCollection::AddAt(int32_t index, ::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "AddAt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, column);
}
inline void System::Data::DataColumnCollection::add_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "add_CollectionChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataColumnCollection::remove_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(),
                                                           { "remove_CollectionChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataColumnCollection::add_ColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(),
                                                           { "add_ColumnPropertyChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataColumnCollection::remove_ColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(),
                                                           { "remove_ColumnPropertyChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataColumnCollection::ArrayAdd(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "ArrayAdd", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void System::Data::DataColumnCollection::ArrayAdd(int32_t index, ::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "ArrayAdd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, column);
}
inline void System::Data::DataColumnCollection::ArrayRemove(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "ArrayRemove", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline ::StringW System::Data::DataColumnCollection::AssignName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "AssignName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataColumnCollection::BaseAdd(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "BaseAdd", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void System::Data::DataColumnCollection::BaseGroupSwitch(::ArrayW<::System::Data::DataColumn*> oldArray, int32_t oldLength, ::ArrayW<::System::Data::DataColumn*> newArray, int32_t newLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "BaseGroupSwitch",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<int32_t>(),
                                                                                                            ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldArray, oldLength, newArray, newLength);
}
inline void System::Data::DataColumnCollection::BaseRemove(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "BaseRemove", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline bool System::Data::DataColumnCollection::CanRemove(::System::Data::DataColumn* column, bool fThrowException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "CanRemove", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, column, fThrowException);
}
inline void System::Data::DataColumnCollection::CheckIChangeTracking(::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "CheckIChangeTracking", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void System::Data::DataColumnCollection::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::DataColumnCollection::Contains(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool System::Data::DataColumnCollection::Contains(::StringW name, bool caseSensitive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, caseSensitive);
}
inline int32_t System::Data::DataColumnCollection::IndexOf(::StringW columnName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, columnName);
}
inline int32_t System::Data::DataColumnCollection::IndexOfCaseInsensitive(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "IndexOfCaseInsensitive", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline ::StringW System::Data::DataColumnCollection::MakeName(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "MakeName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void System::Data::DataColumnCollection::OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(),
                                                                                         { "OnCollectionChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ccevent);
}
inline void System::Data::DataColumnCollection::OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* ccevent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(),
                                                                                         { "OnCollectionChanging", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ccevent);
}
inline void System::Data::DataColumnCollection::OnColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "OnColumnPropertyChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ccevent);
}
inline void System::Data::DataColumnCollection::RegisterColumnName(::StringW name, ::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "RegisterColumnName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, column);
}
inline bool System::Data::DataColumnCollection::CanRegisterName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "CanRegisterName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void System::Data::DataColumnCollection::Remove(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "Remove", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void System::Data::DataColumnCollection::UnregisterName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(), { "UnregisterName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Data::DataColumnCollection::AddColumnsImplementingIChangeTrackingList(::System::Data::DataColumn* dataColumn) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(),
                                                                                         { "AddColumnsImplementingIChangeTrackingList", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataColumn);
}
inline void System::Data::DataColumnCollection::RemoveColumnsImplementingIChangeTrackingList(::System::Data::DataColumn* dataColumn) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnCollection*>(),
                                                                                         { "RemoveColumnsImplementingIChangeTrackingList", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataColumn);
}
inline ::System::Data::DataColumnCollection* System::Data::DataColumnCollection::New_ctor(::System::Data::DataTable* table) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataColumnCollection*>(table));
}
// Ctor Parameters []
constexpr ::System::Data::DataColumnCollection::DataColumnCollection() {}
