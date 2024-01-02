#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AlwaysOwnedContentSO)
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class AlwaysOwnedContentSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AlwaysOwnedContentSO);
// Type: ::AlwaysOwnedContentSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4102))
// CS Name: ::AlwaysOwnedContentSO*
class CORDL_TYPE AlwaysOwnedContentSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _alwaysOwnedPacks, offset 0x18, size 0x8
  __declspec(property(get = __get__alwaysOwnedPacks,
                      put = __set__alwaysOwnedPacks))::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*, ::Array<::GlobalNamespace::BeatmapLevelPackSO*>*> _alwaysOwnedPacks;

  /// @brief Field _alwaysOwnedBeatmapLevels, offset 0x20, size 0x8
  __declspec(property(get = __get__alwaysOwnedBeatmapLevels,
                      put = __set__alwaysOwnedBeatmapLevels))::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> _alwaysOwnedBeatmapLevels;

  __declspec(property(get = get_alwaysOwnedPacks))::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*, ::Array<::GlobalNamespace::BeatmapLevelPackSO*>*> alwaysOwnedPacks;

  __declspec(property(get = get_alwaysOwnedBeatmapLevels))::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> alwaysOwnedBeatmapLevels;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*, ::Array<::GlobalNamespace::BeatmapLevelPackSO*>*>& __get__alwaysOwnedPacks();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*, ::Array<::GlobalNamespace::BeatmapLevelPackSO*>*> const& __get__alwaysOwnedPacks() const;

  constexpr void __set__alwaysOwnedPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*, ::Array<::GlobalNamespace::BeatmapLevelPackSO*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*>& __get__alwaysOwnedBeatmapLevels();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> const& __get__alwaysOwnedBeatmapLevels() const;

  constexpr void __set__alwaysOwnedBeatmapLevels(::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> value);

  /// @brief Method get_alwaysOwnedPacks, addr 0x22343f4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*, ::Array<::GlobalNamespace::BeatmapLevelPackSO*>*> get_alwaysOwnedPacks();

  /// @brief Method get_alwaysOwnedBeatmapLevels, addr 0x22343fc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> get_alwaysOwnedBeatmapLevels();

  static inline ::GlobalNamespace::AlwaysOwnedContentSO* New_ctor();

  /// @brief Method .ctor, addr 0x2234404, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AlwaysOwnedContentSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlwaysOwnedContentSO(AlwaysOwnedContentSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlwaysOwnedContentSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlwaysOwnedContentSO(AlwaysOwnedContentSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlwaysOwnedContentSO();

public:
  /// @brief Field _alwaysOwnedPacks, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*, ::Array<::GlobalNamespace::BeatmapLevelPackSO*>*> ____alwaysOwnedPacks;

  /// @brief Field _alwaysOwnedBeatmapLevels, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> ____alwaysOwnedBeatmapLevels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlwaysOwnedContentSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AlwaysOwnedContentSO, ____alwaysOwnedPacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlwaysOwnedContentSO, ____alwaysOwnedBeatmapLevels) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlwaysOwnedContentSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlwaysOwnedContentSO*, "", "AlwaysOwnedContentSO");
