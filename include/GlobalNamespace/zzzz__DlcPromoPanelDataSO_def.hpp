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
class __DlcPromoPanelDataSO__MusicPackPromoInfo;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4658)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5831))
// CS Name: ::DlcPromoPanelDataSO::MusicPackPromoInfo*
class CORDL_TYPE __DlcPromoPanelDataSO__MusicPackPromoInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapLevelPack, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapLevelPack, put = __set__beatmapLevelPack))::GlobalNamespace::PreviewBeatmapLevelPackSO* _beatmapLevelPack;

  /// @brief Field _beatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapLevel, put = __set__beatmapLevel))::GlobalNamespace::BeatmapLevelSO* _beatmapLevel;

  /// @brief Field _bannerImage, offset 0x20, size 0x8
  __declspec(property(get = __get__bannerImage, put = __set__bannerImage))::UnityEngine::Sprite* _bannerImage;

  /// @brief Field _bannerPromoText, offset 0x28, size 0x8
  __declspec(property(get = __get__bannerPromoText, put = __set__bannerPromoText))::StringW _bannerPromoText;

  /// @brief Field _bannerPromoTextPosition, offset 0x30, size 0x4
  __declspec(property(get = __get__bannerPromoTextPosition, put = __set__bannerPromoTextPosition)) float_t _bannerPromoTextPosition;

  /// @brief Field _contentRating, offset 0x34, size 0x4
  __declspec(property(get = __get__contentRating, put = __set__contentRating))::GlobalNamespace::PlayerSensitivityFlag _contentRating;

  __declspec(property(get = get_previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  __declspec(property(get = get_bannerImage))::UnityEngine::Sprite* bannerImage;

  __declspec(property(get = get_bannerPromoText))::StringW bannerPromoText;

  __declspec(property(get = get_bannerPromoTextPosition)) float_t bannerPromoTextPosition;

  __declspec(property(get = get_beatmapLevelPack))::GlobalNamespace::PreviewBeatmapLevelPackSO* beatmapLevelPack;

  __declspec(property(get = get_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

  constexpr ::GlobalNamespace::PreviewBeatmapLevelPackSO*& __get__beatmapLevelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewBeatmapLevelPackSO*> const& __get__beatmapLevelPack() const;

  constexpr void __set__beatmapLevelPack(::GlobalNamespace::PreviewBeatmapLevelPackSO* value);

  constexpr ::GlobalNamespace::BeatmapLevelSO*& __get__beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> const& __get__beatmapLevel() const;

  constexpr void __set__beatmapLevel(::GlobalNamespace::BeatmapLevelSO* value);

  constexpr ::UnityEngine::Sprite*& __get__bannerImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__bannerImage() const;

  constexpr void __set__bannerImage(::UnityEngine::Sprite* value);

  constexpr ::StringW& __get__bannerPromoText();

  constexpr ::StringW const& __get__bannerPromoText() const;

  constexpr void __set__bannerPromoText(::StringW value);

  constexpr float_t& __get__bannerPromoTextPosition();

  constexpr float_t const& __get__bannerPromoTextPosition() const;

  constexpr void __set__bannerPromoTextPosition(float_t value);

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __get__contentRating();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __get__contentRating() const;

  constexpr void __set__contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  /// @brief Method get_previewBeatmapLevel, addr 0x22ed7e8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IPreviewBeatmapLevel* get_previewBeatmapLevel();

  /// @brief Method get_bannerImage, addr 0x22ed7f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Sprite* get_bannerImage();

  /// @brief Method get_bannerPromoText, addr 0x22ed7f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_bannerPromoText();

  /// @brief Method get_bannerPromoTextPosition, addr 0x22ed800, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bannerPromoTextPosition();

  /// @brief Method get_beatmapLevelPack, addr 0x22ed808, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PreviewBeatmapLevelPackSO* get_beatmapLevelPack();

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
  ::GlobalNamespace::PreviewBeatmapLevelPackSO* ____beatmapLevelPack;

  /// @brief Field _beatmapLevel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelSO* ____beatmapLevel;

  /// @brief Field _bannerImage, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____bannerImage;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5832))
// CS Name: ::DlcPromoPanelDataSO*
class CORDL_TYPE DlcPromoPanelDataSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using MusicPackPromoInfo = ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo;

  /// @brief Field _defaultMusicPackPromoIndex, offset 0x18, size 0x4
  __declspec(property(get = __get__defaultMusicPackPromoIndex, put = __set__defaultMusicPackPromoIndex)) int32_t _defaultMusicPackPromoIndex;

  /// @brief Field _musicPackPromoInfos, offset 0x20, size 0x8
  __declspec(property(get = __get__musicPackPromoInfos, put = __set__musicPackPromoInfos))::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,
                                                                                                   ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> _musicPackPromoInfos;

  /// @brief Field _cutOffTest, offset 0x28, size 0x4
  __declspec(property(get = __get__cutOffTest, put = __set__cutOffTest)) int32_t _cutOffTest;

  /// @brief Field _minNumberOfNotOwnedPacks, offset 0x2c, size 0x4
  __declspec(property(get = __get__minNumberOfNotOwnedPacks, put = __set__minNumberOfNotOwnedPacks)) int32_t _minNumberOfNotOwnedPacks;

  __declspec(property(get = get_defaultMusicPackPromo))::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* defaultMusicPackPromo;

  __declspec(property(get = get_musicPackPromoInfos))::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,
                                                              ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> musicPackPromoInfos;

  __declspec(property(get = get_cutOffTest)) int32_t cutOffTest;

  __declspec(property(get = get_minNumberOfNotOwnedPacks)) int32_t minNumberOfNotOwnedPacks;

  constexpr int32_t& __get__defaultMusicPackPromoIndex();

  constexpr int32_t const& __get__defaultMusicPackPromoIndex() const;

  constexpr void __set__defaultMusicPackPromoIndex(int32_t value);

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*>& __get__musicPackPromoInfos();

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> const& __get__musicPackPromoInfos() const;

  constexpr void __set__musicPackPromoInfos(::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> value);

  constexpr int32_t& __get__cutOffTest();

  constexpr int32_t const& __get__cutOffTest() const;

  constexpr void __set__cutOffTest(int32_t value);

  constexpr int32_t& __get__minNumberOfNotOwnedPacks();

  constexpr int32_t const& __get__minNumberOfNotOwnedPacks() const;

  constexpr void __set__minNumberOfNotOwnedPacks(int32_t value);

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
