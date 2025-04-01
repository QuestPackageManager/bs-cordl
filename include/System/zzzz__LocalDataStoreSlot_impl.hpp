#pragma once
// IWYU pragma private; include "System/LocalDataStoreSlot.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalDataStoreSlot_def.hpp"
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
//  Writing Method size for method: ::System::LocalDataStoreSlot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreSlot::*)(::System::LocalDataStoreMgr*, int32_t, int64_t)>(
    &::System::LocalDataStoreSlot::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3e0fb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreMgr*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreSlot.get_Manager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreMgr* (::System::LocalDataStoreSlot::*)()>(&::System::LocalDataStoreSlot::get_Manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e0fbcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot*>::get(), "get_Manager",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreSlot.get_Slot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::LocalDataStoreSlot::*)()>(&::System::LocalDataStoreSlot::get_Slot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e0fbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot*>::get(), "get_Slot",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreSlot.get_Cookie
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::LocalDataStoreSlot::*)()>(&::System::LocalDataStoreSlot::get_Cookie)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e0fbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot*>::get(), "get_Cookie",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreSlot.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreSlot::*)()>(&::System::LocalDataStoreSlot::Finalize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3e0fbe4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot*>::get(), 1));
    return ___internal_method;
  }
};
constexpr ::System::LocalDataStoreMgr*& System::LocalDataStoreSlot::__cordl_internal_get_m_mgr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_mgr;
}
constexpr ::System::LocalDataStoreMgr* const& System::LocalDataStoreSlot::__cordl_internal_get_m_mgr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_mgr;
}
constexpr void System::LocalDataStoreSlot::__cordl_internal_set_m_mgr(::System::LocalDataStoreMgr* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_mgr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::LocalDataStoreSlot::__cordl_internal_get_m_slot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_slot;
}
constexpr int32_t const& System::LocalDataStoreSlot::__cordl_internal_get_m_slot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_slot;
}
constexpr void System::LocalDataStoreSlot::__cordl_internal_set_m_slot(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_slot = value;
}
constexpr int64_t& System::LocalDataStoreSlot::__cordl_internal_get_m_cookie() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cookie;
}
constexpr int64_t const& System::LocalDataStoreSlot::__cordl_internal_get_m_cookie() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cookie;
}
constexpr void System::LocalDataStoreSlot::__cordl_internal_set_m_cookie(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_cookie = value;
}
inline void System::LocalDataStoreSlot::_ctor(::System::LocalDataStoreMgr* mgr, int32_t slot, int64_t cookie) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreMgr*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mgr, slot, cookie);
}
inline ::System::LocalDataStoreMgr* System::LocalDataStoreSlot::get_Manager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot*>::get(), "get_Manager",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreMgr*, false>(this, ___internal_method);
}
inline int32_t System::LocalDataStoreSlot::get_Slot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot*>::get(), "get_Slot",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t System::LocalDataStoreSlot::get_Cookie() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot*>::get(), "get_Cookie",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::LocalDataStoreSlot::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::LocalDataStoreSlot* System::LocalDataStoreSlot::New_ctor(::System::LocalDataStoreMgr* mgr, int32_t slot, int64_t cookie) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::LocalDataStoreSlot*>(mgr, slot, cookie));
}
// Ctor Parameters []
constexpr ::System::LocalDataStoreSlot::LocalDataStoreSlot() {}
