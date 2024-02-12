#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelPackSO)
namespace GlobalNamespace {
class BeatmapLevelCollectionSO;
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
// Type: ::BeatmapLevelPackSO
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11052)), TypeDefinitionIndex(TypeDefinitionIndex(15602))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10790))
// CS Name: ::BeatmapLevelPackSO*
class CORDL_TYPE BeatmapLevelPackSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _packID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__packID, put = __cordl_internal_set__packID))::StringW _packID;

  /// @brief Field _packName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__packName, put = __cordl_internal_set__packName))::StringW _packName;

  /// @brief Field _shortPackName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__shortPackName, put = __cordl_internal_set__shortPackName))::StringW _shortPackName;

  /// @brief Field _coverImage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__coverImage, put = __cordl_internal_set__coverImage))::UnityW<::UnityEngine::Sprite> _coverImage;

  /// @brief Field _smallCoverImage, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__smallCoverImage, put = __cordl_internal_set__smallCoverImage))::UnityW<::UnityEngine::Sprite> _smallCoverImage;

  /// @brief Field _contentRating, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__contentRating, put = __cordl_internal_set__contentRating))::GlobalNamespace::PlayerSensitivityFlag _contentRating;

  /// @brief Field _beatmapLevelCollection, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelCollection,
                      put = __cordl_internal_set__beatmapLevelCollection))::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> _beatmapLevelCollection;

  __declspec(property(get = get_packID))::StringW packID;

  __declspec(property(get = get_packName))::StringW packName;

  __declspec(property(get = get_shortPackName))::StringW shortPackName;

  __declspec(property(get = get_collectionName))::StringW collectionName;

  __declspec(property(get = get_coverImage))::UnityW<::UnityEngine::Sprite> coverImage;

  __declspec(property(get = get_smallCoverImage))::UnityW<::UnityEngine::Sprite> smallCoverImage;

  __declspec(property(get = get_beatmapLevelCollection))::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> beatmapLevelCollection;

  __declspec(property(get = get_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

  constexpr ::StringW& __cordl_internal_get__packID();

  constexpr ::StringW const& __cordl_internal_get__packID() const;

  constexpr void __cordl_internal_set__packID(::StringW value);

  constexpr ::StringW& __cordl_internal_get__packName();

  constexpr ::StringW const& __cordl_internal_get__packName() const;

  constexpr void __cordl_internal_set__packName(::StringW value);

  constexpr ::StringW& __cordl_internal_get__shortPackName();

  constexpr ::StringW const& __cordl_internal_get__shortPackName() const;

  constexpr void __cordl_internal_set__shortPackName(::StringW value);

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__coverImage();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__coverImage() const;

  constexpr void __cordl_internal_set__coverImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__smallCoverImage();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__smallCoverImage() const;

  constexpr void __cordl_internal_set__smallCoverImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get__contentRating();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get__contentRating() const;

  constexpr void __cordl_internal_set__contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO>& __cordl_internal_get__beatmapLevelCollection();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> const& __cordl_internal_get__beatmapLevelCollection() const;

  constexpr void __cordl_internal_set__beatmapLevelCollection(::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> value);

  /// @brief Method get_packID, addr 0x128642c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_packID();

  /// @brief Method get_packName, addr 0x1286434, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_packName();

  /// @brief Method get_shortPackName, addr 0x128643c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_shortPackName();

  /// @brief Method get_collectionName, addr 0x1286444, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_collectionName();

  /// @brief Method get_coverImage, addr 0x128644c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_coverImage();

  /// @brief Method get_smallCoverImage, addr 0x1286454, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_smallCoverImage();

  /// @brief Method get_beatmapLevelCollection, addr 0x128645c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> get_beatmapLevelCollection();

  /// @brief Method get_contentRating, addr 0x1286464, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating();

  /// @brief Method Create, addr 0x128646c, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> Create(::StringW packID);

  static inline ::GlobalNamespace::BeatmapLevelPackSO* New_ctor();

  /// @brief Method .ctor, addr 0x12864d0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelPackSO(BeatmapLevelPackSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelPackSO(BeatmapLevelPackSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelPackSO();

public:
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

  /// @brief Field _contentRating, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ____contentRating;

  /// @brief Field _beatmapLevelCollection, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> ____beatmapLevelCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelPackSO, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____packID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____packName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____shortPackName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____coverImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____smallCoverImage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____contentRating) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____beatmapLevelCollection) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelPackSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPackSO*, "", "BeatmapLevelPackSO");
