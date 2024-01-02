#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LanguageExtensions)
namespace Polyglot {
struct Language;
}
// Forward declare root types
namespace Polyglot {
class LanguageExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::LanguageExtensions);
// Type: Polyglot::LanguageExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15555))
// CS Name: ::Polyglot::LanguageExtensions*
class CORDL_TYPE LanguageExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToSerializedName, addr 0x2801d28, size 0x1b0, virtual false, abstract: false, final false
  static inline ::StringW ToSerializedName(::Polyglot::Language lang);

  /// @brief Method ToCultureInfoName, addr 0x2801ed8, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW ToCultureInfoName(::Polyglot::Language lang);

  /// @brief Method ToLanguage, addr 0x2801fc0, size 0x7e8, virtual false, abstract: false, final false
  static inline ::Polyglot::Language ToLanguage(::StringW serializedName);

  // Ctor Parameters [CppParam { name: "", ty: "LanguageExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LanguageExtensions(LanguageExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LanguageExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LanguageExtensions(LanguageExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LanguageExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::LanguageExtensions, 0x10>, "Size mismatch!");

} // namespace Polyglot
NEED_NO_BOX(::Polyglot::LanguageExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LanguageExtensions*, "Polyglot", "LanguageExtensions");
