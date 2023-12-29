#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DlcPromoPanelDataSO)
namespace GlobalNamespace {
class __DlcPromoPanelDataSO__MusicPackPromoInfo;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5922))
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

  __declspec(property(get = get_previewBeatmapLevelPack))::GlobalNamespace::IBeatmapLevelPack* previewBeatmapLevelPack;

  __declspec(property(get = get_previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  __declspec(property(get = get_bannerImage))::UnityEngine::Sprite* bannerImage;

  __declspec(property(get = get_bannerPromoText))::StringW bannerPromoText;

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

  /// @brief Method get_previewBeatmapLevelPack addr 0x21a75bc size 0x8 virtual false final false
  inline ::GlobalNamespace::IBeatmapLevelPack* get_previewBeatmapLevelPack();

  /// @brief Method get_previewBeatmapLevel addr 0x21a75c4 size 0x8 virtual false final false
  inline ::GlobalNamespace::IPreviewBeatmapLevel* get_previewBeatmapLevel();

  /// @brief Method get_bannerImage addr 0x21a75cc size 0x8 virtual false final false
  inline ::UnityEngine::Sprite* get_bannerImage();

  /// @brief Method get_bannerPromoText addr 0x21a75d4 size 0x8 virtual false final false
  inline ::StringW get_bannerPromoText();

  static inline ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* New_ctor();

  /// @brief Method .ctor addr 0x21a75dc size 0x8 virtual false final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo, ____beatmapLevelPack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo, ____beatmapLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo, ____bannerImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo, ____bannerPromoText) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DlcPromoPanelDataSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5923))
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

  __declspec(property(get = get_cutOffTest)) int32_t cutOffTest;

  __declspec(property(get = get_minNumberOfNotOwnedPacks)) int32_t minNumberOfNotOwnedPacks;

  __declspec(property(get = get_musicPackPromoInfos))::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*,
                                                              ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> musicPackPromoInfos;

  __declspec(property(get = get_defaultMusicPackPromo))::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* defaultMusicPackPromo;

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

  /// @brief Method get_cutOffTest addr 0x21a7560 size 0x8 virtual false final false
  inline int32_t get_cutOffTest();

  /// @brief Method get_minNumberOfNotOwnedPacks addr 0x21a7568 size 0x8 virtual false final false
  inline int32_t get_minNumberOfNotOwnedPacks();

  /// @brief Method get_musicPackPromoInfos addr 0x21a7570 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>*> get_musicPackPromoInfos();

  /// @brief Method get_defaultMusicPackPromo addr 0x21a7578 size 0x34 virtual false final false
  inline ::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* get_defaultMusicPackPromo();

  static inline ::GlobalNamespace::DlcPromoPanelDataSO* New_ctor();

  /// @brief Method .ctor addr 0x21a75ac size 0x10 virtual false final false
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
