#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayAdditionalInformationSetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(GameplayAdditionalInformationSetupData)
namespace GlobalNamespace {
class GameplayAdditionalInformation;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayAdditionalInformationSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayAdditionalInformationSetupData);
// Dependencies SceneSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayAdditionalInformationSetupData
class CORDL_TYPE GameplayAdditionalInformationSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field additionalInformation, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_additionalInformation, put = __cordl_internal_set_additionalInformation)) ::GlobalNamespace::GameplayAdditionalInformation* additionalInformation;

  static inline ::GlobalNamespace::GameplayAdditionalInformationSetupData* New_ctor(::GlobalNamespace::GameplayAdditionalInformation* additionalInformation);

  constexpr ::GlobalNamespace::GameplayAdditionalInformation* const& __cordl_internal_get_additionalInformation() const;

  constexpr ::GlobalNamespace::GameplayAdditionalInformation*& __cordl_internal_get_additionalInformation();

  constexpr void __cordl_internal_set_additionalInformation(::GlobalNamespace::GameplayAdditionalInformation* value);

  /// @brief Method .ctor, addr 0x577b1a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::GameplayAdditionalInformation* additionalInformation);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayAdditionalInformationSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayAdditionalInformationSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayAdditionalInformationSetupData(GameplayAdditionalInformationSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayAdditionalInformationSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayAdditionalInformationSetupData(GameplayAdditionalInformationSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6810 };

  /// @brief Field additionalInformation, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameplayAdditionalInformation* ___additionalInformation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayAdditionalInformationSetupData, ___additionalInformation) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayAdditionalInformationSetupData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayAdditionalInformationSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayAdditionalInformationSetupData*, "", "GameplayAdditionalInformationSetupData");
