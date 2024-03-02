#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalizationModel)
namespace BGLib::Polyglot {
class ILocalize;
}
namespace BGLib::Polyglot {
struct LanguageDirection;
}
namespace BGLib::Polyglot {
struct Language;
}
namespace BGLib::Polyglot {
class LocalizationAsset;
}
namespace BGLib::Polyglot {
class LocalizationDocument;
}
namespace BGLib::Polyglot {
class Localization;
}
namespace BGLib::Polyglot {
class __LocalizationModel____c__DisplayClass30_0;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace BGLib::Polyglot {
class LocalizationModel;
}
namespace BGLib::Polyglot {
class __LocalizationModel____c__DisplayClass30_0;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::LocalizationModel);
MARK_REF_PTR_T(::BGLib::Polyglot::__LocalizationModel____c__DisplayClass30_0);
// Type: ::<>c__DisplayClass30_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: ::LocalizationModel::<>c__DisplayClass30_0*
class CORDL_TYPE __LocalizationModel____c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field doc, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_doc, put = __cordl_internal_set_doc))::BGLib::Polyglot::LocalizationDocument* doc;

  static inline ::BGLib::Polyglot::__LocalizationModel____c__DisplayClass30_0* New_ctor();

  /// @brief Method <InputFilesContains>b__0, addr 0xe94e90, size 0xa8, virtual false, abstract: false, final false
  inline bool _InputFilesContains_b__0(::BGLib::Polyglot::LocalizationAsset* inputFile);

  constexpr ::BGLib::Polyglot::LocalizationDocument*& __cordl_internal_get_doc();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::Polyglot::LocalizationDocument*> const& __cordl_internal_get_doc() const;

  constexpr void __cordl_internal_set_doc(::BGLib::Polyglot::LocalizationDocument* value);

  /// @brief Method .ctor, addr 0xe94a24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalizationModel____c__DisplayClass30_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LocalizationModel____c__DisplayClass30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalizationModel____c__DisplayClass30_0(__LocalizationModel____c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizationModel____c__DisplayClass30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalizationModel____c__DisplayClass30_0(__LocalizationModel____c__DisplayClass30_0 const&) = delete;

  /// @brief Field doc, offset: 0x10, size: 0x8, def value: None
  ::BGLib::Polyglot::LocalizationDocument* ___doc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::__LocalizationModel____c__DisplayClass30_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::BGLib::Polyglot::__LocalizationModel____c__DisplayClass30_0, ___doc) == 0x10, "Offset mismatch!");

} // namespace BGLib::Polyglot
// Type: BGLib.Polyglot::LocalizationModel
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: ::BGLib.Polyglot::LocalizationModel*
class CORDL_TYPE LocalizationModel : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass30_0 = ::BGLib::Polyglot::__LocalizationModel____c__DisplayClass30_0;

  __declspec(property(get = get_EnglishLanguageNames))::System::Collections::Generic::List_1<::StringW>* EnglishLanguageNames;

  __declspec(property(get = get_InputFiles))::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* InputFiles;

  __declspec(property(get = get_LocalizedLanguageNames))::System::Collections::Generic::List_1<::StringW>* LocalizedLanguageNames;

  __declspec(property(get = get_SelectedCultureInfo, put = set_SelectedCultureInfo))::System::Globalization::CultureInfo* SelectedCultureInfo;

  __declspec(property(get = get_SelectedLanguage, put = set_SelectedLanguage))::BGLib::Polyglot::Language SelectedLanguage;

  __declspec(property(get = get_SelectedLanguageDirection))::BGLib::Polyglot::LanguageDirection SelectedLanguageDirection;

  __declspec(property(get = get_SelectedLanguageIndex)) int32_t SelectedLanguageIndex;

  __declspec(property(get = get_SupportedLanguages))::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::Language>* SupportedLanguages;

  /// @brief Field _onChangeLanguage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__onChangeLanguage, put = __cordl_internal_set__onChangeLanguage))::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* _onChangeLanguage;

  __declspec(property(get = get_fallbackLanguage))::BGLib::Polyglot::Language fallbackLanguage;

  /// @brief Field inputFiles, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_inputFiles, put = __cordl_internal_set_inputFiles))::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* inputFiles;

  /// @brief Field localization, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_localization, put = __cordl_internal_set_localization))::UnityW<::BGLib::Polyglot::Localization> localization;

  /// @brief Field selectedCulture, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_selectedCulture, put = __cordl_internal_set_selectedCulture))::System::Globalization::CultureInfo* selectedCulture;

  /// @brief Method AddOnLocalizeEvent, addr 0xe91c40, size 0x1b8, virtual false, abstract: false, final false
  inline void AddOnLocalizeEvent(::BGLib::Polyglot::ILocalize* localize);

  /// @brief Method Get, addr 0xe9237c, size 0xd8, virtual false, abstract: false, final false
  inline ::StringW Get(::StringW key);

  /// @brief Method GetCultureInfo, addr 0xe9447c, size 0xac, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* GetCultureInfo(::BGLib::Polyglot::Language language);

  /// @brief Method GetFormatOrKey, addr 0xe94d78, size 0x58, virtual false, abstract: false, final false
  inline ::StringW GetFormatOrKey(::StringW key, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method GetOrKey, addr 0xe94cd4, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW GetOrKey(::StringW key);

  /// @brief Method InputFilesContains, addr 0xe9494c, size 0xd8, virtual false, abstract: false, final false
  inline bool InputFilesContains(::BGLib::Polyglot::LocalizationDocument* doc);

  /// @brief Method IsValueValid, addr 0xe94d00, size 0x78, virtual false, abstract: false, final false
  static inline bool IsValueValid(::StringW value);

  /// @brief Method KeyExist, addr 0xe94dd0, size 0x20, virtual false, abstract: false, final false
  inline bool KeyExist(::StringW key);

  /// @brief Method KeyExist, addr 0xe94df0, size 0xa0, virtual false, abstract: false, final false
  static inline bool KeyExist(::StringW key, ::BGLib::Polyglot::Language language);

  static inline ::BGLib::Polyglot::LocalizationModel* New_ctor(::BGLib::Polyglot::Localization* localization, ::BGLib::Polyglot::Language language,
                                                               ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* inputFiles);

  /// @brief Method SelectLanguage, addr 0xe94874, size 0xd8, virtual false, abstract: false, final false
  inline void SelectLanguage(int32_t selected);

  /// @brief Method TryGet, addr 0xe94a2c, size 0x2a8, virtual false, abstract: false, final false
  inline bool TryGet(::StringW key, ::BGLib::Polyglot::Language language, ByRef<::StringW> value);

  constexpr ::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*& __cordl_internal_get__onChangeLanguage();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*> const& __cordl_internal_get__onChangeLanguage() const;

  constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*& __cordl_internal_get_inputFiles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*> const& __cordl_internal_get_inputFiles() const;

  constexpr ::UnityW<::BGLib::Polyglot::Localization> const& __cordl_internal_get_localization() const;

  constexpr ::UnityW<::BGLib::Polyglot::Localization>& __cordl_internal_get_localization();

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get_selectedCulture();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __cordl_internal_get_selectedCulture() const;

  constexpr void __cordl_internal_set__onChangeLanguage(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* value);

  constexpr void __cordl_internal_set_inputFiles(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* value);

  constexpr void __cordl_internal_set_localization(::UnityW<::BGLib::Polyglot::Localization> value);

  constexpr void __cordl_internal_set_selectedCulture(::System::Globalization::CultureInfo* value);

  /// @brief Method .ctor, addr 0xe94764, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::BGLib::Polyglot::Localization* localization, ::BGLib::Polyglot::Language language, ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* inputFiles);

  /// @brief Method add__onChangeLanguage, addr 0xe94604, size 0xb0, virtual false, abstract: false, final false
  inline void add__onChangeLanguage(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* value);

  /// @brief Method get_EnglishLanguageNames, addr 0xe91df8, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_EnglishLanguageNames();

  /// @brief Method get_InputFiles, addr 0xe94294, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* get_InputFiles();

  /// @brief Method get_LocalizedLanguageNames, addr 0xe94588, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_LocalizedLanguageNames();

  /// @brief Method get_SelectedCultureInfo, addr 0xe9429c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_SelectedCultureInfo();

  /// @brief Method get_SelectedLanguage, addr 0xe94330, size 0x1c, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::Language get_SelectedLanguage();

  /// @brief Method get_SelectedLanguageDirection, addr 0xe94544, size 0x28, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::LanguageDirection get_SelectedLanguageDirection();

  /// @brief Method get_SelectedLanguageIndex, addr 0xe91e74, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_SelectedLanguageIndex();

  /// @brief Method get_SupportedLanguages, addr 0xe9456c, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::Language>* get_SupportedLanguages();

  /// @brief Method get_fallbackLanguage, addr 0xe94528, size 0x1c, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::Language get_fallbackLanguage();

  /// @brief Method remove__onChangeLanguage, addr 0xe946b4, size 0xb0, virtual false, abstract: false, final false
  inline void remove__onChangeLanguage(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* value);

  /// @brief Method set_SelectedCultureInfo, addr 0xe942a4, size 0x8c, virtual false, abstract: false, final false
  inline void set_SelectedCultureInfo(::System::Globalization::CultureInfo* value);

  /// @brief Method set_SelectedLanguage, addr 0xe9434c, size 0x130, virtual false, abstract: false, final false
  inline void set_SelectedLanguage(::BGLib::Polyglot::Language value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizationModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationModel(LocalizationModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationModel(LocalizationModel const&) = delete;

  /// @brief Field localization, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::BGLib::Polyglot::Localization> ___localization;

  /// @brief Field inputFiles, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* ___inputFiles;

  /// @brief Field selectedCulture, offset: 0x20, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ___selectedCulture;

  /// @brief Field _onChangeLanguage, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* ____onChangeLanguage;

  /// @brief Field kDefaultLanguage value: static_cast<int32_t>(0x0)
  static ::BGLib::Polyglot::Language const kDefaultLanguage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LocalizationModel, 0x30>, "Size mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationModel, ___localization) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationModel, ___inputFiles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationModel, ___selectedCulture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationModel, ____onChangeLanguage) == 0x28, "Offset mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LocalizationModel);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LocalizationModel*, "BGLib.Polyglot", "LocalizationModel");
NEED_NO_BOX(::BGLib::Polyglot::__LocalizationModel____c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::__LocalizationModel____c__DisplayClass30_0*, "BGLib.Polyglot", "LocalizationModel/<>c__DisplayClass30_0");
