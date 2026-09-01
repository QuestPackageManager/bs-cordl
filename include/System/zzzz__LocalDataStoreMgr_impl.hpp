#pragma once
// IWYU pragma private; include "System\LocalDataStoreMgr.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__LocalDataStoreHolder_def.hpp"
#include "System/zzzz__LocalDataStoreSlot_def.hpp"
#include "System/zzzz__LocalDataStore_def.hpp"
//  Writing Method size for method: ::System::LocalDataStoreMgr.CreateLocalDataStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::LocalDataStoreHolder* (::System::LocalDataStoreMgr::*)()>(&::System::LocalDataStoreMgr::CreateLocalDataStore)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c713f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "CreateLocalDataStore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.DeleteLocalDataStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStoreMgr::*)(::System::LocalDataStore*)>(&::System::LocalDataStoreMgr::DeleteLocalDataStore)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c70bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "DeleteLocalDataStore", {}, { ::i2c::type_of<::System::LocalDataStore*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.AllocateDataSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::LocalDataStoreSlot* (::System::LocalDataStoreMgr::*)()>(&::System::LocalDataStoreMgr::AllocateDataSlot)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5c715a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "AllocateDataSlot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.AllocateNamedDataSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::LocalDataStoreSlot* (::System::LocalDataStoreMgr::*)(::StringW)>(&::System::LocalDataStoreMgr::AllocateNamedDataSlot)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5c717f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "AllocateNamedDataSlot", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.GetNamedDataSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::LocalDataStoreSlot* (::System::LocalDataStoreMgr::*)(::StringW)>(&::System::LocalDataStoreMgr::GetNamedDataSlot)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5c71928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "GetNamedDataSlot", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.FreeNamedDataSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStoreMgr::*)(::StringW)>(&::System::LocalDataStoreMgr::FreeNamedDataSlot)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c71a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "FreeNamedDataSlot", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.FreeDataSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStoreMgr::*)(int32_t, int64_t)>(&::System::LocalDataStoreMgr::FreeDataSlot)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5c71250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "FreeDataSlot", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.ValidateSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStoreMgr::*)(::System::LocalDataStoreSlot*)>(&::System::LocalDataStoreMgr::ValidateSlot)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c70db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "ValidateSlot", {}, { ::i2c::type_of<::System::LocalDataStoreSlot*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.GetSlotTableLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::LocalDataStoreMgr::*)()>(&::System::LocalDataStoreMgr::GetSlotTableLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c711b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "GetSlotTableLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStoreMgr::*)()>(&::System::LocalDataStoreMgr::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c71b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<bool>& System::LocalDataStoreMgr::__cordl_internal_get_m_SlotInfoTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SlotInfoTable;
}
constexpr ::ArrayW<bool> const& System::LocalDataStoreMgr::__cordl_internal_get_m_SlotInfoTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SlotInfoTable;
}
constexpr void System::LocalDataStoreMgr::__cordl_internal_set_m_SlotInfoTable(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SlotInfoTable = value;
}
constexpr int32_t& System::LocalDataStoreMgr::__cordl_internal_get_m_FirstAvailableSlot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstAvailableSlot;
}
constexpr int32_t const& System::LocalDataStoreMgr::__cordl_internal_get_m_FirstAvailableSlot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstAvailableSlot;
}
constexpr void System::LocalDataStoreMgr::__cordl_internal_set_m_FirstAvailableSlot(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FirstAvailableSlot = value;
}
constexpr ::System::Collections::Generic::List_1<::System::LocalDataStore*>*& System::LocalDataStoreMgr::__cordl_internal_get_m_ManagedLocalDataStores() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManagedLocalDataStores;
}
constexpr ::System::Collections::Generic::List_1<::System::LocalDataStore*>* const& System::LocalDataStoreMgr::__cordl_internal_get_m_ManagedLocalDataStores() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ManagedLocalDataStores;
}
constexpr void System::LocalDataStoreMgr::__cordl_internal_set_m_ManagedLocalDataStores(::System::Collections::Generic::List_1<::System::LocalDataStore*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ManagedLocalDataStores = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::LocalDataStoreSlot*>*& System::LocalDataStoreMgr::__cordl_internal_get_m_KeyToSlotMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyToSlotMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::LocalDataStoreSlot*>* const& System::LocalDataStoreMgr::__cordl_internal_get_m_KeyToSlotMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyToSlotMap;
}
constexpr void System::LocalDataStoreMgr::__cordl_internal_set_m_KeyToSlotMap(::System::Collections::Generic::Dictionary_2<::StringW, ::System::LocalDataStoreSlot*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KeyToSlotMap = value;
}
constexpr int64_t& System::LocalDataStoreMgr::__cordl_internal_get_m_CookieGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CookieGenerator;
}
constexpr int64_t const& System::LocalDataStoreMgr::__cordl_internal_get_m_CookieGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CookieGenerator;
}
constexpr void System::LocalDataStoreMgr::__cordl_internal_set_m_CookieGenerator(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CookieGenerator = value;
}
inline ::System::LocalDataStoreHolder* System::LocalDataStoreMgr::CreateLocalDataStore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "CreateLocalDataStore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreHolder*>(this, ___internal_method);
}
inline void System::LocalDataStoreMgr::DeleteLocalDataStore(::System::LocalDataStore* store) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "DeleteLocalDataStore", {}, { ::i2c::type_of<::System::LocalDataStore*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store);
}
inline ::System::LocalDataStoreSlot* System::LocalDataStoreMgr::AllocateDataSlot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "AllocateDataSlot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot*>(this, ___internal_method);
}
inline ::System::LocalDataStoreSlot* System::LocalDataStoreMgr::AllocateNamedDataSlot(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "AllocateNamedDataSlot", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot*>(this, ___internal_method, name);
}
inline ::System::LocalDataStoreSlot* System::LocalDataStoreMgr::GetNamedDataSlot(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "GetNamedDataSlot", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot*>(this, ___internal_method, name);
}
inline void System::LocalDataStoreMgr::FreeNamedDataSlot(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "FreeNamedDataSlot", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::LocalDataStoreMgr::FreeDataSlot(int32_t slot, int64_t cookie) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "FreeDataSlot", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slot, cookie);
}
inline void System::LocalDataStoreMgr::ValidateSlot(::System::LocalDataStoreSlot* slot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "ValidateSlot", {}, { ::i2c::type_of<::System::LocalDataStoreSlot*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slot);
}
inline int32_t System::LocalDataStoreMgr::GetSlotTableLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { "GetSlotTableLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::LocalDataStoreMgr::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreMgr*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::LocalDataStoreMgr* System::LocalDataStoreMgr::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::LocalDataStoreMgr*>());
}
// Ctor Parameters []
constexpr ::System::LocalDataStoreMgr::LocalDataStoreMgr() {}
