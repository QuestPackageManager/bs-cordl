#pragma once
// IWYU pragma private; include "GlobalNamespace/SongPackMasksModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SongPackMasksModel)
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class SongPackMasksModelSO;
}
namespace GlobalNamespace {
struct SongPackMasksModel_LocalizedText;
}
namespace GlobalNamespace {
struct SongPackMasksModel_MaskInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace GlobalNamespace {
struct SongPackMasksModel_LocalizedText;
}
namespace GlobalNamespace {
struct SongPackMasksModel_MaskInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPackMasksModel);
MARK_VAL_T(::GlobalNamespace::SongPackMasksModel_LocalizedText);
MARK_VAL_T(::GlobalNamespace::SongPackMasksModel_MaskInfo);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SongPackMasksModel/LocalizedText
struct CORDL_TYPE SongPackMasksModel_LocalizedText {
public:
  // Declarations
  /// @brief Field empty, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_empty, put = setStaticF_empty)) ::GlobalNamespace::SongPackMasksModel_LocalizedText empty;

  __declspec(property(get = get_text)) ::StringW text;

  /// @brief Method .ctor, addr 0x26e459c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW textKey, bool isPlural);

  static inline ::GlobalNamespace::SongPackMasksModel_LocalizedText getStaticF_empty();

  /// @brief Method get_text, addr 0x26e483c, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_text();

  static inline void setStaticF_empty(::GlobalNamespace::SongPackMasksModel_LocalizedText value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMasksModel_LocalizedText();

  // Ctor Parameters [CppParam { name: "textKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isPlural", ty: "bool", modifiers: "", def_value: None }]
  constexpr SongPackMasksModel_LocalizedText(::StringW textKey, bool isPlural) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13118 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field textKey, offset: 0x0, size: 0x8, def value: None
  ::StringW textKey;

  /// @brief Field isPlural, offset: 0x8, size: 0x1, def value: None
  bool isPlural;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongPackMasksModel_LocalizedText, textKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel_LocalizedText, isPlural) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMasksModel_LocalizedText, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SongPackMask, SongPackMasksModel::LocalizedText
namespace GlobalNamespace {
// Is value type: true
// CS Name: SongPackMasksModel/MaskInfo
struct CORDL_TYPE SongPackMasksModel_MaskInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x26e45ac, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::SongPackMasksModel_LocalizedText localizedText, ::GlobalNamespace::SongPackMask mask);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMasksModel_MaskInfo();

  // Ctor Parameters [CppParam { name: "localizedText", ty: "::GlobalNamespace::SongPackMasksModel_LocalizedText", modifiers: "", def_value: None }, CppParam { name: "mask", ty:
  // "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }]
  constexpr SongPackMasksModel_MaskInfo(::GlobalNamespace::SongPackMasksModel_LocalizedText localizedText, ::GlobalNamespace::SongPackMask mask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13119 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field localizedText, offset: 0x0, size: 0x10, def value: None
  ::GlobalNamespace::SongPackMasksModel_LocalizedText localizedText;

  /// @brief Field mask, offset: 0x10, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask mask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongPackMasksModel_MaskInfo, localizedText) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel_MaskInfo, mask) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMasksModel_MaskInfo, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SongPackMask, SongPackMasksModel::MaskInfo, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongPackMasksModel
class CORDL_TYPE SongPackMasksModel : public ::System::Object {
public:
  // Declarations
  using LocalizedText = ::GlobalNamespace::SongPackMasksModel_LocalizedText;

  using MaskInfo = ::GlobalNamespace::SongPackMasksModel_MaskInfo;

  /// @brief Field _beatmapLevelsModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _songPackMaskToSerializedNameDict, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get__songPackMaskToSerializedNameDict,
      put = __cordl_internal_set__songPackMaskToSerializedNameDict)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* _songPackMaskToSerializedNameDict;

  /// @brief Field _songPackSerializedNameToMaskInfoDict, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__songPackSerializedNameToMaskInfoDict,
                      put = __cordl_internal_set__songPackSerializedNameToMaskInfoDict)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMasksModel_MaskInfo>*
      _songPackSerializedNameToMaskInfoDict;

  /// @brief Field allSongPackMask, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get_allSongPackMask, put = __cordl_internal_set_allSongPackMask)) ::GlobalNamespace::SongPackMask allSongPackMask;

  /// @brief Field content, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::UnityW<::GlobalNamespace::SongPackMasksModelSO> content;

  /// @brief Field kEmptyMaskInfo, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_kEmptyMaskInfo, put = setStaticF_kEmptyMaskInfo)) ::GlobalNamespace::SongPackMasksModel_MaskInfo kEmptyMaskInfo;

  /// @brief Method GetSongPackMaskText, addr 0x26e4674, size 0x9c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SongPackMasksModel_LocalizedText GetSongPackMaskText(::GlobalNamespace::SongPackMask songPackMask);

  /// @brief Method Init, addr 0x26e3dd4, size 0x544, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::SongPackMasksModel* New_ctor(::GlobalNamespace::SongPackMasksModelSO* songPackMasks, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  /// @brief Method ToLocalizedName, addr 0x26e45bc, size 0xb8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SongPackMasksModel_LocalizedText ToLocalizedName(::StringW serializedName);

  /// @brief Method ToSerializedName, addr 0x26e4710, size 0x90, virtual false, abstract: false, final false
  inline ::StringW ToSerializedName(::GlobalNamespace::SongPackMask songPackMask);

  /// @brief Method ToSongPackMask, addr 0x26e4318, size 0xcc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SongPackMask ToSongPackMask(::StringW serializedName);

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* const& __cordl_internal_get__songPackMaskToSerializedNameDict() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>*& __cordl_internal_get__songPackMaskToSerializedNameDict();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMasksModel_MaskInfo>* const& __cordl_internal_get__songPackSerializedNameToMaskInfoDict() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMasksModel_MaskInfo>*& __cordl_internal_get__songPackSerializedNameToMaskInfoDict();

  constexpr ::GlobalNamespace::SongPackMask const& __cordl_internal_get_allSongPackMask() const;

  constexpr ::GlobalNamespace::SongPackMask& __cordl_internal_get_allSongPackMask();

  constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO> const& __cordl_internal_get_content() const;

  constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO>& __cordl_internal_get_content();

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__songPackMaskToSerializedNameDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* value);

  constexpr void __cordl_internal_set__songPackSerializedNameToMaskInfoDict(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMasksModel_MaskInfo>* value);

  constexpr void __cordl_internal_set_allSongPackMask(::GlobalNamespace::SongPackMask value);

  constexpr void __cordl_internal_set_content(::UnityW<::GlobalNamespace::SongPackMasksModelSO> value);

  /// @brief Method .ctor, addr 0x26e3d30, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::SongPackMasksModelSO* songPackMasks, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  static inline ::GlobalNamespace::SongPackMasksModel_MaskInfo getStaticF_kEmptyMaskInfo();

  static inline void setStaticF_kEmptyMaskInfo(::GlobalNamespace::SongPackMasksModel_MaskInfo value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMasksModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPackMasksModel(SongPackMasksModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPackMasksModel(SongPackMasksModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13120 };

  /// @brief Field content, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPackMasksModelSO> ___content;

  /// @brief Field allSongPackMask, offset: 0x18, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask ___allSongPackMask;

  /// @brief Field _beatmapLevelsModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _songPackSerializedNameToMaskInfoDict, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMasksModel_MaskInfo>* ____songPackSerializedNameToMaskInfoDict;

  /// @brief Field _songPackMaskToSerializedNameDict, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* ____songPackMaskToSerializedNameDict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ___content) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ___allSongPackMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ____beatmapLevelsModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ____songPackSerializedNameToMaskInfoDict) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ____songPackMaskToSerializedNameDict) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMasksModel, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPackMasksModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMasksModel*, "", "SongPackMasksModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMasksModel_LocalizedText, "", "SongPackMasksModel/LocalizedText");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMasksModel_MaskInfo, "", "SongPackMasksModel/MaskInfo");
