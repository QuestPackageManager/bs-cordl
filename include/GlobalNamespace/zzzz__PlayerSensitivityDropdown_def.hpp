#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSensitivityDropdown.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayerSensitivityDropdown)
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSensitivityDropdown;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerSensitivityDropdown*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerSensitivityDropdown*, "", "PlayerSensitivityDropdown");
// Dependencies PlayerSensitivityFlag, ValueDropdownController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSensitivityDropdown
class CORDL_TYPE PlayerSensitivityDropdown : public ::GlobalNamespace::ValueDropdownController_1<::GlobalNamespace::PlayerSensitivityFlag> {
public:
  // Declarations
  /// @brief Method GetNamedValues, addr 0x5a0a150, size 0x130, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::PlayerSensitivityFlag, ::StringW>*>* GetNamedValues();

  static inline ::GlobalNamespace::PlayerSensitivityDropdown* New_ctor();

  /// @brief Method .ctor, addr 0x5a0a280, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSensitivityDropdown();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSensitivityDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSensitivityDropdown(PlayerSensitivityDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSensitivityDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSensitivityDropdown(PlayerSensitivityDropdown const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6359 };

  /// @brief Field kFilterContentRatingAllLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kFilterContentRatingAllLocalizationKey{ u"FILTER_CONTENT_RATING_ALL" };

  /// @brief Field kFilterContentRatingCleanLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kFilterContentRatingCleanLocalizationKey{ u"FILTER_CONTENT_RATING_CLEAN" };

  /// @brief Field kFilterContentRatingExplicitLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kFilterContentRatingExplicitLocalizationKey{ u"FILTER_CONTENT_RATING_EXPLICIT" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlayerSensitivityDropdown) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
