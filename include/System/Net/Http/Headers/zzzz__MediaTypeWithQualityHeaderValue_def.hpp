#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__MediaTypeHeaderValue_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MediaTypeWithQualityHeaderValue)
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class MediaTypeWithQualityHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue);
// Type: System.Net.Http.Headers::MediaTypeWithQualityHeaderValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14685))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14686))
// CS Name: ::System.Net.Http.Headers::MediaTypeWithQualityHeaderValue*
class CORDL_TYPE MediaTypeWithQualityHeaderValue : public ::System::Net::Http::Headers::MediaTypeHeaderValue {
public:
  // Declarations
  static inline ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue* New_ctor();

  /// @brief Method .ctor addr 0x283db00 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method TryParseElement addr 0x283db08 size 0x168 virtual false final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*> parsedValue,
                                     ByRef<::System::Net::Http::Headers::Token> t);

  /// @brief Method TryParse addr 0x283dc70 size 0xb0 virtual false final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>*> result);

  // Ctor Parameters [CppParam { name: "", ty: "MediaTypeWithQualityHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MediaTypeWithQualityHeaderValue(MediaTypeWithQualityHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MediaTypeWithQualityHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MediaTypeWithQualityHeaderValue(MediaTypeWithQualityHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MediaTypeWithQualityHeaderValue();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue, 0x20>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*, "System.Net.Http.Headers", "MediaTypeWithQualityHeaderValue");
