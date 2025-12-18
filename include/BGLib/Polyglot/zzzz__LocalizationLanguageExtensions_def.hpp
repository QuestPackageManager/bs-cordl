#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizationLanguageExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizationLanguageExtensions)
namespace BGLib::Polyglot {
struct LanguageDirection;
}
namespace BGLib::Polyglot {
struct LocalizationLanguage;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace BGLib::Polyglot {
class LocalizationLanguageExtensions;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::LocalizationLanguageExtensions);
// Dependencies System.Object
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.LocalizationLanguageExtensions
class CORDL_TYPE LocalizationLanguageExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetLanguageDirection, addr 0x3227734, size 0x10, virtual false, abstract: false, final false
  static inline ::BGLib::Polyglot::LanguageDirection GetLanguageDirection(::BGLib::Polyglot::LocalizationLanguage language);

  /// @brief Method ToCultureInfoName, addr 0x3226110, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW ToCultureInfoName(::BGLib::Polyglot::LocalizationLanguage language);

  /// @brief Method ToLocalizationLanguage, addr 0x32261f8, size 0x1458, virtual false, abstract: false, final false
  static inline ::BGLib::Polyglot::LocalizationLanguage ToLocalizationLanguage(::StringW serializedName);

  /// @brief Method ToLocalizationLanguage, addr 0x3227690, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<bool, ::BGLib::Polyglot::LocalizationLanguage> ToLocalizationLanguage(::UnityEngine::SystemLanguage systemLanguage);

  /// @brief Method ToSerializedName, addr 0x3225e50, size 0x2c0, virtual false, abstract: false, final false
  static inline ::StringW ToSerializedName(::BGLib::Polyglot::LocalizationLanguage language);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationLanguageExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizationLanguageExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationLanguageExtensions(LocalizationLanguageExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationLanguageExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationLanguageExtensions(LocalizationLanguageExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21989 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LocalizationLanguageExtensions, 0x10>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LocalizationLanguageExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LocalizationLanguageExtensions*, "BGLib.Polyglot", "LocalizationLanguageExtensions");
