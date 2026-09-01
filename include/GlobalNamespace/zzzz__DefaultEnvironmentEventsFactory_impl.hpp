#pragma once
// IWYU pragma private; include "GlobalNamespace\DefaultEnvironmentEventsFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DefaultEnvironmentEventsFactory_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEventsFactory.InsertDefaultEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BeatmapData*)>(&::GlobalNamespace::DefaultEnvironmentEventsFactory::InsertDefaultEvents)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3715c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DefaultEnvironmentEventsFactory*>(),
                                                                                           { "InsertDefaultEvents", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapData*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DefaultEnvironmentEventsFactory::InsertDefaultEvents(::GlobalNamespace::BeatmapData* beatmapData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DefaultEnvironmentEventsFactory*>(), { "InsertDefaultEvents", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, beatmapData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DefaultEnvironmentEventsFactory::DefaultEnvironmentEventsFactory() {}
