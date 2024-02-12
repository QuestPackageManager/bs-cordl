#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeMinMax_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataMinMaxIntSO)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataMinMaxIntSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO);
// Type: ::MultiplayerBadgeDataMinMaxIntSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10903)), TypeDefinitionIndex(TypeDefinitionIndex(10904))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10899))
// CS Name: ::MultiplayerBadgeDataMinMaxIntSO*
class CORDL_TYPE MultiplayerBadgeDataMinMaxIntSO : public ::GlobalNamespace::MultiplayerBadgeDataSO {
public:
  // Declarations
  /// @brief Field _minMax, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__minMax, put = __cordl_internal_set__minMax))::GlobalNamespace::MultiplayerBadgeMinMax _minMax;

  /// @brief Field _weightMultiplier, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__weightMultiplier, put = __cordl_internal_set__weightMultiplier)) float_t _weightMultiplier;

  constexpr ::GlobalNamespace::MultiplayerBadgeMinMax& __cordl_internal_get__minMax();

  constexpr ::GlobalNamespace::MultiplayerBadgeMinMax const& __cordl_internal_get__minMax() const;

  constexpr void __cordl_internal_set__minMax(::GlobalNamespace::MultiplayerBadgeMinMax value);

  constexpr float_t& __cordl_internal_get__weightMultiplier();

  constexpr float_t const& __cordl_internal_get__weightMultiplier() const;

  constexpr void __cordl_internal_set__weightMultiplier(float_t value);

  /// @brief Method CalculateBadgeData, addr 0x1296ff0, size 0x14, virtual true, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                          ::GlobalNamespace::PlayerDataModel* playerDataModel, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                          float_t randomMultiplier);

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result);

  /// @brief Method CalculateMax, addr 0x1297004, size 0x594, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateMax(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                    float_t randomMultiplier);

  /// @brief Method CalculateMin, addr 0x1297598, size 0x598, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateMin(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                    float_t randomMultiplier);

  static inline ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO* New_ctor();

  /// @brief Method .ctor, addr 0x1295f34, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataMinMaxIntSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgeDataMinMaxIntSO(MultiplayerBadgeDataMinMaxIntSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataMinMaxIntSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgeDataMinMaxIntSO(MultiplayerBadgeDataMinMaxIntSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgeDataMinMaxIntSO();

public:
  /// @brief Field _minMax, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerBadgeMinMax ____minMax;

  /// @brief Field _weightMultiplier, offset: 0x34, size: 0x4, def value: None
  float_t ____weightMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO, ____minMax) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO, ____weightMultiplier) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*, "", "MultiplayerBadgeDataMinMaxIntSO");
