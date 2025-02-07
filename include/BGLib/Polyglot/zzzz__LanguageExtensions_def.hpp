#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LanguageExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LanguageExtensions)
namespace BGLib::Polyglot {
struct Language;
}
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace BGLib::Polyglot {
class LanguageExtensions;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::LanguageExtensions);
// Dependencies System.Object
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.LanguageExtensions
class CORDL_TYPE LanguageExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToCultureInfoName, addr 0x22ad488, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW ToCultureInfoName(::BGLib::Polyglot::Language lang);

  /// @brief Method ToLanguage, addr 0x22ad540, size 0x1398, virtual false, abstract: false, final false
  static inline ::BGLib::Polyglot::Language ToLanguage(::StringW serializedName);

  /// @brief Method ToLanguage, addr 0x22ae954, size 0xe8, virtual false, abstract: false, final false
  static inline ::BGLib::Polyglot::Language ToLanguage(::UnityEngine::SystemLanguage systemLanguage, bool useFallbackLanguage);

  /// @brief Method ToSerializedName, addr 0x22ad2d8, size 0x1b0, virtual false, abstract: false, final false
  static inline ::StringW ToSerializedName(::BGLib::Polyglot::Language lang);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LanguageExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LanguageExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LanguageExtensions(LanguageExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LanguageExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LanguageExtensions(LanguageExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18046 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LanguageExtensions, 0x10>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LanguageExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LanguageExtensions*, "BGLib.Polyglot", "LanguageExtensions");
