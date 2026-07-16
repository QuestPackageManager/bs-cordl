#pragma once
// IWYU pragma private; include "GlobalNamespace/RankModelHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RankModelHelper_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RankModelHelper.MaxRankForGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RankModel_Rank (*)(::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::GameplayModifiersModelSO*, float_t)>(
    &::GlobalNamespace::RankModelHelper::MaxRankForGameplayModifiers)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x374eef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RankModelHelper*>(),
                                         { "MaxRankForGameplayModifiers",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiersModelSO*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::RankModel_Rank GlobalNamespace::RankModelHelper::MaxRankForGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                                                       ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, float_t energy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RankModelHelper*>(),
                                       { "MaxRankForGameplayModifiers",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiersModelSO*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RankModel_Rank>(nullptr, ___internal_method, gameplayModifiers, gameplayModifiersModel, energy);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankModelHelper::RankModelHelper() {}
