#pragma once
// IWYU pragma private; include "System\ComponentModel\IRevertibleChangeTracking.hpp"
#include "System/ComponentModel/zzzz__IRevertibleChangeTracking_def.hpp"
#include "System/ComponentModel/zzzz__IChangeTracking_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::IRevertibleChangeTracking.RejectChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::IRevertibleChangeTracking::*)()>(&::System::ComponentModel::IRevertibleChangeTracking::RejectChanges)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::IRevertibleChangeTracking*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::IRevertibleChangeTracking*>(), 0 }));
    return ___internal_method;
  }
};
inline void System::ComponentModel::IRevertibleChangeTracking::RejectChanges() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::IRevertibleChangeTracking*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::System::ComponentModel::IChangeTracking"
constexpr System::ComponentModel::IRevertibleChangeTracking::operator ::System::ComponentModel::IChangeTracking*() noexcept {
  return static_cast<::System::ComponentModel::IChangeTracking*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IChangeTracking"
constexpr ::System::ComponentModel::IChangeTracking* System::ComponentModel::IRevertibleChangeTracking::i___System__ComponentModel__IChangeTracking() noexcept {
  return static_cast<::System::ComponentModel::IChangeTracking*>(static_cast<void*>(this));
}
