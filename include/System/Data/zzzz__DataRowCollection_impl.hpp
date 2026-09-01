#pragma once
// IWYU pragma private; include "System\Data\DataRowCollection.hpp"
#include "System/Data/zzzz__InternalDataCollectionBase_impl.hpp"
#include "System/Data/zzzz__RBTree_1_impl.hpp"
#include "System/Data/zzzz__DataRowCollection_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Data/zzzz__DataRowCollection_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::DataRowCollection_DataRowTree._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowCollection_DataRowTree::*)()>(&::System::Data::DataRowCollection_DataRowTree::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x602da9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection_DataRowTree*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection_DataRowTree.CompareNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRowCollection_DataRowTree::*)(::System::Data::DataRow*, ::System::Data::DataRow*)>(
    &::System::Data::DataRowCollection_DataRowTree::CompareNode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x602e204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection_DataRowTree*>(), { ::i2c::class_of<::System::Data::DataRowCollection_DataRowTree*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection_DataRowTree.CompareSateliteTreeNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRowCollection_DataRowTree::*)(::System::Data::DataRow*, ::System::Data::DataRow*)>(
    &::System::Data::DataRowCollection_DataRowTree::CompareSateliteTreeNode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x602e230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection_DataRowTree*>(), { ::i2c::class_of<::System::Data::DataRowCollection_DataRowTree*>(), 6 }));
    return ___internal_method;
  }
};
inline void System::Data::DataRowCollection_DataRowTree::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection_DataRowTree*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Data::DataRowCollection_DataRowTree::CompareNode(::System::Data::DataRow* record1, ::System::Data::DataRow* record2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRowCollection_DataRowTree*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record1, record2);
}
inline int32_t System::Data::DataRowCollection_DataRowTree::CompareSateliteTreeNode(::System::Data::DataRow* record1, ::System::Data::DataRow* record2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRowCollection_DataRowTree*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record1, record2);
}
inline ::System::Data::DataRowCollection_DataRowTree* System::Data::DataRowCollection_DataRowTree::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataRowCollection_DataRowTree*>());
}
// Ctor Parameters []
constexpr ::System::Data::DataRowCollection_DataRowTree::DataRowCollection_DataRowTree() {}
//  Writing Method size for method: ::System::Data::DataRowCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowCollection::*)(::System::Data::DataTable*)>(&::System::Data::DataRowCollection::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x602da0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRowCollection::*)()>(&::System::Data::DataRowCollection::get_Count)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x602dafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { ::i2c::class_of<::System::Data::DataRowCollection*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataRowCollection::*)(int32_t)>(&::System::Data::DataRowCollection::get_Item)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6022718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowCollection::*)(::System::Data::DataRow*)>(&::System::Data::DataRowCollection::Add)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x602db50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection.DiffInsertAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowCollection::*)(::System::Data::DataRow*, int32_t)>(&::System::Data::DataRowCollection::DiffInsertAt)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x602db70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "DiffInsertAt", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRowCollection::*)(::System::Data::DataRow*)>(&::System::Data::DataRowCollection::IndexOf)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x602dd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "IndexOf", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection.AddWithColumnEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataRowCollection::*)(::ArrayW<::System::Object*>)>(
    &::System::Data::DataRowCollection::AddWithColumnEvents)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x602de1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "AddWithColumnEvents", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection.ArrayAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowCollection::*)(::System::Data::DataRow*)>(&::System::Data::DataRowCollection::ArrayAdd)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x602de80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "ArrayAdd", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection.ArrayInsert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowCollection::*)(::System::Data::DataRow*, int32_t)>(&::System::Data::DataRowCollection::ArrayInsert)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x602def4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "ArrayInsert", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection.ArrayClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowCollection::*)()>(&::System::Data::DataRowCollection::ArrayClear)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x602df80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "ArrayClear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection.ArrayRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowCollection::*)(::System::Data::DataRow*)>(&::System::Data::DataRowCollection::ArrayRemove)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x602dff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "ArrayRemove", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowCollection::*)(::System::Array*, int32_t)>(&::System::Data::DataRowCollection::CopyTo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x602e0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { ::i2c::class_of<::System::Data::DataRowCollection*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowCollection::*)(::ArrayW<::System::Data::DataRow*>, int32_t)>(&::System::Data::DataRowCollection::CopyTo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x602e114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(),
                                                                                           { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataRow*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Data::DataRowCollection::*)()>(&::System::Data::DataRowCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x602e180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { ::i2c::class_of<::System::Data::DataRowCollection*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::DataRowCollection::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::DataRowCollection::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::DataRowCollection::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
constexpr ::System::Data::DataRowCollection_DataRowTree*& System::Data::DataRowCollection::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::System::Data::DataRowCollection_DataRowTree* const& System::Data::DataRowCollection::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void System::Data::DataRowCollection::__cordl_internal_set__list(::System::Data::DataRowCollection_DataRowTree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____list = value;
}
constexpr int32_t& System::Data::DataRowCollection::__cordl_internal_get__nullInList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullInList;
}
constexpr int32_t const& System::Data::DataRowCollection::__cordl_internal_get__nullInList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullInList;
}
constexpr void System::Data::DataRowCollection::__cordl_internal_set__nullInList(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nullInList = value;
}
inline void System::Data::DataRowCollection::_ctor(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline int32_t System::Data::DataRowCollection::get_Count() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRowCollection*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Data::DataRow* System::Data::DataRowCollection::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method, index);
}
inline void System::Data::DataRowCollection::Add(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "Add", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline void System::Data::DataRowCollection::DiffInsertAt(::System::Data::DataRow* row, int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "DiffInsertAt", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, pos);
}
inline int32_t System::Data::DataRowCollection::IndexOf(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "IndexOf", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, row);
}
inline ::System::Data::DataRow* System::Data::DataRowCollection::AddWithColumnEvents(::ArrayW<::System::Object*> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "AddWithColumnEvents", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method, values);
}
inline void System::Data::DataRowCollection::ArrayAdd(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "ArrayAdd", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline void System::Data::DataRowCollection::ArrayInsert(::System::Data::DataRow* row, int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "ArrayInsert", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, pos);
}
inline void System::Data::DataRowCollection::ArrayClear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "ArrayClear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataRowCollection::ArrayRemove(::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "ArrayRemove", {}, { ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline void System::Data::DataRowCollection::CopyTo(::System::Array* ar, int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRowCollection*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar, index);
}
inline void System::Data::DataRowCollection::CopyTo(::ArrayW<::System::Data::DataRow*> array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataRowCollection*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataRow*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Collections::IEnumerator* System::Data::DataRowCollection::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRowCollection*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Data::DataRowCollection* System::Data::DataRowCollection::New_ctor(::System::Data::DataTable* table) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataRowCollection*>(table));
}
// Ctor Parameters []
constexpr ::System::Data::DataRowCollection::DataRowCollection() {}
