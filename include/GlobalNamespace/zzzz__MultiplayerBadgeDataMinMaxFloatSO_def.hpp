#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeMinMax_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataMinMaxFloatSO)
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
class MultiplayerBadgeDataMinMaxFloatSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO);
// Type: ::MultiplayerBadgeDataMinMaxFloatSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10903)), TypeDefinitionIndex(TypeDefinitionIndex(10904))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10898))
// CS Name: ::MultiplayerBadgeDataMinMaxFloatSO*
class CORDL_TYPE MultiplayerBadgeDataMinMaxFloatSO : public ::GlobalNamespace::MultiplayerBadgeDataSO {
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

  /// @brief Method CalculateBadgeData, addr 0x12964c8, size 0x14, virtual true, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                          ::GlobalNamespace::PlayerDataModel* playerDataModel, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                          float_t randomMultiplier);

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result);

  /// @brief Method CalculateMax, addr 0x12964dc, size 0x584, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateMax(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                    float_t randomMultiplier);

  /// @brief Method CalculateMin, addr 0x1296a60, size 0x590, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateMin(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                    float_t randomMultiplier);

  static inline ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO* New_ctor();

  /// @brief Method .ctor, addr 0x12964b8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataMinMaxFloatSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgeDataMinMaxFloatSO(MultiplayerBadgeDataMinMaxFloatSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataMinMaxFloatSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgeDataMinMaxFloatSO(MultiplayerBadgeDataMinMaxFloatSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgeDataMinMaxFloatSO();

public:
  /// @brief Field _minMax, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerBadgeMinMax ____minMax;

  /// @brief Field _weightMultiplier, offset: 0x34, size: 0x4, def value: None
  float_t ____weightMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO, ____minMax) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO, ____weightMultiplier) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*, "", "MultiplayerBadgeDataMinMaxFloatSO");
