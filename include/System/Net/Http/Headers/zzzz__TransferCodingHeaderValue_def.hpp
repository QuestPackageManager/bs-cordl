#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/TransferCodingHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TransferCodingHeaderValue)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class TransferCodingHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::TransferCodingHeaderValue);
// Dependencies System.ICloneable, System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.TransferCodingHeaderValue
class CORDL_TYPE TransferCodingHeaderValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Parameters)) ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* Parameters;

  __declspec(property(get = get_Value)) ::StringW Value;

  /// @brief Field parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters,
                      put = __cordl_internal_set_parameters)) ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters;

  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::StringW value;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Equals, addr 0x4223a74, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x4223b3c, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::Headers::TransferCodingHeaderValue* New_ctor();

  static inline ::System::Net::Http::Headers::TransferCodingHeaderValue* New_ctor(::System::Net::Http::Headers::TransferCodingHeaderValue* source);

  /// @brief Method System.ICloneable.Clone, addr 0x4223a1c, size 0x58, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x4223bc0, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x4223c18, size 0xb0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ::ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*> result);

  /// @brief Method TryParseElement, addr 0x4223cc8, size 0x144, virtual false, abstract: false, final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::ByRef<::System::Net::Http::Headers::TransferCodingHeaderValue*> parsedValue,
                                     ::ByRef<::System::Net::Http::Headers::Token> t);

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* const& __cordl_internal_get_parameters() const;

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& __cordl_internal_get_parameters();

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_parameters(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value);

  constexpr void __cordl_internal_set_value(::StringW value);

  /// @brief Method .ctor, addr 0x4223a0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4223770, size 0x224, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::TransferCodingHeaderValue* source);

  /// @brief Method get_Parameters, addr 0x4223994, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters();

  /// @brief Method get_Value, addr 0x4223a14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransferCodingHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransferCodingHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransferCodingHeaderValue(TransferCodingHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransferCodingHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransferCodingHeaderValue(TransferCodingHeaderValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16752 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::StringW ___value;

  /// @brief Field parameters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::TransferCodingHeaderValue, ___value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::TransferCodingHeaderValue, ___parameters) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::TransferCodingHeaderValue, 0x20>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::TransferCodingHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::TransferCodingHeaderValue*, "System.Net.Http.Headers", "TransferCodingHeaderValue");
