#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/MediaTypeWithQualityHeaderValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__MediaTypeHeaderValue_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MediaTypeWithQualityHeaderValue)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
struct Token;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class MediaTypeWithQualityHeaderValue;
}
// Write type traits
MARK_REF_T(::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*);
DEFINE_IL2CPP_CLASS(::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*, "System.Net.Http.Headers", "MediaTypeWithQualityHeaderValue");
// Dependencies System.Net.Http.Headers.MediaTypeHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.MediaTypeWithQualityHeaderValue
class CORDL_TYPE MediaTypeWithQualityHeaderValue : public ::System::Net::Http::Headers::MediaTypeHeaderValue {
public:
  // Declarations
  static inline ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue* New_ctor();

  static inline ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue* New_ctor(::StringW mediaType);

  /// @brief Method TryParse, addr 0x60e67a8, size 0xb4, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>*> result);

  /// @brief Method TryParseElement, addr 0x60e6630, size 0x178, virtual false, abstract: false, final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::by_ref<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*> parsedValue,
                                     ::by_ref<::System::Net::Http::Headers::Token> t);

  /// @brief Method .ctor, addr 0x60e662c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x60e6628, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW mediaType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MediaTypeWithQualityHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MediaTypeWithQualityHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MediaTypeWithQualityHeaderValue(MediaTypeWithQualityHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MediaTypeWithQualityHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MediaTypeWithQualityHeaderValue(MediaTypeWithQualityHeaderValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20288 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue) == 0x20, "Size mismatch!");

} // namespace System::Net::Http::Headers
