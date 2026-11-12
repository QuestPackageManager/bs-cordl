#pragma once
// IWYU pragma private; include "GlobalNamespace/ILevelProductData.hpp"
#include "GlobalNamespace/zzzz__ILevelProductData_def.hpp"
#include "GlobalNamespace/zzzz__ProductDisplayMode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ILevelProductData.get_levelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ILevelProductData::*)()>(&::GlobalNamespace::ILevelProductData::get_levelId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILevelProductData*>(), { ::i2c::class_of<::GlobalNamespace::ILevelProductData*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILevelProductData.get_displayMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProductDisplayMode (::GlobalNamespace::ILevelProductData::*)()>(&::GlobalNamespace::ILevelProductData::get_displayMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILevelProductData*>(), { ::i2c::class_of<::GlobalNamespace::ILevelProductData*>(), 1 }));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ILevelProductData::get_levelId() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILevelProductData*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::ProductDisplayMode GlobalNamespace::ILevelProductData::get_displayMode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILevelProductData*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProductDisplayMode>(this, ___internal_method);
}
