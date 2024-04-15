#pragma once
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::DataTable*)>(
    &::System::Data::ConstraintCollection::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2b76578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.get_List
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Data::ConstraintCollection::*)()>(
    &::System::Data::ConstraintCollection::get_List)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b76620;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (::System::Data::ConstraintCollection::*)(int32_t)>(
    &::System::Data::ConstraintCollection::get_Item)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2b76628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.get_Table
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::ConstraintCollection::*)()>(
    &::System::Data::ConstraintCollection::get_Table)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b767b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "get_Table",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (::System::Data::ConstraintCollection::*)(::StringW)>(
    &::System::Data::ConstraintCollection::get_Item)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2b767b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(
    &::System::Data::ConstraintCollection::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b76a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*, bool)>(
    &::System::Data::ConstraintCollection::Add)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x2b76a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (
    ::System::Data::ConstraintCollection::*)(::StringW, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>, bool)>(&::System::Data::ConstraintCollection::Add)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2b77504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.AddUniqueConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::UniqueConstraint*)>(
    &::System::Data::ConstraintCollection::AddUniqueConstraint)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2b7717c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "AddUniqueConstraint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::UniqueConstraint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.AddForeignKeyConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::ForeignKeyConstraint*)>(
    &::System::Data::ConstraintCollection::AddForeignKeyConstraint)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b77374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "AddForeignKeyConstraint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ForeignKeyConstraint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.AutoGenerated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(
    &::System::Data::ConstraintCollection::AutoGenerated)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2b77020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "AutoGenerated", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.ArrayAdd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(
    &::System::Data::ConstraintCollection::ArrayAdd)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2b774a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "ArrayAdd", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.ArrayRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(
    &::System::Data::ConstraintCollection::ArrayRemove)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2b77670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "ArrayRemove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.AssignName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::ConstraintCollection::*)()>(&::System::Data::ConstraintCollection::AssignName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b77350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "AssignName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.BaseAdd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(
    &::System::Data::ConstraintCollection::BaseAdd)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b773e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "BaseAdd", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.BaseGroupSwitch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)(
    ::ArrayW<::System::Data::Constraint*, ::Array<::System::Data::Constraint*>*>, int32_t, ::ArrayW<::System::Data::Constraint*, ::Array<::System::Data::Constraint*>*>, int32_t)>(
    &::System::Data::ConstraintCollection::BaseGroupSwitch)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2b77760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "BaseGroupSwitch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::Constraint*, ::Array<::System::Data::Constraint*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::Constraint*, ::Array<::System::Data::Constraint*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.BaseRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(
    &::System::Data::ConstraintCollection::BaseRemove)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2b77914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "BaseRemove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.CanRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*, bool)>(
    &::System::Data::ConstraintCollection::CanRemove)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b77be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "CanRemove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)()>(&::System::Data::ConstraintCollection::Clear)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x2b77c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::ConstraintCollection::*)(::StringW)>(&::System::Data::ConstraintCollection::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b77fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::ConstraintCollection::*)(::StringW, bool)>(&::System::Data::ConstraintCollection::Contains)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2b77ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.FindConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(
    &::System::Data::ConstraintCollection::FindConstraint)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2b76e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "FindConstraint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.FindKeyConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::UniqueConstraint* (
    ::System::Data::ConstraintCollection::*)(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>)>(&::System::Data::ConstraintCollection::FindKeyConstraint)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2b77244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "FindKeyConstraint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.FindKeyConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::UniqueConstraint* (::System::Data::ConstraintCollection::*)(::System::Data::DataColumn*)>(
    &::System::Data::ConstraintCollection::FindKeyConstraint)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2b781a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "FindKeyConstraint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.FindForeignKeyConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ForeignKeyConstraint* (
    ::System::Data::ConstraintCollection::*)(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>,
                                             ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>)>(&::System::Data::ConstraintCollection::FindForeignKeyConstraint)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2b782b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "FindForeignKeyConstraint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.CompareArrays
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>)>(
        &::System::Data::ConstraintCollection::CompareArrays)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b78120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "CompareArrays", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.InternalIndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::ConstraintCollection::*)(::StringW)>(
    &::System::Data::ConstraintCollection::InternalIndexOf)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2b768a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "InternalIndexOf", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.MakeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::ConstraintCollection::*)(int32_t)>(&::System::Data::ConstraintCollection::MakeName)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2b776a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "MakeName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.OnCollectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::ConstraintCollection::OnCollectionChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b774dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "OnCollectionChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.RegisterName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)(::StringW)>(&::System::Data::ConstraintCollection::RegisterName)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2b75f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "RegisterName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)(::System::Data::Constraint*)>(
    &::System::Data::ConstraintCollection::Remove)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2b78430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintCollection.UnregisterName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintCollection::*)(::StringW)>(&::System::Data::ConstraintCollection::UnregisterName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b7618c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "UnregisterName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::ConstraintCollection::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& System::Data::ConstraintCollection::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::ConstraintCollection::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Data::ConstraintCollection::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Data::ConstraintCollection::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void System::Data::ConstraintCollection::__cordl_internal_set__list(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::CollectionChangeEventHandler*> const& System::Data::ConstraintCollection::__cordl_internal_get__onCollectionChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCollectionChanged;
}
constexpr void System::Data::ConstraintCollection::__cordl_internal_set__onCollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onCollectionChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Data::Constraint*, ::Array<::System::Data::Constraint*>*>& System::Data::ConstraintCollection::__cordl_internal_get__delayLoadingConstraints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayLoadingConstraints;
}
constexpr ::ArrayW<::System::Data::Constraint*, ::Array<::System::Data::Constraint*>*> const& System::Data::ConstraintCollection::__cordl_internal_get__delayLoadingConstraints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayLoadingConstraints;
}
constexpr void System::Data::ConstraintCollection::__cordl_internal_set__delayLoadingConstraints(::ArrayW<::System::Data::Constraint*, ::Array<::System::Data::Constraint*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____delayLoadingConstraints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::System::Data::ConstraintCollection* System::Data::ConstraintCollection::New_ctor(::System::Data::DataTable* table) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::ConstraintCollection*>(table));
}
inline void System::Data::ConstraintCollection::_ctor(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table);
}
inline ::System::Collections::ArrayList* System::Data::ConstraintCollection::get_List() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method);
}
inline ::System::Data::Constraint* System::Data::ConstraintCollection::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*, false>(this, ___internal_method, index);
}
inline ::System::Data::DataTable* System::Data::ConstraintCollection::get_Table() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "get_Table",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method);
}
inline ::System::Data::Constraint* System::Data::ConstraintCollection::get_Item(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*, false>(this, ___internal_method, name);
}
inline void System::Data::ConstraintCollection::Add(::System::Data::Constraint* constraint) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constraint);
}
inline void System::Data::ConstraintCollection::Add(::System::Data::Constraint* constraint, bool addUniqueWhenAddingForeign) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constraint, addUniqueWhenAddingForeign);
}
inline ::System::Data::Constraint* System::Data::ConstraintCollection::Add(::StringW name, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns, bool primaryKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*, false>(this, ___internal_method, name, columns, primaryKey);
}
inline void System::Data::ConstraintCollection::AddUniqueConstraint(::System::Data::UniqueConstraint* constraint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "AddUniqueConstraint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::UniqueConstraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constraint);
}
inline void System::Data::ConstraintCollection::AddForeignKeyConstraint(::System::Data::ForeignKeyConstraint* constraint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "AddForeignKeyConstraint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ForeignKeyConstraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constraint);
}
inline bool System::Data::ConstraintCollection::AutoGenerated(::System::Data::Constraint* constraint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "AutoGenerated", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraint);
}
inline void System::Data::ConstraintCollection::ArrayAdd(::System::Data::Constraint* constraint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "ArrayAdd", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constraint);
}
inline void System::Data::ConstraintCollection::ArrayRemove(::System::Data::Constraint* constraint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "ArrayRemove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constraint);
}
inline ::StringW System::Data::ConstraintCollection::AssignName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "AssignName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Data::ConstraintCollection::BaseAdd(::System::Data::Constraint* constraint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "BaseAdd", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constraint);
}
inline void System::Data::ConstraintCollection::BaseGroupSwitch(::ArrayW<::System::Data::Constraint*, ::Array<::System::Data::Constraint*>*> oldArray, int32_t oldLength,
                                                                ::ArrayW<::System::Data::Constraint*, ::Array<::System::Data::Constraint*>*> newArray, int32_t newLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "BaseGroupSwitch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::Constraint*, ::Array<::System::Data::Constraint*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::Constraint*, ::Array<::System::Data::Constraint*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldArray, oldLength, newArray, newLength);
}
inline void System::Data::ConstraintCollection::BaseRemove(::System::Data::Constraint* constraint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "BaseRemove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constraint);
}
inline bool System::Data::ConstraintCollection::CanRemove(::System::Data::Constraint* constraint, bool fThrowException) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "CanRemove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraint, fThrowException);
}
inline void System::Data::ConstraintCollection::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Data::ConstraintCollection::Contains(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline bool System::Data::ConstraintCollection::Contains(::StringW name, bool caseSensitive) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, caseSensitive);
}
inline ::System::Data::Constraint* System::Data::ConstraintCollection::FindConstraint(::System::Data::Constraint* constraint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "FindConstraint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*, false>(this, ___internal_method, constraint);
}
inline ::System::Data::UniqueConstraint* System::Data::ConstraintCollection::FindKeyConstraint(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "FindKeyConstraint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::UniqueConstraint*, false>(this, ___internal_method, columns);
}
inline ::System::Data::UniqueConstraint* System::Data::ConstraintCollection::FindKeyConstraint(::System::Data::DataColumn* column) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "FindKeyConstraint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::UniqueConstraint*, false>(this, ___internal_method, column);
}
inline ::System::Data::ForeignKeyConstraint* System::Data::ConstraintCollection::FindForeignKeyConstraint(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> parentColumns,
                                                                                                          ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> childColumns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "FindForeignKeyConstraint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ForeignKeyConstraint*, false>(this, ___internal_method, parentColumns, childColumns);
}
inline bool System::Data::ConstraintCollection::CompareArrays(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> a1,
                                                              ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> a2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "CompareArrays", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a1, a2);
}
inline int32_t System::Data::ConstraintCollection::InternalIndexOf(::StringW constraintName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "InternalIndexOf", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, constraintName);
}
inline ::StringW System::Data::ConstraintCollection::MakeName(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "MakeName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, index);
}
inline void System::Data::ConstraintCollection::OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "OnCollectionChanged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::CollectionChangeEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ccevent);
}
inline void System::Data::ConstraintCollection::RegisterName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "RegisterName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void System::Data::ConstraintCollection::Remove(::System::Data::Constraint* constraint) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Constraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constraint);
}
inline void System::Data::ConstraintCollection::UnregisterName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintCollection*>::get(), "UnregisterName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::System::Data::ConstraintCollection::ConstraintCollection() {}
