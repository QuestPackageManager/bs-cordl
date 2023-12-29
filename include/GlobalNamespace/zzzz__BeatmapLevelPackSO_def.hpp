#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelPackSO)
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevelCollectionSO;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelPackSO);
// Type: ::BeatmapLevelPackSO
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4379))
// CS Name: ::BeatmapLevelPackSO*
class CORDL_TYPE BeatmapLevelPackSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _packID, offset 0x18, size 0x8
  __declspec(property(get = __get__packID, put = __set__packID))::StringW _packID;

  /// @brief Field _packName, offset 0x20, size 0x8
  __declspec(property(get = __get__packName, put = __set__packName))::StringW _packName;

  /// @brief Field _shortPackName, offset 0x28, size 0x8
  __declspec(property(get = __get__shortPackName, put = __set__shortPackName))::StringW _shortPackName;

  /// @brief Field _coverImage, offset 0x30, size 0x8
  __declspec(property(get = __get__coverImage, put = __set__coverImage))::UnityEngine::Sprite* _coverImage;

  /// @brief Field _smallCoverImage, offset 0x38, size 0x8
  __declspec(property(get = __get__smallCoverImage, put = __set__smallCoverImage))::UnityEngine::Sprite* _smallCoverImage;

  /// @brief Field _beatmapLevelCollection, offset 0x40, size 0x8
  __declspec(property(get = __get__beatmapLevelCollection, put = __set__beatmapLevelCollection))::GlobalNamespace::BeatmapLevelCollectionSO* _beatmapLevelCollection;

  __declspec(property(get = get_packID))::StringW packID;

  __declspec(property(get = get_packName))::StringW packName;

  __declspec(property(get = get_shortPackName))::StringW shortPackName;

  __declspec(property(get = get_collectionName))::StringW collectionName;

  __declspec(property(get = get_coverImage))::UnityEngine::Sprite* coverImage;

  __declspec(property(get = get_smallCoverImage))::UnityEngine::Sprite* smallCoverImage;

  __declspec(property(get = get_beatmapLevelCollection))::GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelPack"
  constexpr operator ::GlobalNamespace::IBeatmapLevelPack*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IAnnotatedBeatmapLevelCollection"
  constexpr operator ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*() noexcept;

  constexpr ::StringW& __get__packID();

  constexpr ::StringW const& __get__packID() const;

  constexpr void __set__packID(::StringW value);

  constexpr ::StringW& __get__packName();

  constexpr ::StringW const& __get__packName() const;

  constexpr void __set__packName(::StringW value);

  constexpr ::StringW& __get__shortPackName();

  constexpr ::StringW const& __get__shortPackName() const;

  constexpr void __set__shortPackName(::StringW value);

  constexpr ::UnityEngine::Sprite*& __get__coverImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__coverImage() const;

  constexpr void __set__coverImage(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__smallCoverImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__smallCoverImage() const;

  constexpr void __set__smallCoverImage(::UnityEngine::Sprite* value);

  constexpr ::GlobalNamespace::BeatmapLevelCollectionSO*& __get__beatmapLevelCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelCollectionSO*> const& __get__beatmapLevelCollection() const;

  constexpr void __set__beatmapLevelCollection(::GlobalNamespace::BeatmapLevelCollectionSO* value);

  /// @brief Method get_packID addr 0x21f81bc size 0x8 virtual true final true
  inline ::StringW get_packID();

  /// @brief Method get_packName addr 0x21f81c4 size 0x8 virtual true final true
  inline ::StringW get_packName();

  /// @brief Method get_shortPackName addr 0x21f81cc size 0x8 virtual true final true
  inline ::StringW get_shortPackName();

  /// @brief Method get_collectionName addr 0x21f81d4 size 0x8 virtual true final true
  inline ::StringW get_collectionName();

  /// @brief Method get_coverImage addr 0x21f81dc size 0x8 virtual true final true
  inline ::UnityEngine::Sprite* get_coverImage();

  /// @brief Method get_smallCoverImage addr 0x21f81e4 size 0x8 virtual true final true
  inline ::UnityEngine::Sprite* get_smallCoverImage();

  /// @brief Method get_beatmapLevelCollection addr 0x21f81ec size 0x8 virtual true final true
  inline ::GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();

  static inline ::GlobalNamespace::BeatmapLevelPackSO* New_ctor();

  /// @brief Method .ctor addr 0x21f81f4 size 0x8 virtual false final false
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
  ::UnityEngine::Sprite* ____coverImage;

  /// @brief Field _smallCoverImage, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____smallCoverImage;

  /// @brief Field _beatmapLevelCollection, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelCollectionSO* ____beatmapLevelCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelPackSO, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____packID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____packName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____shortPackName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____coverImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____smallCoverImage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackSO, ____beatmapLevelCollection) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelPackSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPackSO*, "", "BeatmapLevelPackSO");
