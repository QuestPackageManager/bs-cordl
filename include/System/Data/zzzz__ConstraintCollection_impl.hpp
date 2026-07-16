#pragma once
// IWYU pragma private; include "System/Data/ConstraintCollection.hpp"
#include "System/Data/zzzz__Constraint_impl.hpp"
#include "System/Data/zzzz__InternalDataCollectionBase_impl.hpp"
#include "System/Data/zzzz__ConstraintCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventHandler_def.hpp"
#include "System/Data/zzzz__Constraint_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__ForeignKeyConstraint_def.hpp"
#include "System/Data/zzzz__UniqueConstraint_def.hpp"
//  Writing Method size for method: ::System::Data::ConstraintCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::DataTable*)>(&::System::Data::ConstraintCollection::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x60180dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.get_List
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Data::ConstraintCollection::*)()>(&::System::Data::ConstraintCollection::get_List)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6018178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { ::i2c::class_of<::System::Data::ConstraintCollection*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Constraint* (::System::Data::ConstraintCollection::*)(int32_t)>(&::System::Data::ConstraintCollection::get_Item)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6018180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.get_Table
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::ConstraintCollection::*)()>(&::System::Data::ConstraintCollection::get_Table)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6018288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "get_Table", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Constraint* (::System::Data::ConstraintCollection::*)(::StringW)>(&::System::Data::ConstraintCollection::get_Item)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6018290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&::System::Data::ConstraintCollection::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60184e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*, bool)>(&::System::Data::ConstraintCollection::Add)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x60184f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Data::Constraint*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Constraint* (::System::Data::ConstraintCollection::*)(::StringW, ::ArrayW<::System::Data::DataColumn*>, bool)>(
    &::System::Data::ConstraintCollection::Add)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6018e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(),
                                                             { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.AddUniqueConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::UniqueConstraint*)>(&::System::Data::ConstraintCollection::AddUniqueConstraint)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6018ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "AddUniqueConstraint", {}, { ::i2c::type_of<::System::Data::UniqueConstraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.AddForeignKeyConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::ForeignKeyConstraint*)>(
    &::System::Data::ConstraintCollection::AddForeignKeyConstraint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6018cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "AddForeignKeyConstraint", {}, { ::i2c::type_of<::System::Data::ForeignKeyConstraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.AutoGenerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&::System::Data::ConstraintCollection::AutoGenerated)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6018a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "AutoGenerated", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.ArrayAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&::System::Data::ConstraintCollection::ArrayAdd)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6018e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "ArrayAdd", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.ArrayRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&::System::Data::ConstraintCollection::ArrayRemove)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6018f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "ArrayRemove", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.AssignName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::ConstraintCollection::*)()>(&::System::Data::ConstraintCollection::AssignName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6018cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "AssignName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.BaseAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&::System::Data::ConstraintCollection::BaseAdd)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6018d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "BaseAdd", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.BaseGroupSwitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)(::ArrayW<::System::Data::Constraint*>, int32_t, ::ArrayW<::System::Data::Constraint*>, int32_t)>(
    &::System::Data::ConstraintCollection::BaseGroupSwitch)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6019034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "BaseGroupSwitch",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::ArrayW<::System::Data::Constraint*>>(), ::i2c::type_of<int32_t>(),
                                                                                                              ::i2c::type_of<::ArrayW<::System::Data::Constraint*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.BaseRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&::System::Data::ConstraintCollection::BaseRemove)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x60191ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "BaseRemove", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.CanRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*, bool)>(&::System::Data::ConstraintCollection::CanRemove)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6019480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "CanRemove", {}, { ::i2c::type_of<::System::Data::Constraint*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)()>(&::System::Data::ConstraintCollection::Clear)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x60194ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ConstraintCollection::*)(::StringW)>(&::System::Data::ConstraintCollection::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6019890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ConstraintCollection::*)(::StringW, bool)>(&::System::Data::ConstraintCollection::Contains)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x60198a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.FindConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Constraint* (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(
    &::System::Data::ConstraintCollection::FindConstraint)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x60188ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "FindConstraint", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.FindKeyConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::UniqueConstraint* (::System::Data::ConstraintCollection::*)(::ArrayW<::System::Data::DataColumn*>)>(
    &::System::Data::ConstraintCollection::FindKeyConstraint)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6018b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "FindKeyConstraint", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.FindKeyConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::UniqueConstraint* (::System::Data::ConstraintCollection::*)(::System::Data::DataColumn*)>(
    &::System::Data::ConstraintCollection::FindKeyConstraint)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6019a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "FindKeyConstraint", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.FindForeignKeyConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ForeignKeyConstraint* (
    ::System::Data::ConstraintCollection::*)(::ArrayW<::System::Data::DataColumn*>, ::ArrayW<::System::Data::DataColumn*>)>(&::System::Data::ConstraintCollection::FindForeignKeyConstraint)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6019b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(),
                                         { "FindForeignKeyConstraint", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.CompareArrays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::System::Data::DataColumn*>, ::ArrayW<::System::Data::DataColumn*>)>(&::System::Data::ConstraintCollection::CompareArrays)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60199a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(),
                                                { "CompareArrays", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.InternalIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::ConstraintCollection::*)(::StringW)>(&::System::Data::ConstraintCollection::InternalIndexOf)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6018388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "InternalIndexOf", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.MakeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::ConstraintCollection::*)(int32_t)>(&::System::Data::ConstraintCollection::MakeName)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6018f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "MakeName", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.OnCollectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::ConstraintCollection::OnCollectionChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6018e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(),
                                                                                           { "OnCollectionChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.RegisterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)(::StringW)>(&::System::Data::ConstraintCollection::RegisterName)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6017c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "RegisterName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(&::System::Data::ConstraintCollection::Remove)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6019c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "Remove", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.UnregisterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintCollection::*)(::StringW)>(&::System::Data::ConstraintCollection::UnregisterName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6017df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "UnregisterName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::ConstraintCollection::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::ConstraintCollection::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::ConstraintCollection::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
constexpr ::System::Collections::ArrayList*& System::Data::ConstraintCollection::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::System::Collections::ArrayList* const& System::Data::ConstraintCollection::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void System::Data::ConstraintCollection::__cordl_internal_set__list(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____list = value;
}
constexpr int32_t& System::Data::ConstraintCollection::__cordl_internal_get__defaultNameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultNameIndex;
}
constexpr int32_t const& System::Data::ConstraintCollection::__cordl_internal_get__defaultNameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultNameIndex;
}
constexpr void System::Data::ConstraintCollection::__cordl_internal_set__defaultNameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultNameIndex = value;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler*& System::Data::ConstraintCollection::__cordl_internal_get__onCollectionChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCollectionChanged;
}
constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& System::Data::ConstraintCollection::__cordl_internal_get__onCollectionChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCollectionChanged;
}
constexpr void System::Data::ConstraintCollection::__cordl_internal_set__onCollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onCollectionChanged = value;
}
constexpr ::ArrayW<::System::Data::Constraint*>& System::Data::ConstraintCollection::__cordl_internal_get__delayLoadingConstraints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayLoadingConstraints;
}
constexpr ::ArrayW<::System::Data::Constraint*> const& System::Data::ConstraintCollection::__cordl_internal_get__delayLoadingConstraints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayLoadingConstraints;
}
constexpr void System::Data::ConstraintCollection::__cordl_internal_set__delayLoadingConstraints(::ArrayW<::System::Data::Constraint*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delayLoadingConstraints = value;
}
constexpr bool& System::Data::ConstraintCollection::__cordl_internal_get__fLoadForeignKeyConstraintsOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fLoadForeignKeyConstraintsOnly;
}
constexpr bool const& System::Data::ConstraintCollection::__cordl_internal_get__fLoadForeignKeyConstraintsOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fLoadForeignKeyConstraintsOnly;
}
constexpr void System::Data::ConstraintCollection::__cordl_internal_set__fLoadForeignKeyConstraintsOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fLoadForeignKeyConstraintsOnly = value;
}
inline void System::Data::ConstraintCollection::_ctor(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline ::System::Collections::ArrayList* System::Data::ConstraintCollection::get_List() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ConstraintCollection*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::System::Data::Constraint* System::Data::ConstraintCollection::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*>(this, ___internal_method, index);
}
inline ::System::Data::DataTable* System::Data::ConstraintCollection::get_Table() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "get_Table", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method);
}
inline ::System::Data::Constraint* System::Data::ConstraintCollection::get_Item(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*>(this, ___internal_method, name);
}
inline void System::Data::ConstraintCollection::Add(::System::Data::Constraint* constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint);
}
inline void System::Data::ConstraintCollection::Add(::System::Data::Constraint* constraint, bool addUniqueWhenAddingForeign) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Data::Constraint*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint, addUniqueWhenAddingForeign);
}
inline ::System::Data::Constraint* System::Data::ConstraintCollection::Add(::StringW name, ::ArrayW<::System::Data::DataColumn*> columns, bool primaryKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(),
                                                           { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*>(this, ___internal_method, name, columns, primaryKey);
}
inline void System::Data::ConstraintCollection::AddUniqueConstraint(::System::Data::UniqueConstraint* constraint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "AddUniqueConstraint", {}, { ::i2c::type_of<::System::Data::UniqueConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint);
}
inline void System::Data::ConstraintCollection::AddForeignKeyConstraint(::System::Data::ForeignKeyConstraint* constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "AddForeignKeyConstraint", {}, { ::i2c::type_of<::System::Data::ForeignKeyConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint);
}
inline bool System::Data::ConstraintCollection::AutoGenerated(::System::Data::Constraint* constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "AutoGenerated", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraint);
}
inline void System::Data::ConstraintCollection::ArrayAdd(::System::Data::Constraint* constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "ArrayAdd", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint);
}
inline void System::Data::ConstraintCollection::ArrayRemove(::System::Data::Constraint* constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "ArrayRemove", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint);
}
inline ::StringW System::Data::ConstraintCollection::AssignName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "AssignName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::ConstraintCollection::BaseAdd(::System::Data::Constraint* constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "BaseAdd", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint);
}
inline void System::Data::ConstraintCollection::BaseGroupSwitch(::ArrayW<::System::Data::Constraint*> oldArray, int32_t oldLength, ::ArrayW<::System::Data::Constraint*> newArray, int32_t newLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "BaseGroupSwitch",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::ArrayW<::System::Data::Constraint*>>(), ::i2c::type_of<int32_t>(),
                                                                                                            ::i2c::type_of<::ArrayW<::System::Data::Constraint*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldArray, oldLength, newArray, newLength);
}
inline void System::Data::ConstraintCollection::BaseRemove(::System::Data::Constraint* constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "BaseRemove", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint);
}
inline bool System::Data::ConstraintCollection::CanRemove(::System::Data::Constraint* constraint, bool fThrowException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "CanRemove", {}, { ::i2c::type_of<::System::Data::Constraint*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraint, fThrowException);
}
inline void System::Data::ConstraintCollection::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::ConstraintCollection::Contains(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool System::Data::ConstraintCollection::Contains(::StringW name, bool caseSensitive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, caseSensitive);
}
inline ::System::Data::Constraint* System::Data::ConstraintCollection::FindConstraint(::System::Data::Constraint* constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "FindConstraint", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*>(this, ___internal_method, constraint);
}
inline ::System::Data::UniqueConstraint* System::Data::ConstraintCollection::FindKeyConstraint(::ArrayW<::System::Data::DataColumn*> columns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "FindKeyConstraint", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::UniqueConstraint*>(this, ___internal_method, columns);
}
inline ::System::Data::UniqueConstraint* System::Data::ConstraintCollection::FindKeyConstraint(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "FindKeyConstraint", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::UniqueConstraint*>(this, ___internal_method, column);
}
inline ::System::Data::ForeignKeyConstraint* System::Data::ConstraintCollection::FindForeignKeyConstraint(::ArrayW<::System::Data::DataColumn*> parentColumns,
                                                                                                          ::ArrayW<::System::Data::DataColumn*> childColumns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(),
                                       { "FindForeignKeyConstraint", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ForeignKeyConstraint*>(this, ___internal_method, parentColumns, childColumns);
}
inline bool System::Data::ConstraintCollection::CompareArrays(::ArrayW<::System::Data::DataColumn*> a1, ::ArrayW<::System::Data::DataColumn*> a2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(),
                                              { "CompareArrays", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a1, a2);
}
inline int32_t System::Data::ConstraintCollection::InternalIndexOf(::StringW constraintName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "InternalIndexOf", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, constraintName);
}
inline ::StringW System::Data::ConstraintCollection::MakeName(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "MakeName", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void System::Data::ConstraintCollection::OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(),
                                                                                         { "OnCollectionChanged", {}, { ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ccevent);
}
inline void System::Data::ConstraintCollection::RegisterName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "RegisterName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Data::ConstraintCollection::Remove(::System::Data::Constraint* constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "Remove", {}, { ::i2c::type_of<::System::Data::Constraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint);
}
inline void System::Data::ConstraintCollection::UnregisterName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintCollection*>(), { "UnregisterName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::System::Data::ConstraintCollection* System::Data::ConstraintCollection::New_ctor(::System::Data::DataTable* table) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::ConstraintCollection*>(table));
}
// Ctor Parameters []
constexpr ::System::Data::ConstraintCollection::ConstraintCollection() {}
