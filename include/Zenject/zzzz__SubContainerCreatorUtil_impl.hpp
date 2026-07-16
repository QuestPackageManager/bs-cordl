#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorUtil_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorUtil.ApplyBindSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Zenject::SubContainerCreatorBindInfo*, ::Zenject::DiContainer*)>(&::Zenject::SubContainerCreatorUtil::ApplyBindSettings)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x6e8721c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorUtil*>(),
                                                             { "ApplyBindSettings", {}, { ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
inline void Zenject::SubContainerCreatorUtil::ApplyBindSettings(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::DiContainer* subContainer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SubContainerCreatorUtil*>(),
                                                           { "ApplyBindSettings", {}, { ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, subContainerBindInfo, subContainer);
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorUtil::SubContainerCreatorUtil() {}
