#pragma once
// IWYU pragma private; include "System\Data\Index.hpp"
#include "System/ComponentModel/zzzz__ListChangedType_impl.hpp"
#include "System/Data/zzzz__DataViewRowState_impl.hpp"
#include "System/Data/zzzz__IndexField_impl.hpp"
#include "System/Data/zzzz__RBTree_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__Index_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedType_def.hpp"
#include "System/Data/zzzz__DataColumnCollection_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewListener_def.hpp"
#include "System/Data/zzzz__DataViewRowState_def.hpp"
#include "System/Data/zzzz__IFilter_def.hpp"
#include "System/Data/zzzz__IndexField_def.hpp"
#include "System/Data/zzzz__Index_def.hpp"
#include "System/Data/zzzz__Listeners_1_def.hpp"
#include "System/Data/zzzz__RBTree_1_def.hpp"
#include "System/Data/zzzz__Range_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
//  Writing Method size for method: ::System::Data::Index_IndexTree._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index_IndexTree::*)(::System::Data::Index*)>(&::System::Data::Index_IndexTree::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x604fabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index_IndexTree*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::Index*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index_IndexTree.CompareNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index_IndexTree::*)(int32_t, int32_t)>(&::System::Data::Index_IndexTree::CompareNode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60503f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Index_IndexTree*>(), { ::i2c::class_of<::System::Data::Index_IndexTree*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index_IndexTree.CompareSateliteTreeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index_IndexTree::*)(int32_t, int32_t)>(&::System::Data::Index_IndexTree::CompareSateliteTreeNode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6050408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Index_IndexTree*>(), { ::i2c::class_of<::System::Data::Index_IndexTree*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::Data::Index*& System::Data::Index_IndexTree::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr ::System::Data::Index* const& System::Data::Index_IndexTree::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Data::Index_IndexTree::__cordl_internal_set__index(::System::Data::Index* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
inline void System::Data::Index_IndexTree::_ctor(::System::Data::Index* index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index_IndexTree*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::Index*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline int32_t System::Data::Index_IndexTree::CompareNode(int32_t record1, int32_t record2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Index_IndexTree*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record1, record2);
}
inline int32_t System::Data::Index_IndexTree::CompareSateliteTreeNode(int32_t record1, int32_t record2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Index_IndexTree*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record1, record2);
}
inline ::System::Data::Index_IndexTree* System::Data::Index_IndexTree::New_ctor(::System::Data::Index* index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Index_IndexTree*>(index));
}
// Ctor Parameters []
constexpr ::System::Data::Index_IndexTree::Index_IndexTree() {}
//  Writing Method size for method: ::System::Data::Index___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index___c::*)()>(&::System::Data::Index___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6050470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index___c.__ctor_b__22_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Index___c::*)(::System::Data::DataViewListener*)>(&::System::Data::Index___c::__ctor_b__22_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6050474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index___c*>(), { "<.ctor>b__22_0", {}, { ::i2c::type_of<::System::Data::DataViewListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index___c._OnListChanged_b__85_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index___c::*)(::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedEventArgs*, bool, bool)>(
    &::System::Data::Index___c::_OnListChanged_b__85_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6050480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::Index___c*>(), { "<OnListChanged>b__85_0",
                                                                             {},
                                                                             { ::i2c::type_of<::System::Data::DataViewListener*>(), ::i2c::type_of<::System::ComponentModel::ListChangedEventArgs*>(),
                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void System::Data::Index___c::setStaticF___9(::System::Data::Index___c* value) {
  ::cordl_internals::setStaticField<::System::Data::Index___c*, "<>9", ::System::Data::Index___c*>(std::forward<::System::Data::Index___c*>(value));
}
inline ::System::Data::Index___c* System::Data::Index___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Data::Index___c*, "<>9", ::System::Data::Index___c*>();
}
inline void System::Data::Index___c::setStaticF___9__22_0(::System::Data::Listeners_1_Func_2<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Data::Listeners_1_Func_2<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, bool>*, "<>9__22_0", ::System::Data::Index___c*>(
      std::forward<::System::Data::Listeners_1_Func_2<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, bool>*>(value));
}
inline ::System::Data::Listeners_1_Func_2<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, bool>* System::Data::Index___c::getStaticF___9__22_0() {
  return ::cordl_internals::getStaticField<::System::Data::Listeners_1_Func_2<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, bool>*, "<>9__22_0", ::System::Data::Index___c*>();
}
inline void System::Data::Index___c::setStaticF___9__85_0(
    ::System::Data::Listeners_1_Action_4<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedEventArgs*, bool, bool>* value) {
  ::cordl_internals::setStaticField<
      ::System::Data::Listeners_1_Action_4<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedEventArgs*, bool, bool>*, "<>9__85_0",
      ::System::Data::Index___c*>(
      std::forward<::System::Data::Listeners_1_Action_4<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedEventArgs*, bool, bool>*>(value));
}
inline ::System::Data::Listeners_1_Action_4<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedEventArgs*, bool, bool>*
System::Data::Index___c::getStaticF___9__85_0() {
  return ::cordl_internals::getStaticField<
      ::System::Data::Listeners_1_Action_4<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedEventArgs*, bool, bool>*, "<>9__85_0",
      ::System::Data::Index___c*>();
}
inline void System::Data::Index___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::Index___c::__ctor_b__22_0(::System::Data::DataViewListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index___c*>(), { "<.ctor>b__22_0", {}, { ::i2c::type_of<::System::Data::DataViewListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, listener);
}
inline void System::Data::Index___c::_OnListChanged_b__85_0(::System::Data::DataViewListener* listener, ::System::ComponentModel::ListChangedEventArgs* args, bool arg2, bool arg3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::Index___c*>(), { "<OnListChanged>b__85_0",
                                                                           {},
                                                                           { ::i2c::type_of<::System::Data::DataViewListener*>(), ::i2c::type_of<::System::ComponentModel::ListChangedEventArgs*>(),
                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener, args, arg2, arg3);
}
inline ::System::Data::Index___c* System::Data::Index___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Index___c*>());
}
// Ctor Parameters []
constexpr ::System::Data::Index___c::Index___c() {}
//  Writing Method size for method: ::System::Data::Index___c__DisplayClass86_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index___c__DisplayClass86_0::*)()>(&::System::Data::Index___c__DisplayClass86_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x604fc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index___c__DisplayClass86_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index___c__DisplayClass86_0._MaintainDataView_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index___c__DisplayClass86_0::*)(
    ::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedType, ::System::Data::DataRow*, bool)>(&::System::Data::Index___c__DisplayClass86_0::_MaintainDataView_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x605049c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index___c__DisplayClass86_0*>(),
                                                             { "<MaintainDataView>b__0",
                                                               {},
                                                               { ::i2c::type_of<::System::Data::DataViewListener*>(), ::i2c::type_of<::System::ComponentModel::ListChangedType>(),
                                                                 ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::ListChangedType& System::Data::Index___c__DisplayClass86_0::__cordl_internal_get_changedType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changedType;
}
constexpr ::System::ComponentModel::ListChangedType const& System::Data::Index___c__DisplayClass86_0::__cordl_internal_get_changedType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changedType;
}
constexpr void System::Data::Index___c__DisplayClass86_0::__cordl_internal_set_changedType(::System::ComponentModel::ListChangedType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___changedType = value;
}
inline void System::Data::Index___c__DisplayClass86_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index___c__DisplayClass86_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::Index___c__DisplayClass86_0::_MaintainDataView_b__0(::System::Data::DataViewListener* listener, ::System::ComponentModel::ListChangedType type, ::System::Data::DataRow* row,
                                                                              bool track) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index___c__DisplayClass86_0*>(),
                                                           { "<MaintainDataView>b__0",
                                                             {},
                                                             { ::i2c::type_of<::System::Data::DataViewListener*>(), ::i2c::type_of<::System::ComponentModel::ListChangedType>(),
                                                               ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener, type, row, track);
}
inline ::System::Data::Index___c__DisplayClass86_0* System::Data::Index___c__DisplayClass86_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Index___c__DisplayClass86_0*>());
}
// Ctor Parameters []
constexpr ::System::Data::Index___c__DisplayClass86_0::Index___c__DisplayClass86_0() {}
//  Writing Method size for method: ::System::Data::Index._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(::System::Data::DataTable*, ::ArrayW<::System::Data::IndexField>, ::System::Data::DataViewRowState,
                                                                                       ::System::Data::IFilter*)>(&::System::Data::Index::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x604d158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::ArrayW<::System::Data::IndexField>>(),
                                                                                               ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::IFilter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(::System::Data::DataTable*, ::System::Comparison_1<::System::Data::DataRow*>*, ::System::Data::DataViewRowState,
                                                                                       ::System::Data::IFilter*)>(&::System::Data::Index::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x604d46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { ".ctor",
                                                                         {},
                                                                         { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Comparison_1<::System::Data::DataRow*>*>(),
                                                                           ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::IFilter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetAllFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::IndexField> (*)(::System::Data::DataColumnCollection*)>(&::System::Data::Index::GetAllFields)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x604d4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetAllFields", {}, { ::i2c::type_of<::System::Data::DataColumnCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(::System::Data::DataTable*, ::ArrayW<::System::Data::IndexField>,
                                                                                       ::System::Comparison_1<::System::Data::DataRow*>*, ::System::Data::DataViewRowState, ::System::Data::IFilter*)>(
    &::System::Data::Index::_ctor)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x604d168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::ArrayW<::System::Data::IndexField>>(),
                                                                                               ::i2c::type_of<::System::Comparison_1<::System::Data::DataRow*>*>(),
                                                                                               ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::IFilter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.Equal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Index::*)(::ArrayW<::System::Data::IndexField>, ::System::Data::DataViewRowState, ::System::Data::IFilter*)>(
    &::System::Data::Index::Equal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x604d948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Data::Index*>(),
                         { "Equal", {}, { ::i2c::type_of<::ArrayW<::System::Data::IndexField>>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::IFilter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_HasRemoteAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Index::*)()>(&::System::Data::Index::get_HasRemoteAggregate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604d9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_HasRemoteAggregate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_ObjectID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)()>(&::System::Data::Index::get_ObjectID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604d9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_ObjectID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_RecordStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataViewRowState (::System::Data::Index::*)()>(&::System::Data::Index::get_RecordStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604d9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_RecordStates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_RowFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::IFilter* (::System::Data::Index::*)()>(&::System::Data::Index::get_RowFilter)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x604d9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_RowFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::GetRecord)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x604da78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetRecord", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_HasDuplicates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Index::*)()>(&::System::Data::Index::get_HasDuplicates)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x604daf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_HasDuplicates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_RecordCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)()>(&::System::Data::Index::get_RecordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604db50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_RecordCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.AcceptRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::AcceptRecord)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x604db58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "AcceptRecord", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.AcceptRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Index::*)(int32_t, ::System::Data::IFilter*)>(&::System::Data::Index::AcceptRecord)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x604db84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "AcceptRecord", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::IFilter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.ListChangedAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(::System::Data::DataViewListener*)>(&::System::Data::Index::ListChangedAdd)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x604dd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "ListChangedAdd", {}, { ::i2c::type_of<::System::Data::DataViewListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.ListChangedRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(::System::Data::DataViewListener*)>(&::System::Data::Index::ListChangedRemove)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x604dd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "ListChangedRemove", {}, { ::i2c::type_of<::System::Data::DataViewListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_RefCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)()>(&::System::Data::Index::get_RefCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604ddf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_RefCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.AddRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)()>(&::System::Data::Index::AddRef)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x604ddf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "AddRef", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.RemoveRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)()>(&::System::Data::Index::RemoveRef)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x604dfec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "RemoveRef", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.ApplyChangeAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(int32_t, int32_t, int32_t)>(&::System::Data::Index::ApplyChangeAction)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x604e1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "ApplyChangeAction", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.CheckUnique
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Index::*)()>(&::System::Data::Index::CheckUnique)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x604e644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "CheckUnique", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.CompareRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)(int32_t, int32_t)>(&::System::Data::Index::CompareRecords)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x604e65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "CompareRecords", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.CompareDataRows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)(int32_t, int32_t)>(&::System::Data::Index::CompareDataRows)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x604e7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "CompareDataRows", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.CompareDuplicateRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)(int32_t, int32_t)>(&::System::Data::Index::CompareDuplicateRecords)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x604e81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "CompareDuplicateRecords", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.CompareRecordToKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)(int32_t, ::ArrayW<::System::Object*>)>(&::System::Data::Index::CompareRecordToKey)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x604e9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "CompareRecordToKey", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.DeleteRecordFromIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::DeleteRecordFromIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604eac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "DeleteRecordFromIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.DeleteRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::DeleteRecord)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604e5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "DeleteRecord", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.DeleteRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(int32_t, bool)>(&::System::Data::Index::DeleteRecord)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x604eacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "DeleteRecord", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::RBTree_1_RBTreeEnumerator<int32_t> (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x604edbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetEnumerator", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::GetIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x604e5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)(int32_t, int32_t)>(&::System::Data::Index::GetIndex)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x604e458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetUniqueKeyValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Data::Index::*)()>(&::System::Data::Index::GetUniqueKeyValues)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x604568c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetUniqueKeyValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.FindNodeByKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)(::System::Object*)>(&::System::Data::Index::FindNodeByKey)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x604f064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "FindNodeByKey", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.FindNodeByKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)(::ArrayW<::System::Object*>)>(&::System::Data::Index::FindNodeByKeys)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x604f290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "FindNodeByKeys", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.FindNodeByKeyRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::FindNodeByKeyRecord)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x604f4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "FindNodeByKeyRecord", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetRangeFromNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Range (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::GetRangeFromNode)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x604f5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetRangeFromNode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.FindRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Range (::System::Data::Index::*)(::System::Object*)>(&::System::Data::Index::FindRecords)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x604f71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "FindRecords", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.FindRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Range (::System::Data::Index::*)(::ArrayW<::System::Object*>)>(&::System::Data::Index::FindRecords)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60457e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "FindRecords", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.FireResetEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)()>(&::System::Data::Index::FireResetEvent)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x604f740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "FireResetEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetChangeAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)(::System::Data::DataViewRowState, ::System::Data::DataViewRowState)>(
    &::System::Data::Index::GetChangeAction)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x604fa50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(),
                                                             { "GetChangeAction", {}, { ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::DataViewRowState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetReplaceAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Data::DataViewRowState)>(&::System::Data::Index::GetReplaceAction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x604fa6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetReplaceAction", {}, { ::i2c::type_of<::System::Data::DataViewRowState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::GetRow)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x60460fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetRow", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetRows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataRow*> (::System::Data::Index::*)(::ArrayW<::System::Object*>)>(&::System::Data::Index::GetRows)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x604fa8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetRows", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetRows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataRow*> (::System::Data::Index::*)(::System::Data::Range)>(&::System::Data::Index::GetRows)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6045804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetRows", {}, { ::i2c::type_of<::System::Data::Range>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.InitRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(::System::Data::IFilter*)>(&::System::Data::Index::InitRecords)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x604d590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "InitRecords", {}, { ::i2c::type_of<::System::Data::IFilter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.InsertRecordToIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::InsertRecordToIndex)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x604fb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "InsertRecordToIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.InsertRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Index::*)(int32_t, bool)>(&::System::Data::Index::InsertRecord)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x604e250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "InsertRecord", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.IsKeyInIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Index::*)(::System::Object*)>(&::System::Data::Index::IsKeyInIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x604fb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "IsKeyInIndex", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.IsKeyInIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Index::*)(::ArrayW<::System::Object*>)>(&::System::Data::Index::IsKeyInIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60457c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "IsKeyInIndex", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.IsKeyRecordInIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::IsKeyRecordInIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x604fb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "IsKeyRecordInIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_DoListChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Index::*)()>(&::System::Data::Index::get_DoListChanged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x604f838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_DoListChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.OnListChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(::System::ComponentModel::ListChangedType, int32_t, int32_t)>(&::System::Data::Index::OnListChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x604fbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(),
                                                { "OnListChanged", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.OnListChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(::System::ComponentModel::ListChangedType, int32_t)>(&::System::Data::Index::OnListChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x604ed28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "OnListChanged", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.OnListChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(::System::ComponentModel::ListChangedEventArgs*)>(&::System::Data::Index::OnListChanged)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x604f8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "OnListChanged", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.MaintainDataView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(::System::ComponentModel::ListChangedType, int32_t, bool)>(&::System::Data::Index::MaintainDataView)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x604ec04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(),
                                                { "MaintainDataView", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)()>(&::System::Data::Index::Reset)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x604fc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.RecordChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(int32_t)>(&::System::Data::Index::RecordChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x604fd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "RecordChanged", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.RecordChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(int32_t, int32_t)>(&::System::Data::Index::RecordChanged)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x604fe20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "RecordChanged", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.RecordStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(int32_t, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState)>(
    &::System::Data::Index::RecordStateChanged)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x604ff58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(),
                            { "RecordStateChanged", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::DataViewRowState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.RecordStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(int32_t, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState, int32_t,
                                                                                       ::System::Data::DataViewRowState, ::System::Data::DataViewRowState)>(
    &::System::Data::Index::RecordStateChanged)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x6050064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(),
                                                { "RecordStateChanged",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::DataViewRowState>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::DataViewRowState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.get_Table
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::Index::*)()>(&::System::Data::Index::get_Table)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60503ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_Table", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Index.GetUniqueKeyValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Index::*)(::System::Collections::Generic::List_1<::ArrayW<::System::Object*>>*, int32_t)>(
    &::System::Data::Index::GetUniqueKeyValues)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x604ee28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(),
                                                { "GetUniqueKeyValues", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::ArrayW<::System::Object*>>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::Index::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::Index::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::Index::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
constexpr ::ArrayW<::System::Data::IndexField>& System::Data::Index::__cordl_internal_get__indexFields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexFields;
}
constexpr ::ArrayW<::System::Data::IndexField> const& System::Data::Index::__cordl_internal_get__indexFields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexFields;
}
constexpr void System::Data::Index::__cordl_internal_set__indexFields(::ArrayW<::System::Data::IndexField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____indexFields = value;
}
constexpr ::System::Comparison_1<::System::Data::DataRow*>*& System::Data::Index::__cordl_internal_get__comparison() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparison;
}
constexpr ::System::Comparison_1<::System::Data::DataRow*>* const& System::Data::Index::__cordl_internal_get__comparison() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparison;
}
constexpr void System::Data::Index::__cordl_internal_set__comparison(::System::Comparison_1<::System::Data::DataRow*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____comparison = value;
}
constexpr ::System::Data::DataViewRowState& System::Data::Index::__cordl_internal_get__recordStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordStates;
}
constexpr ::System::Data::DataViewRowState const& System::Data::Index::__cordl_internal_get__recordStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordStates;
}
constexpr void System::Data::Index::__cordl_internal_set__recordStates(::System::Data::DataViewRowState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordStates = value;
}
constexpr ::System::WeakReference*& System::Data::Index::__cordl_internal_get__rowFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowFilter;
}
constexpr ::System::WeakReference* const& System::Data::Index::__cordl_internal_get__rowFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowFilter;
}
constexpr void System::Data::Index::__cordl_internal_set__rowFilter(::System::WeakReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowFilter = value;
}
constexpr ::System::Data::Index_IndexTree*& System::Data::Index::__cordl_internal_get__records() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____records;
}
constexpr ::System::Data::Index_IndexTree* const& System::Data::Index::__cordl_internal_get__records() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____records;
}
constexpr void System::Data::Index::__cordl_internal_set__records(::System::Data::Index_IndexTree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____records = value;
}
constexpr int32_t& System::Data::Index::__cordl_internal_get__recordCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordCount;
}
constexpr int32_t const& System::Data::Index::__cordl_internal_get__recordCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordCount;
}
constexpr void System::Data::Index::__cordl_internal_set__recordCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordCount = value;
}
constexpr int32_t& System::Data::Index::__cordl_internal_get__refCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refCount;
}
constexpr int32_t const& System::Data::Index::__cordl_internal_get__refCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refCount;
}
constexpr void System::Data::Index::__cordl_internal_set__refCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refCount = value;
}
constexpr ::System::Data::Listeners_1<::System::Data::DataViewListener*>*& System::Data::Index::__cordl_internal_get__listeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listeners;
}
constexpr ::System::Data::Listeners_1<::System::Data::DataViewListener*>* const& System::Data::Index::__cordl_internal_get__listeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listeners;
}
constexpr void System::Data::Index::__cordl_internal_set__listeners(::System::Data::Listeners_1<::System::Data::DataViewListener*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____listeners = value;
}
constexpr bool& System::Data::Index::__cordl_internal_get__suspendEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suspendEvents;
}
constexpr bool const& System::Data::Index::__cordl_internal_get__suspendEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suspendEvents;
}
constexpr void System::Data::Index::__cordl_internal_set__suspendEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____suspendEvents = value;
}
constexpr bool& System::Data::Index::__cordl_internal_get__isSharable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSharable;
}
constexpr bool const& System::Data::Index::__cordl_internal_get__isSharable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSharable;
}
constexpr void System::Data::Index::__cordl_internal_set__isSharable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isSharable = value;
}
constexpr bool& System::Data::Index::__cordl_internal_get__hasRemoteAggregate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRemoteAggregate;
}
constexpr bool const& System::Data::Index::__cordl_internal_get__hasRemoteAggregate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRemoteAggregate;
}
constexpr void System::Data::Index::__cordl_internal_set__hasRemoteAggregate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasRemoteAggregate = value;
}
constexpr int32_t& System::Data::Index::__cordl_internal_get__objectID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr int32_t const& System::Data::Index::__cordl_internal_get__objectID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectID;
}
constexpr void System::Data::Index::__cordl_internal_set__objectID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectID = value;
}
inline void System::Data::Index::setStaticF_s_objectTypeCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_objectTypeCount", ::System::Data::Index*>(std::forward<int32_t>(value));
}
inline int32_t System::Data::Index::getStaticF_s_objectTypeCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_objectTypeCount", ::System::Data::Index*>();
}
inline void System::Data::Index::_ctor(::System::Data::DataTable* table, ::ArrayW<::System::Data::IndexField> indexFields, ::System::Data::DataViewRowState recordStates,
                                       ::System::Data::IFilter* rowFilter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::ArrayW<::System::Data::IndexField>>(),
                                                                                             ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::IFilter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, indexFields, recordStates, rowFilter);
}
inline void System::Data::Index::_ctor(::System::Data::DataTable* table, ::System::Comparison_1<::System::Data::DataRow*>* comparison, ::System::Data::DataViewRowState recordStates,
                                       ::System::Data::IFilter* rowFilter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { ".ctor",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::System::Comparison_1<::System::Data::DataRow*>*>(),
                                                                                      ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::IFilter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, comparison, recordStates, rowFilter);
}
inline ::ArrayW<::System::Data::IndexField> System::Data::Index::GetAllFields(::System::Data::DataColumnCollection* columns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetAllFields", {}, { ::i2c::type_of<::System::Data::DataColumnCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::IndexField>>(nullptr, ___internal_method, columns);
}
inline void System::Data::Index::_ctor(::System::Data::DataTable* table, ::ArrayW<::System::Data::IndexField> indexFields, ::System::Comparison_1<::System::Data::DataRow*>* comparison,
                                       ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::ArrayW<::System::Data::IndexField>>(),
                                                                                             ::i2c::type_of<::System::Comparison_1<::System::Data::DataRow*>*>(),
                                                                                             ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::IFilter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, indexFields, comparison, recordStates, rowFilter);
}
inline bool System::Data::Index::Equal(::ArrayW<::System::Data::IndexField> indexDesc, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Data::Index*>(),
                       { "Equal", {}, { ::i2c::type_of<::ArrayW<::System::Data::IndexField>>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::IFilter*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, indexDesc, recordStates, rowFilter);
}
inline bool System::Data::Index::get_HasRemoteAggregate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_HasRemoteAggregate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Data::Index::get_ObjectID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_ObjectID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Data::DataViewRowState System::Data::Index::get_RecordStates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_RecordStates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataViewRowState>(this, ___internal_method);
}
inline ::System::Data::IFilter* System::Data::Index::get_RowFilter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_RowFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::IFilter*>(this, ___internal_method);
}
inline int32_t System::Data::Index::GetRecord(int32_t recordIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetRecord", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordIndex);
}
inline bool System::Data::Index::get_HasDuplicates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_HasDuplicates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Data::Index::get_RecordCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_RecordCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Data::Index::AcceptRecord(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "AcceptRecord", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record);
}
inline bool System::Data::Index::AcceptRecord(int32_t record, ::System::Data::IFilter* filter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "AcceptRecord", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::IFilter*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record, filter);
}
inline void System::Data::Index::ListChangedAdd(::System::Data::DataViewListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "ListChangedAdd", {}, { ::i2c::type_of<::System::Data::DataViewListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void System::Data::Index::ListChangedRemove(::System::Data::DataViewListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "ListChangedRemove", {}, { ::i2c::type_of<::System::Data::DataViewListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline int32_t System::Data::Index::get_RefCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_RefCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::Index::AddRef() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "AddRef", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Data::Index::RemoveRef() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "RemoveRef", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::Index::ApplyChangeAction(int32_t record, int32_t action, int32_t changeRecord) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "ApplyChangeAction", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, action, changeRecord);
}
inline bool System::Data::Index::CheckUnique() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "CheckUnique", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Data::Index::CompareRecords(int32_t record1, int32_t record2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "CompareRecords", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record1, record2);
}
inline int32_t System::Data::Index::CompareDataRows(int32_t record1, int32_t record2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "CompareDataRows", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record1, record2);
}
inline int32_t System::Data::Index::CompareDuplicateRecords(int32_t record1, int32_t record2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "CompareDuplicateRecords", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record1, record2);
}
inline int32_t System::Data::Index::CompareRecordToKey(int32_t record1, ::ArrayW<::System::Object*> vals) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "CompareRecordToKey", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record1, vals);
}
inline void System::Data::Index::DeleteRecordFromIndex(int32_t recordIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "DeleteRecordFromIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordIndex);
}
inline void System::Data::Index::DeleteRecord(int32_t recordIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "DeleteRecord", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordIndex);
}
inline void System::Data::Index::DeleteRecord(int32_t recordIndex, bool fireEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "DeleteRecord", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordIndex, fireEvent);
}
inline ::System::Data::RBTree_1_RBTreeEnumerator<int32_t> System::Data::Index::GetEnumerator(int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetEnumerator", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::RBTree_1_RBTreeEnumerator<int32_t>>(this, ___internal_method, startIndex);
}
inline int32_t System::Data::Index::GetIndex(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record);
}
inline int32_t System::Data::Index::GetIndex(int32_t record, int32_t changeRecord) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record, changeRecord);
}
inline ::ArrayW<::System::Object*> System::Data::Index::GetUniqueKeyValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetUniqueKeyValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline int32_t System::Data::Index::FindNodeByKey(::System::Object* originalKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "FindNodeByKey", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, originalKey);
}
inline int32_t System::Data::Index::FindNodeByKeys(::ArrayW<::System::Object*> originalKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "FindNodeByKeys", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, originalKey);
}
inline int32_t System::Data::Index::FindNodeByKeyRecord(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "FindNodeByKeyRecord", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record);
}
inline ::System::Data::Range System::Data::Index::GetRangeFromNode(int32_t nodeId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetRangeFromNode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Range>(this, ___internal_method, nodeId);
}
inline ::System::Data::Range System::Data::Index::FindRecords(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "FindRecords", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Range>(this, ___internal_method, key);
}
inline ::System::Data::Range System::Data::Index::FindRecords(::ArrayW<::System::Object*> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "FindRecords", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Range>(this, ___internal_method, key);
}
inline void System::Data::Index::FireResetEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "FireResetEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Data::Index::GetChangeAction(::System::Data::DataViewRowState oldState, ::System::Data::DataViewRowState newState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(),
                                                           { "GetChangeAction", {}, { ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::DataViewRowState>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, oldState, newState);
}
inline int32_t System::Data::Index::GetReplaceAction(::System::Data::DataViewRowState oldState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetReplaceAction", {}, { ::i2c::type_of<::System::Data::DataViewRowState>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, oldState);
}
inline ::System::Data::DataRow* System::Data::Index::GetRow(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetRow", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method, i);
}
inline ::ArrayW<::System::Data::DataRow*> System::Data::Index::GetRows(::ArrayW<::System::Object*> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetRows", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRow*>>(this, ___internal_method, values);
}
inline ::ArrayW<::System::Data::DataRow*> System::Data::Index::GetRows(::System::Data::Range range) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "GetRows", {}, { ::i2c::type_of<::System::Data::Range>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRow*>>(this, ___internal_method, range);
}
inline void System::Data::Index::InitRecords(::System::Data::IFilter* filter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "InitRecords", {}, { ::i2c::type_of<::System::Data::IFilter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter);
}
inline int32_t System::Data::Index::InsertRecordToIndex(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "InsertRecordToIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record);
}
inline int32_t System::Data::Index::InsertRecord(int32_t record, bool fireEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "InsertRecord", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record, fireEvent);
}
inline bool System::Data::Index::IsKeyInIndex(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "IsKeyInIndex", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool System::Data::Index::IsKeyInIndex(::ArrayW<::System::Object*> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "IsKeyInIndex", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool System::Data::Index::IsKeyRecordInIndex(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "IsKeyRecordInIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record);
}
inline bool System::Data::Index::get_DoListChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_DoListChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::Index::OnListChanged(::System::ComponentModel::ListChangedType changedType, int32_t newIndex, int32_t oldIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(),
                                              { "OnListChanged", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changedType, newIndex, oldIndex);
}
inline void System::Data::Index::OnListChanged(::System::ComponentModel::ListChangedType changedType, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "OnListChanged", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changedType, index);
}
inline void System::Data::Index::OnListChanged(::System::ComponentModel::ListChangedEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "OnListChanged", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Data::Index::MaintainDataView(::System::ComponentModel::ListChangedType changedType, int32_t record, bool trackAddRemove) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(),
                                              { "MaintainDataView", {}, { ::i2c::type_of<::System::ComponentModel::ListChangedType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changedType, record, trackAddRemove);
}
inline void System::Data::Index::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::Index::RecordChanged(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "RecordChanged", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline void System::Data::Index::RecordChanged(int32_t oldIndex, int32_t newIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "RecordChanged", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldIndex, newIndex);
}
inline void System::Data::Index::RecordStateChanged(int32_t record, ::System::Data::DataViewRowState oldState, ::System::Data::DataViewRowState newState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(),
                          { "RecordStateChanged", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::DataViewRowState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, oldState, newState);
}
inline void System::Data::Index::RecordStateChanged(int32_t oldRecord, ::System::Data::DataViewRowState oldOldState, ::System::Data::DataViewRowState oldNewState, int32_t newRecord,
                                                    ::System::Data::DataViewRowState newOldState, ::System::Data::DataViewRowState newNewState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(),
                                                           { "RecordStateChanged",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::DataViewRowState>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataViewRowState>(), ::i2c::type_of<::System::Data::DataViewRowState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldRecord, oldOldState, oldNewState, newRecord, newOldState, newNewState);
}
inline ::System::Data::DataTable* System::Data::Index::get_Table() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(), { "get_Table", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method);
}
inline void System::Data::Index::GetUniqueKeyValues(::System::Collections::Generic::List_1<::ArrayW<::System::Object*>>* list, int32_t curNodeId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(),
                                              { "GetUniqueKeyValues", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::ArrayW<::System::Object*>>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, curNodeId);
}
template <typename T> inline int32_t System::Data::Index::IndexOfReference(::System::Collections::Generic::List_1<T>* list, T item) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Index*>(),
                                                           { "IndexOfReference", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, item);
}
inline ::System::Data::Index* System::Data::Index::New_ctor(::System::Data::DataTable* table, ::ArrayW<::System::Data::IndexField> indexFields, ::System::Data::DataViewRowState recordStates,
                                                            ::System::Data::IFilter* rowFilter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Index*>(table, indexFields, recordStates, rowFilter));
}
inline ::System::Data::Index* System::Data::Index::New_ctor(::System::Data::DataTable* table, ::System::Comparison_1<::System::Data::DataRow*>* comparison,
                                                            ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Index*>(table, comparison, recordStates, rowFilter));
}
inline ::System::Data::Index* System::Data::Index::New_ctor(::System::Data::DataTable* table, ::ArrayW<::System::Data::IndexField> indexFields,
                                                            ::System::Comparison_1<::System::Data::DataRow*>* comparison, ::System::Data::DataViewRowState recordStates,
                                                            ::System::Data::IFilter* rowFilter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Index*>(table, indexFields, comparison, recordStates, rowFilter));
}
// Ctor Parameters []
constexpr ::System::Data::Index::Index() {}
