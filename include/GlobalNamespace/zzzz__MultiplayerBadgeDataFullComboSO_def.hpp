#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBadgeDataFullComboSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataFullComboSO)
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
class MultiplayerBadgeDataFullComboSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataFullComboSO);
// Dependencies MultiplayerBadgeDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerBadgeDataFullComboSO
class CORDL_TYPE MultiplayerBadgeDataFullComboSO : public ::GlobalNamespace::MultiplayerBadgeDataSO {
public:
  // Declarations
  /// @brief Field _weight, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__weight, put = __cordl_internal_set__weight)) float_t _weight;

  /// @brief Method CalculateBadgeData, addr 0x26dcd28, size 0x460, virtual true, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                          ::GlobalNamespace::PlayerDataModel* playerDataModel, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                          float_t randomMultiplier);

  static inline ::GlobalNamespace::MultiplayerBadgeDataFullComboSO* New_ctor();

  constexpr float_t const& __cordl_internal_get__weight() const;

  constexpr float_t& __cordl_internal_get__weight();

  constexpr void __cordl_internal_set__weight(float_t value);

  /// @brief Method .ctor, addr 0x26dd1e8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerBadgeDataFullComboSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataFullComboSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerBadgeDataFullComboSO(MultiplayerBadgeDataFullComboSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataFullComboSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerBadgeDataFullComboSO(MultiplayerBadgeDataFullComboSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13073 };

  /// @brief Field _weight, offset: 0x30, size: 0x4, def value: None
  float_t ____weight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerBadgeDataFullComboSO, ____weight) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataFullComboSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataFullComboSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataFullComboSO*, "", "MultiplayerBadgeDataFullComboSO");
