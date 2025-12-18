#pragma once
// IWYU pragma private; include "BGLib/Polyglot/Localization.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Localization)
namespace BGLib::Polyglot {
struct LocalizationLanguage;
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
// Forward declare root types
namespace BGLib::Polyglot {
class Localization;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::Localization);
// Dependencies BGLib.Polyglot.LocalizationLanguage, UnityEngine.ScriptableObject
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.Localization
class CORDL_TYPE Localization : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_FallbackLanguage)) ::BGLib::Polyglot::LocalizationLanguage FallbackLanguage;

  __declspec(property(get = get_SupportedLanguages)) ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>* SupportedLanguages;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::BGLib::Polyglot::LocalizationModel* _instance;

  /// @brief Field fallbackLanguage, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_fallbackLanguage, put = __cordl_internal_set_fallbackLanguage)) ::BGLib::Polyglot::LocalizationLanguage fallbackLanguage;

  /// @brief Field selectedLanguage, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_selectedLanguage, put = __cordl_internal_set_selectedLanguage)) ::BGLib::Polyglot::LocalizationLanguage selectedLanguage;

  __declspec(property(get = get_selectedLanguageIndex)) int32_t selectedLanguageIndex;

  /// @brief Field supportedLanguages, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_supportedLanguages,
                      put = __cordl_internal_set_supportedLanguages)) ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationLanguage>* supportedLanguages;

  /// @brief Method Get, addr 0x32246a8, size 0x18, virtual false, abstract: false, final false
  static inline ::StringW Get(::StringW key);

  /// @brief Method HasNoSupportedLanguage, addr 0x32247f8, size 0x58, virtual false, abstract: false, final false
  inline bool HasNoSupportedLanguage();

  /// @brief Method IsLanguageSupported, addr 0x3224850, size 0x84, virtual false, abstract: false, final false
  inline bool IsLanguageSupported(::BGLib::Polyglot::LocalizationLanguage language);

  static inline ::BGLib::Polyglot::Localization* New_ctor();

  /// @brief Method NoDomainReloadInit, addr 0x322465c, size 0x4c, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  /// @brief Method SetSingletonInstance, addr 0x32246c0, size 0x9c, virtual false, abstract: false, final false
  static inline void SetSingletonInstance(::BGLib::Polyglot::LocalizationModel* model);

  constexpr ::BGLib::Polyglot::LocalizationLanguage const& __cordl_internal_get_fallbackLanguage() const;

  constexpr ::BGLib::Polyglot::LocalizationLanguage& __cordl_internal_get_fallbackLanguage();

  constexpr ::BGLib::Polyglot::LocalizationLanguage const& __cordl_internal_get_selectedLanguage() const;

  constexpr ::BGLib::Polyglot::LocalizationLanguage& __cordl_internal_get_selectedLanguage();

  constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationLanguage>* const& __cordl_internal_get_supportedLanguages() const;

  constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationLanguage>*& __cordl_internal_get_supportedLanguages();

  constexpr void __cordl_internal_set_fallbackLanguage(::BGLib::Polyglot::LocalizationLanguage value);

  constexpr void __cordl_internal_set_selectedLanguage(::BGLib::Polyglot::LocalizationLanguage value);

  constexpr void __cordl_internal_set_supportedLanguages(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationLanguage>* value);

  /// @brief Method .ctor, addr 0x32248d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::Polyglot::LocalizationModel* getStaticF__instance();

  /// @brief Method get_FallbackLanguage, addr 0x3224764, size 0x8, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::LocalizationLanguage get_FallbackLanguage();

  /// @brief Method get_Instance, addr 0x3223b4c, size 0x98, virtual false, abstract: false, final false
  static inline ::BGLib::Polyglot::LocalizationModel* get_Instance();

  /// @brief Method get_SupportedLanguages, addr 0x322475c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>* get_SupportedLanguages();

  /// @brief Method get_selectedLanguageIndex, addr 0x322476c, size 0x8c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21983 };

  /// @brief Field supportedLanguages, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationLanguage>* ___supportedLanguages;

  /// @brief Field selectedLanguage, offset: 0x20, size: 0x4, def value: None
  ::BGLib::Polyglot::LocalizationLanguage ___selectedLanguage;

  /// @brief Field fallbackLanguage, offset: 0x24, size: 0x4, def value: None
  ::BGLib::Polyglot::LocalizationLanguage ___fallbackLanguage;

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
