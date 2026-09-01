#pragma once
// IWYU pragma private; include "System\Data\DataTableCollection.hpp"
#include "System/Data/zzzz__DataTable_impl.hpp"
#include "System/Data/zzzz__InternalDataCollectionBase_impl.hpp"
#include "System/Data/zzzz__DataTableCollection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventHandler_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
//  Writing Method size for method: ::System::Data::DataTableCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableCollection::*)(::System::Data::DataSet*)>(&::System::Data::DataTableCollection::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x602ed58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.get_List
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Data::DataTableCollection::*)()>(&::System::Data::DataTableCollection::get_List)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602eeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { ::i2c::class_of<::System::Data::DataTableCollection*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.get_ObjectID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTableCollection::*)()>(&::System::Data::DataTableCollection::get_ObjectID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602eec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "get_ObjectID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataTableCollection::*)(int32_t)>(&::System::Data::DataTableCollection::get_Item)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x602eec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataTableCollection::*)(::StringW)>(&::System::Data::DataTableCollection::get_Item)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x602f008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataTableCollection::*)(::StringW, ::StringW)>(&::System::Data::DataTableCollection::get_Item)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6027958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.GetTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataTableCollection::*)(::StringW, ::StringW)>(&::System::Data::DataTableCollection::GetTable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x602f45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "GetTable", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.GetTableSmart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataTableCollection::*)(::StringW, ::StringW)>(
    &::System::Data::DataTableCollection::GetTableSmart)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x602f574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "GetTableSmart", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableCollection::*)(::System::Data::DataTable*)>(&::System::Data::DataTableCollection::Add)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x602f6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.ArrayAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableCollection::*)(::System::Data::DataTable*)>(&::System::Data::DataTableCollection::ArrayAdd)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x602fb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "ArrayAdd", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.AssignName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTableCollection::*)()>(&::System::Data::DataTableCollection::AssignName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x602fc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "AssignName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.BaseAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableCollection::*)(::System::Data::DataTable*)>(&::System::Data::DataTableCollection::BaseAdd)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x602fa08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "BaseAdd", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.BaseGroupSwitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableCollection::*)(::ArrayW<::System::Data::DataTable*>, int32_t, ::ArrayW<::System::Data::DataTable*>, int32_t)>(
    &::System::Data::DataTableCollection::BaseGroupSwitch)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x602ffbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "BaseGroupSwitch",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::ArrayW<::System::Data::DataTable*>>(), ::i2c::type_of<int32_t>(),
                                                                                                             ::i2c::type_of<::ArrayW<::System::Data::DataTable*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.BaseRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableCollection::*)(::System::Data::DataTable*)>(&::System::Data::DataTableCollection::BaseRemove)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6030138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "BaseRemove", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.CanRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTableCollection::*)(::System::Data::DataTable*, bool)>(&::System::Data::DataTableCollection::CanRemove)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x60301b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "CanRemove", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableCollection::*)()>(&::System::Data::DataTableCollection::Clear)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x6030720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTableCollection::*)(::StringW)>(&::System::Data::DataTableCollection::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x602fd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTableCollection::*)(::StringW, ::StringW, bool, bool)>(&::System::Data::DataTableCollection::Contains)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x60309d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(),
                                                             { "Contains", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTableCollection::*)(::StringW, bool)>(&::System::Data::DataTableCollection::Contains)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6030b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTableCollection::*)(::System::Data::DataTable*)>(&::System::Data::DataTableCollection::IndexOf)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6030c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "IndexOf", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTableCollection::*)(::StringW)>(&::System::Data::DataTableCollection::IndexOf)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6030d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTableCollection::*)(::StringW, ::StringW, bool)>(&::System::Data::DataTableCollection::IndexOf)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6030d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(),
                                                                                           { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.ReplaceFromInference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableCollection::*)(::System::Collections::Generic::List_1<::System::Data::DataTable*>*)>(
    &::System::Data::DataTableCollection::ReplaceFromInference)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6030dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(),
                                                             { "ReplaceFromInference", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.InternalIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTableCollection::*)(::StringW)>(&::System::Data::DataTableCollection::InternalIndexOf)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x602f108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "InternalIndexOf", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.InternalIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataTableCollection::*)(::StringW, ::StringW)>(&::System::Data::DataTableCollection::InternalIndexOf)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x602f2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "InternalIndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.MakeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataTableCollection::*)(int32_t)>(&::System::Data::DataTableCollection::MakeName)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x602fc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "MakeName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.OnCollectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataTableCollection::OnCollectionChanged)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x602fb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(),
                                                                                           { "OnCollectionChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.OnCollectionChanging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataTableCollection::OnCollectionChanging)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x602f920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "OnCollectionChanging", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.RegisterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableCollection::*)(::StringW, ::StringW)>(&::System::Data::DataTableCollection::RegisterName)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x602fd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "RegisterName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableCollection::*)(::System::Data::DataTable*)>(&::System::Data::DataTableCollection::Remove)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6030e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "Remove", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableCollection.UnregisterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableCollection::*)(::StringW)>(&::System::Data::DataTableCollection::UnregisterName)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x603060c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "UnregisterName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataSet*& System::Data::DataTableCollection::__cordl_internal_get__dataSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr ::System::Data::DataSet* const& System::Data::DataTableCollection::__cordl_internal_get__dataSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr void System::Data::DataTableCollection::__cordl_internal_set__dataSet(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSet = value;
}
constexpr ::System::Collections::ArrayList*& System::Data::DataTableCollection::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::System::Collections::ArrayList* const& System::Data::DataTableCollection::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void System::Data::DataTableCollection::__cordl_internal_set__list(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____list = value;
}
constexpr int32_t& System::Data::DataTableCollection::__cordl_internal_get__defaultNameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultNameIndex;
}
constexpr int32_t const& System::Data::DataTableCollection::__cordl_internal_get__defaultNameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultNameIndex;
}
constexpr void System::Data::DataTableCollection::__cordl_internal_set__defaultNameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultNameIndex = value;
}
constexpr ::ArrayW<::System::Data::DataTable*>& System::Data::DataTableCollection::__cordl_internal_get__delayedAddRangeTables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedAddRangeTables;
}
constexpr ::ArrayW<::System::Data::DataTable*> const& System::Data::DataTableCollection::__cordl_internal_get__delayedAddRangeTables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedAddRangeTables;
}
constexpr void System::Data::DataTableCollection::__cordl_internal_set__delayedAddRangeTables(::ArrayW<::System::Data::DataTable*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delayedAddRangeTables = value;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler*& System::Data::DataTableCollection::__cordl_internal_get__onCollectionChangedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCollectionChangedDelegate;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& System::Data::DataTableCollection::__cordl_internal_get__onCollectionChangedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCollectionChangedDelegate;
}
constexpr void System::Data::DataTableCollection::__cordl_internal_set__onCollectionChangedDelegate(::System::ComponentModel::CollectionChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onCollectionChangedDelegate = value;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler*& System::Data::DataTableCollection::__cordl_internal_get__onCollectionChangingDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCollectionChangingDelegate;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& System::Data::DataTableCollection::__cordl_internal_get__onCollectionChangingDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCollectionChangingDelegate;
}
constexpr void System::Data::DataTableCollection::__cordl_internal_set__onCollectionChangingDelegate(::System::ComponentModel::CollectionChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onCollectionChangingDelegate = value;
}
constexpr int32_t& System::Data::DataTableCollection::__cordl_internal_get__objectID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr int32_t const& System::Data::DataTableCollection::__cordl_internal_get__objectID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr void System::Data::DataTableCollection::__cordl_internal_set__objectID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectID = value;
}
inline void System::Data::DataTableCollection::setStaticF_s_objectTypeCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_objectTypeCount", ::System::Data::DataTableCollection*>(std::forward<int32_t>(value));
}
inline int32_t System::Data::DataTableCollection::getStaticF_s_objectTypeCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_objectTypeCount", ::System::Data::DataTableCollection*>();
}
inline void System::Data::DataTableCollection::_ctor(::System::Data::DataSet* dataSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSet);
}
inline ::System::Collections::ArrayList* System::Data::DataTableCollection::get_List() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTableCollection*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline int32_t System::Data::DataTableCollection::get_ObjectID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "get_ObjectID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::DataTableCollection::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, index);
}
inline ::System::Data::DataTable* System::Data::DataTableCollection::get_Item(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, name);
}
inline ::System::Data::DataTable* System::Data::DataTableCollection::get_Item(::StringW name, ::StringW tableNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, name, tableNamespace);
}
inline ::System::Data::DataTable* System::Data::DataTableCollection::GetTable(::StringW name, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "GetTable", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, name, ns);
}
inline ::System::Data::DataTable* System::Data::DataTableCollection::GetTableSmart(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "GetTableSmart", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method, name, ns);
}
inline void System::Data::DataTableCollection::Add(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void System::Data::DataTableCollection::ArrayAdd(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "ArrayAdd", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline ::StringW System::Data::DataTableCollection::AssignName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "AssignName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataTableCollection::BaseAdd(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "BaseAdd", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void System::Data::DataTableCollection::BaseGroupSwitch(::ArrayW<::System::Data::DataTable*> oldArray, int32_t oldLength, ::ArrayW<::System::Data::DataTable*> newArray, int32_t newLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "BaseGroupSwitch",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::ArrayW<::System::Data::DataTable*>>(), ::i2c::type_of<int32_t>(),
                                                                                                           ::i2c::type_of<::ArrayW<::System::Data::DataTable*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldArray, oldLength, newArray, newLength);
}
inline void System::Data::DataTableCollection::BaseRemove(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "BaseRemove", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline bool System::Data::DataTableCollection::CanRemove(::System::Data::DataTable* table, bool fThrowException) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "CanRemove", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, table, fThrowException);
}
inline void System::Data::DataTableCollection::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::DataTableCollection::Contains(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool System::Data::DataTableCollection::Contains(::StringW name, ::StringW tableNamespace, bool checkProperty, bool caseSensitive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(),
                                                           { "Contains", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, tableNamespace, checkProperty, caseSensitive);
}
inline bool System::Data::DataTableCollection::Contains(::StringW name, bool caseSensitive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, caseSensitive);
}
inline int32_t System::Data::DataTableCollection::IndexOf(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "IndexOf", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, table);
}
inline int32_t System::Data::DataTableCollection::IndexOf(::StringW tableName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "IndexOf", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, tableName);
}
inline int32_t System::Data::DataTableCollection::IndexOf(::StringW tableName, ::StringW tableNamespace, bool chekforNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(),
                                                                                         { "IndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, tableName, tableNamespace, chekforNull);
}
inline void System::Data::DataTableCollection::ReplaceFromInference(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(),
                                                           { "ReplaceFromInference", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableList);
}
inline int32_t System::Data::DataTableCollection::InternalIndexOf(::StringW tableName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "InternalIndexOf", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, tableName);
}
inline int32_t System::Data::DataTableCollection::InternalIndexOf(::StringW tableName, ::StringW tableNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "InternalIndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, tableName, tableNamespace);
}
inline ::StringW System::Data::DataTableCollection::MakeName(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "MakeName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void System::Data::DataTableCollection::OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(),
                                                                                         { "OnCollectionChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ccevent);
}
inline void System::Data::DataTableCollection::OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* ccevent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(),
                                                                                         { "OnCollectionChanging", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ccevent);
}
inline void System::Data::DataTableCollection::RegisterName(::StringW name, ::StringW tbNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "RegisterName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, tbNamespace);
}
inline void System::Data::DataTableCollection::Remove(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "Remove", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void System::Data::DataTableCollection::UnregisterName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableCollection*>(), { "UnregisterName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::System::Data::DataTableCollection* System::Data::DataTableCollection::New_ctor(::System::Data::DataSet* dataSet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataTableCollection*>(dataSet));
}
// Ctor Parameters []
constexpr ::System::Data::DataTableCollection::DataTableCollection() {}
