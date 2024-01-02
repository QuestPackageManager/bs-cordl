#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelPack)
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPack;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelPack);
// Type: ::BeatmapLevelPack
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4658)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4351))
// CS Name: ::BeatmapLevelPack*
class CORDL_TYPE BeatmapLevelPack : public ::System::Object {
public:
  // Declarations
  /// @brief Field _levelPackID, offset 0x10, size 0x8
  __declspec(property(get = __get__levelPackID, put = __set__levelPackID))::StringW _levelPackID;

  /// @brief Field _packName, offset 0x18, size 0x8
  __declspec(property(get = __get__packName, put = __set__packName))::StringW _packName;

  /// @brief Field _shortPackName, offset 0x20, size 0x8
  __declspec(property(get = __get__shortPackName, put = __set__shortPackName))::StringW _shortPackName;

  /// @brief Field _coverImage, offset 0x28, size 0x8
  __declspec(property(get = __get__coverImage, put = __set__coverImage))::UnityEngine::Sprite* _coverImage;

  /// @brief Field _smallCoverImage, offset 0x30, size 0x8
  __declspec(property(get = __get__smallCoverImage, put = __set__smallCoverImage))::UnityEngine::Sprite* _smallCoverImage;

  /// @brief Field _beatmapLevelCollection, offset 0x38, size 0x8
  __declspec(property(get = __get__beatmapLevelCollection, put = __set__beatmapLevelCollection))::GlobalNamespace::IBeatmapLevelCollection* _beatmapLevelCollection;

  /// @brief Field _contentRating, offset 0x40, size 0x4
  __declspec(property(get = __get__contentRating, put = __set__contentRating))::GlobalNamespace::PlayerSensitivityFlag _contentRating;

  __declspec(property(get = get_packID))::StringW packID;

  __declspec(property(get = get_packName))::StringW packName;

  __declspec(property(get = get_shortPackName))::StringW shortPackName;

  __declspec(property(get = get_collectionName))::StringW collectionName;

  __declspec(property(get = get_coverImage))::UnityEngine::Sprite* coverImage;

  __declspec(property(get = get_smallCoverImage))::UnityEngine::Sprite* smallCoverImage;

  __declspec(property(get = get_beatmapLevelCollection))::GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection;

  __declspec(property(get = get_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelPack"
  constexpr operator ::GlobalNamespace::IBeatmapLevelPack*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IAnnotatedBeatmapLevelCollection"
  constexpr operator ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*() noexcept;

  constexpr ::StringW& __get__levelPackID();

  constexpr ::StringW const& __get__levelPackID() const;

  constexpr void __set__levelPackID(::StringW value);

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

  constexpr ::GlobalNamespace::IBeatmapLevelCollection*& __get__beatmapLevelCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelCollection*> const& __get__beatmapLevelCollection() const;

  constexpr void __set__beatmapLevelCollection(::GlobalNamespace::IBeatmapLevelCollection* value);

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __get__contentRating();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __get__contentRating() const;

  constexpr void __set__contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  /// @brief Method get_packID, addr 0x23420a0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_packID();

  /// @brief Method get_packName, addr 0x23420a8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_packName();

  /// @brief Method get_shortPackName, addr 0x23420b0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_shortPackName();

  /// @brief Method get_collectionName, addr 0x23420b8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_collectionName();

  /// @brief Method get_coverImage, addr 0x23420c0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Sprite* get_coverImage();

  /// @brief Method get_smallCoverImage, addr 0x23420c8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Sprite* get_smallCoverImage();

  /// @brief Method get_beatmapLevelCollection, addr 0x23420d0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();

  /// @brief Method get_contentRating, addr 0x23420d8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating();

  static inline ::GlobalNamespace::BeatmapLevelPack* New_ctor(::StringW levelPackID, ::StringW packName, ::StringW shortPackName, ::UnityEngine::Sprite* coverImage,
                                                              ::UnityEngine::Sprite* smallCoverImage, ::GlobalNamespace::IBeatmapLevelCollection* levelCollection,
                                                              ::GlobalNamespace::PlayerSensitivityFlag contentRating);

  /// @brief Method .ctor, addr 0x23420e0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelPackID, ::StringW packName, ::StringW shortPackName, ::UnityEngine::Sprite* coverImage, ::UnityEngine::Sprite* smallCoverImage,
                    ::GlobalNamespace::IBeatmapLevelCollection* levelCollection, ::GlobalNamespace::PlayerSensitivityFlag contentRating);

  /// @brief Method CreateBeatmapLevelPackByUsingBeatmapCharacteristicFiltering, addr 0x2342144, size 0x360, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapLevelPack* CreateBeatmapLevelPackByUsingBeatmapCharacteristicFiltering(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack,
                                                                                                                 ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelPack(BeatmapLevelPack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelPack(BeatmapLevelPack const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelPack();

public:
  /// @brief Field _levelPackID, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelPackID;

  /// @brief Field _packName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____packName;

  /// @brief Field _shortPackName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____shortPackName;

  /// @brief Field _coverImage, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____coverImage;

  /// @brief Field _smallCoverImage, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____smallCoverImage;

  /// @brief Field _beatmapLevelCollection, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelCollection* ____beatmapLevelCollection;

  /// @brief Field _contentRating, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ____contentRating;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelPack, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ____levelPackID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ____packName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ____shortPackName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ____coverImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ____smallCoverImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ____beatmapLevelCollection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ____contentRating) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelPack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPack*, "", "BeatmapLevelPack");
