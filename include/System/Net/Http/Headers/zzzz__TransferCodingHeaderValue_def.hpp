#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TransferCodingHeaderValue)
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System {
class Object;
}
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class TransferCodingHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::TransferCodingHeaderValue);
// Type: System.Net.Http.Headers::TransferCodingHeaderValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14708))
// CS Name: ::System.Net.Http.Headers::TransferCodingHeaderValue*
class CORDL_TYPE TransferCodingHeaderValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::StringW value;

  /// @brief Field parameters, offset 0x18, size 0x8
  __declspec(property(get = __get_parameters, put = __set_parameters))::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters;

  __declspec(property(get = get_Parameters))::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* Parameters;

  __declspec(property(get = get_Value))::StringW Value;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::StringW& __get_value();

  constexpr ::StringW const& __get_value() const;

  constexpr void __set_value(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& __get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> const& __get_parameters() const;

  constexpr void __set_parameters(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value);

  static inline ::System::Net::Http::Headers::TransferCodingHeaderValue* New_ctor(::System::Net::Http::Headers::TransferCodingHeaderValue* source);

  /// @brief Method .ctor, addr 0x2841d30, size 0x230, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::TransferCodingHeaderValue* source);

  static inline ::System::Net::Http::Headers::TransferCodingHeaderValue* New_ctor();

  /// @brief Method .ctor, addr 0x2841fe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Parameters, addr 0x2841f60, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters();

  /// @brief Method get_Value, addr 0x2841fe8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method System.ICloneable.Clone, addr 0x2841ff0, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method Equals, addr 0x2842050, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2842118, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x284219c, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x28421f4, size 0xb0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*> result);

  /// @brief Method TryParseElement, addr 0x28422a4, size 0x144, virtual false, abstract: false, final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::TransferCodingHeaderValue*> parsedValue,
                                     ByRef<::System::Net::Http::Headers::Token> t);

  // Ctor Parameters [CppParam { name: "", ty: "TransferCodingHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransferCodingHeaderValue(TransferCodingHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransferCodingHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransferCodingHeaderValue(TransferCodingHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransferCodingHeaderValue();

public:
  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::StringW ___value;

  /// @brief Field parameters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::TransferCodingHeaderValue, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::TransferCodingHeaderValue, ___value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::TransferCodingHeaderValue, ___parameters) == 0x18, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::TransferCodingHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::TransferCodingHeaderValue*, "System.Net.Http.Headers", "TransferCodingHeaderValue");
