#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelPackSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PackBuyOption_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelPackSO)
namespace GlobalNamespace {
class BeatmapLevelCollectionSO;
}
namespace GlobalNamespace {
struct PackBuyOption;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelPackSO);
// Dependencies PackBuyOption, PersistentScriptableObject, PlayerSensitivityFlag
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelPackSO
class CORDL_TYPE BeatmapLevelPackSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _beatmapLevelCollection, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelCollection, put = __cordl_internal_set__beatmapLevelCollection)) ::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO>
      _beatmapLevelCollection;

  /// @brief Field _contentRating, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__contentRating, put = __cordl_internal_set__contentRating)) ::GlobalNamespace::PlayerSensitivityFlag _contentRating;

  /// @brief Field _coverImage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__coverImage, put = __cordl_internal_set__coverImage)) ::UnityW<::UnityEngine::Sprite> _coverImage;

  /// @brief Field _packBuyOption, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__packBuyOption, put = __cordl_internal_set__packBuyOption)) ::GlobalNamespace::PackBuyOption _packBuyOption;

  /// @brief Field _packID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__packID, put = __cordl_internal_set__packID)) ::StringW _packID;

  /// @brief Field _packName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__packName, put = __cordl_internal_set__packName)) ::StringW _packName;

  /// @brief Field _shortPackName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__shortPackName, put = __cordl_internal_set__shortPackName)) ::StringW _shortPackName;

  /// @brief Field _smallCoverImage, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__smallCoverImage, put = __cordl_internal_set__smallCoverImage)) ::UnityW<::UnityEngine::Sprite> _smallCoverImage;

  __declspec(property(get = get_beatmapLevelCollection)) ::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> beatmapLevelCollection;

  __declspec(property(get = get_collectionName)) ::StringW collectionName;

  __declspec(property(get = get_contentRating)) ::GlobalNamespace::PlayerSensitivityFlag contentRating;

  __declspec(property(get = get_coverImage)) ::UnityW<::UnityEngine::Sprite> coverImage;

  __declspec(property(get = get_packBuyOption)) ::GlobalNamespace::PackBuyOption packBuyOption;

  __declspec(property(get = get_packID)) ::StringW packID;

  __declspec(property(get = get_packName)) ::StringW packName;

  __declspec(property(get = get_shortPackName)) ::StringW shortPackName;

  __declspec(property(get = get_smallCoverImage)) ::UnityW<::UnityEngine::Sprite> smallCoverImage;

  /// @brief Method Create, addr 0x26c8a08, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> Create(::StringW packID);

  static inline ::GlobalNamespace::BeatmapLevelPackSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> const& __cordl_internal_get__beatmapLevelCollection() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO>& __cordl_internal_get__beatmapLevelCollection();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get__contentRating() const;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get__contentRating();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__coverImage() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__coverImage();

  constexpr ::GlobalNamespace::PackBuyOption const& __cordl_internal_get__packBuyOption() const;

  constexpr ::GlobalNamespace::PackBuyOption& __cordl_internal_get__packBuyOption();

  constexpr ::StringW const& __cordl_internal_get__packID() const;

  constexpr ::StringW& __cordl_internal_get__packID();

  constexpr ::StringW const& __cordl_internal_get__packName() const;

  constexpr ::StringW& __cordl_internal_get__packName();

  constexpr ::StringW const& __cordl_internal_get__shortPackName() const;

  constexpr ::StringW& __cordl_internal_get__shortPackName();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__smallCoverImage() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__smallCoverImage();

  constexpr void __cordl_internal_set__beatmapLevelCollection(::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> value);

  constexpr void __cordl_internal_set__contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr void __cordl_internal_set__coverImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__packBuyOption(::GlobalNamespace::PackBuyOption value);

  constexpr void __cordl_internal_set__packID(::StringW value);

  constexpr void __cordl_internal_set__packName(::StringW value);

  constexpr void __cordl_internal_set__shortPackName(::StringW value);

  constexpr void __cordl_internal_set__smallCoverImage(::UnityW<::UnityEngine::Sprite> value);

  /// @brief Method .ctor, addr 0x26c8a70, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beatmapLevelCollection, addr 0x26c89f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> get_beatmapLevelCollection();

  /// @brief Method get_collectionName, addr 0x26c89d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_collectionName();

  /// @brief Method get_contentRating, addr 0x26c8a00, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating();

  /// @brief Method get_coverImage, addr 0x26c89e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_coverImage();

  /// @brief Method get_packBuyOption, addr 0x26c89f0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PackBuyOption get_packBuyOption();

  /// @brief Method get_packID, addr 0x26c89c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_packID();

  /// @brief Method get_packName, addr 0x26c89c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_packName();

  /// @brief Method get_shortPackName, addr 0x26c89d0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_shortPackName();

  /// @brief Method get_smallCoverImage, addr 0x26c89e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_smallCoverImage();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelPackSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelPackSO(BeatmapLevelPackSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelPackSO(BeatmapLevelPackSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12959 };

  /// @brief Field _packID, offset: 0x18, size: 0x8, def value: None
  ::StringW ____packID;

  /// @brief Field _packName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____packName;

  /// @brief Field _shortPackName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____shortPackName;

  /// @brief Field _coverImage, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____coverImage;

  /// @brief Field _smallCoverImage, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____smallCoverImage;

  /// @brief Field _packBuyOption, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::PackBuyOption ____packBuyOption;

  /// @brief Field _contentRating, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ____contentRating;

  /// @brief Field _beatmapLevelCollection, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> ____beatmapLevelCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____packID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____packName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____shortPackName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____coverImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____smallCoverImage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____packBuyOption) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____contentRating) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____beatmapLevelCollection) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelPackSO, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelPackSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPackSO*, "", "BeatmapLevelPackSO");
