#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerBadgeDataFullComboSO.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataFullComboSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeAwardData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataFullComboSO.CalculateBadgeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerBadgeAwardData* (
    ::GlobalNamespace::MultiplayerBadgeDataFullComboSO::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, ::GlobalNamespace::PlayerDataModel*,
                                                           ::by_ref<::GlobalNamespace::BeatmapKey>, float_t)>(&::GlobalNamespace::MultiplayerBadgeDataFullComboSO::CalculateBadgeData)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x373317c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataFullComboSO*>(), { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataFullComboSO*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataFullComboSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataFullComboSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataFullComboSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x37335d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataFullComboSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MultiplayerBadgeDataFullComboSO::__cordl_internal_get__weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weight;
}
constexpr float_t const& GlobalNamespace::MultiplayerBadgeDataFullComboSO::__cordl_internal_get__weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weight;
}
constexpr void GlobalNamespace::MultiplayerBadgeDataFullComboSO::__cordl_internal_set__weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____weight = value;
}
inline ::GlobalNamespace::MultiplayerBadgeAwardData*
GlobalNamespace::MultiplayerBadgeDataFullComboSO::CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                     ::GlobalNamespace::PlayerDataModel* playerDataModel, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                     float_t randomMultiplier) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataFullComboSO*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerBadgeAwardData*>(this, ___internal_method, resultsData, playerDataModel, beatmapKey, randomMultiplier);
}
inline void GlobalNamespace::MultiplayerBadgeDataFullComboSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataFullComboSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBadgeDataFullComboSO* GlobalNamespace::MultiplayerBadgeDataFullComboSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerBadgeDataFullComboSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgeDataFullComboSO::MultiplayerBadgeDataFullComboSO() {}
