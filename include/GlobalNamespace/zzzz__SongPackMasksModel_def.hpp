#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "Polyglot/zzzz__Language_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SongPackMasksModel)
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class SongPackMasksModelSO;
}
namespace GlobalNamespace {
struct __SongPackMasksModel__LocalizedText;
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
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPackMasksModel);
MARK_VAL_T(::GlobalNamespace::__SongPackMasksModel__LocalizedText);
// Type: ::LocalizedText
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4518))
// CS Name: ::SongPackMasksModel::LocalizedText
struct CORDL_TYPE __SongPackMasksModel__LocalizedText {
public:
  // Declarations
  /// @brief Field empty, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_empty, put = setStaticF_empty))::GlobalNamespace::__SongPackMasksModel__LocalizedText empty;

  static inline void setStaticF_empty(::GlobalNamespace::__SongPackMasksModel__LocalizedText value);

  static inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText getStaticF_empty();

  /// @brief Method .ctor, addr 0x2364000, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW text, bool isPlural);

  // Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isPlural", ty: "bool", modifiers: "", def_value: None }]
  constexpr __SongPackMasksModel__LocalizedText(::StringW text, bool isPlural) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPackMasksModel__LocalizedText();

  /// @brief Field text, offset: 0x0, size: 0x8, def value: None
  ::StringW text;

  /// @brief Field isPlural, offset: 0x8, size: 0x1, def value: None
  bool isPlural;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPackMasksModel__LocalizedText, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMasksModel__LocalizedText, text) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SongPackMasksModel__LocalizedText, isPlural) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SongPackMasksModel
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15554)), TypeDefinitionIndex(TypeDefinitionIndex(15047))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4519))
// CS Name: ::SongPackMasksModel*
class CORDL_TYPE SongPackMasksModel : public ::System::Object {
public:
  // Declarations
  using LocalizedText = ::GlobalNamespace::__SongPackMasksModel__LocalizedText;

  /// @brief Field content, offset 0x10, size 0x8
  __declspec(property(get = __get_content, put = __set_content))::GlobalNamespace::SongPackMasksModelSO* content;

  /// @brief Field allSongPackMask, offset 0x18, size 0x20
  __declspec(property(get = __get_allSongPackMask, put = __set_allSongPackMask))::GlobalNamespace::SongPackMask allSongPackMask;

  /// @brief Field _currentLocalizedLanguage, offset 0x38, size 0x4
  __declspec(property(get = __get__currentLocalizedLanguage, put = __set__currentLocalizedLanguage))::Polyglot::Language _currentLocalizedLanguage;

  /// @brief Field _songPackSerializedNameToLocalizedNameDict, offset 0x40, size 0x8
  __declspec(property(get = __get__songPackSerializedNameToLocalizedNameDict, put = __set__songPackSerializedNameToLocalizedNameDict))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__SongPackMasksModel__LocalizedText>* _songPackSerializedNameToLocalizedNameDict;

  /// @brief Field _songPackSerializedNameToMaskDict, offset 0x48, size 0x8
  __declspec(property(get = __get__songPackSerializedNameToMaskDict,
                      put = __set__songPackSerializedNameToMaskDict))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>* _songPackSerializedNameToMaskDict;

  /// @brief Field _songPackMaskToSerializedNameDict, offset 0x50, size 0x8
  __declspec(property(get = __get__songPackMaskToSerializedNameDict,
                      put = __set__songPackMaskToSerializedNameDict))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* _songPackMaskToSerializedNameDict;

  constexpr ::GlobalNamespace::SongPackMasksModelSO*& __get_content();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModelSO*> const& __get_content() const;

  constexpr void __set_content(::GlobalNamespace::SongPackMasksModelSO* value);

  constexpr ::GlobalNamespace::SongPackMask& __get_allSongPackMask();

  constexpr ::GlobalNamespace::SongPackMask const& __get_allSongPackMask() const;

  constexpr void __set_allSongPackMask(::GlobalNamespace::SongPackMask value);

  constexpr ::Polyglot::Language& __get__currentLocalizedLanguage();

  constexpr ::Polyglot::Language const& __get__currentLocalizedLanguage() const;

  constexpr void __set__currentLocalizedLanguage(::Polyglot::Language value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SongPackMasksModel__LocalizedText>*& __get__songPackSerializedNameToLocalizedNameDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SongPackMasksModel__LocalizedText>*> const&
  __get__songPackSerializedNameToLocalizedNameDict() const;

  constexpr void __set__songPackSerializedNameToLocalizedNameDict(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SongPackMasksModel__LocalizedText>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*& __get__songPackSerializedNameToMaskDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*> const& __get__songPackSerializedNameToMaskDict() const;

  constexpr void __set__songPackSerializedNameToMaskDict(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>*& __get__songPackMaskToSerializedNameDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>*> const& __get__songPackMaskToSerializedNameDict() const;

  constexpr void __set__songPackMaskToSerializedNameDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* value);

  static inline ::GlobalNamespace::SongPackMasksModel* New_ctor(::GlobalNamespace::SongPackMasksModelSO* songPackMasks);

  /// @brief Method .ctor, addr 0x2363478, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::SongPackMasksModelSO* songPackMasks);

  /// @brief Method Init, addr 0x236350c, size 0x688, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method GetSongPackMaskText, addr 0x2364010, size 0x98, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText GetSongPackMaskText(ByRef<::GlobalNamespace::SongPackMask> songPackMask);

  /// @brief Method ToLocalizedName, addr 0x2364130, size 0xac, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText ToLocalizedName(::StringW serializedName);

  /// @brief Method TryGetSongPackMask, addr 0x23641dc, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetSongPackMask(::StringW serializedName, ByRef<::GlobalNamespace::SongPackMask> songPackMask);

  /// @brief Method ToSongPackMask, addr 0x2363b94, size 0x48, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SongPackMask ToSongPackMask(::StringW serializedName);

  /// @brief Method TryGetSerializedName, addr 0x23640a8, size 0x88, virtual false, abstract: false, final false
  inline bool TryGetSerializedName(::GlobalNamespace::SongPackMask songPackMask, ByRef<::StringW> serializedName);

  /// @brief Method ToSerializedName, addr 0x2364244, size 0x80, virtual false, abstract: false, final false
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
  /// @brief Field content, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMasksModelSO* ___content;

  /// @brief Field allSongPackMask, offset: 0x18, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask ___allSongPackMask;

  /// @brief Field _currentLocalizedLanguage, offset: 0x38, size: 0x4, def value: None
  ::Polyglot::Language ____currentLocalizedLanguage;

  /// @brief Field _songPackSerializedNameToLocalizedNameDict, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SongPackMasksModel__LocalizedText>* ____songPackSerializedNameToLocalizedNameDict;

  /// @brief Field _songPackSerializedNameToMaskDict, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>* ____songPackSerializedNameToMaskDict;

  /// @brief Field _songPackMaskToSerializedNameDict, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* ____songPackMaskToSerializedNameDict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMasksModel, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ___content) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ___allSongPackMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ____currentLocalizedLanguage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ____songPackSerializedNameToLocalizedNameDict) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ____songPackSerializedNameToMaskDict) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModel, ____songPackMaskToSerializedNameDict) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPackMasksModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMasksModel*, "", "SongPackMasksModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPackMasksModel__LocalizedText, "", "SongPackMasksModel/LocalizedText");
