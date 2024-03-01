#pragma once
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
// Type: ::ILevelGameplaySetupData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ILevelGameplaySetupData*
class CORDL_TYPE ILevelGameplaySetupData {
public:
  // Declarations
  __declspec(property(get = get_beatmapKey))::GlobalNamespace::BeatmapKey beatmapKey;

  __declspec(property(get = get_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Method get_beatmapKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::BeatmapKey get_beatmapKey();

  /// @brief Method get_gameplayModifiers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  // Ctor Parameters [CppParam { name: "", ty: "ILevelGameplaySetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILevelGameplaySetupData(ILevelGameplaySetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILevelGameplaySetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILevelGameplaySetupData(ILevelGameplaySetupData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILevelGameplaySetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILevelGameplaySetupData*, "", "ILevelGameplaySetupData");
