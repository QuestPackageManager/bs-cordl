#pragma once
// IWYU pragma private; include "GlobalNamespace/ILevelGameplaySetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILevelGameplaySetupData)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILevelGameplaySetupData);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ILevelGameplaySetupData
class CORDL_TYPE ILevelGameplaySetupData {
public:
  // Declarations
  __declspec(property(get = get_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  __declspec(property(get = get_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Method get_beatmapKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey get_beatmapKey();

  /// @brief Method get_gameplayModifiers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  // Ctor Parameters [CppParam { name: "", ty: "ILevelGameplaySetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILevelGameplaySetupData(ILevelGameplaySetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15074 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILevelGameplaySetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILevelGameplaySetupData*, "", "ILevelGameplaySetupData");
