#pragma once
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
// Type: BGLib.Polyglot::Localization
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::Polyglot {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8954)), TypeDefinitionIndex(TypeDefinitionIndex(15672))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15676))
// CS Name: ::BGLib.Polyglot::Localization*
class CORDL_TYPE Localization : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field supportedLanguages, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_supportedLanguages,
                      put = __cordl_internal_set_supportedLanguages))::System::Collections::Generic::List_1<::BGLib::Polyglot::Language>* supportedLanguages;

  /// @brief Field selectedLanguage, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_selectedLanguage, put = __cordl_internal_set_selectedLanguage))::BGLib::Polyglot::Language selectedLanguage;

  /// @brief Field fallbackLanguage, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_fallbackLanguage, put = __cordl_internal_set_fallbackLanguage))::BGLib::Polyglot::Language fallbackLanguage;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::BGLib::Polyglot::LocalizationModel* _instance;

  __declspec(property(get = get_SupportedLanguages))::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::Language>* SupportedLanguages;

  __declspec(property(get = get_FallbackLanguage))::BGLib::Polyglot::Language FallbackLanguage;

  __declspec(property(get = get_selectedLanguageIndex)) int32_t selectedLanguageIndex;

  __declspec(property(get = get_EnglishLanguageName))::StringW EnglishLanguageName;

  __declspec(property(get = get_LocalizedLanguageName))::StringW LocalizedLanguageName;

  constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::Language>*& __cordl_internal_get_supportedLanguages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BGLib::Polyglot::Language>*> const& __cordl_internal_get_supportedLanguages() const;

  constexpr void __cordl_internal_set_supportedLanguages(::System::Collections::Generic::List_1<::BGLib::Polyglot::Language>* value);

  constexpr ::BGLib::Polyglot::Language& __cordl_internal_get_selectedLanguage();

  constexpr ::BGLib::Polyglot::Language const& __cordl_internal_get_selectedLanguage() const;

  constexpr void __cordl_internal_set_selectedLanguage(::BGLib::Polyglot::Language value);

  constexpr ::BGLib::Polyglot::Language& __cordl_internal_get_fallbackLanguage();

  constexpr ::BGLib::Polyglot::Language const& __cordl_internal_get_fallbackLanguage() const;

  constexpr void __cordl_internal_set_fallbackLanguage(::BGLib::Polyglot::Language value);

  static inline void setStaticF__instance(::BGLib::Polyglot::LocalizationModel* value);

  static inline ::BGLib::Polyglot::LocalizationModel* getStaticF__instance();

  /// @brief Method NoDomainReloadInit, addr 0xe4bffc, size 0x48, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  /// @brief Method get_Instance, addr 0xe4bbd8, size 0x98, virtual false, abstract: false, final false
  static inline ::BGLib::Polyglot::LocalizationModel* get_Instance();

  /// @brief Method SetSingletonInstance, addr 0xe4c044, size 0x9c, virtual false, abstract: false, final false
  static inline void SetSingletonInstance(::BGLib::Polyglot::LocalizationModel* model);

  /// @brief Method get_SupportedLanguages, addr 0xe4c0e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::Language>* get_SupportedLanguages();

  /// @brief Method get_FallbackLanguage, addr 0xe4c0e8, size 0x8, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::Language get_FallbackLanguage();

  /// @brief Method GetLanguageDirection, addr 0xe4c0f0, size 0x1c, virtual false, abstract: false, final false
  static inline ::BGLib::Polyglot::LanguageDirection GetLanguageDirection(::BGLib::Polyglot::Language language);

  /// @brief Method get_selectedLanguageIndex, addr 0xe4c10c, size 0x70, virtual false, abstract: false, final false
  inline int32_t get_selectedLanguageIndex();

  /// @brief Method IsLanguageSupported, addr 0xe4c1cc, size 0x74, virtual false, abstract: false, final false
  inline bool IsLanguageSupported(::BGLib::Polyglot::Language language);

  /// @brief Method HasNoSupportedLanguage, addr 0xe4c17c, size 0x50, virtual false, abstract: false, final false
  inline bool HasNoSupportedLanguage();

  /// @brief Method get_EnglishLanguageName, addr 0xe4c240, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_EnglishLanguageName();

  /// @brief Method get_LocalizedLanguageName, addr 0xe4c2a0, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_LocalizedLanguageName();

  /// @brief Method ConvertSystemLanguage, addr 0xe4c2e0, size 0xcc, virtual false, abstract: false, final false
  static inline ::BGLib::Polyglot::Language ConvertSystemLanguage(::UnityEngine::SystemLanguage selected);

  /// @brief Method Get, addr 0xe4c280, size 0x20, virtual false, abstract: false, final false
  static inline ::StringW Get(::StringW key);

  /// @brief Method GetKeys, addr 0xe4c484, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetKeys();

  static inline ::BGLib::Polyglot::Localization* New_ctor();

  /// @brief Method .ctor, addr 0xe4c564, size 0x8, virtual false, abstract: false, final false
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
  /// @brief Field supportedLanguages, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BGLib::Polyglot::Language>* ___supportedLanguages;

  /// @brief Field selectedLanguage, offset: 0x20, size: 0x4, def value: None
  ::BGLib::Polyglot::Language ___selectedLanguage;

  /// @brief Field fallbackLanguage, offset: 0x24, size: 0x4, def value: None
  ::BGLib::Polyglot::Language ___fallbackLanguage;

  /// @brief Field KeyNotFound offset 0xffffffff size 0x8
  static constexpr ::ConstString KeyNotFound{ u"[{0}]" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::Localization, 0x28>, "Size mismatch!");

static_assert(offsetof(::BGLib::Polyglot::Localization, ___supportedLanguages) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::Localization, ___selectedLanguage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::Localization, ___fallbackLanguage) == 0x24, "Offset mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::Localization);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::Localization*, "BGLib.Polyglot", "Localization");
