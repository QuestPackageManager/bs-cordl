#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionParser)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
template <typename T> class ElementTryParser_1;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
struct Token;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class CollectionParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::CollectionParser);
// Type: System.Net.Http.Headers::CollectionParser
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: ::System.Net.Http.Headers::CollectionParser*
class CORDL_TYPE CollectionParser : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryParse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool TryParse(::StringW input, int32_t minimalCount, ::System::Net::Http::Headers::ElementTryParser_1<T>* parser, ByRef<::System::Collections::Generic::List_1<T>*> result);

  /// @brief Method TryParse, addr 0x2920f68, size 0xb0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::StringW>*> result);

  /// @brief Method TryParseStringElement, addr 0x2921018, size 0xcc, virtual false, abstract: false, final false
  static inline bool TryParseStringElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::StringW> parsedValue, ByRef<::System::Net::Http::Headers::Token> t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionParser(CollectionParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionParser(CollectionParser const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::CollectionParser, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::CollectionParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::CollectionParser*, "System.Net.Http.Headers", "CollectionParser");
