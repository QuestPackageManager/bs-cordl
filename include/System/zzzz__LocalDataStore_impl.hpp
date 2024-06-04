#pragma once
// IWYU pragma private; include "System/LocalDataStore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalDataStore_def.hpp"
#include "System/zzzz__LocalDataStoreElement_def.hpp"
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
#include "System/zzzz__LocalDataStoreSlot_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::LocalDataStore._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStore::*)(::System::LocalDataStoreMgr*, int32_t)>(&::System::LocalDataStore::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x29781d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStore*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreMgr*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStore.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStore::*)()>(&::System::LocalDataStore::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x297816c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStore*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStore.GetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::LocalDataStore::*)(::System::LocalDataStoreSlot*)>(&::System::LocalDataStore::GetData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2978344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStore*>::get(), "GetData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreSlot*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStore.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStore::*)(::System::LocalDataStoreSlot*, ::System::Object*)>(
    &::System::LocalDataStore::SetData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2978498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStore*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreSlot*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStore.FreeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStore::*)(int32_t, int64_t)>(&::System::LocalDataStore::FreeData)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2978828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStore*>::get(), "FreeData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStore.PopulateElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreElement* (::System::LocalDataStore::*)(::System::LocalDataStoreSlot*)>(
    &::System::LocalDataStore::PopulateElement)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x297857c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStore*>::get(), "PopulateElement", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreSlot*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::LocalDataStoreElement*, ::Array<::System::LocalDataStoreElement*>*>& System::LocalDataStore::__cordl_internal_get_m_DataTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DataTable;
}
constexpr ::ArrayW<::System::LocalDataStoreElement*, ::Array<::System::LocalDataStoreElement*>*> const& System::LocalDataStore::__cordl_internal_get_m_DataTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DataTable;
}
constexpr void System::LocalDataStore::__cordl_internal_set_m_DataTable(::ArrayW<::System::LocalDataStoreElement*, ::Array<::System::LocalDataStoreElement*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DataTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::LocalDataStoreMgr*& System::LocalDataStore::__cordl_internal_get_m_Manager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Manager;
}
constexpr ::cordl_internals::to_const_pointer<::System::LocalDataStoreMgr*> const& System::LocalDataStore::__cordl_internal_get_m_Manager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Manager;
}
constexpr void System::LocalDataStore::__cordl_internal_set_m_Manager(::System::LocalDataStoreMgr* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Manager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::LocalDataStore* System::LocalDataStore::New_ctor(::System::LocalDataStoreMgr* mgr, int32_t InitialCapacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::LocalDataStore*>(mgr, InitialCapacity));
}
inline void System::LocalDataStore::_ctor(::System::LocalDataStoreMgr* mgr, int32_t InitialCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStore*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreMgr*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mgr, InitialCapacity);
}
inline void System::LocalDataStore::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStore*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::LocalDataStore::GetData(::System::LocalDataStoreSlot* slot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStore*>::get(), "GetData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreSlot*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, slot);
}
inline void System::LocalDataStore::SetData(::System::LocalDataStoreSlot* slot, ::System::Object* data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStore*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreSlot*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slot, data);
}
inline void System::LocalDataStore::FreeData(int32_t slot, int64_t cookie) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStore*>::get(), "FreeData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slot, cookie);
}
inline ::System::LocalDataStoreElement* System::LocalDataStore::PopulateElement(::System::LocalDataStoreSlot* slot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStore*>::get(), "PopulateElement", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreSlot*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreElement*, false>(this, ___internal_method, slot);
}
// Ctor Parameters []
constexpr ::System::LocalDataStore::LocalDataStore() {}
