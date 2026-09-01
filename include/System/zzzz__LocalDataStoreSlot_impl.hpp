#pragma once
// IWYU pragma private; include "System\LocalDataStoreSlot.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalDataStoreSlot_def.hpp"
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
//  Writing Method size for method: ::System::LocalDataStoreSlot._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStoreSlot::*)(::System::LocalDataStoreMgr*, int32_t, int64_t)>(&::System::LocalDataStoreSlot::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c711c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreSlot*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::LocalDataStoreMgr*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreSlot.get_Manager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::LocalDataStoreMgr* (::System::LocalDataStoreSlot::*)()>(&::System::LocalDataStoreSlot::get_Manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c711d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreSlot*>(), { "get_Manager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreSlot.get_Slot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::LocalDataStoreSlot::*)()>(&::System::LocalDataStoreSlot::get_Slot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c711e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreSlot*>(), { "get_Slot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreSlot.get_Cookie
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::LocalDataStoreSlot::*)()>(&::System::LocalDataStoreSlot::get_Cookie)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c711e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreSlot*>(), { "get_Cookie", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreSlot.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStoreSlot::*)()>(&::System::LocalDataStoreSlot::Finalize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c711f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::LocalDataStoreSlot*>(), { ::i2c::class_of<::System::LocalDataStoreSlot*>(), 1 }));
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
  this->___m_mgr = value;
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreSlot*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::LocalDataStoreMgr*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgr, slot, cookie);
}
inline ::System::LocalDataStoreMgr* System::LocalDataStoreSlot::get_Manager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreSlot*>(), { "get_Manager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreMgr*>(this, ___internal_method);
}
inline int32_t System::LocalDataStoreSlot::get_Slot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreSlot*>(), { "get_Slot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t System::LocalDataStoreSlot::get_Cookie() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreSlot*>(), { "get_Cookie", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::LocalDataStoreSlot::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::LocalDataStoreSlot*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::LocalDataStoreSlot* System::LocalDataStoreSlot::New_ctor(::System::LocalDataStoreMgr* mgr, int32_t slot, int64_t cookie) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::LocalDataStoreSlot*>(mgr, slot, cookie));
}
// Ctor Parameters []
constexpr ::System::LocalDataStoreSlot::LocalDataStoreSlot() {}
