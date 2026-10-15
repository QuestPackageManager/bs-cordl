#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayTypeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayTypeExtensions_def.hpp"
#include "GlobalNamespace/zzzz__GameplayType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayTypeExtensions.CompoundIdPartName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::GameplayType)>(&::GlobalNamespace::GameplayTypeExtensions::CompoundIdPartName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x39d9c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayTypeExtensions*>(), { "CompoundIdPartName", {}, { ::i2c::type_of<::GlobalNamespace::GameplayType>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::GameplayTypeExtensions::CompoundIdPartName(::GlobalNamespace::GameplayType gameplayType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayTypeExtensions*>(), { "CompoundIdPartName", {}, { ::i2c::type_of<::GlobalNamespace::GameplayType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, gameplayType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayTypeExtensions::GameplayTypeExtensions() {}
