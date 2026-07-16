#pragma once
// IWYU pragma private; include "System/Data/RecordManager.hpp"
#include "System/Data/zzzz__DataRow_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__RecordManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
//  Writing Method size for method: ::System::Data::RecordManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::RecordManager::*)(::System::Data::DataTable*)>(&::System::Data::RecordManager::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6045cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.GrowRecordCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::RecordManager::*)()>(&::System::Data::RecordManager::GrowRecordCapacity)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6045d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "GrowRecordCapacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.get_LastFreeRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::RecordManager::*)()>(&::System::Data::RecordManager::get_LastFreeRecord)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6045f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "get_LastFreeRecord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.get_MinimumCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::RecordManager::*)()>(&::System::Data::RecordManager::get_MinimumCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6045f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "get_MinimumCapacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.set_MinimumCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::RecordManager::*)(int32_t)>(&::System::Data::RecordManager::set_MinimumCapacity)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6045f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "set_MinimumCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.get_RecordCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::RecordManager::*)()>(&::System::Data::RecordManager::get_RecordCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6045fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "get_RecordCapacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.set_RecordCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::RecordManager::*)(int32_t)>(&::System::Data::RecordManager::set_RecordCapacity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6045edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "set_RecordCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.NewCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Data::RecordManager::NewCapacity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6045e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "NewCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.NormalizedMinimumCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::RecordManager::*)(int32_t)>(&::System::Data::RecordManager::NormalizedMinimumCapacity)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6045ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "NormalizedMinimumCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.NewRecordBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::RecordManager::*)()>(&::System::Data::RecordManager::NewRecordBase)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6045fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "NewRecordBase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.FreeRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::RecordManager::*)(::by_ref<int32_t>)>(&::System::Data::RecordManager::FreeRecord)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x60460a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "FreeRecord", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::RecordManager::*)(bool)>(&::System::Data::RecordManager::Clear)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6046268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::RecordManager::*)(int32_t)>(&::System::Data::RecordManager::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6046474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::RecordManager::*)(int32_t, ::System::Data::DataRow*)>(&::System::Data::RecordManager::set_Item)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6046204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.ImportRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::RecordManager::*)(::System::Data::DataTable*, int32_t)>(&::System::Data::RecordManager::ImportRecord)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60464a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "ImportRecord", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.CopyRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::RecordManager::*)(::System::Data::DataTable*, int32_t, int32_t)>(&::System::Data::RecordManager::CopyRecord)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x60464ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(),
                                                             { "CopyRecord", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RecordManager.SetRowCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::RecordManager::*)(::ArrayW<::System::Data::DataRow*>)>(&::System::Data::RecordManager::SetRowCache)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60467e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "SetRowCache", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataRow*>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::RecordManager::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::RecordManager::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::RecordManager::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
constexpr int32_t& System::Data::RecordManager::__cordl_internal_get__lastFreeRecord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFreeRecord;
}
constexpr int32_t const& System::Data::RecordManager::__cordl_internal_get__lastFreeRecord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFreeRecord;
}
constexpr void System::Data::RecordManager::__cordl_internal_set__lastFreeRecord(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastFreeRecord = value;
}
constexpr int32_t& System::Data::RecordManager::__cordl_internal_get__minimumCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimumCapacity;
}
constexpr int32_t const& System::Data::RecordManager::__cordl_internal_get__minimumCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimumCapacity;
}
constexpr void System::Data::RecordManager::__cordl_internal_set__minimumCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minimumCapacity = value;
}
constexpr int32_t& System::Data::RecordManager::__cordl_internal_get__recordCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordCapacity;
}
constexpr int32_t const& System::Data::RecordManager::__cordl_internal_get__recordCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordCapacity;
}
constexpr void System::Data::RecordManager::__cordl_internal_set__recordCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordCapacity = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& System::Data::RecordManager::__cordl_internal_get__freeRecordList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeRecordList;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& System::Data::RecordManager::__cordl_internal_get__freeRecordList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeRecordList;
}
constexpr void System::Data::RecordManager::__cordl_internal_set__freeRecordList(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____freeRecordList = value;
}
constexpr ::ArrayW<::System::Data::DataRow*>& System::Data::RecordManager::__cordl_internal_get__rows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rows;
}
constexpr ::ArrayW<::System::Data::DataRow*> const& System::Data::RecordManager::__cordl_internal_get__rows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rows;
}
constexpr void System::Data::RecordManager::__cordl_internal_set__rows(::ArrayW<::System::Data::DataRow*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rows = value;
}
inline void System::Data::RecordManager::_ctor(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void System::Data::RecordManager::GrowRecordCapacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "GrowRecordCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Data::RecordManager::get_LastFreeRecord() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "get_LastFreeRecord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Data::RecordManager::get_MinimumCapacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "get_MinimumCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::RecordManager::set_MinimumCapacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "set_MinimumCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Data::RecordManager::get_RecordCapacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "get_RecordCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::RecordManager::set_RecordCapacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "set_RecordCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Data::RecordManager::NewCapacity(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "NewCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, capacity);
}
inline int32_t System::Data::RecordManager::NormalizedMinimumCapacity(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "NormalizedMinimumCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, capacity);
}
inline int32_t System::Data::RecordManager::NewRecordBase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "NewRecordBase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::RecordManager::FreeRecord(::by_ref<int32_t> record) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "FreeRecord", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline void System::Data::RecordManager::Clear(bool clearAll) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clearAll);
}
inline ::System::Data::DataRow* System::Data::RecordManager::get_Item(int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method, record);
}
inline void System::Data::RecordManager::set_Item(int32_t record, ::System::Data::DataRow* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, value);
}
inline int32_t System::Data::RecordManager::ImportRecord(::System::Data::DataTable* src, int32_t record) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "ImportRecord", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, src, record);
}
inline int32_t System::Data::RecordManager::CopyRecord(::System::Data::DataTable* src, int32_t record, int32_t copy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(),
                                                           { "CopyRecord", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, src, record, copy);
}
inline void System::Data::RecordManager::SetRowCache(::ArrayW<::System::Data::DataRow*> newRows) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RecordManager*>(), { "SetRowCache", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataRow*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newRows);
}
inline ::System::Data::RecordManager* System::Data::RecordManager::New_ctor(::System::Data::DataTable* table) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::RecordManager*>(table));
}
// Ctor Parameters []
constexpr ::System::Data::RecordManager::RecordManager() {}
