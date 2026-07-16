#pragma once
// IWYU pragma private; include "GlobalNamespace/RegionToLocalizationKeyPair.hpp"
#include "GlobalNamespace/zzzz__Region_impl.hpp"
#include "GlobalNamespace/zzzz__RegionToLocalizationKeyPair_def.hpp"
#include "GlobalNamespace/zzzz__Region_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RegionToLocalizationKeyPair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegionToLocalizationKeyPair::*)(::GlobalNamespace::Region, ::StringW)>(
    &::GlobalNamespace::RegionToLocalizationKeyPair::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58e2eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RegionToLocalizationKeyPair>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::Region>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RegionToLocalizationKeyPair::_ctor(::GlobalNamespace::Region region, ::StringW localizationKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RegionToLocalizationKeyPair>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::Region>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, region, localizationKey);
}
// Ctor Parameters [CppParam { name: "region", ty: "::GlobalNamespace::Region", modifiers: "", def_value: Some("{}") }, CppParam { name: "localizationKey", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::RegionToLocalizationKeyPair::RegionToLocalizationKeyPair(::GlobalNamespace::Region region, ::StringW localizationKey) noexcept {
  this->region = region;
  this->localizationKey = localizationKey;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RegionToLocalizationKeyPair::RegionToLocalizationKeyPair() {}
