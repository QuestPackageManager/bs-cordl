#pragma once
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
namespace System {
class __UriParser__BuiltInUriParser;
}
// Write type traits
MARK_REF_PTR_T(::System::__UriParser__BuiltInUriParser);
// Type: ::BuiltInUriParser
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::UriParser::BuiltInUriParser*
class CORDL_TYPE __UriParser__BuiltInUriParser : public ::System::UriParser {
public:
  // Declarations
  static inline ::System::__UriParser__BuiltInUriParser* New_ctor(::StringW lwrCaseScheme, int32_t defaultPort, ::System::UriSyntaxFlags syntaxFlags);

  /// @brief Method .ctor, addr 0x2e804e0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW lwrCaseScheme, int32_t defaultPort, ::System::UriSyntaxFlags syntaxFlags);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UriParser__BuiltInUriParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UriParser__BuiltInUriParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UriParser__BuiltInUriParser(__UriParser__BuiltInUriParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UriParser__BuiltInUriParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UriParser__BuiltInUriParser(__UriParser__BuiltInUriParser const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__UriParser__BuiltInUriParser, 0x28>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::__UriParser__BuiltInUriParser);
DEFINE_IL2CPP_ARG_TYPE(::System::__UriParser__BuiltInUriParser*, "System", "UriParser/BuiltInUriParser");
