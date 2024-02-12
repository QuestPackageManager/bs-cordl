#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
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
struct __SongPackMasksModel__LocalizedText;
}
namespace GlobalNamespace {
struct __SongPackMasksModel__MaskInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace GlobalNamespace {
struct __SongPackMasksModel__LocalizedText;
}
namespace GlobalNamespace {
struct __SongPackMasksModel__MaskInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPackMasksModel);
MARK_VAL_T(::GlobalNamespace::__SongPackMasksModel__LocalizedText);
MARK_VAL_T(::GlobalNamespace::__SongPackMasksModel__MaskInfo);
// Type: ::LocalizedText
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10940))
// CS Name: ::SongPackMasksModel::LocalizedText
struct CORDL_TYPE __SongPackMasksModel__LocalizedText {
public:
  // Declarations
  /// @brief Field empty, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_empty, put = setStaticF_empty))::GlobalNamespace::__SongPackMasksModel__LocalizedText empty;

  __declspec(property(get = get_text))::StringW text;

  static inline void setStaticF_empty(::GlobalNamespace::__SongPackMasksModel__LocalizedText value);

  static inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText getStaticF_empty();

  /// @brief Method get_text, addr 0x12a1d58, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method .ctor, addr 0x12a1b18, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW textKey, bool isPlural);

  // Ctor Parameters [CppParam { name: "textKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isPlural", ty: "bool", modifiers: "", def_value: None }]
  constexpr __SongPackMasksModel__LocalizedText(::StringW textKey, bool isPlural) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPackMasksModel__LocalizedText();

  /// @brief Field textKey, offset: 0x0, size: 0x8, def value: None
  ::StringW textKey;

  /// @brief Field isPlural, offset: 0x8, size: 0x1, def value: None
  bool isPlural;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPackMasksModel__LocalizedText, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMasksModel__LocalizedText, textKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMasksModel__LocalizedText, isPlural) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MaskInfo
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10940)), TypeDefinitionIndex(TypeDefinitionIndex(14920))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10941))
// CS Name: ::SongPackMasksModel::MaskInfo
struct CORDL_TYPE __SongPackMasksModel__MaskInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x12a1b28, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__SongPackMasksModel__LocalizedText localizedText, ::GlobalNamespace::SongPackMask mask);

  // Ctor Parameters [CppParam { name: "localizedText", ty: "::GlobalNamespace::__SongPackMasksModel__LocalizedText", modifiers: "", def_value: None }, CppParam { name: "mask", ty:
  // "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }]
  constexpr __SongPackMasksModel__MaskInfo(::GlobalNamespace::__SongPackMasksModel__LocalizedText localizedText, ::GlobalNamespace::SongPackMask mask) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPackMasksModel__MaskInfo();

  /// @brief Field localizedText, offset: 0x0, size: 0x10, def value: None
  ::GlobalNamespace::__SongPackMasksModel__LocalizedText localizedText;

  /// @brief Field mask, offset: 0x10, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask mask;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPackMasksModel__MaskInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMasksModel__MaskInfo, localizedText) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMasksModel__MaskInfo, mask) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SongPackMasksModel
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14920))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10942))
// CS Name: ::SongPackMasksModel*
class CORDL_TYPE SongPackMasksModel : public ::System::Object {
public:
  // Declarations
  using MaskInfo = ::GlobalNamespace::__SongPackMasksModel__MaskInfo;

  using LocalizedText = ::GlobalNamespace::__SongPackMasksModel__LocalizedText;

  /// @brief Field beatmapLevelsModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevelsModel, put = __cordl_internal_set_beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel;

  /// @brief Field content, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content))::UnityW<::GlobalNamespace::SongPackMasksModelSO> content;

  /// @brief Field allSongPackMask, offset 0x20, size 0x20
  __declspec(property(get = __cordl_internal_get_allSongPackMask, put = __cordl_internal_set_allSongPackMask))::GlobalNamespace::SongPackMask allSongPackMask;

  /// @brief Field _songPackSerializedNameToMaskInfoDict, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__songPackSerializedNameToMaskInfoDict, put = __cordl_internal_set__songPackSerializedNameToMaskInfoDict))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__SongPackMasksModel__MaskInfo>* _songPackSerializedNameToMaskInfoDict;

  /// @brief Field _songPackMaskToSerializedNameDict, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get__songPackMaskToSerializedNameDict,
      put = __cordl_internal_set__songPackMaskToSerializedNameDict))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* _songPackMaskToSerializedNameDict;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get_beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get_beatmapLevelsModel() const;

  constexpr void __cordl_internal_set_beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO>& __cordl_internal_get_content();

  constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO> const& __cordl_internal_get_content() const;

  constexpr void __cordl_internal_set_content(::UnityW<::GlobalNamespace::SongPackMasksModelSO> value);

  constexpr ::GlobalNamespace::SongPackMask& __cordl_internal_get_allSongPackMask();

  constexpr ::GlobalNamespace::SongPackMask const& __cordl_internal_get_allSongPackMask() const;

  constexpr void __cordl_internal_set_allSongPackMask(::GlobalNamespace::SongPackMask value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SongPackMasksModel__MaskInfo>*& __cordl_internal_get__songPackSerializedNameToMaskInfoDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SongPackMasksModel__MaskInfo>*> const&
  __cordl_internal_get__songPackSerializedNameToMaskInfoDict() const;

  constexpr void __cordl_internal_set__songPackSerializedNameToMaskInfoDict(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SongPackMasksModel__MaskInfo>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>*& __cordl_internal_get__songPackMaskToSerializedNameDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>*> const&
  __cordl_internal_get__songPackMaskToSerializedNameDict() const;

  constexpr void __cordl_internal_set__songPackMaskToSerializedNameDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* value);

  static inline ::GlobalNamespace::SongPackMasksModel* New_ctor(::GlobalNamespace::SongPackMasksModelSO* songPackMasks, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  /// @brief Method .ctor, addr 0x12a12a4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::SongPackMasksModelSO* songPackMasks, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel);

  /// @brief Method Init, addr 0x12a1340, size 0x568, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method ToLocalizedName, addr 0x12a1b38, size 0xbc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText ToLocalizedName(::StringW serializedName);

  /// @brief Method ToSongPackMask, addr 0x12a18a8, size 0xac, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SongPackMask ToSongPackMask(::StringW serializedName);

  /// @brief Method GetSongPackMaskText, addr 0x12a1bf4, size 0xc0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText GetSongPackMaskText(::GlobalNamespace::SongPackMask songPackMask);

  /// @brief Method ToSerializedName, addr 0x12a1cb4, size 0xa4, virtual false, abstract: false, final false
  inline ::StringW ToSerializedName(::GlobalNamespace::SongPackMask songPackMask);

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPackMasksModel(SongPackMasksModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPackMasksModel(SongPackMasksModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMasksModel();

public:
  /// @brief Field beatmapLevelsModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ___beatmapLevelsModel;

  /// @brief Field content, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPackMasksModelSO> ___content;

  /// @brief Field allSongPackMask, offset: 0x20, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask ___allSongPackMask;

  /// @brief Field _songPackSerializedNameToMaskInfoDict, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SongPackMasksModel__MaskInfo>* ____songPackSerializedNameToMaskInfoDict;

  /// @brief Field _songPackMaskToSerializedNameDict, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* ____songPackMaskToSerializedNameDict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMasksModel, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ___beatmapLevelsModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ___content) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ___allSongPackMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ____songPackSerializedNameToMaskInfoDict) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ____songPackMaskToSerializedNameDict) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPackMasksModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMasksModel*, "", "SongPackMasksModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPackMasksModel__LocalizedText, "", "SongPackMasksModel/LocalizedText");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPackMasksModel__MaskInfo, "", "SongPackMasksModel/MaskInfo");
