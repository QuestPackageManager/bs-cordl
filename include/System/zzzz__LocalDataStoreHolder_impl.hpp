#pragma once
// IWYU pragma private; include "System\LocalDataStoreHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalDataStoreHolder_def.hpp"
#include "System/zzzz__LocalDataStore_def.hpp"
//  Writing Method size for method: ::System::LocalDataStoreHolder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStoreHolder::*)(::System::LocalDataStore*)>(&::System::LocalDataStoreHolder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c70af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreHolder*>(), { ".ctor", {}, { ::i2c::type_of<::System::LocalDataStore*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreHolder.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStoreHolder::*)()>(&::System::LocalDataStoreHolder::Finalize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c70afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::LocalDataStoreHolder*>(), { ::i2c::class_of<::System::LocalDataStoreHolder*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreHolder.get_Store
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::LocalDataStore* (::System::LocalDataStoreHolder::*)()>(&::System::LocalDataStoreHolder::get_Store)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c70b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreHolder*>(), { "get_Store", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::LocalDataStore*& System::LocalDataStoreHolder::__cordl_internal_get_m_Store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Store;
}
constexpr ::System::LocalDataStore* const& System::LocalDataStoreHolder::__cordl_internal_get_m_Store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Store;
}
constexpr void System::LocalDataStoreHolder::__cordl_internal_set_m_Store(::System::LocalDataStore* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Store = value;
}
inline void System::LocalDataStoreHolder::_ctor(::System::LocalDataStore* store) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreHolder*>(), { ".ctor", {}, { ::i2c::type_of<::System::LocalDataStore*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store);
}
inline void System::LocalDataStoreHolder::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::LocalDataStoreHolder*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::LocalDataStore* System::LocalDataStoreHolder::get_Store() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreHolder*>(), { "get_Store", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStore*>(this, ___internal_method);
}
inline ::System::LocalDataStoreHolder* System::LocalDataStoreHolder::New_ctor(::System::LocalDataStore* store) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::LocalDataStoreHolder*>(store));
}
// Ctor Parameters []
constexpr ::System::LocalDataStoreHolder::LocalDataStoreHolder() {}
