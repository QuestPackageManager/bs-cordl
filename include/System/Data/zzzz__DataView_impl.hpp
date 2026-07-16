#pragma once
// IWYU pragma private; include "System/Data/DataView.hpp"
#include "System/ComponentModel/zzzz__MarshalByValueComponent_impl.hpp"
#include "System/Data/zzzz__DataViewRowState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataView_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__IBindingList_def.hpp"
#include "System/ComponentModel/zzzz__ITypedList_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedType_def.hpp"
#include "System/ComponentModel/zzzz__ListSortDirection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/Data/zzzz__DataRowView_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewListener_def.hpp"
#include "System/Data/zzzz__DataViewManager_def.hpp"
#include "System/Data/zzzz__DataViewRowState_def.hpp"
#include "System/Data/zzzz__DataView_def.hpp"
#include "System/Data/zzzz__IFilter_def.hpp"
#include "System/Data/zzzz__Index_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::DataView_DataRowReferenceComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView_DataRowReferenceComparer::*)()>(&::System::Data::DataView_DataRowReferenceComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x602f8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView_DataRowReferenceComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView_DataRowReferenceComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView_DataRowReferenceComparer::*)(::System::Data::DataRow*, ::System::Data::DataRow*)>(
    &::System::Data::DataView_DataRowReferenceComparer::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x602f8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView_DataRowReferenceComparer*>(),
                                                             { "Equals", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView_DataRowReferenceComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataView_DataRowReferenceComparer::*)(::System::Data::DataRow*)>(
    &::System::Data::DataView_DataRowReferenceComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x602f8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView_DataRowReferenceComparer*>(), { "GetHashCode", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
inline void System::Data::DataView_DataRowReferenceComparer::setStaticF_s_default(::System::Data::DataView_DataRowReferenceComparer* value) {
  ::cordl_internals::setStaticField<::System::Data::DataView_DataRowReferenceComparer*, "s_default", ::System::Data::DataView_DataRowReferenceComparer*>(
      std::forward<::System::Data::DataView_DataRowReferenceComparer*>(value));
}
inline ::System::Data::DataView_DataRowReferenceComparer* System::Data::DataView_DataRowReferenceComparer::getStaticF_s_default() {
  return ::cordl_internals::getStaticField<::System::Data::DataView_DataRowReferenceComparer*, "s_default", ::System::Data::DataView_DataRowReferenceComparer*>();
}
inline void System::Data::DataView_DataRowReferenceComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView_DataRowReferenceComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::DataView_DataRowReferenceComparer::Equals(::System::Data::DataRow* x, ::System::Data::DataRow* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView_DataRowReferenceComparer*>(),
                                                           { "Equals", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t System::Data::DataView_DataRowReferenceComparer::GetHashCode(::System::Data::DataRow* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView_DataRowReferenceComparer*>(), { "GetHashCode", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline ::System::Data::DataView_DataRowReferenceComparer* System::Data::DataView_DataRowReferenceComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataView_DataRowReferenceComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>"
constexpr System::Data::DataView_DataRowReferenceComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>*
System::Data::DataView_DataRowReferenceComparer::i___System__Collections__Generic__IEqualityComparer_1___System__Data__DataRow__() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::DataView_DataRowReferenceComparer::DataView_DataRowReferenceComparer() {}
//  Writing Method size for method: ::System::Data::DataView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::Data::DataTable*, bool)>(&::System::Data::DataView::_ctor)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x602bc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::Data::DataTable*)>(&::System::Data::DataView::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x602c17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_AllowDelete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::get_AllowDelete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602c404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_AllowDelete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_AllowEdit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::get_AllowEdit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602c40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_AllowEdit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_AllowNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::get_AllowNew)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602c414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_AllowNew", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataView::*)()>(&::System::Data::DataView::get_Count)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x602c41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_CountFromIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataView::*)()>(&::System::Data::DataView::get_CountFromIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x602c474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_CountFromIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_DataViewManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataViewManager* (::System::Data::DataView::*)()>(&::System::Data::DataView::get_DataViewManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602c490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_DataViewManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_IsOpen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::get_IsOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602c498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_IsOpen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_ICollection_get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602c4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_RowStateFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataViewRowState (::System::Data::DataView::*)()>(&::System::Data::DataView::get_RowStateFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602c4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_RowStateFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataView::*)()>(&::System::Data::DataView::get_Sort)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x602c4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_Sort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.set_Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::StringW)>(&::System::Data::DataView::set_Sort)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x602c504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "set_Sort", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_SortComparison
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Comparison_1<::System::Data::DataRow*>* (::System::Data::DataView::*)()>(&::System::Data::DataView::get_SortComparison)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602c6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_SortComparison", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_ICollection_get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataView::*)()>(&::System::Data::DataView::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x602c6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_Table
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataView::*)()>(&::System::Data::DataView::get_Table)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602c6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_Table", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataView::*)(int32_t)>(&::System::Data::DataView::System_Collections_IList_get_Item)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x602c6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(int32_t, ::System::Object*)>(&::System::Data::DataView::System_Collections_IList_set_Item)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x602c714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowView* (::System::Data::DataView::*)(int32_t)>(&::System::Data::DataView::get_Item)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x602c6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.AddNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowView* (::System::Data::DataView::*)()>(&::System::Data::DataView::AddNew)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x602c83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { ::i2c::class_of<::System::Data::DataView*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.CheckOpen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)()>(&::System::Data::DataView::CheckOpen)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x602cb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "CheckOpen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.CheckSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::StringW)>(&::System::Data::DataView::CheckSort)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x602c678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "CheckSort", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)()>(&::System::Data::DataView::Close)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x602cc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::Array*, int32_t)>(&::System::Data::DataView::CopyTo)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x602cc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::ArrayW<::System::Data::DataRowView*>, int32_t)>(&::System::Data::DataView::CopyTo)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x602ce10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataRowView*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.Delete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(int32_t)>(&::System::Data::DataView::Delete)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x602cfbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "Delete", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.Delete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::Data::DataRow*)>(&::System::Data::DataView::Delete)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x602cfd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "Delete", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(bool)>(&::System::Data::DataView::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x602d350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { ::i2c::class_of<::System::Data::DataView*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.FinishAddNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(bool)>(&::System::Data::DataView::FinishAddNew)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x602d194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "FinishAddNew", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Data::DataView::*)()>(&::System::Data::DataView::GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x602d384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::System_Collections_IList_get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602d404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_get_IsFixedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::System_Collections_IList_get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602d40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.get_IsFixedSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataView::*)(::System::Object*)>(&::System::Data::DataView::System_Collections_IList_Add)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x602d414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.Add", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)()>(&::System::Data::DataView::System_Collections_IList_Clear)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x602d468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)(::System::Object*)>(&::System::Data::DataView::System_Collections_IList_Contains)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x602d490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataView::*)(::System::Object*)>(&::System::Data::DataView::System_Collections_IList_IndexOf)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x602d528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.IndexOf", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataView::*)(::System::Data::DataRowView*)>(&::System::Data::DataView::IndexOf)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x602cb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "IndexOf", {}, { ::i2c::type_of<::System::Data::DataRowView*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.IndexOfDataRowView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataView::*)(::System::Data::DataRowView*)>(&::System::Data::DataView::IndexOfDataRowView)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x602d5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "IndexOfDataRowView", {}, { ::i2c::type_of<::System::Data::DataRowView*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(int32_t, ::System::Object*)>(&::System::Data::DataView::System_Collections_IList_Insert)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x602d628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::Object*)>(&::System::Data::DataView::System_Collections_IList_Remove)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x602d650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_Collections_IList_RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(int32_t)>(&::System::Data::DataView::System_Collections_IList_RemoveAt)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x602d780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.GetFindIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Index* (::System::Data::DataView::*)(::StringW, bool)>(&::System::Data::DataView::GetFindIndex)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x602d79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "GetFindIndex", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_get_AllowNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::System_ComponentModel_IBindingList_get_AllowNew)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602d9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_AllowNew", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_AddNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataView::*)()>(&::System::Data::DataView::System_ComponentModel_IBindingList_AddNew)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x602d9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.AddNew", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_get_AllowEdit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::System_ComponentModel_IBindingList_get_AllowEdit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602d9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_AllowEdit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_get_AllowRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::System_ComponentModel_IBindingList_get_AllowRemove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602d9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_AllowRemove", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_get_SupportsChangeNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::System_ComponentModel_IBindingList_get_SupportsChangeNotification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602d9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_SupportsChangeNotification", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_get_SupportsSearching
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::System_ComponentModel_IBindingList_get_SupportsSearching)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602d9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_SupportsSearching", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_get_SupportsSorting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::System_ComponentModel_IBindingList_get_SupportsSorting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602d9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_SupportsSorting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_get_IsSorted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataView::*)()>(&::System::Data::DataView::System_ComponentModel_IBindingList_get_IsSorted)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x602d9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_IsSorted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_get_SortProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::Data::DataView::*)()>(
    &::System::Data::DataView::System_ComponentModel_IBindingList_get_SortProperty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x602da04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_SortProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.GetSortProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::Data::DataView::*)()>(&::System::Data::DataView::GetSortProperty)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x602da08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "GetSortProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_get_SortDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ListSortDirection (::System::Data::DataView::*)()>(
    &::System::Data::DataView::System_ComponentModel_IBindingList_get_SortDirection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x602da9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_SortDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_AddIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::ComponentModel::PropertyDescriptor*)>(
    &::System::Data::DataView::System_ComponentModel_IBindingList_AddIndex)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x602dad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.AddIndex", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_ApplySort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection)>(
    &::System::Data::DataView::System_ComponentModel_IBindingList_ApplySort)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x602db0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                                             { "System.ComponentModel.IBindingList.ApplySort",
                                                               {},
                                                               { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::ComponentModel::ListSortDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataView::*)(::System::ComponentModel::PropertyDescriptor*, ::System::Object*)>(
    &::System::Data::DataView::System_ComponentModel_IBindingList_Find)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x602dc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                         { "System.ComponentModel.IBindingList.Find", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_RemoveIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::ComponentModel::PropertyDescriptor*)>(
    &::System::Data::DataView::System_ComponentModel_IBindingList_RemoveIndex)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x602de90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                                             { "System.ComponentModel.IBindingList.RemoveIndex", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_IBindingList_RemoveSort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)()>(&::System::Data::DataView::System_ComponentModel_IBindingList_RemoveSort)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x602dec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.RemoveSort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.CreateSortString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataView::*)(::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection)>(
    &::System::Data::DataView::CreateSortString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x602db28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                            { "CreateSortString", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::ComponentModel::ListSortDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_ITypedList_GetListName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataView::*)(::ArrayW<::System::ComponentModel::PropertyDescriptor*>)>(
    &::System::Data::DataView::System_ComponentModel_ITypedList_GetListName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x602df84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                                             { "System.ComponentModel.ITypedList.GetListName", {}, { ::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.System_ComponentModel_ITypedList_GetItemProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::Data::DataView::*)(::ArrayW<::System::ComponentModel::PropertyDescriptor*>)>(
    &::System::Data::DataView::System_ComponentModel_ITypedList_GetItemProperties)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x602dfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                                { "System.ComponentModel.ITypedList.GetItemProperties", {}, { ::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.GetFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::IFilter* (::System::Data::DataView::*)()>(&::System::Data::DataView::GetFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602e09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { ::i2c::class_of<::System::Data::DataView*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.GetRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataView::*)(int32_t)>(&::System::Data::DataView::GetRecord)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x602e0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "GetRecord", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.GetRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataView::*)(int32_t)>(&::System::Data::DataView::GetRow)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x602c73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "GetRow", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.GetRowView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowView* (::System::Data::DataView::*)(int32_t)>(&::System::Data::DataView::GetRowView)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x602cddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "GetRowView", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.GetRowView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowView* (::System::Data::DataView::*)(::System::Data::DataRow*)>(&::System::Data::DataView::GetRowView)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x602c7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "GetRowView", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.IndexListChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::Object*, ::System::ComponentModel::ListChangedEventArgs*)>(
    &::System::Data::DataView::IndexListChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x602e12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { ::i2c::class_of<::System::Data::DataView*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.IndexListChangedInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::ComponentModel::ListChangedEventArgs*)>(&::System::Data::DataView::IndexListChangedInternal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x602e1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "IndexListChangedInternal", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.MaintainDataView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::ComponentModel::ListChangedType, ::System::Data::DataRow*, bool)>(
    &::System::Data::DataView::MaintainDataView)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x602e278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                            { "MaintainDataView", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedType>(), ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.OnListChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::ComponentModel::ListChangedEventArgs*)>(&::System::Data::DataView::OnListChanged)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x602e77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { ::i2c::class_of<::System::Data::DataView*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)()>(&::System::Data::DataView::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x602ea9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.ResetRowViewCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)()>(&::System::Data::DataView::ResetRowViewCache)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x602e520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "ResetRowViewCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.SetDataViewManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::Data::DataViewManager*)>(&::System::Data::DataView::SetDataViewManager)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x602eac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "SetDataViewManager", {}, { ::i2c::type_of<::System::Data::DataViewManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.SetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::StringW, ::System::Data::DataViewRowState, ::System::Data::IFilter*)>(
    &::System::Data::DataView::SetIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602ece8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { ::i2c::class_of<::System::Data::DataView*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.SetIndex2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::StringW, ::System::Data::DataViewRowState, ::System::Data::IFilter*, bool)>(
    &::System::Data::DataView::SetIndex2)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x602c1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Data::DataView*>(),
            { "SetIndex2", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::IFilter*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.UpdateIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)()>(&::System::Data::DataView::UpdateIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x602cc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "UpdateIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.UpdateIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(bool)>(&::System::Data::DataView::UpdateIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602f018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { ::i2c::class_of<::System::Data::DataView*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.UpdateIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(bool, bool)>(&::System::Data::DataView::UpdateIndex)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x602ecf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "UpdateIndex", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.ChildRelationCollectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataView::ChildRelationCollectionChanged)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x602f1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                         { "ChildRelationCollectionChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.ParentRelationCollectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataView::ParentRelationCollectionChanged)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x602f40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                         { "ParentRelationCollectionChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.ColumnCollectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataView::ColumnCollectionChanged)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x602f620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { ::i2c::class_of<::System::Data::DataView*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.ColumnCollectionChangedInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataView::*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*)>(
    &::System::Data::DataView::ColumnCollectionChangedInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x602f834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                         { "ColumnCollectionChangedInternal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataView.get_ObjectID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataView::*)()>(&::System::Data::DataView::get_ObjectID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602f844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_ObjectID", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataViewManager*& System::Data::DataView::__cordl_internal_get__dataViewManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewManager;
}
constexpr ::System::Data::DataViewManager* const& System::Data::DataView::__cordl_internal_get__dataViewManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataViewManager;
}
constexpr void System::Data::DataView::__cordl_internal_set__dataViewManager(::System::Data::DataViewManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataViewManager = value;
}
constexpr ::System::Data::DataTable*& System::Data::DataView::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::DataView::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::DataView::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__locked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locked;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__locked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locked;
}
constexpr void System::Data::DataView::__cordl_internal_set__locked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____locked = value;
}
constexpr ::System::Data::Index*& System::Data::DataView::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr ::System::Data::Index* const& System::Data::DataView::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Data::DataView::__cordl_internal_set__index(::System::Data::Index* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Data::Index*>*& System::Data::DataView::__cordl_internal_get__findIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____findIndexes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Data::Index*>* const& System::Data::DataView::__cordl_internal_get__findIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____findIndexes;
}
constexpr void System::Data::DataView::__cordl_internal_set__findIndexes(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Data::Index*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____findIndexes = value;
}
constexpr ::StringW& System::Data::DataView::__cordl_internal_get__sort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sort;
}
constexpr ::StringW const& System::Data::DataView::__cordl_internal_get__sort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sort;
}
constexpr void System::Data::DataView::__cordl_internal_set__sort(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sort = value;
}
constexpr ::System::Comparison_1<::System::Data::DataRow*>*& System::Data::DataView::__cordl_internal_get__comparison() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparison;
}
constexpr ::System::Comparison_1<::System::Data::DataRow*>* const& System::Data::DataView::__cordl_internal_get__comparison() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparison;
}
constexpr void System::Data::DataView::__cordl_internal_set__comparison(::System::Comparison_1<::System::Data::DataRow*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____comparison = value;
}
constexpr ::System::Data::IFilter*& System::Data::DataView::__cordl_internal_get__rowFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowFilter;
}
constexpr ::System::Data::IFilter* const& System::Data::DataView::__cordl_internal_get__rowFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowFilter;
}
constexpr void System::Data::DataView::__cordl_internal_set__rowFilter(::System::Data::IFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowFilter = value;
}
constexpr ::System::Data::DataViewRowState& System::Data::DataView::__cordl_internal_get__recordStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordStates;
}
constexpr ::System::Data::DataViewRowState const& System::Data::DataView::__cordl_internal_get__recordStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordStates;
}
constexpr void System::Data::DataView::__cordl_internal_set__recordStates(::System::Data::DataViewRowState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordStates = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__shouldOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldOpen;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__shouldOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldOpen;
}
constexpr void System::Data::DataView::__cordl_internal_set__shouldOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldOpen = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__open() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____open;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__open() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____open;
}
constexpr void System::Data::DataView::__cordl_internal_set__open(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____open = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__allowNew() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowNew;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__allowNew() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowNew;
}
constexpr void System::Data::DataView::__cordl_internal_set__allowNew(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowNew = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__allowEdit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowEdit;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__allowEdit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowEdit;
}
constexpr void System::Data::DataView::__cordl_internal_set__allowEdit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowEdit = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__allowDelete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowDelete;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__allowDelete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowDelete;
}
constexpr void System::Data::DataView::__cordl_internal_set__allowDelete(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowDelete = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__applyDefaultSort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyDefaultSort;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__applyDefaultSort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyDefaultSort;
}
constexpr void System::Data::DataView::__cordl_internal_set__applyDefaultSort(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____applyDefaultSort = value;
}
constexpr ::System::Data::DataRow*& System::Data::DataView::__cordl_internal_get__addNewRow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addNewRow;
}
constexpr ::System::Data::DataRow* const& System::Data::DataView::__cordl_internal_get__addNewRow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addNewRow;
}
constexpr void System::Data::DataView::__cordl_internal_set__addNewRow(::System::Data::DataRow* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____addNewRow = value;
}
constexpr ::System::ComponentModel::ListChangedEventArgs*& System::Data::DataView::__cordl_internal_get__addNewMoved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addNewMoved;
}
constexpr ::System::ComponentModel::ListChangedEventArgs* const& System::Data::DataView::__cordl_internal_get__addNewMoved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addNewMoved;
}
constexpr void System::Data::DataView::__cordl_internal_set__addNewMoved(::System::ComponentModel::ListChangedEventArgs* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____addNewMoved = value;
}
constexpr ::System::ComponentModel::ListChangedEventHandler*& System::Data::DataView::__cordl_internal_get__onListChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onListChanged;
}
constexpr ::System::ComponentModel::ListChangedEventHandler* const& System::Data::DataView::__cordl_internal_get__onListChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onListChanged;
}
constexpr void System::Data::DataView::__cordl_internal_set__onListChanged(::System::ComponentModel::ListChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onListChanged = value;
}
constexpr ::StringW& System::Data::DataView::__cordl_internal_get__delayedSort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedSort;
}
constexpr ::StringW const& System::Data::DataView::__cordl_internal_get__delayedSort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedSort;
}
constexpr void System::Data::DataView::__cordl_internal_set__delayedSort(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delayedSort = value;
}
constexpr ::System::Data::DataViewRowState& System::Data::DataView::__cordl_internal_get__delayedRecordStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedRecordStates;
}
constexpr ::System::Data::DataViewRowState const& System::Data::DataView::__cordl_internal_get__delayedRecordStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayedRecordStates;
}
constexpr void System::Data::DataView::__cordl_internal_set__delayedRecordStates(::System::Data::DataViewRowState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delayedRecordStates = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__fInitInProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fInitInProgress;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__fInitInProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fInitInProgress;
}
constexpr void System::Data::DataView::__cordl_internal_set__fInitInProgress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fInitInProgress = value;
}
constexpr bool& System::Data::DataView::__cordl_internal_get__fEndInitInProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fEndInitInProgress;
}
constexpr bool const& System::Data::DataView::__cordl_internal_get__fEndInitInProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fEndInitInProgress;
}
constexpr void System::Data::DataView::__cordl_internal_set__fEndInitInProgress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fEndInitInProgress = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*, ::System::Data::DataRowView*>*& System::Data::DataView::__cordl_internal_get__rowViewCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowViewCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*, ::System::Data::DataRowView*>* const& System::Data::DataView::__cordl_internal_get__rowViewCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowViewCache;
}
constexpr void System::Data::DataView::__cordl_internal_set__rowViewCache(::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*, ::System::Data::DataRowView*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowViewCache = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*, ::System::Data::DataRowView*>*& System::Data::DataView::__cordl_internal_get__rowViewBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowViewBuffer;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*, ::System::Data::DataRowView*>* const& System::Data::DataView::__cordl_internal_get__rowViewBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowViewBuffer;
}
constexpr void System::Data::DataView::__cordl_internal_set__rowViewBuffer(::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*, ::System::Data::DataRowView*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowViewBuffer = value;
}
constexpr ::System::Data::DataViewListener*& System::Data::DataView::__cordl_internal_get__dvListener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dvListener;
}
constexpr ::System::Data::DataViewListener* const& System::Data::DataView::__cordl_internal_get__dvListener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dvListener;
}
constexpr void System::Data::DataView::__cordl_internal_set__dvListener(::System::Data::DataViewListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dvListener = value;
}
constexpr int32_t& System::Data::DataView::__cordl_internal_get__objectID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr int32_t const& System::Data::DataView::__cordl_internal_get__objectID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr void System::Data::DataView::__cordl_internal_set__objectID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectID = value;
}
inline void System::Data::DataView::setStaticF_s_resetEventArgs(::System::ComponentModel::ListChangedEventArgs* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::ListChangedEventArgs*, "s_resetEventArgs", ::System::Data::DataView*>(
      std::forward<::System::ComponentModel::ListChangedEventArgs*>(value));
}
inline ::System::ComponentModel::ListChangedEventArgs* System::Data::DataView::getStaticF_s_resetEventArgs() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::ListChangedEventArgs*, "s_resetEventArgs", ::System::Data::DataView*>();
}
inline void System::Data::DataView::setStaticF_s_objectTypeCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_objectTypeCount", ::System::Data::DataView*>(std::forward<int32_t>(value));
}
inline int32_t System::Data::DataView::getStaticF_s_objectTypeCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_objectTypeCount", ::System::Data::DataView*>();
}
inline void System::Data::DataView::_ctor(::System::Data::DataTable* table, bool locked) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, locked);
}
inline void System::Data::DataView::_ctor(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline bool System::Data::DataView::get_AllowDelete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_AllowDelete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataView::get_AllowEdit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_AllowEdit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataView::get_AllowNew() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_AllowNew", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Data::DataView::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Data::DataView::get_CountFromIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_CountFromIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Data::DataViewManager* System::Data::DataView::get_DataViewManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_DataViewManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataViewManager*>(this, ___internal_method);
}
inline bool System::Data::DataView::get_IsOpen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_IsOpen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataView::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Data::DataViewRowState System::Data::DataView::get_RowStateFilter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_RowStateFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataViewRowState>(this, ___internal_method);
}
inline ::StringW System::Data::DataView::get_Sort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_Sort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataView::set_Sort(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "set_Sort", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Comparison_1<::System::Data::DataRow*>* System::Data::DataView::get_SortComparison() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_SortComparison", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Comparison_1<::System::Data::DataRow*>*>(this, ___internal_method);
}
inline ::System::Object* System::Data::DataView::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::DataView::get_Table() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_Table", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method);
}
inline ::System::Object* System::Data::DataView::System_Collections_IList_get_Item(int32_t recordIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordIndex);
}
inline void System::Data::DataView::System_Collections_IList_set_Item(int32_t recordIndex, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordIndex, value);
}
inline ::System::Data::DataRowView* System::Data::DataView::get_Item(int32_t recordIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowView*>(this, ___internal_method, recordIndex);
}
inline ::System::Data::DataRowView* System::Data::DataView::AddNew() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataView*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowView*>(this, ___internal_method);
}
inline void System::Data::DataView::CheckOpen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "CheckOpen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataView::CheckSort(::StringW sort) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "CheckSort", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sort);
}
inline void System::Data::DataView::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataView::CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline void System::Data::DataView::CopyTo(::ArrayW<::System::Data::DataRowView*> array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataRowView*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline void System::Data::DataView::Delete(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "Delete", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void System::Data::DataView::Delete(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "Delete", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline void System::Data::DataView::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataView*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Data::DataView::FinishAddNew(bool success) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "FinishAddNew", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline ::System::Collections::IEnumerator* System::Data::DataView::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool System::Data::DataView::System_Collections_IList_get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataView::System_Collections_IList_get_IsFixedSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Data::DataView::System_Collections_IList_Add(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.Add", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::Data::DataView::System_Collections_IList_Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::DataView::System_Collections_IList_Contains(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Data::DataView::System_Collections_IList_IndexOf(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.IndexOf", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int32_t System::Data::DataView::IndexOf(::System::Data::DataRowView* rowview) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "IndexOf", {}, { ::i2c::type_of<::System::Data::DataRowView*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, rowview);
}
inline int32_t System::Data::DataView::IndexOfDataRowView(::System::Data::DataRowView* rowview) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "IndexOfDataRowView", {}, { ::i2c::type_of<::System::Data::DataRowView*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, rowview);
}
inline void System::Data::DataView::System_Collections_IList_Insert(int32_t index, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::Data::DataView::System_Collections_IList_Remove(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataView::System_Collections_IList_RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.Collections.IList.RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Data::Index* System::Data::DataView::GetFindIndex(::StringW column, bool keepIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "GetFindIndex", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Index*>(this, ___internal_method, column, keepIndex);
}
inline bool System::Data::DataView::System_ComponentModel_IBindingList_get_AllowNew() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_AllowNew", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Data::DataView::System_ComponentModel_IBindingList_AddNew() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.AddNew", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Data::DataView::System_ComponentModel_IBindingList_get_AllowEdit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_AllowEdit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataView::System_ComponentModel_IBindingList_get_AllowRemove() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_AllowRemove", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataView::System_ComponentModel_IBindingList_get_SupportsChangeNotification() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_SupportsChangeNotification", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataView::System_ComponentModel_IBindingList_get_SupportsSearching() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_SupportsSearching", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataView::System_ComponentModel_IBindingList_get_SupportsSorting() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_SupportsSorting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataView::System_ComponentModel_IBindingList_get_IsSorted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_IsSorted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::Data::DataView::System_ComponentModel_IBindingList_get_SortProperty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_SortProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::Data::DataView::GetSortProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "GetSortProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method);
}
inline ::System::ComponentModel::ListSortDirection System::Data::DataView::System_ComponentModel_IBindingList_get_SortDirection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.get_SortDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ListSortDirection>(this, ___internal_method);
}
inline void System::Data::DataView::System_ComponentModel_IBindingList_AddIndex(::System::ComponentModel::PropertyDescriptor* property) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.AddIndex", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline void System::Data::DataView::System_ComponentModel_IBindingList_ApplySort(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Data::DataView*>(),
          { "System.ComponentModel.IBindingList.ApplySort", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::ComponentModel::ListSortDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, direction);
}
inline int32_t System::Data::DataView::System_ComponentModel_IBindingList_Find(::System::ComponentModel::PropertyDescriptor* property, ::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                       { "System.ComponentModel.IBindingList.Find", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, property, key);
}
inline void System::Data::DataView::System_ComponentModel_IBindingList_RemoveIndex(::System::ComponentModel::PropertyDescriptor* property) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                                           { "System.ComponentModel.IBindingList.RemoveIndex", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline void System::Data::DataView::System_ComponentModel_IBindingList_RemoveSort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "System.ComponentModel.IBindingList.RemoveSort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Data::DataView::CreateSortString(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                          { "CreateSortString", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::ComponentModel::ListSortDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, property, direction);
}
inline ::StringW System::Data::DataView::System_ComponentModel_ITypedList_GetListName(::ArrayW<::System::ComponentModel::PropertyDescriptor*> listAccessors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                                           { "System.ComponentModel.ITypedList.GetListName", {}, { ::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, listAccessors);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::Data::DataView::System_ComponentModel_ITypedList_GetItemProperties(::ArrayW<::System::ComponentModel::PropertyDescriptor*> listAccessors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                              { "System.ComponentModel.ITypedList.GetItemProperties", {}, { ::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, listAccessors);
}
inline ::System::Data::IFilter* System::Data::DataView::GetFilter() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataView*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::IFilter*>(this, ___internal_method);
}
inline int32_t System::Data::DataView::GetRecord(int32_t recordIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "GetRecord", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordIndex);
}
inline ::System::Data::DataRow* System::Data::DataView::GetRow(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "GetRow", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method, index);
}
inline ::System::Data::DataRowView* System::Data::DataView::GetRowView(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "GetRowView", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowView*>(this, ___internal_method, record);
}
inline ::System::Data::DataRowView* System::Data::DataView::GetRowView(::System::Data::DataRow* dr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "GetRowView", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowView*>(this, ___internal_method, dr);
}
inline void System::Data::DataView::IndexListChanged(::System::Object* sender, ::System::ComponentModel::ListChangedEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataView*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void System::Data::DataView::IndexListChangedInternal(::System::ComponentModel::ListChangedEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "IndexListChangedInternal", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Data::DataView::MaintainDataView(::System::ComponentModel::ListChangedType changedType, ::System::Data::DataRow* row, bool trackAddRemove) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                          { "MaintainDataView", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedType>(), ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changedType, row, trackAddRemove);
}
inline void System::Data::DataView::OnListChanged(::System::ComponentModel::ListChangedEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataView*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Data::DataView::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataView::ResetRowViewCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "ResetRowViewCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataView::SetDataViewManager(::System::Data::DataViewManager* dataViewManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "SetDataViewManager", {}, { ::i2c::type_of<::System::Data::DataViewManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataViewManager);
}
inline void System::Data::DataView::SetIndex(::StringW newSort, ::System::Data::DataViewRowState newRowStates, ::System::Data::IFilter* newRowFilter) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataView*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSort, newRowStates, newRowFilter);
}
inline void System::Data::DataView::SetIndex2(::StringW newSort, ::System::Data::DataViewRowState newRowStates, ::System::Data::IFilter* newRowFilter, bool fireEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Data::DataView*>(),
                       { "SetIndex2", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::IFilter*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSort, newRowStates, newRowFilter, fireEvent);
}
inline void System::Data::DataView::UpdateIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "UpdateIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataView::UpdateIndex(bool force) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataView*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void System::Data::DataView::UpdateIndex(bool force, bool fireEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "UpdateIndex", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force, fireEvent);
}
inline void System::Data::DataView::ChildRelationCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                       { "ChildRelationCollectionChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void System::Data::DataView::ParentRelationCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                       { "ParentRelationCollectionChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void System::Data::DataView::ColumnCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataView*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void System::Data::DataView::ColumnCollectionChangedInternal(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(),
                                       { "ColumnCollectionChangedInternal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::CollectionChangeEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline int32_t System::Data::DataView::get_ObjectID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataView*>(), { "get_ObjectID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Data::DataView* System::Data::DataView::New_ctor(::System::Data::DataTable* table, bool locked) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataView*>(table, locked));
}
inline ::System::Data::DataView* System::Data::DataView::New_ctor(::System::Data::DataTable* table) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataView*>(table));
}
/// @brief Convert operator to "::System::ComponentModel::IBindingList"
constexpr System::Data::DataView::operator ::System::ComponentModel::IBindingList*() noexcept {
  return static_cast<::System::ComponentModel::IBindingList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IBindingList"
constexpr ::System::ComponentModel::IBindingList* System::Data::DataView::i___System__ComponentModel__IBindingList() noexcept {
  return static_cast<::System::ComponentModel::IBindingList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr System::Data::DataView::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* System::Data::DataView::i___System__Collections__IList() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Data::DataView::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Data::DataView::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Data::DataView::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Data::DataView::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::ITypedList"
constexpr System::Data::DataView::operator ::System::ComponentModel::ITypedList*() noexcept {
  return static_cast<::System::ComponentModel::ITypedList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ITypedList"
constexpr ::System::ComponentModel::ITypedList* System::Data::DataView::i___System__ComponentModel__ITypedList() noexcept {
  return static_cast<::System::ComponentModel::ITypedList*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::DataView::DataView() {}
