#pragma once
// IWYU pragma private; include "System/Data/DataRow.hpp"
#include "System/Data/zzzz__DataRowAction_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Data/zzzz__DataColumnCollection_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataError_def.hpp"
#include "System/Data/zzzz__DataKey_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/Data/zzzz__DataRowBuilder_def.hpp"
#include "System/Data/zzzz__DataRowState_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewRowState_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::DataRow._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataRowBuilder*)>(&::System::Data::DataRow::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x41634c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_LastChangedColumn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataColumn* (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_LastChangedColumn)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4163568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_LastChangedColumn",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.set_LastChangedColumn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataColumn*)>(&::System::Data::DataRow::set_LastChangedColumn)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4163584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "set_LastChangedColumn", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_HasPropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_HasPropertyChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4163598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_HasPropertyChanged",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_RBTreeNodeId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_RBTreeNodeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x41635a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_RBTreeNodeId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.set_RBTreeNodeId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(int32_t)>(&::System::Data::DataRow::set_RBTreeNodeId)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x41635b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "set_RBTreeNodeId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_RowError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_RowError)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4163660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_RowError",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.set_RowError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(::StringW)>(&::System::Data::DataRow::set_RowError)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x41636bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "set_RowError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.RowErrorChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::RowErrorChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x416381c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "RowErrorChanged",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_rowID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_rowID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x416386c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_rowID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.set_rowID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(int64_t)>(&::System::Data::DataRow::set_rowID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4163874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "set_rowID", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_RowState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRowState (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_RowState)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x4163890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_RowState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_Table
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_Table)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4163ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_Table",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.CheckForLoops
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataRelation*)>(&::System::Data::DataRow::CheckForLoops)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x415fe88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "CheckForLoops", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetNestedParentCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataRow::*)()>(&::System::Data::DataRow::GetNestedParentCount)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4163abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetNestedParentCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(::StringW, ::System::Object*)>(&::System::Data::DataRow::set_Item)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4163b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::DataRow::*)(::System::Data::DataColumn*)>(&::System::Data::DataRow::get_Item)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4163a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataColumn*, ::System::Object*)>(
    &::System::Data::DataRow::set_Item)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x4163c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::DataRow::*)(::System::Data::DataColumn*, ::System::Data::DataRowVersion)>(
    &::System::Data::DataRow::get_Item)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x416421c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.set_ItemArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::System::Data::DataRow::set_ItemArray)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x41642c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "set_ItemArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.AcceptChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::AcceptChanges)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x4164670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "AcceptChanges",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.BeginEdit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::BeginEdit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x41649f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "BeginEdit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.BeginEditInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataRow::*)()>(&::System::Data::DataRow::BeginEditInternal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4163fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "BeginEditInternal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.CancelEdit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::CancelEdit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x41640e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "CancelEdit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.CheckColumn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataColumn*)>(&::System::Data::DataRow::CheckColumn)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4163f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "CheckColumn", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.CheckInTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::CheckInTable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x41649f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "CheckInTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.Delete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::Delete)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4164a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "Delete",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.EndEdit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::EndEdit)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4164140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "EndEdit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.SetColumnError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(int32_t, ::StringW)>(&::System::Data::DataRow::SetColumnError)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4164a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "SetColumnError", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.SetColumnError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataColumn*, ::StringW)>(
    &::System::Data::DataRow::SetColumnError)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x4164af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "SetColumnError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetColumnError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::DataRow::*)(::System::Data::DataColumn*)>(&::System::Data::DataRow::GetColumnError)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4164cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetColumnError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.ClearErrors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::ClearErrors)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4164d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "ClearErrors",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.ClearError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataColumn*)>(&::System::Data::DataRow::ClearError)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x415b3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "ClearError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_HasErrors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_HasErrors)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4164d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_HasErrors",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetColumnsInError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> (::System::Data::DataRow::*)()>(
    &::System::Data::DataRow::GetColumnsInError)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4164ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetColumnsInError",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetChildRows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> (::System::Data::DataRow::*)(::System::Data::DataRelation*)>(&::System::Data::DataRow::GetChildRows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4164e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetChildRows", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetChildRows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> (::System::Data::DataRow::*)(
    ::System::Data::DataRelation*, ::System::Data::DataRowVersion)>(&::System::Data::DataRow::GetChildRows)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4164e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetChildRows", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetDataColumn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataColumn* (::System::Data::DataRow::*)(::StringW)>(&::System::Data::DataRow::GetDataColumn)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4163bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetDataColumn", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetParentRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRow* (::System::Data::DataRow::*)(::System::Data::DataRelation*)>(
    &::System::Data::DataRow::GetParentRow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x415ff5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetParentRow", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetParentRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRow* (::System::Data::DataRow::*)(::System::Data::DataRelation*, ::System::Data::DataRowVersion)>(
    &::System::Data::DataRow::GetParentRow)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x4164fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetParentRow", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetNestedParentRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRow* (::System::Data::DataRow::*)(::System::Data::DataRowVersion)>(
    &::System::Data::DataRow::GetNestedParentRow)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x41650a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetNestedParentRow", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetParentRows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> (::System::Data::DataRow::*)(::System::Data::DataRelation*)>(&::System::Data::DataRow::GetParentRows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4165164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetParentRows", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetParentRows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> (::System::Data::DataRow::*)(
    ::System::Data::DataRelation*, ::System::Data::DataRowVersion)>(&::System::Data::DataRow::GetParentRows)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x416516c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetParentRows", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetColumnValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Data::DataRow::*)(
    ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>)>(&::System::Data::DataRow::GetColumnValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4165284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetColumnValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetColumnValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Data::DataRow::*)(
    ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>, ::System::Data::DataRowVersion)>(&::System::Data::DataRow::GetColumnValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x416528c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetColumnValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetKeyValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Data::DataRow::*)(::System::Data::DataKey)>(
    &::System::Data::DataRow::GetKeyValues)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x41652dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetKeyValues", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetKeyValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Data::DataRow::*)(
    ::System::Data::DataKey, ::System::Data::DataRowVersion)>(&::System::Data::DataRow::GetKeyValues)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x415ddd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetKeyValues", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataKey>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetCurrentRecordNo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataRow::*)()>(&::System::Data::DataRow::GetCurrentRecordNo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x41652fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetCurrentRecordNo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetDefaultRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataRow::*)()>(&::System::Data::DataRow::GetDefaultRecord)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4163f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetDefaultRecord",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetOriginalRecordNo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataRow::*)()>(&::System::Data::DataRow::GetOriginalRecordNo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4165338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetOriginalRecordNo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetProposedRecordNo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataRow::*)()>(&::System::Data::DataRow::GetProposedRecordNo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x41640a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetProposedRecordNo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetRecordFromVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataRow::*)(::System::Data::DataRowVersion)>(
    &::System::Data::DataRow::GetRecordFromVersion)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4164260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetRecordFromVersion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetDefaultRowVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRowVersion (::System::Data::DataRow::*)(::System::Data::DataViewRowState)>(
    &::System::Data::DataRow::GetDefaultRowVersion)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4165374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetDefaultRowVersion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetRecordState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataViewRowState (::System::Data::DataRow::*)(int32_t)>(&::System::Data::DataRow::GetRecordState)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x41653b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetRecordState", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.HasKeyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataRow::*)(::System::Data::DataKey)>(&::System::Data::DataRow::HasKeyChanged)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4165408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "HasKeyChanged", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.HasKeyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::Data::DataRow::*)(::System::Data::DataKey, ::System::Data::DataRowVersion, ::System::Data::DataRowVersion)>(&::System::Data::DataRow::HasKeyChanged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4165414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "HasKeyChanged", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataKey>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.HasVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataRow::*)(::System::Data::DataRowVersion)>(&::System::Data::DataRow::HasVersion)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x415dfe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "HasVersion", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.HaveValuesChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataRow::*)(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>)>(
    &::System::Data::DataRow::HaveValuesChanged)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4165498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "HaveValuesChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.HaveValuesChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::DataRow::*)(
    ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>, ::System::Data::DataRowVersion, ::System::Data::DataRowVersion)>(&::System::Data::DataRow::HaveValuesChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x41654a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "HaveValuesChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.RejectChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::RejectChanges)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x4165544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "RejectChanges",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.ResetLastChangedColumn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::ResetLastChangedColumn)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4163884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "ResetLastChangedColumn",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.SetKeyValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataKey, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::System::Data::DataRow::SetKeyValues)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4165b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "SetKeyValues", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataKey>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.SetNestedParentRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataRow*, bool)>(&::System::Data::DataRow::SetNestedParentRow)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x4165c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "SetNestedParentRow", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.SetParentRowToDBNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::SetParentRowToDBNull)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x4166040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "SetParentRowToDBNull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.SetParentRowToDBNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataRelation*)>(&::System::Data::DataRow::SetParentRowToDBNull)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x4166324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "SetParentRowToDBNull", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.CopyValuesIntoStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::DataRow::*)(::System::Collections::ArrayList*, ::System::Collections::ArrayList*, int32_t)>(
    &::System::Data::DataRow::CopyValuesIntoStore)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x416648c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "CopyValuesIntoStore", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::DataRow::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::DataRow::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::DataRow::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataColumnCollection*& System::Data::DataRow::__cordl_internal_get__columns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columns;
}
constexpr ::System::Data::DataColumnCollection* const& System::Data::DataRow::__cordl_internal_get__columns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columns;
}
constexpr void System::Data::DataRow::__cordl_internal_set__columns(::System::Data::DataColumnCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____columns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::DataRow::__cordl_internal_get__oldRecord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oldRecord;
}
constexpr int32_t const& System::Data::DataRow::__cordl_internal_get__oldRecord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oldRecord;
}
constexpr void System::Data::DataRow::__cordl_internal_set__oldRecord(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oldRecord = value;
}
constexpr int32_t& System::Data::DataRow::__cordl_internal_get__newRecord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newRecord;
}
constexpr int32_t const& System::Data::DataRow::__cordl_internal_get__newRecord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newRecord;
}
constexpr void System::Data::DataRow::__cordl_internal_set__newRecord(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____newRecord = value;
}
constexpr int32_t& System::Data::DataRow::__cordl_internal_get__tempRecord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tempRecord;
}
constexpr int32_t const& System::Data::DataRow::__cordl_internal_get__tempRecord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tempRecord;
}
constexpr void System::Data::DataRow::__cordl_internal_set__tempRecord(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tempRecord = value;
}
constexpr int64_t& System::Data::DataRow::__cordl_internal_get__rowID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowID;
}
constexpr int64_t const& System::Data::DataRow::__cordl_internal_get__rowID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowID;
}
constexpr void System::Data::DataRow::__cordl_internal_set__rowID(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowID = value;
}
constexpr ::System::Data::DataRowAction& System::Data::DataRow::__cordl_internal_get__action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____action;
}
constexpr ::System::Data::DataRowAction const& System::Data::DataRow::__cordl_internal_get__action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____action;
}
constexpr void System::Data::DataRow::__cordl_internal_set__action(::System::Data::DataRowAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____action = value;
}
constexpr bool& System::Data::DataRow::__cordl_internal_get__inChangingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inChangingEvent;
}
constexpr bool const& System::Data::DataRow::__cordl_internal_get__inChangingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inChangingEvent;
}
constexpr void System::Data::DataRow::__cordl_internal_set__inChangingEvent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inChangingEvent = value;
}
constexpr bool& System::Data::DataRow::__cordl_internal_get__inDeletingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inDeletingEvent;
}
constexpr bool const& System::Data::DataRow::__cordl_internal_get__inDeletingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inDeletingEvent;
}
constexpr void System::Data::DataRow::__cordl_internal_set__inDeletingEvent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inDeletingEvent = value;
}
constexpr bool& System::Data::DataRow::__cordl_internal_get__inCascade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inCascade;
}
constexpr bool const& System::Data::DataRow::__cordl_internal_get__inCascade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inCascade;
}
constexpr void System::Data::DataRow::__cordl_internal_set__inCascade(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inCascade = value;
}
constexpr ::System::Data::DataColumn*& System::Data::DataRow::__cordl_internal_get__lastChangedColumn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastChangedColumn;
}
constexpr ::System::Data::DataColumn* const& System::Data::DataRow::__cordl_internal_get__lastChangedColumn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastChangedColumn;
}
constexpr void System::Data::DataRow::__cordl_internal_set__lastChangedColumn(::System::Data::DataColumn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastChangedColumn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::DataRow::__cordl_internal_get__countColumnChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countColumnChange;
}
constexpr int32_t const& System::Data::DataRow::__cordl_internal_get__countColumnChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countColumnChange;
}
constexpr void System::Data::DataRow::__cordl_internal_set__countColumnChange(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countColumnChange = value;
}
constexpr ::System::Data::DataError*& System::Data::DataRow::__cordl_internal_get__error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error;
}
constexpr ::System::Data::DataError* const& System::Data::DataRow::__cordl_internal_get__error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____error;
}
constexpr void System::Data::DataRow::__cordl_internal_set__error(::System::Data::DataError* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____error)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::DataRow::__cordl_internal_get__rbTreeNodeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rbTreeNodeId;
}
constexpr int32_t const& System::Data::DataRow::__cordl_internal_get__rbTreeNodeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rbTreeNodeId;
}
constexpr void System::Data::DataRow::__cordl_internal_set__rbTreeNodeId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rbTreeNodeId = value;
}
constexpr int32_t& System::Data::DataRow::__cordl_internal_get__objectID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr int32_t const& System::Data::DataRow::__cordl_internal_get__objectID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr void System::Data::DataRow::__cordl_internal_set__objectID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectID = value;
}
inline void System::Data::DataRow::setStaticF_s_objectTypeCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_objectTypeCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Data::DataRow::getStaticF_s_objectTypeCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_objectTypeCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get>();
}
inline void System::Data::DataRow::_ctor(::System::Data::DataRowBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, builder);
}
inline ::System::Data::DataColumn* System::Data::DataRow::get_LastChangedColumn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_LastChangedColumn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*, false>(this, ___internal_method);
}
inline void System::Data::DataRow::set_LastChangedColumn(::System::Data::DataColumn* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "set_LastChangedColumn", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Data::DataRow::get_HasPropertyChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_HasPropertyChanged",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Data::DataRow::get_RBTreeNodeId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_RBTreeNodeId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Data::DataRow::set_RBTreeNodeId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "set_RBTreeNodeId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Data::DataRow::get_RowError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_RowError",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Data::DataRow::set_RowError(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "set_RowError", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::DataRow::RowErrorChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "RowErrorChanged",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int64_t System::Data::DataRow::get_rowID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_rowID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::Data::DataRow::set_rowID(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "set_rowID", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Data::DataRowState System::Data::DataRow::get_RowState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_RowState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowState, false>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::DataRow::get_Table() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_Table",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method);
}
inline void System::Data::DataRow::CheckForLoops(::System::Data::DataRelation* rel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "CheckForLoops", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rel);
}
inline int32_t System::Data::DataRow::GetNestedParentCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetNestedParentCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Data::DataRow::set_Item(::StringW columnName, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, columnName, value);
}
inline ::System::Object* System::Data::DataRow::get_Item(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, column);
}
inline void System::Data::DataRow::set_Item(::System::Data::DataColumn* column, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column, value);
}
inline ::System::Object* System::Data::DataRow::get_Item(::System::Data::DataColumn* column, ::System::Data::DataRowVersion version) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, column, version);
}
inline void System::Data::DataRow::set_ItemArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "set_ItemArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::DataRow::AcceptChanges() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "AcceptChanges",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataRow::BeginEdit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "BeginEdit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Data::DataRow::BeginEditInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "BeginEditInternal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Data::DataRow::CancelEdit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "CancelEdit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataRow::CheckColumn(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "CheckColumn", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline void System::Data::DataRow::CheckInTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "CheckInTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataRow::Delete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "Delete",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataRow::EndEdit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "EndEdit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataRow::SetColumnError(int32_t columnIndex, ::StringW error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "SetColumnError", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, columnIndex, error);
}
inline void System::Data::DataRow::SetColumnError(::System::Data::DataColumn* column, ::StringW error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "SetColumnError", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column, error);
}
inline ::StringW System::Data::DataRow::GetColumnError(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetColumnError", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, column);
}
inline void System::Data::DataRow::ClearErrors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "ClearErrors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataRow::ClearError(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "ClearError", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline bool System::Data::DataRow::get_HasErrors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "get_HasErrors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> System::Data::DataRow::GetColumnsInError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetColumnsInError",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> System::Data::DataRow::GetChildRows(::System::Data::DataRelation* relation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetChildRows", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*>, false>(this, ___internal_method, relation);
}
inline ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> System::Data::DataRow::GetChildRows(::System::Data::DataRelation* relation, ::System::Data::DataRowVersion version) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetChildRows", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*>, false>(this, ___internal_method, relation, version);
}
inline ::System::Data::DataColumn* System::Data::DataRow::GetDataColumn(::StringW columnName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetDataColumn", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*, false>(this, ___internal_method, columnName);
}
inline ::System::Data::DataRow* System::Data::DataRow::GetParentRow(::System::Data::DataRelation* relation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetParentRow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method, relation);
}
inline ::System::Data::DataRow* System::Data::DataRow::GetParentRow(::System::Data::DataRelation* relation, ::System::Data::DataRowVersion version) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetParentRow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method, relation, version);
}
inline ::System::Data::DataRow* System::Data::DataRow::GetNestedParentRow(::System::Data::DataRowVersion version) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetNestedParentRow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*, false>(this, ___internal_method, version);
}
inline ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> System::Data::DataRow::GetParentRows(::System::Data::DataRelation* relation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetParentRows", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*>, false>(this, ___internal_method, relation);
}
inline ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> System::Data::DataRow::GetParentRows(::System::Data::DataRelation* relation, ::System::Data::DataRowVersion version) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetParentRows", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*>, false>(this, ___internal_method, relation, version);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Data::DataRow::GetColumnValues(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetColumnValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, columns);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Data::DataRow::GetColumnValues(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns,
                                                                                                       ::System::Data::DataRowVersion version) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetColumnValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, columns, version);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Data::DataRow::GetKeyValues(::System::Data::DataKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetKeyValues", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, key);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Data::DataRow::GetKeyValues(::System::Data::DataKey key, ::System::Data::DataRowVersion version) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetKeyValues", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataKey>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, key, version);
}
inline int32_t System::Data::DataRow::GetCurrentRecordNo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetCurrentRecordNo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Data::DataRow::GetDefaultRecord() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetDefaultRecord",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Data::DataRow::GetOriginalRecordNo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetOriginalRecordNo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Data::DataRow::GetProposedRecordNo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetProposedRecordNo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Data::DataRow::GetRecordFromVersion(::System::Data::DataRowVersion version) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetRecordFromVersion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, version);
}
inline ::System::Data::DataRowVersion System::Data::DataRow::GetDefaultRowVersion(::System::Data::DataViewRowState viewState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetDefaultRowVersion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataViewRowState>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowVersion, false>(this, ___internal_method, viewState);
}
inline ::System::Data::DataViewRowState System::Data::DataRow::GetRecordState(int32_t record) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "GetRecordState", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataViewRowState, false>(this, ___internal_method, record);
}
inline bool System::Data::DataRow::HasKeyChanged(::System::Data::DataKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "HasKeyChanged", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline bool System::Data::DataRow::HasKeyChanged(::System::Data::DataKey key, ::System::Data::DataRowVersion version1, ::System::Data::DataRowVersion version2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "HasKeyChanged", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataKey>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, version1, version2);
}
inline bool System::Data::DataRow::HasVersion(::System::Data::DataRowVersion version) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "HasVersion", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, version);
}
inline bool System::Data::DataRow::HaveValuesChanged(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "HaveValuesChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, columns);
}
inline bool System::Data::DataRow::HaveValuesChanged(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns, ::System::Data::DataRowVersion version1,
                                                     ::System::Data::DataRowVersion version2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "HaveValuesChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, columns, version1, version2);
}
inline void System::Data::DataRow::RejectChanges() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "RejectChanges",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataRow::ResetLastChangedColumn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "ResetLastChangedColumn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataRow::SetKeyValues(::System::Data::DataKey key, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> keyValues) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "SetKeyValues", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataKey>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, keyValues);
}
inline void System::Data::DataRow::SetNestedParentRow(::System::Data::DataRow* parentRow, bool setNonNested) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "SetNestedParentRow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentRow, setNonNested);
}
inline void System::Data::DataRow::SetParentRowToDBNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "SetParentRowToDBNull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::DataRow::SetParentRowToDBNull(::System::Data::DataRelation* relation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "SetParentRowToDBNull", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, relation);
}
inline int32_t System::Data::DataRow::CopyValuesIntoStore(::System::Collections::ArrayList* storeList, ::System::Collections::ArrayList* nullbitList, int32_t storeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRow*>::get(), "CopyValuesIntoStore", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, storeList, nullbitList, storeIndex);
}
inline ::System::Data::DataRow* System::Data::DataRow::New_ctor(::System::Data::DataRowBuilder* builder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::DataRow*>(builder));
}
// Ctor Parameters []
constexpr ::System::Data::DataRow::DataRow() {}
