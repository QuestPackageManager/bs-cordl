#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelsPromoModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelsPromoModel)
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsPromoDataSO;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelsPromoModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelsPromoModel);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelsPromoModel
class CORDL_TYPE BeatmapLevelsPromoModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _promotedBeatmapLevelPacksSet, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__promotedBeatmapLevelPacksSet,
                      put = __cordl_internal_set__promotedBeatmapLevelPacksSet)) ::System::Collections::Generic::HashSet_1<::StringW>* _promotedBeatmapLevelPacksSet;

  /// @brief Field _promotedBeatmapLevelsSet, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__promotedBeatmapLevelsSet,
                      put = __cordl_internal_set__promotedBeatmapLevelsSet)) ::System::Collections::Generic::HashSet_1<::StringW>* _promotedBeatmapLevelsSet;

  /// @brief Field _updatedBeatmapLevelPacksSet, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__updatedBeatmapLevelPacksSet,
                      put = __cordl_internal_set__updatedBeatmapLevelPacksSet)) ::System::Collections::Generic::HashSet_1<::StringW>* _updatedBeatmapLevelPacksSet;

  /// @brief Field _updatedBeatmapLevelsSet, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__updatedBeatmapLevelsSet,
                      put = __cordl_internal_set__updatedBeatmapLevelsSet)) ::System::Collections::Generic::HashSet_1<::StringW>* _updatedBeatmapLevelsSet;

  /// @brief Method IsBeatmapLevelPackPromoted, addr 0x26f54b0, size 0x5c, virtual false, abstract: false, final false
  inline bool IsBeatmapLevelPackPromoted(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack);

  /// @brief Method IsBeatmapLevelPackUpdated, addr 0x26f550c, size 0x5c, virtual false, abstract: false, final false
  inline bool IsBeatmapLevelPackUpdated(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack);

  /// @brief Method IsBeatmapLevelPromoted, addr 0x26f5568, size 0x5c, virtual false, abstract: false, final false
  inline bool IsBeatmapLevelPromoted(::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method IsBeatmapLevelUpdated, addr 0x26f55c4, size 0x5c, virtual false, abstract: false, final false
  inline bool IsBeatmapLevelUpdated(::GlobalNamespace::BeatmapLevel* beatmapLevel);

  static inline ::GlobalNamespace::BeatmapLevelsPromoModel* New_ctor(::GlobalNamespace::BeatmapLevelsPromoDataSO* promoDataSO);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__promotedBeatmapLevelPacksSet() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__promotedBeatmapLevelPacksSet();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__promotedBeatmapLevelsSet() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__promotedBeatmapLevelsSet();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__updatedBeatmapLevelPacksSet() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__updatedBeatmapLevelPacksSet();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__updatedBeatmapLevelsSet() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__updatedBeatmapLevelsSet();

  constexpr void __cordl_internal_set__promotedBeatmapLevelPacksSet(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__promotedBeatmapLevelsSet(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__updatedBeatmapLevelPacksSet(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__updatedBeatmapLevelsSet(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x26f5394, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelsPromoDataSO* promoDataSO);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelsPromoModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsPromoModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelsPromoModel(BeatmapLevelsPromoModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsPromoModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelsPromoModel(BeatmapLevelsPromoModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13238 };

  /// @brief Field _promotedBeatmapLevelPacksSet, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____promotedBeatmapLevelPacksSet;

  /// @brief Field _updatedBeatmapLevelPacksSet, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____updatedBeatmapLevelPacksSet;

  /// @brief Field _promotedBeatmapLevelsSet, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____promotedBeatmapLevelsSet;

  /// @brief Field _updatedBeatmapLevelsSet, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____updatedBeatmapLevelsSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelsPromoModel, ____promotedBeatmapLevelPacksSet) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsPromoModel, ____updatedBeatmapLevelPacksSet) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsPromoModel, ____promotedBeatmapLevelsSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsPromoModel, ____updatedBeatmapLevelsSet) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsPromoModel, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsPromoModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsPromoModel*, "", "BeatmapLevelsPromoModel");
