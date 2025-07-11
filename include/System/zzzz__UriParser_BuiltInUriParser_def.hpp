#pragma once
// IWYU pragma private; include "System/UriParser_BuiltInUriParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__UriParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UriParser_BuiltInUriParser)
namespace System {
struct UriSyntaxFlags;
}
// Forward declare root types
namespace GlobalNamespace {
class UriParser_BuiltInUriParser;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UriParser_BuiltInUriParser);
// Dependencies System.UriParser
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.UriParser/BuiltInUriParser
class CORDL_TYPE UriParser_BuiltInUriParser : public ::System::UriParser {
public:
  // Declarations
  static inline ::GlobalNamespace::UriParser_BuiltInUriParser* New_ctor(::StringW lwrCaseScheme, int32_t defaultPort, ::System::UriSyntaxFlags syntaxFlags);

  /// @brief Method .ctor, addr 0x440e084, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW lwrCaseScheme, int32_t defaultPort, ::System::UriSyntaxFlags syntaxFlags);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UriParser_BuiltInUriParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UriParser_BuiltInUriParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UriParser_BuiltInUriParser(UriParser_BuiltInUriParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UriParser_BuiltInUriParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UriParser_BuiltInUriParser(UriParser_BuiltInUriParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9206 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UriParser_BuiltInUriParser, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UriParser_BuiltInUriParser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UriParser_BuiltInUriParser*, "System", "UriParser/BuiltInUriParser");
