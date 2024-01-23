#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DlcPromoPanelDataSO)
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
namespace GlobalNamespace {
class __DlcPromoPanelDataSO__MusicPackPromoInfo;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class DlcPromoPanelDataSO;
}
namespace GlobalNamespace {
class __DlcPromoPanelDataSO__MusicPackPromoInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelDataSO);
MARK_REF_PTR_T(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo);
// Type: ::MusicPackPromoInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4658))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5831))
// CS Name: ::DlcPromoPanelDataSO::MusicPackPromoInfo*
class CORDL_TYPE __DlcPromoPanelDataSO__MusicPackPromoInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapLevelPack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelPack, put = __cordl_internal_set__beatmapLevelPack))::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO> _beatmapLevelPack;

  /// @brief Field _beatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel, put = __cordl_internal_set__beatmapLevel))::UnityW<::GlobalNamespace::BeatmapLevelSO> _beatmapLevel;

  /// @brief Field _bannerImage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bannerImage, put = __cordl_internal_set__bannerImage))::UnityW<::UnityEngine::Sprite> _bannerImage;

  /// @brief Field _bannerPromoText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bannerPromoText, put = __cordl_internal_set__bannerPromoText))::StringW _bannerPromoText;

  /// @brief Field _bannerPromoTextPosition, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__bannerPromoTextPosition, put = __cordl_internal_set__bannerPromoTextPosition)) float_t _bannerPromoTextPosition;

  /// @brief Field _contentRating, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__contentRating, put = __cordl_internal_set__contentRating))::GlobalNamespace::PlayerSensitivityFlag _contentRating;

  __declspec(property(get = get_previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  __declspec(property(get = get_bannerImage))::UnityW<::UnityEngine::Sprite> bannerImage;

  __declspec(property(get = get_bannerPromoText))::StringW bannerPromoText;

  __declspec(property(get = get_bannerPromoTextPosition)) float_t bannerPromoTextPosition;

  __declspec(property(get = get_beatmapLevelPack))::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO> beatmapLevelPack;

  __declspec(property(get = get_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

  constexpr ::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>& __cordl_internal_get__beatmapLevelPack();

  constexpr ::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO> const& __cordl_internal_get__beatmapLevelPack() const;

  constexpr void __cordl_internal_set__beatmapLevelPack(::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO> value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& __cordl_internal_get__beatmapLevel();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& __cordl_internal_get__beatmapLevel() const;

  constexpr void __cordl_internal_set__beatmapLevel(::UnityW<::GlobalNamespace::BeatmapLevelSO> value);

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__bannerImage();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__bannerImage() const;

  constexpr void __cordl_internal_set__bannerImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr ::StringW& __cordl_internal_get__bannerPromoText();

  constexpr ::StringW const& __cordl_internal_get__bannerPromoText() const;

  constexpr void __cordl_internal_set__bannerPromoText(::StringW value);

  constexpr float_t& __cordl_internal_get__bannerPromoTextPosition();

  constexpr float_t const& __cordl_internal_get__bannerPromoTextPosition() const;

  constexpr void __cordl_internal_set__bannerPromoTextPosition(float_t value);

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get__contentRating();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get__contentRating() const;

  constexpr void __cordl_internal_set__contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  /// @brief Method get_previewBeatmapLevel, addr 0x22ed7e8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IPreviewBeatmapLevel* get_previewBeatmapLevel();

  /// @brief Method get_bannerImage, addr 0x22ed7f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_bannerImage();

  /// @brief Method get_bannerPromoText, addr 0x22ed7f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_bannerPromoText();

  /// @brief Method get_bannerPromoTextPosition, addr 0x22ed800, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bannerPromoTextPosition();

  /// @brief Method get_beatmapLevelPack, addr 0x22ed808, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO> get_beatmapLevelPack();

  /// @brief Method get_contentRating, addr 0x22ed810, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating();

  static inline ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* New_ctor();

  /// @brief Method .ctor, addr 0x22ed818, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__DlcPromoPanelDataSO__MusicPackPromoInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DlcPromoPanelDataSO__MusicPackPromoInfo(__DlcPromoPanelDataSO__MusicPackPromoInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DlcPromoPanelDataSO__MusicPackPromoInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DlcPromoPanelDataSO__MusicPackPromoInfo(__DlcPromoPanelDataSO__MusicPackPromoInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelDataSO__MusicPackPromoInfo();

public:
  /// @brief Field _beatmapLevelPack, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO> ____beatmapLevelPack;

  /// @brief Field _beatmapLevel, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelSO> ____beatmapLevel;

  /// @brief Field _bannerImage, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____bannerImage;

  /// @brief Field _bannerPromoText, offset: 0x28, size: 0x8, def value: None
  ::StringW ____bannerPromoText;

  /// @brief Field _bannerPromoTextPosition, offset: 0x30, size: 0x4, def value: None
  float_t ____bannerPromoTextPosition;

  /// @brief Field _contentRating, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ____contentRating;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo, ____beatmapLevelPack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo, ____beatmapLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo, ____bannerImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo, ____bannerPromoText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo, ____bannerPromoTextPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo, ____contentRating) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DlcPromoPanelDataSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10210))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5832))
// CS Name: ::DlcPromoPanelDataSO*
class CORDL_TYPE DlcPromoPanelDataSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using MusicPackPromoInfo = ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo;

  /// @brief Field _defaultMusicPackPromoIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultMusicPackPromoIndex, put = __cordl_internal_set__defaultMusicPackPromoIndex)) int32_t _defaultMusicPackPromoIndex;

  /// @brief Field _musicPackPromoInfos, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__musicPackPromoInfos,
                      put = __cordl_internal_set__musicPackPromoInfos))::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,
                                                                                ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> _musicPackPromoInfos;

  /// @brief Field _cutOffTest, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__cutOffTest, put = __cordl_internal_set__cutOffTest)) int32_t _cutOffTest;

  /// @brief Field _minNumberOfNotOwnedPacks, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__minNumberOfNotOwnedPacks, put = __cordl_internal_set__minNumberOfNotOwnedPacks)) int32_t _minNumberOfNotOwnedPacks;

  __declspec(property(get = get_defaultMusicPackPromo))::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* defaultMusicPackPromo;

  __declspec(property(get = get_musicPackPromoInfos))::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,
                                                              ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> musicPackPromoInfos;

  __declspec(property(get = get_cutOffTest)) int32_t cutOffTest;

  __declspec(property(get = get_minNumberOfNotOwnedPacks)) int32_t minNumberOfNotOwnedPacks;

  constexpr int32_t& __cordl_internal_get__defaultMusicPackPromoIndex();

  constexpr int32_t const& __cordl_internal_get__defaultMusicPackPromoIndex() const;

  constexpr void __cordl_internal_set__defaultMusicPackPromoIndex(int32_t value);

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>&
  __cordl_internal_get__musicPackPromoInfos();

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> const&
  __cordl_internal_get__musicPackPromoInfos() const;

  constexpr void
  __cordl_internal_set__musicPackPromoInfos(::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> value);

  constexpr int32_t& __cordl_internal_get__cutOffTest();

  constexpr int32_t const& __cordl_internal_get__cutOffTest() const;

  constexpr void __cordl_internal_set__cutOffTest(int32_t value);

  constexpr int32_t& __cordl_internal_get__minNumberOfNotOwnedPacks();

  constexpr int32_t const& __cordl_internal_get__minNumberOfNotOwnedPacks() const;

  constexpr void __cordl_internal_set__minNumberOfNotOwnedPacks(int32_t value);

  /// @brief Method get_defaultMusicPackPromo, addr 0x22ed78c, size 0x34, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* get_defaultMusicPackPromo();

  /// @brief Method get_musicPackPromoInfos, addr 0x22ed7c0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> get_musicPackPromoInfos();

  /// @brief Method get_cutOffTest, addr 0x22ed7c8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cutOffTest();

  /// @brief Method get_minNumberOfNotOwnedPacks, addr 0x22ed7d0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_minNumberOfNotOwnedPacks();

  static inline ::GlobalNamespace::DlcPromoPanelDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x22ed7d8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DlcPromoPanelDataSO(DlcPromoPanelDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DlcPromoPanelDataSO(DlcPromoPanelDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelDataSO();

public:
  /// @brief Field _defaultMusicPackPromoIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ____defaultMusicPackPromoIndex;

  /// @brief Field _musicPackPromoInfos, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> ____musicPackPromoInfos;

  /// @brief Field _cutOffTest, offset: 0x28, size: 0x4, def value: None
  int32_t ____cutOffTest;

  /// @brief Field _minNumberOfNotOwnedPacks, offset: 0x2c, size: 0x4, def value: None
  int32_t ____minNumberOfNotOwnedPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelDataSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO, ____defaultMusicPackPromoIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO, ____musicPackPromoInfos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO, ____cutOffTest) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO, ____minNumberOfNotOwnedPacks) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelDataSO*, "", "DlcPromoPanelDataSO");
NEED_NO_BOX(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, "", "DlcPromoPanelDataSO/MusicPackPromoInfo");
