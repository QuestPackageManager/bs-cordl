#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Polyglot/zzzz__Language_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Localization)
namespace Polyglot {
class ILocalize;
}
namespace Polyglot {
struct Language;
}
namespace UnityEngine {
struct SystemLanguage;
}
namespace Polyglot {
class LocalizationAsset;
}
namespace Polyglot {
class LocalizationDocument;
}
namespace Polyglot {
struct LanguageDirection;
}
namespace System {
class Object;
}
namespace System::Globalization {
class CultureInfo;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Polyglot {
class Localization;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::Localization);
// Type: Polyglot::Localization
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15538)), TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15542))
// CS Name: ::Polyglot::Localization*
class CORDL_TYPE Localization : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field customDocument, offset 0x18, size 0x8
  __declspec(property(get = __get_customDocument, put = __set_customDocument))::Polyglot::LocalizationDocument* customDocument;

  /// @brief Field inputFiles, offset 0x20, size 0x8
  __declspec(property(get = __get_inputFiles, put = __set_inputFiles))::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>* inputFiles;

  /// @brief Field supportedLanguages, offset 0x28, size 0x8
  __declspec(property(get = __get_supportedLanguages, put = __set_supportedLanguages))::System::Collections::Generic::List_1<::Polyglot::Language>* supportedLanguages;

  /// @brief Field selectedLanguage, offset 0x30, size 0x4
  __declspec(property(get = __get_selectedLanguage, put = __set_selectedLanguage))::Polyglot::Language selectedLanguage;

  /// @brief Field fallbackLanguage, offset 0x34, size 0x4
  __declspec(property(get = __get_fallbackLanguage, put = __set_fallbackLanguage))::Polyglot::Language fallbackLanguage;

  /// @brief Field Localize, offset 0x38, size 0x8
  __declspec(property(get = __get_Localize, put = __set_Localize))::UnityEngine::Events::UnityEvent* Localize;

  /// @brief Field selectedCultureInfo, offset 0x40, size 0x8
  __declspec(property(get = __get_selectedCultureInfo, put = __set_selectedCultureInfo))::System::Globalization::CultureInfo* selectedCultureInfo;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::Polyglot::Localization* instance;

  __declspec(property(get = get_CustomDocument))::Polyglot::LocalizationDocument* CustomDocument;

  __declspec(property(get = get_InputFiles))::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>* InputFiles;

  __declspec(property(get = get_SupportedLanguages))::System::Collections::Generic::List_1<::Polyglot::Language>* SupportedLanguages;

  __declspec(property(get = get_SelectedLanguageDirection))::Polyglot::LanguageDirection SelectedLanguageDirection;

  __declspec(property(get = get_SelectedLanguageIndex)) int32_t SelectedLanguageIndex;

  __declspec(property(get = get_SelectedCultureInfo))::System::Globalization::CultureInfo* SelectedCultureInfo;

  __declspec(property(get = get_SelectedLanguage, put = set_SelectedLanguage))::Polyglot::Language SelectedLanguage;

  __declspec(property(get = get_EnglishLanguageNames))::System::Collections::Generic::List_1<::StringW>* EnglishLanguageNames;

  __declspec(property(get = get_LocalizedLanguageNames))::System::Collections::Generic::List_1<::StringW>* LocalizedLanguageNames;

  __declspec(property(get = get_EnglishLanguageName))::StringW EnglishLanguageName;

  __declspec(property(get = get_LocalizedLanguageName))::StringW LocalizedLanguageName;

  constexpr ::Polyglot::LocalizationDocument*& __get_customDocument();

  constexpr ::cordl_internals::to_const_pointer<::Polyglot::LocalizationDocument*> const& __get_customDocument() const;

  constexpr void __set_customDocument(::Polyglot::LocalizationDocument* value);

  constexpr ::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>*& __get_inputFiles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>*> const& __get_inputFiles() const;

  constexpr void __set_inputFiles(::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>* value);

  constexpr ::System::Collections::Generic::List_1<::Polyglot::Language>*& __get_supportedLanguages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Polyglot::Language>*> const& __get_supportedLanguages() const;

  constexpr void __set_supportedLanguages(::System::Collections::Generic::List_1<::Polyglot::Language>* value);

  constexpr ::Polyglot::Language& __get_selectedLanguage();

  constexpr ::Polyglot::Language const& __get_selectedLanguage() const;

  constexpr void __set_selectedLanguage(::Polyglot::Language value);

  constexpr ::Polyglot::Language& __get_fallbackLanguage();

  constexpr ::Polyglot::Language const& __get_fallbackLanguage() const;

  constexpr void __set_fallbackLanguage(::Polyglot::Language value);

  constexpr ::UnityEngine::Events::UnityEvent*& __get_Localize();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __get_Localize() const;

  constexpr void __set_Localize(::UnityEngine::Events::UnityEvent* value);

  constexpr ::System::Globalization::CultureInfo*& __get_selectedCultureInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __get_selectedCultureInfo() const;

  constexpr void __set_selectedCultureInfo(::System::Globalization::CultureInfo* value);

  static inline void setStaticF_instance(::Polyglot::Localization* value);

  static inline ::Polyglot::Localization* getStaticF_instance();

  /// @brief Method get_CustomDocument addr 0x268833c size 0x8 virtual false final false
  inline ::Polyglot::LocalizationDocument* get_CustomDocument();

  /// @brief Method get_InputFiles addr 0x2688344 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>* get_InputFiles();

  /// @brief Method get_Instance addr 0x2687ea0 size 0x94 virtual false final false
  static inline ::Polyglot::Localization* get_Instance();

  /// @brief Method set_Instance addr 0x26883ec size 0x4c virtual false final false
  static inline void set_Instance(::Polyglot::Localization* value);

  /// @brief Method get_HasInstance addr 0x268834c size 0xa0 virtual false final false
  static inline bool get_HasInstance();

  /// @brief Method get_SupportedLanguages addr 0x2688438 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::Polyglot::Language>* get_SupportedLanguages();

  /// @brief Method get_SelectedLanguageDirection addr 0x2688440 size 0x14 virtual false final false
  inline ::Polyglot::LanguageDirection get_SelectedLanguageDirection();

  /// @brief Method GetLanguageDirection addr 0x2688454 size 0x1c virtual false final false
  inline ::Polyglot::LanguageDirection GetLanguageDirection(::Polyglot::Language language);

  /// @brief Method get_SelectedLanguageIndex addr 0x2688178 size 0x74 virtual false final false
  inline int32_t get_SelectedLanguageIndex();

  /// @brief Method get_SelectedCultureInfo addr 0x2688470 size 0x8 virtual false final false
  inline ::System::Globalization::CultureInfo* get_SelectedCultureInfo();

  /// @brief Method get_SelectedLanguage addr 0x2688478 size 0x8 virtual false final false
  inline ::Polyglot::Language get_SelectedLanguage();

  /// @brief Method set_SelectedLanguage addr 0x2688480 size 0x144 virtual false final false
  inline void set_SelectedLanguage(::Polyglot::Language value);

  /// @brief Method IsLanguageSupported addr 0x26885c4 size 0x78 virtual false final false
  inline bool IsLanguageSupported(::Polyglot::Language language);

  /// @brief Method InvokeOnLocalize addr 0x268863c size 0x14 virtual false final false
  inline void InvokeOnLocalize();

  /// @brief Method get_EnglishLanguageNames addr 0x2688108 size 0x70 virtual false final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_EnglishLanguageNames();

  /// @brief Method get_LocalizedLanguageNames addr 0x2688960 size 0x70 virtual false final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_LocalizedLanguageNames();

  /// @brief Method get_EnglishLanguageName addr 0x26889d0 size 0x40 virtual false final false
  inline ::StringW get_EnglishLanguageName();

  /// @brief Method get_LocalizedLanguageName addr 0x2688a34 size 0x40 virtual false final false
  inline ::StringW get_LocalizedLanguageName();

  /// @brief Method SelectLanguage addr 0x2688a74 size 0x78 virtual false final false
  inline void SelectLanguage(int32_t selected);

  /// @brief Method SelectLanguage addr 0x2688aec size 0x4 virtual false final false
  inline void SelectLanguage(::Polyglot::Language selected);

  /// @brief Method ConvertSystemLanguage addr 0x2688af0 size 0x38 virtual false final false
  inline ::Polyglot::Language ConvertSystemLanguage(::UnityEngine::SystemLanguage selected);

  /// @brief Method AddOnLocalizeEvent addr 0x2687f34 size 0x1d4 virtual false final false
  inline void AddOnLocalizeEvent(::Polyglot::ILocalize* localize);

  /// @brief Method RemoveOnLocalizeEvent addr 0x2688b28 size 0xec virtual false final false
  inline void RemoveOnLocalizeEvent(::Polyglot::ILocalize* localize);

  /// @brief Method Get addr 0x2688a10 size 0x24 virtual false final false
  static inline ::StringW Get(::StringW key);

  /// @brief Method Get addr 0x2688c14 size 0x3b4 virtual false final false
  static inline ::StringW Get(::StringW key, ::Polyglot::Language language);

  /// @brief Method KeyExist addr 0x2689058 size 0xb0 virtual false final false
  static inline bool KeyExist(::StringW key);

  /// @brief Method GetKeys addr 0x2689108 size 0x4c virtual false final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetKeys();

  /// @brief Method GetFormat addr 0x26891e8 size 0x6c virtual false final false
  static inline ::StringW GetFormat(::StringW key, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method InputFilesContains addr 0x2689254 size 0x1c4 virtual false final false
  inline bool InputFilesContains(::Polyglot::LocalizationDocument* doc);

  static inline ::Polyglot::Localization* New_ctor();

  /// @brief Method .ctor addr 0x2689418 size 0x98 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Localization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Localization(Localization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Localization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Localization(Localization const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Localization();

public:
  /// @brief Field customDocument, offset: 0x18, size: 0x8, def value: None
  ::Polyglot::LocalizationDocument* ___customDocument;

  /// @brief Field inputFiles, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>* ___inputFiles;

  /// @brief Field supportedLanguages, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Polyglot::Language>* ___supportedLanguages;

  /// @brief Field selectedLanguage, offset: 0x30, size: 0x4, def value: None
  ::Polyglot::Language ___selectedLanguage;

  /// @brief Field fallbackLanguage, offset: 0x34, size: 0x4, def value: None
  ::Polyglot::Language ___fallbackLanguage;

  /// @brief Field Localize, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___Localize;

  /// @brief Field selectedCultureInfo, offset: 0x40, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ___selectedCultureInfo;

  /// @brief Field KeyNotFound offset 0xffffffff size 0x8
  static constexpr ::ConstString KeyNotFound{ u"[{0}]" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::Localization, 0x48>, "Size mismatch!");

static_assert(offsetof(::Polyglot::Localization, ___customDocument) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Polyglot::Localization, ___inputFiles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Polyglot::Localization, ___supportedLanguages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Polyglot::Localization, ___selectedLanguage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Polyglot::Localization, ___fallbackLanguage) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Polyglot::Localization, ___Localize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Polyglot::Localization, ___selectedCultureInfo) == 0x40, "Offset mismatch!");

} // namespace Polyglot
NEED_NO_BOX(::Polyglot::Localization);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::Localization*, "Polyglot", "Localization");
