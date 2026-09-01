#pragma once
// IWYU pragma private; include "System\LocalDataStore.hpp"
#include "System/zzzz__LocalDataStoreElement_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalDataStore_def.hpp"
#include "System/zzzz__LocalDataStoreElement_def.hpp"
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
#include "System/zzzz__LocalDataStoreSlot_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::LocalDataStore._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStore::*)(::System::LocalDataStoreMgr*, int32_t)>(&::System::LocalDataStore::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c70b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStore*>(), { ".ctor", {}, { ::i2c::type_of<::System::LocalDataStoreMgr*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStore.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStore::*)()>(&::System::LocalDataStore::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c70b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStore*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStore.GetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::LocalDataStore::*)(::System::LocalDataStoreSlot*)>(&::System::LocalDataStore::GetData)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c70cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStore*>(), { "GetData", {}, { ::i2c::type_of<::System::LocalDataStoreSlot*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStore.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStore::*)(::System::LocalDataStoreSlot*, ::System::Object*)>(&::System::LocalDataStore::SetData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c70e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::LocalDataStore*>(), { "SetData", {}, { ::i2c::type_of<::System::LocalDataStoreSlot*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStore.FreeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStore::*)(int32_t, int64_t)>(&::System::LocalDataStore::FreeData)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c71168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStore*>(), { "FreeData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStore.PopulateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::LocalDataStoreElement* (::System::LocalDataStore::*)(::System::LocalDataStoreSlot*)>(&::System::LocalDataStore::PopulateElement)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5c70ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStore*>(), { "PopulateElement", {}, { ::i2c::type_of<::System::LocalDataStoreSlot*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::LocalDataStoreElement*>& System::LocalDataStore::__cordl_internal_get_m_DataTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DataTable;
}
constexpr ::ArrayW<::System::LocalDataStoreElement*> const& System::LocalDataStore::__cordl_internal_get_m_DataTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DataTable;
}
constexpr void System::LocalDataStore::__cordl_internal_set_m_DataTable(::ArrayW<::System::LocalDataStoreElement*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DataTable = value;
}
constexpr ::System::LocalDataStoreMgr*& System::LocalDataStore::__cordl_internal_get_m_Manager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Manager;
}
constexpr ::System::LocalDataStoreMgr* const& System::LocalDataStore::__cordl_internal_get_m_Manager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Manager;
}
constexpr void System::LocalDataStore::__cordl_internal_set_m_Manager(::System::LocalDataStoreMgr* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Manager = value;
}
inline void System::LocalDataStore::_ctor(::System::LocalDataStoreMgr* mgr, int32_t InitialCapacity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStore*>(), { ".ctor", {}, { ::i2c::type_of<::System::LocalDataStoreMgr*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgr, InitialCapacity);
}
inline void System::LocalDataStore::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStore*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::LocalDataStore::GetData(::System::LocalDataStoreSlot* slot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStore*>(), { "GetData", {}, { ::i2c::type_of<::System::LocalDataStoreSlot*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, slot);
}
inline void System::LocalDataStore::SetData(::System::LocalDataStoreSlot* slot, ::System::Object* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::LocalDataStore*>(), { "SetData", {}, { ::i2c::type_of<::System::LocalDataStoreSlot*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slot, data);
}
inline void System::LocalDataStore::FreeData(int32_t slot, int64_t cookie) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStore*>(), { "FreeData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slot, cookie);
}
inline ::System::LocalDataStoreElement* System::LocalDataStore::PopulateElement(::System::LocalDataStoreSlot* slot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStore*>(), { "PopulateElement", {}, { ::i2c::type_of<::System::LocalDataStoreSlot*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreElement*>(this, ___internal_method, slot);
}
inline ::System::LocalDataStore* System::LocalDataStore::New_ctor(::System::LocalDataStoreMgr* mgr, int32_t InitialCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::LocalDataStore*>(mgr, InitialCapacity));
}
// Ctor Parameters []
constexpr ::System::LocalDataStore::LocalDataStore() {}
