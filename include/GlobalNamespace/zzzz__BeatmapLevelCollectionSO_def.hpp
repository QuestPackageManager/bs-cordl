#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelCollectionSO)
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelCollectionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelCollectionSO);
// Type: ::BeatmapLevelCollectionSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4365))
// CS Name: ::BeatmapLevelCollectionSO*
class CORDL_TYPE BeatmapLevelCollectionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _beatmapLevels, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapLevels, put = __set__beatmapLevels))::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> _beatmapLevels;

  __declspec(property(get = get_beatmapLevels))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* beatmapLevels;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelCollection"
  constexpr operator ::GlobalNamespace::IBeatmapLevelCollection*() noexcept;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*>& __get__beatmapLevels();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> const& __get__beatmapLevels() const;

  constexpr void __set__beatmapLevels(::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> value);

  /// @brief Method get_beatmapLevels addr 0x21f6100 size 0x8 virtual true final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels();

  static inline ::GlobalNamespace::BeatmapLevelCollectionSO* New_ctor();

  /// @brief Method .ctor addr 0x21f6108 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelCollectionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelCollectionSO(BeatmapLevelCollectionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelCollectionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelCollectionSO(BeatmapLevelCollectionSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelCollectionSO();

public:
  /// @brief Field _beatmapLevels, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> ____beatmapLevels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelCollectionSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelCollectionSO, ____beatmapLevels) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelCollectionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelCollectionSO*, "", "BeatmapLevelCollectionSO");
