#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/IInitialDestinationResolver.hpp"
#include "BeatSaber/Destinations/zzzz__IInitialDestinationResolver_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::IInitialDestinationResolver.InitializeScenesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::Destinations::IInitialDestinationResolver::*)()>(
    &::BeatSaber::Destinations::IInitialDestinationResolver::InitializeScenesAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::IInitialDestinationResolver*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Destinations::IInitialDestinationResolver*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* BeatSaber::Destinations::IInitialDestinationResolver::InitializeScenesAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Destinations::IInitialDestinationResolver*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
