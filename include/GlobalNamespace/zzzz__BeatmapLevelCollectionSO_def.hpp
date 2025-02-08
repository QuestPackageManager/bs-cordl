#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelCollectionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelCollectionSO)
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelCollectionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelCollectionSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelCollectionSO
class CORDL_TYPE BeatmapLevelCollectionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _beatmapLevels, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevels,
                      put = __cordl_internal_set__beatmapLevels)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* _beatmapLevels;

  __declspec(property(get = get_beatmapLevels)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* beatmapLevels;

  /// @brief Method AddBeatmapLevel, addr 0x26c6534, size 0xa4, virtual false, abstract: false, final false
  inline void AddBeatmapLevel(::GlobalNamespace::BeatmapLevelSO* beatmapLevel);

  /// @brief Method Create, addr 0x26c6494, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> Create();

  static inline ::GlobalNamespace::BeatmapLevelCollectionSO* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* const& __cordl_internal_get__beatmapLevels() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*& __cordl_internal_get__beatmapLevels();

  constexpr void __cordl_internal_set__beatmapLevels(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* value);

  /// @brief Method .ctor, addr 0x26c65d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beatmapLevels, addr 0x26c648c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* get_beatmapLevels();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelCollectionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelCollectionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelCollectionSO(BeatmapLevelCollectionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelCollectionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelCollectionSO(BeatmapLevelCollectionSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12947 };

  /// @brief Field _beatmapLevels, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* ____beatmapLevels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelCollectionSO, ____beatmapLevels) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelCollectionSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelCollectionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelCollectionSO*, "", "BeatmapLevelCollectionSO");
