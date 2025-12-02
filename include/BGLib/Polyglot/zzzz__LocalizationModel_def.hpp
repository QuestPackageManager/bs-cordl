#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizationModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
class LocalizationAsset;
}
namespace BGLib::Polyglot {
struct LocalizationLanguage;
}
namespace BGLib::Polyglot {
class Localization;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::LocalizationModel);
// Dependencies BGLib.Polyglot.LocalizationLanguage, System.Object
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.LocalizationModel
class CORDL_TYPE LocalizationModel : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_SelectedCultureInfo, put = set_SelectedCultureInfo)) ::System::Globalization::CultureInfo* SelectedCultureInfo;

  __declspec(property(get = get_SelectedLanguage, put = set_SelectedLanguage)) ::BGLib::Polyglot::LocalizationLanguage SelectedLanguage;

  /// @brief Field _emptyList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__emptyList, put = __cordl_internal_set__emptyList)) ::System::Collections::Generic::List_1<::StringW>* _emptyList;

  /// @brief Field _inputFiles, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__inputFiles, put = __cordl_internal_set__inputFiles)) ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* _inputFiles;

  /// @brief Field _languageStrings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__languageStrings,
                      put = __cordl_internal_set__languageStrings)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* _languageStrings;

  /// @brief Field _localization, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__localization, put = __cordl_internal_set__localization)) ::UnityW<::BGLib::Polyglot::Localization> _localization;

  /// @brief Field _onChangeLanguage, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__onChangeLanguage, put = __cordl_internal_set__onChangeLanguage)) ::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* _onChangeLanguage;

  /// @brief Field _selectedCulture, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedCulture, put = __cordl_internal_set__selectedCulture)) ::System::Globalization::CultureInfo* _selectedCulture;

  __declspec(property(get = get_englishLanguageNames)) ::System::Collections::Generic::List_1<::StringW>* englishLanguageNames;

  __declspec(property(get = get_fallbackLanguage)) ::BGLib::Polyglot::LocalizationLanguage fallbackLanguage;

  __declspec(property(get = get_inputFiles)) ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* inputFiles;

  __declspec(property(get = get_localizedLanguageNames)) ::System::Collections::Generic::List_1<::StringW>* localizedLanguageNames;

  __declspec(property(get = get_selectedLanguageDirection)) ::BGLib::Polyglot::LanguageDirection selectedLanguageDirection;

  __declspec(property(get = get_selectedLanguageIndex)) int32_t selectedLanguageIndex;

  __declspec(property(get = get_supportedLanguages)) ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>* supportedLanguages;

  /// @brief Method AddLocalizedString, addr 0x31f8500, size 0x7c, virtual false, abstract: false, final false
  inline void AddLocalizedString(::StringW key, ::System::Collections::Generic::List_1<::StringW>* values);

  /// @brief Method AddOnLocalizeEvent, addr 0x31f31b8, size 0x1b8, virtual false, abstract: false, final false
  inline void AddOnLocalizeEvent(::BGLib::Polyglot::ILocalize* localize);

  /// @brief Method Get, addr 0x31f36d4, size 0xe4, virtual false, abstract: false, final false
  inline ::StringW Get(::StringW key);

  /// @brief Method GetCultureInfo, addr 0x31f6f18, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* GetCultureInfo(::BGLib::Polyglot::LocalizationLanguage language);

  /// @brief Method GetFormatOrKey, addr 0x31f7d94, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW GetFormatOrKey(::StringW key, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method GetKeys, addr 0x31f848c, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetKeys();

  /// @brief Method GetLanguages, addr 0x31f7cb8, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetLanguages(::StringW key);

  /// @brief Method GetLanguages, addr 0x31f6ff0, size 0x4d0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetLanguages(::StringW key, ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>* languages);

  /// @brief Method GetLanguagesContains, addr 0x31f8180, size 0x30c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* GetLanguagesContains(::StringW key);

  /// @brief Method GetLanguagesStartsWith, addr 0x31f7e7c, size 0x304, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* GetLanguagesStartsWith(::StringW key);

  /// @brief Method GetOrKey, addr 0x31f7c90, size 0x28, virtual false, abstract: false, final false
  inline ::StringW GetOrKey(::StringW key);

  /// @brief Method IsValueValid, addr 0x31f7d68, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsValueValid(::StringW currentString);

  /// @brief Method KeyExist, addr 0x31f7df0, size 0x18, virtual false, abstract: false, final false
  inline bool KeyExist(::StringW key);

  /// @brief Method KeyExist, addr 0x31f7e08, size 0x74, virtual false, abstract: false, final false
  inline bool KeyExist(::StringW key, ::BGLib::Polyglot::LocalizationLanguage language);

  static inline ::BGLib::Polyglot::LocalizationModel* New_ctor(::BGLib::Polyglot::Localization* localization, ::BGLib::Polyglot::LocalizationLanguage language,
                                                               ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* inputFiles);

  /// @brief Method RemoveOnLocalizeEvent, addr 0x31f78e4, size 0xe4, virtual false, abstract: false, final false
  inline void RemoveOnLocalizeEvent(::BGLib::Polyglot::ILocalize* localize);

  /// @brief Method SelectLanguage, addr 0x31f7800, size 0xe4, virtual false, abstract: false, final false
  inline void SelectLanguage(int32_t selected);

  /// @brief Method TryGet, addr 0x31f79c8, size 0x2c8, virtual false, abstract: false, final false
  inline bool TryGet(::StringW key, ::BGLib::Polyglot::LocalizationLanguage language, ::ByRef<::StringW> value);

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__emptyList() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__emptyList();

  constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* const& __cordl_internal_get__inputFiles() const;

  constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*& __cordl_internal_get__inputFiles();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* const& __cordl_internal_get__languageStrings() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*& __cordl_internal_get__languageStrings();

  constexpr ::UnityW<::BGLib::Polyglot::Localization> const& __cordl_internal_get__localization() const;

  constexpr ::UnityW<::BGLib::Polyglot::Localization>& __cordl_internal_get__localization();

  constexpr ::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* const& __cordl_internal_get__onChangeLanguage() const;

  constexpr ::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*& __cordl_internal_get__onChangeLanguage();

  constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__selectedCulture() const;

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__selectedCulture();

  constexpr void __cordl_internal_set__emptyList(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__inputFiles(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* value);

  constexpr void __cordl_internal_set__languageStrings(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value);

  constexpr void __cordl_internal_set__localization(::UnityW<::BGLib::Polyglot::Localization> value);

  constexpr void __cordl_internal_set__onChangeLanguage(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* value);

  constexpr void __cordl_internal_set__selectedCulture(::System::Globalization::CultureInfo* value);

  /// @brief Method .ctor, addr 0x31f769c, size 0x164, virtual false, abstract: false, final false
  inline void _ctor(::BGLib::Polyglot::Localization* localization, ::BGLib::Polyglot::LocalizationLanguage language,
                    ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* inputFiles);

  /// @brief Method add__onChangeLanguage, addr 0x31f751c, size 0xc0, virtual false, abstract: false, final false
  inline void add__onChangeLanguage(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* value);

  /// @brief Method get_SelectedCultureInfo, addr 0x31f6d20, size 0x8, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_SelectedCultureInfo();

  /// @brief Method get_SelectedLanguage, addr 0x31f6db8, size 0x18, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::LocalizationLanguage get_SelectedLanguage();

  /// @brief Method get_englishLanguageNames, addr 0x31f3370, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_englishLanguageNames();

  /// @brief Method get_fallbackLanguage, addr 0x31f6cf0, size 0x18, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::LocalizationLanguage get_fallbackLanguage();

  /// @brief Method get_inputFiles, addr 0x31f6d18, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* get_inputFiles();

  /// @brief Method get_localizedLanguageNames, addr 0x31f74c0, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_localizedLanguageNames();

  /// @brief Method get_selectedLanguageDirection, addr 0x31f37b8, size 0x24, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::LanguageDirection get_selectedLanguageDirection();

  /// @brief Method get_selectedLanguageIndex, addr 0x31f33cc, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_selectedLanguageIndex();

  /// @brief Method get_supportedLanguages, addr 0x31f6fd8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>* get_supportedLanguages();

  /// @brief Method remove__onChangeLanguage, addr 0x31f75dc, size 0xc0, virtual false, abstract: false, final false
  inline void remove__onChangeLanguage(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* value);

  /// @brief Method set_SelectedCultureInfo, addr 0x31f6d28, size 0x90, virtual false, abstract: false, final false
  inline void set_SelectedCultureInfo(::System::Globalization::CultureInfo* value);

  /// @brief Method set_SelectedLanguage, addr 0x31f6dd0, size 0x148, virtual false, abstract: false, final false
  inline void set_SelectedLanguage(::BGLib::Polyglot::LocalizationLanguage value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21963 };

  /// @brief Field kDefaultLanguage value: I32(0)
  static ::BGLib::Polyglot::LocalizationLanguage const kDefaultLanguage;

  /// @brief Field _localization, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::BGLib::Polyglot::Localization> ____localization;

  /// @brief Field _inputFiles, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* ____inputFiles;

  /// @brief Field _languageStrings, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* ____languageStrings;

  /// @brief Field _emptyList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____emptyList;

  /// @brief Field _selectedCulture, offset: 0x30, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____selectedCulture;

  /// @brief Field _onChangeLanguage, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* ____onChangeLanguage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::Polyglot::LocalizationModel, ____localization) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationModel, ____inputFiles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationModel, ____languageStrings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationModel, ____emptyList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationModel, ____selectedCulture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationModel, ____onChangeLanguage) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LocalizationModel, 0x40>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LocalizationModel);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LocalizationModel*, "BGLib.Polyglot", "LocalizationModel");
