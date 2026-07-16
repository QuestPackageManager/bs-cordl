#pragma once
// IWYU pragma private; include "System/Data/ForeignKeyConstraint.hpp"
#include "System/Data/zzzz__AcceptRejectRule_impl.hpp"
#include "System/Data/zzzz__Constraint_impl.hpp"
#include "System/Data/zzzz__DataKey_impl.hpp"
#include "System/Data/zzzz__Rule_impl.hpp"
#include "System/Data/zzzz__ForeignKeyConstraint_def.hpp"
#include "System/Data/zzzz__AcceptRejectRule_def.hpp"
#include "System/Data/zzzz__ConstraintCollection_def.hpp"
#include "System/Data/zzzz__Constraint_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataKey_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/Data/zzzz__DataRowAction_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__Rule_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::ArrayW<::System::Data::DataColumn*>, ::ArrayW<::System::Data::DataColumn*>)>(
    &::System::Data::ForeignKeyConstraint::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x603f874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::StringW, ::ArrayW<::System::Data::DataColumn*>, ::ArrayW<::System::Data::DataColumn*>)>(
    &::System::Data::ForeignKeyConstraint::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x603f8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(),
                            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::StringW, ::StringW, ::ArrayW<::StringW>, ::ArrayW<::StringW>, ::System::Data::AcceptRejectRule,
                                                                                                      ::System::Data::Rule, ::System::Data::Rule)>(&::System::Data::ForeignKeyConstraint::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x603fa00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                    ::i2c::type_of<::System::Data::AcceptRejectRule>(), ::i2c::type_of<::System::Data::Rule>(), ::i2c::type_of<::System::Data::Rule>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.get_ChildKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataKey (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::get_ChildKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x603fa30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "get_ChildKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.get_Columns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataColumn*> (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::get_Columns)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x603fa4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.get_Table
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::get_Table)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x603fa6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.get_ParentColumnNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::get_ParentColumnNames)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x603fa8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "get_ParentColumnNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.get_ChildColumnNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::get_ChildColumnNames)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x603fa98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "get_ChildColumnNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.CheckCanAddToCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::System::Data::ConstraintCollection*)>(
    &::System::Data::ForeignKeyConstraint::CheckCanAddToCollection)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x603faa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.CanBeRemovedFromCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ForeignKeyConstraint::*)(::System::Data::ConstraintCollection*, bool)>(
    &::System::Data::ForeignKeyConstraint::CanBeRemovedFromCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603fbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.IsKeyNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ForeignKeyConstraint::*)(::ArrayW<::System::Object*>)>(&::System::Data::ForeignKeyConstraint::IsKeyNull)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x603fbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "IsKeyNull", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.IsConstraintViolated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::IsConstraintViolated)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x603fc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.CanEnableConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::CanEnableConstraint)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6040148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.CascadeCommit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::System::Data::DataRow*)>(&::System::Data::ForeignKeyConstraint::CascadeCommit)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x60402a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "CascadeCommit", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.CascadeDelete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::System::Data::DataRow*)>(&::System::Data::ForeignKeyConstraint::CascadeDelete)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x6040408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "CascadeDelete", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.CascadeRollback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::System::Data::DataRow*)>(&::System::Data::ForeignKeyConstraint::CascadeRollback)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6040910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "CascadeRollback", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.CascadeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::System::Data::DataRow*)>(&::System::Data::ForeignKeyConstraint::CascadeUpdate)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x6040af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "CascadeUpdate", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.CheckCanClearParentTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::System::Data::DataTable*)>(&::System::Data::ForeignKeyConstraint::CheckCanClearParentTable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6040f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "CheckCanClearParentTable", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.CheckCanRemoveParentRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::System::Data::DataRow*)>(&::System::Data::ForeignKeyConstraint::CheckCanRemoveParentRow)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x604102c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "CheckCanRemoveParentRow", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.CheckCascade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::System::Data::DataRow*, ::System::Data::DataRowAction)>(
    &::System::Data::ForeignKeyConstraint::CheckCascade)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x60410f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(),
                                                             { "CheckCascade", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.CheckConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::System::Data::DataRow*, ::System::Data::DataRowAction)>(
    &::System::Data::ForeignKeyConstraint::CheckConstraint)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x604121c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.NonVirtualCheckState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::NonVirtualCheckState)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6041518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "NonVirtualCheckState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.CheckState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::CheckState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6041740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.get_AcceptRejectRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::AcceptRejectRule (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::get_AcceptRejectRule)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6041744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.set_AcceptRejectRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::System::Data::AcceptRejectRule)>(&::System::Data::ForeignKeyConstraint::set_AcceptRejectRule)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6041760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.ContainsColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ForeignKeyConstraint::*)(::System::Data::DataColumn*)>(&::System::Data::ForeignKeyConstraint::ContainsColumn)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x60417b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Constraint* (::System::Data::ForeignKeyConstraint::*)(::System::Data::DataSet*)>(&::System::Data::ForeignKeyConstraint::Clone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60417f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Constraint* (::System::Data::ForeignKeyConstraint::*)(::System::Data::DataSet*, bool)>(
    &::System::Data::ForeignKeyConstraint::Clone)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x6041808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ForeignKeyConstraint* (::System::Data::ForeignKeyConstraint::*)(::System::Data::DataTable*)>(
    &::System::Data::ForeignKeyConstraint::Clone)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x6041f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "Clone", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::StringW, ::ArrayW<::System::Data::DataColumn*>, ::ArrayW<::System::Data::DataColumn*>)>(
    &::System::Data::ForeignKeyConstraint::Create)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x603f8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(),
                            { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.get_DeleteRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Rule (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::get_DeleteRule)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x604253c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.set_DeleteRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::System::Data::Rule)>(&::System::Data::ForeignKeyConstraint::set_DeleteRule)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6042558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ForeignKeyConstraint::*)(::System::Object*)>(&::System::Data::ForeignKeyConstraint::Equals)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60425a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x604268c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.get_RelatedColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataColumn*> (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::get_RelatedColumns)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60426a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.get_RelatedColumnsReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataColumn*> (::System::Data::ForeignKeyConstraint::*)()>(
    &::System::Data::ForeignKeyConstraint::get_RelatedColumnsReference)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6041f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "get_RelatedColumnsReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.get_ParentKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataKey (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::get_ParentKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60410d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "get_ParentKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.FindParentRelation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRelation* (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::FindParentRelation)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60426c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "FindParentRelation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.get_RelatedTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::get_RelatedTable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6042788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.get_UpdateRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Rule (::System::Data::ForeignKeyConstraint::*)()>(&::System::Data::ForeignKeyConstraint::get_UpdateRule)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60427a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraint.set_UpdateRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraint::*)(::System::Data::Rule)>(&::System::Data::ForeignKeyConstraint::set_UpdateRule)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x60427c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 27 }));
    return ___internal_method;
  }
};
constexpr ::System::Data::Rule& System::Data::ForeignKeyConstraint::__cordl_internal_get__deleteRule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deleteRule;
}
constexpr ::System::Data::Rule const& System::Data::ForeignKeyConstraint::__cordl_internal_get__deleteRule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deleteRule;
}
constexpr void System::Data::ForeignKeyConstraint::__cordl_internal_set__deleteRule(::System::Data::Rule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deleteRule = value;
}
constexpr ::System::Data::Rule& System::Data::ForeignKeyConstraint::__cordl_internal_get__updateRule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateRule;
}
constexpr ::System::Data::Rule const& System::Data::ForeignKeyConstraint::__cordl_internal_get__updateRule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateRule;
}
constexpr void System::Data::ForeignKeyConstraint::__cordl_internal_set__updateRule(::System::Data::Rule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateRule = value;
}
constexpr ::System::Data::AcceptRejectRule& System::Data::ForeignKeyConstraint::__cordl_internal_get__acceptRejectRule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____acceptRejectRule;
}
constexpr ::System::Data::AcceptRejectRule const& System::Data::ForeignKeyConstraint::__cordl_internal_get__acceptRejectRule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____acceptRejectRule;
}
constexpr void System::Data::ForeignKeyConstraint::__cordl_internal_set__acceptRejectRule(::System::Data::AcceptRejectRule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____acceptRejectRule = value;
}
constexpr ::System::Data::DataKey& System::Data::ForeignKeyConstraint::__cordl_internal_get__childKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childKey;
}
constexpr ::System::Data::DataKey const& System::Data::ForeignKeyConstraint::__cordl_internal_get__childKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childKey;
}
constexpr void System::Data::ForeignKeyConstraint::__cordl_internal_set__childKey(::System::Data::DataKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____childKey = value;
}
constexpr ::System::Data::DataKey& System::Data::ForeignKeyConstraint::__cordl_internal_get__parentKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentKey;
}
constexpr ::System::Data::DataKey const& System::Data::ForeignKeyConstraint::__cordl_internal_get__parentKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentKey;
}
constexpr void System::Data::ForeignKeyConstraint::__cordl_internal_set__parentKey(::System::Data::DataKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentKey = value;
}
constexpr ::StringW& System::Data::ForeignKeyConstraint::__cordl_internal_get__constraintName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintName;
}
constexpr ::StringW const& System::Data::ForeignKeyConstraint::__cordl_internal_get__constraintName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintName;
}
constexpr void System::Data::ForeignKeyConstraint::__cordl_internal_set__constraintName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____constraintName = value;
}
constexpr ::ArrayW<::StringW>& System::Data::ForeignKeyConstraint::__cordl_internal_get__parentColumnNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentColumnNames;
}
constexpr ::ArrayW<::StringW> const& System::Data::ForeignKeyConstraint::__cordl_internal_get__parentColumnNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentColumnNames;
}
constexpr void System::Data::ForeignKeyConstraint::__cordl_internal_set__parentColumnNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentColumnNames = value;
}
constexpr ::ArrayW<::StringW>& System::Data::ForeignKeyConstraint::__cordl_internal_get__childColumnNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childColumnNames;
}
constexpr ::ArrayW<::StringW> const& System::Data::ForeignKeyConstraint::__cordl_internal_get__childColumnNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childColumnNames;
}
constexpr void System::Data::ForeignKeyConstraint::__cordl_internal_set__childColumnNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____childColumnNames = value;
}
constexpr ::StringW& System::Data::ForeignKeyConstraint::__cordl_internal_get__parentTableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentTableName;
}
constexpr ::StringW const& System::Data::ForeignKeyConstraint::__cordl_internal_get__parentTableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentTableName;
}
constexpr void System::Data::ForeignKeyConstraint::__cordl_internal_set__parentTableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentTableName = value;
}
inline void System::Data::ForeignKeyConstraint::_ctor(::ArrayW<::System::Data::DataColumn*> parentColumns, ::ArrayW<::System::Data::DataColumn*> childColumns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentColumns, childColumns);
}
inline void System::Data::ForeignKeyConstraint::_ctor(::StringW constraintName, ::ArrayW<::System::Data::DataColumn*> parentColumns, ::ArrayW<::System::Data::DataColumn*> childColumns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraintName, parentColumns, childColumns);
}
inline void System::Data::ForeignKeyConstraint::_ctor(::StringW constraintName, ::StringW parentTableName, ::ArrayW<::StringW> parentColumnNames, ::ArrayW<::StringW> childColumnNames,
                                                      ::System::Data::AcceptRejectRule acceptRejectRule, ::System::Data::Rule deleteRule, ::System::Data::Rule updateRule) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                  ::i2c::type_of<::System::Data::AcceptRejectRule>(), ::i2c::type_of<::System::Data::Rule>(), ::i2c::type_of<::System::Data::Rule>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraintName, parentTableName, parentColumnNames, childColumnNames, acceptRejectRule, deleteRule, updateRule);
}
inline ::System::Data::DataKey System::Data::ForeignKeyConstraint::get_ChildKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "get_ChildKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataKey>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataColumn*> System::Data::ForeignKeyConstraint::get_Columns() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*>>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::ForeignKeyConstraint::get_Table() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Data::ForeignKeyConstraint::get_ParentColumnNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "get_ParentColumnNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Data::ForeignKeyConstraint::get_ChildColumnNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "get_ChildColumnNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void System::Data::ForeignKeyConstraint::CheckCanAddToCollection(::System::Data::ConstraintCollection* constraints) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraints);
}
inline bool System::Data::ForeignKeyConstraint::CanBeRemovedFromCollection(::System::Data::ConstraintCollection* constraints, bool fThrowException) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraints, fThrowException);
}
inline bool System::Data::ForeignKeyConstraint::IsKeyNull(::ArrayW<::System::Object*> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "IsKeyNull", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, values);
}
inline bool System::Data::ForeignKeyConstraint::IsConstraintViolated() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::ForeignKeyConstraint::CanEnableConstraint() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::ForeignKeyConstraint::CascadeCommit(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "CascadeCommit", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline void System::Data::ForeignKeyConstraint::CascadeDelete(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "CascadeDelete", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline void System::Data::ForeignKeyConstraint::CascadeRollback(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "CascadeRollback", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline void System::Data::ForeignKeyConstraint::CascadeUpdate(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "CascadeUpdate", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline void System::Data::ForeignKeyConstraint::CheckCanClearParentTable(::System::Data::DataTable* table) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "CheckCanClearParentTable", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void System::Data::ForeignKeyConstraint::CheckCanRemoveParentRow(::System::Data::DataRow* row) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "CheckCanRemoveParentRow", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline void System::Data::ForeignKeyConstraint::CheckCascade(::System::Data::DataRow* row, ::System::Data::DataRowAction action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(),
                                                           { "CheckCascade", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, action);
}
inline void System::Data::ForeignKeyConstraint::CheckConstraint(::System::Data::DataRow* childRow, ::System::Data::DataRowAction action) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, childRow, action);
}
inline void System::Data::ForeignKeyConstraint::NonVirtualCheckState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "NonVirtualCheckState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::ForeignKeyConstraint::CheckState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::AcceptRejectRule System::Data::ForeignKeyConstraint::get_AcceptRejectRule() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::AcceptRejectRule>(this, ___internal_method);
}
inline void System::Data::ForeignKeyConstraint::set_AcceptRejectRule(::System::Data::AcceptRejectRule value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::ForeignKeyConstraint::ContainsColumn(::System::Data::DataColumn* column) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, column);
}
inline ::System::Data::Constraint* System::Data::ForeignKeyConstraint::Clone(::System::Data::DataSet* destination) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*>(this, ___internal_method, destination);
}
inline ::System::Data::Constraint* System::Data::ForeignKeyConstraint::Clone(::System::Data::DataSet* destination, bool ignorNSforTableLookup) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*>(this, ___internal_method, destination, ignorNSforTableLookup);
}
inline ::System::Data::ForeignKeyConstraint* System::Data::ForeignKeyConstraint::Clone(::System::Data::DataTable* destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "Clone", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ForeignKeyConstraint*>(this, ___internal_method, destination);
}
inline void System::Data::ForeignKeyConstraint::Create(::StringW relationName, ::ArrayW<::System::Data::DataColumn*> parentColumns, ::ArrayW<::System::Data::DataColumn*> childColumns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(),
                          { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relationName, parentColumns, childColumns);
}
inline ::System::Data::Rule System::Data::ForeignKeyConstraint::get_DeleteRule() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Rule>(this, ___internal_method);
}
inline void System::Data::ForeignKeyConstraint::set_DeleteRule(::System::Data::Rule value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::ForeignKeyConstraint::Equals(::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline int32_t System::Data::ForeignKeyConstraint::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataColumn*> System::Data::ForeignKeyConstraint::get_RelatedColumns() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataColumn*> System::Data::ForeignKeyConstraint::get_RelatedColumnsReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "get_RelatedColumnsReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*>>(this, ___internal_method);
}
inline ::System::Data::DataKey System::Data::ForeignKeyConstraint::get_ParentKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "get_ParentKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataKey>(this, ___internal_method);
}
inline ::System::Data::DataRelation* System::Data::ForeignKeyConstraint::FindParentRelation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), { "FindParentRelation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRelation*>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::ForeignKeyConstraint::get_RelatedTable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method);
}
inline ::System::Data::Rule System::Data::ForeignKeyConstraint::get_UpdateRule() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Rule>(this, ___internal_method);
}
inline void System::Data::ForeignKeyConstraint::set_UpdateRule(::System::Data::Rule value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraint*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::ForeignKeyConstraint* System::Data::ForeignKeyConstraint::New_ctor(::ArrayW<::System::Data::DataColumn*> parentColumns, ::ArrayW<::System::Data::DataColumn*> childColumns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::ForeignKeyConstraint*>(parentColumns, childColumns));
}
inline ::System::Data::ForeignKeyConstraint* System::Data::ForeignKeyConstraint::New_ctor(::StringW constraintName, ::ArrayW<::System::Data::DataColumn*> parentColumns,
                                                                                          ::ArrayW<::System::Data::DataColumn*> childColumns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::ForeignKeyConstraint*>(constraintName, parentColumns, childColumns));
}
inline ::System::Data::ForeignKeyConstraint* System::Data::ForeignKeyConstraint::New_ctor(::StringW constraintName, ::StringW parentTableName, ::ArrayW<::StringW> parentColumnNames,
                                                                                          ::ArrayW<::StringW> childColumnNames, ::System::Data::AcceptRejectRule acceptRejectRule,
                                                                                          ::System::Data::Rule deleteRule, ::System::Data::Rule updateRule) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::System::Data::ForeignKeyConstraint*>(constraintName, parentTableName, parentColumnNames, childColumnNames, acceptRejectRule, deleteRule, updateRule));
}
// Ctor Parameters []
constexpr ::System::Data::ForeignKeyConstraint::ForeignKeyConstraint() {}
