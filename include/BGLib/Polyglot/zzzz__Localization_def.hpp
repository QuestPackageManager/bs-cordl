#pragma once
// IWYU pragma private; include "BGLib/Polyglot/Localization.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Localization)
namespace BGLib::Polyglot {
struct LanguageDirection;
}
namespace BGLib::Polyglot {
struct Language;
}
namespace BGLib::Polyglot {
class LocalizationModel;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace BGLib::Polyglot {
class Localization;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::Localization);
// Dependencies BGLib.Polyglot.Language, UnityEngine.ScriptableObject
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.Localization
class CORDL_TYPE Localization : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_EnglishLanguageName)) ::StringW EnglishLanguageName;

  __declspec(property(get = get_FallbackLanguage)) ::BGLib::Polyglot::Language FallbackLanguage;

  __declspec(property(get = get_LocalizedLanguageName)) ::StringW LocalizedLanguageName;

  __declspec(property(get = get_SupportedLanguages)) ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::Language>* SupportedLanguages;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::BGLib::Polyglot::LocalizationModel* _instance;

  /// @brief Field fallbackLanguage, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_fallbackLanguage, put = __cordl_internal_set_fallbackLanguage)) ::BGLib::Polyglot::Language fallbackLanguage;

  /// @brief Field selectedLanguage, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_selectedLanguage, put = __cordl_internal_set_selectedLanguage)) ::BGLib::Polyglot::Language selectedLanguage;

  __declspec(property(get = get_selectedLanguageIndex)) int32_t selectedLanguageIndex;

  /// @brief Field supportedLanguages, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_supportedLanguages,
                      put = __cordl_internal_set_supportedLanguages)) ::System::Collections::Generic::List_1<::BGLib::Polyglot::Language>* supportedLanguages;

  /// @brief Method ConvertSystemLanguage, addr 0x22af3e8, size 0x8, virtual false, abstract: false, final false
  static inline ::BGLib::Polyglot::Language ConvertSystemLanguage(::UnityEngine::SystemLanguage selected);

  /// @brief Method Get, addr 0x22af388, size 0x20, virtual false, abstract: false, final false
  static inline ::StringW Get(::StringW key);

  /// @brief Method GetKeys, addr 0x22af4c8, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetKeys();

  /// @brief Method GetLanguageDirection, addr 0x22af1f8, size 0x1c, virtual false, abstract: false, final false
  static inline ::BGLib::Polyglot::LanguageDirection GetLanguageDirection(::BGLib::Polyglot::Language language);

  /// @brief Method HasNoSupportedLanguage, addr 0x22af284, size 0x50, virtual false, abstract: false, final false
  inline bool HasNoSupportedLanguage();

  /// @brief Method IsLanguageSupported, addr 0x22af2d4, size 0x74, virtual false, abstract: false, final false
  inline bool IsLanguageSupported(::BGLib::Polyglot::Language language);

  static inline ::BGLib::Polyglot::Localization* New_ctor();

  /// @brief Method NoDomainReloadInit, addr 0x22af108, size 0x48, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  /// @brief Method SetSingletonInstance, addr 0x22af150, size 0x98, virtual false, abstract: false, final false
  static inline void SetSingletonInstance(::BGLib::Polyglot::LocalizationModel* model);

  constexpr ::BGLib::Polyglot::Language const& __cordl_internal_get_fallbackLanguage() const;

  constexpr ::BGLib::Polyglot::Language& __cordl_internal_get_fallbackLanguage();

  constexpr ::BGLib::Polyglot::Language const& __cordl_internal_get_selectedLanguage() const;

  constexpr ::BGLib::Polyglot::Language& __cordl_internal_get_selectedLanguage();

  constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::Language>* const& __cordl_internal_get_supportedLanguages() const;

  constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::Language>*& __cordl_internal_get_supportedLanguages();

  constexpr void __cordl_internal_set_fallbackLanguage(::BGLib::Polyglot::Language value);

  constexpr void __cordl_internal_set_selectedLanguage(::BGLib::Polyglot::Language value);

  constexpr void __cordl_internal_set_supportedLanguages(::System::Collections::Generic::List_1<::BGLib::Polyglot::Language>* value);

  /// @brief Method .ctor, addr 0x22af5a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::Polyglot::LocalizationModel* getStaticF__instance();

  /// @brief Method get_EnglishLanguageName, addr 0x22af348, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_EnglishLanguageName();

  /// @brief Method get_FallbackLanguage, addr 0x22af1f0, size 0x8, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::Language get_FallbackLanguage();

  /// @brief Method get_Instance, addr 0x22aea3c, size 0x94, virtual false, abstract: false, final false
  static inline ::BGLib::Polyglot::LocalizationModel* get_Instance();

  /// @brief Method get_LocalizedLanguageName, addr 0x22af3a8, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_LocalizedLanguageName();

  /// @brief Method get_SupportedLanguages, addr 0x22af1e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::Language>* get_SupportedLanguages();

  /// @brief Method get_selectedLanguageIndex, addr 0x22af214, size 0x70, virtual false, abstract: false, final false
  inline int32_t get_selectedLanguageIndex();

  static inline void setStaticF__instance(::BGLib::Polyglot::LocalizationModel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Localization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Localization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Localization(Localization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Localization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Localization(Localization const&) = delete;

  /// @brief Field KeyNotFound offset 0xffffffff size 0x8
  static constexpr ::ConstString KeyNotFound{ u"[{0}]" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18049 };

  /// @brief Field supportedLanguages, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BGLib::Polyglot::Language>* ___supportedLanguages;

  /// @brief Field selectedLanguage, offset: 0x20, size: 0x4, def value: None
  ::BGLib::Polyglot::Language ___selectedLanguage;

  /// @brief Field fallbackLanguage, offset: 0x24, size: 0x4, def value: None
  ::BGLib::Polyglot::Language ___fallbackLanguage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::Polyglot::Localization, ___supportedLanguages) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::Localization, ___selectedLanguage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::Localization, ___fallbackLanguage) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::Localization, 0x28>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::Localization);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::Localization*, "BGLib.Polyglot", "Localization");
