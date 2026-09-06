#pragma once
// IWYU pragma private; include "System/ComponentModel/IChangeTracking.hpp"
#include "System/ComponentModel/zzzz__IChangeTracking_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::IChangeTracking.get_IsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::IChangeTracking::*)()>(&::System::ComponentModel::IChangeTracking::get_IsChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::IChangeTracking*>(), { ::i2c::class_of<::System::ComponentModel::IChangeTracking*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::IChangeTracking.AcceptChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::IChangeTracking::*)()>(&::System::ComponentModel::IChangeTracking::AcceptChanges)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::IChangeTracking*>(), { ::i2c::class_of<::System::ComponentModel::IChangeTracking*>(), 1 }));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::IChangeTracking::get_IsChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::IChangeTracking*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ComponentModel::IChangeTracking::AcceptChanges() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::IChangeTracking*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
