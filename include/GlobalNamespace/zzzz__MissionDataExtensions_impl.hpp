#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionDataExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionDataExtensions_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionDataExtensions.Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::MissionObjective_ReferenceValueComparisonType)>(&::GlobalNamespace::MissionDataExtensions::Name)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3756564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataExtensions*>(),
                                                                                           { "Name", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::MissionDataExtensions::Name(::GlobalNamespace::MissionObjective_ReferenceValueComparisonType comparisonType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataExtensions*>(),
                                                                                         { "Name", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, comparisonType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionDataExtensions::MissionDataExtensions() {}
