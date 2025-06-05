#pragma once
// IWYU pragma private; include "System/LocalDataStoreMgr.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__LocalDataStoreHolder_def.hpp"
#include "System/zzzz__LocalDataStoreSlot_def.hpp"
#include "System/zzzz__LocalDataStore_def.hpp"
//  Writing Method size for method: ::System::LocalDataStoreMgr.CreateLocalDataStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreHolder* (::System::LocalDataStoreMgr::*)()>(
    &::System::LocalDataStoreMgr::CreateLocalDataStore)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3e14d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "CreateLocalDataStore",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.DeleteLocalDataStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreMgr::*)(::System::LocalDataStore*)>(
    &::System::LocalDataStoreMgr::DeleteLocalDataStore)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3e1448c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "DeleteLocalDataStore", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStore*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.AllocateDataSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreSlot* (::System::LocalDataStoreMgr::*)()>(&::System::LocalDataStoreMgr::AllocateDataSlot)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x3e14ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "AllocateDataSlot",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.AllocateNamedDataSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreSlot* (::System::LocalDataStoreMgr::*)(::StringW)>(
    &::System::LocalDataStoreMgr::AllocateNamedDataSlot)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3e15108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "AllocateNamedDataSlot", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.GetNamedDataSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreSlot* (::System::LocalDataStoreMgr::*)(::StringW)>(
    &::System::LocalDataStoreMgr::GetNamedDataSlot)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3e15224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "GetNamedDataSlot", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.FreeNamedDataSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreMgr::*)(::StringW)>(&::System::LocalDataStoreMgr::FreeNamedDataSlot)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3e15340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "FreeNamedDataSlot", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.FreeDataSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreMgr::*)(int32_t, int64_t)>(&::System::LocalDataStoreMgr::FreeDataSlot)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3e14b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "FreeDataSlot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.ValidateSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreMgr::*)(::System::LocalDataStoreSlot*)>(&::System::LocalDataStoreMgr::ValidateSlot)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3e14660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "ValidateSlot", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreSlot*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.GetSlotTableLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::LocalDataStoreMgr::*)()>(&::System::LocalDataStoreMgr::GetSlotTableLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3e14a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "GetSlotTableLength",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreMgr::*)()>(&::System::LocalDataStoreMgr::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3e15444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<bool, ::Array<bool>*>& System::LocalDataStoreMgr::__cordl_internal_get_m_SlotInfoTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SlotInfoTable;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& System::LocalDataStoreMgr::__cordl_internal_get_m_SlotInfoTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SlotInfoTable;
}
constexpr void System::LocalDataStoreMgr::__cordl_internal_set_m_SlotInfoTable(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SlotInfoTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ManagedLocalDataStores)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_KeyToSlotMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "CreateLocalDataStore",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreHolder*, false>(this, ___internal_method);
}
inline void System::LocalDataStoreMgr::DeleteLocalDataStore(::System::LocalDataStore* store) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "DeleteLocalDataStore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, store);
}
inline ::System::LocalDataStoreSlot* System::LocalDataStoreMgr::AllocateDataSlot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "AllocateDataSlot",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot*, false>(this, ___internal_method);
}
inline ::System::LocalDataStoreSlot* System::LocalDataStoreMgr::AllocateNamedDataSlot(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "AllocateNamedDataSlot", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot*, false>(this, ___internal_method, name);
}
inline ::System::LocalDataStoreSlot* System::LocalDataStoreMgr::GetNamedDataSlot(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "GetNamedDataSlot", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot*, false>(this, ___internal_method, name);
}
inline void System::LocalDataStoreMgr::FreeNamedDataSlot(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "FreeNamedDataSlot", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void System::LocalDataStoreMgr::FreeDataSlot(int32_t slot, int64_t cookie) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "FreeDataSlot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slot, cookie);
}
inline void System::LocalDataStoreMgr::ValidateSlot(::System::LocalDataStoreSlot* slot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "ValidateSlot", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreSlot*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slot);
}
inline int32_t System::LocalDataStoreMgr::GetSlotTableLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), "GetSlotTableLength",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::LocalDataStoreMgr::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::LocalDataStoreMgr* System::LocalDataStoreMgr::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::LocalDataStoreMgr*>());
}
// Ctor Parameters []
constexpr ::System::LocalDataStoreMgr::LocalDataStoreMgr() {}
