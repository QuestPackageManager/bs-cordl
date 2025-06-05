#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelPack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PackBuyOption_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelPack)
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
struct PackBuyOption;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPack;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelPack);
// Dependencies PackBuyOption, PlayerSensitivityFlag, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelPack
class CORDL_TYPE BeatmapLevelPack : public ::System::Object {
public:
  // Declarations
  /// @brief Field _additionalBeatmapLevels, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalBeatmapLevels,
                      put = __cordl_internal_set__additionalBeatmapLevels)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* _additionalBeatmapLevels;

  /// @brief Field _allBeatmapLevels, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__allBeatmapLevels,
                      put = __cordl_internal_set__allBeatmapLevels)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* _allBeatmapLevels;

  /// @brief Field _beatmapLevels, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevels, put = __cordl_internal_set__beatmapLevels)) ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>
      _beatmapLevels;

  /// @brief Field contentRating, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_contentRating, put = __cordl_internal_set_contentRating)) ::GlobalNamespace::PlayerSensitivityFlag contentRating;

  /// @brief Field coverImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_coverImage, put = __cordl_internal_set_coverImage)) ::UnityW<::UnityEngine::Sprite> coverImage;

  /// @brief Field packBuyOption, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_packBuyOption, put = __cordl_internal_set_packBuyOption)) ::GlobalNamespace::PackBuyOption packBuyOption;

  /// @brief Field packID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_packID, put = __cordl_internal_set_packID)) ::StringW packID;

  /// @brief Field packName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_packName, put = __cordl_internal_set_packName)) ::StringW packName;

  /// @brief Field shortPackName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_shortPackName, put = __cordl_internal_set_shortPackName)) ::StringW shortPackName;

  /// @brief Field smallCoverImage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_smallCoverImage, put = __cordl_internal_set_smallCoverImage)) ::UnityW<::UnityEngine::Sprite> smallCoverImage;

  /// @brief Method AddAdditionalBeatmapLevel, addr 0x26cab44, size 0xe8, virtual false, abstract: false, final false
  inline void AddAdditionalBeatmapLevel(::GlobalNamespace::BeatmapLevel* levelToAdd);

  /// @brief Method AllBeatmapLevels, addr 0x26caa70, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* AllBeatmapLevels();

  /// @brief Method ClearAdditionalBeatmapLevels, addr 0x26cac2c, size 0xac, virtual false, abstract: false, final false
  inline void ClearAdditionalBeatmapLevels();

  /// @brief Method CreateLevelPackForFiltering, addr 0x26caa78, size 0xcc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapLevelPack* CreateLevelPackForFiltering(::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> beatmapLevels);

  static inline ::GlobalNamespace::BeatmapLevelPack* New_ctor(::StringW packID, ::StringW packName, ::StringW shortPackName, ::UnityEngine::Sprite* coverImage, ::UnityEngine::Sprite* smallCoverImage,
                                                              ::GlobalNamespace::PackBuyOption packBuyOption,
                                                              ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> beatmapLevels,
                                                              ::GlobalNamespace::PlayerSensitivityFlag contentRating);

  /// @brief Method SetAdditionalBeatmapLevels, addr 0x26cacd8, size 0xc8, virtual false, abstract: false, final false
  inline void SetAdditionalBeatmapLevels(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* additionalBeatmapLevels);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* const& __cordl_internal_get__additionalBeatmapLevels() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get__additionalBeatmapLevels();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* const& __cordl_internal_get__allBeatmapLevels() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get__allBeatmapLevels();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> const& __cordl_internal_get__beatmapLevels() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>& __cordl_internal_get__beatmapLevels();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get_contentRating() const;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get_contentRating();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_coverImage() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_coverImage();

  constexpr ::GlobalNamespace::PackBuyOption const& __cordl_internal_get_packBuyOption() const;

  constexpr ::GlobalNamespace::PackBuyOption& __cordl_internal_get_packBuyOption();

  constexpr ::StringW const& __cordl_internal_get_packID() const;

  constexpr ::StringW& __cordl_internal_get_packID();

  constexpr ::StringW const& __cordl_internal_get_packName() const;

  constexpr ::StringW& __cordl_internal_get_packName();

  constexpr ::StringW const& __cordl_internal_get_shortPackName() const;

  constexpr ::StringW& __cordl_internal_get_shortPackName();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_smallCoverImage() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_smallCoverImage();

  constexpr void __cordl_internal_set__additionalBeatmapLevels(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* value);

  constexpr void __cordl_internal_set__allBeatmapLevels(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* value);

  constexpr void __cordl_internal_set__beatmapLevels(::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> value);

  constexpr void __cordl_internal_set_contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr void __cordl_internal_set_coverImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_packBuyOption(::GlobalNamespace::PackBuyOption value);

  constexpr void __cordl_internal_set_packID(::StringW value);

  constexpr void __cordl_internal_set_packName(::StringW value);

  constexpr void __cordl_internal_set_shortPackName(::StringW value);

  constexpr void __cordl_internal_set_smallCoverImage(::UnityW<::UnityEngine::Sprite> value);

  /// @brief Method .ctor, addr 0x26ca960, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::StringW packID, ::StringW packName, ::StringW shortPackName, ::UnityEngine::Sprite* coverImage, ::UnityEngine::Sprite* smallCoverImage,
                    ::GlobalNamespace::PackBuyOption packBuyOption, ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> beatmapLevels,
                    ::GlobalNamespace::PlayerSensitivityFlag contentRating);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelPack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelPack(BeatmapLevelPack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelPack(BeatmapLevelPack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12962 };

  /// @brief Field kFilteredLevelPackId offset 0xffffffff size 0x8
  static constexpr ::ConstString kFilteredLevelPackId{ u"filtered_pack_id" };

  /// @brief Field packID, offset: 0x10, size: 0x8, def value: None
  ::StringW ___packID;

  /// @brief Field packName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___packName;

  /// @brief Field shortPackName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___shortPackName;

  /// @brief Field coverImage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___coverImage;

  /// @brief Field smallCoverImage, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___smallCoverImage;

  /// @brief Field packBuyOption, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::PackBuyOption ___packBuyOption;

  /// @brief Field contentRating, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ___contentRating;

  /// @brief Field _beatmapLevels, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> ____beatmapLevels;

  /// @brief Field _additionalBeatmapLevels, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* ____additionalBeatmapLevels;

  /// @brief Field _allBeatmapLevels, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* ____allBeatmapLevels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ___packID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ___packName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ___shortPackName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ___coverImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ___smallCoverImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ___packBuyOption) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ___contentRating) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ____beatmapLevels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ____additionalBeatmapLevels) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPack, ____allBeatmapLevels) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelPack, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelPack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPack*, "", "BeatmapLevelPack");
