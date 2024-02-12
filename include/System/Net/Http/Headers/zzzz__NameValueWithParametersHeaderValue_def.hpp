#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__NameValueHeaderValue_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameValueWithParametersHeaderValue)
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
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class NameValueWithParametersHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::NameValueWithParametersHeaderValue);
// Type: System.Net.Http.Headers::NameValueWithParametersHeaderValue
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14692))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14693))
// CS Name: ::System.Net.Http.Headers::NameValueWithParametersHeaderValue*
class CORDL_TYPE NameValueWithParametersHeaderValue : public ::System::Net::Http::Headers::NameValueHeaderValue {
public:
  // Declarations
  /// @brief Field parameters, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters,
                      put = __cordl_internal_set_parameters))::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters;

  __declspec(property(get = get_Parameters))::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* Parameters;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& __cordl_internal_get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> const& __cordl_internal_get_parameters() const;

  constexpr void __cordl_internal_set_parameters(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value);

  static inline ::System::Net::Http::Headers::NameValueWithParametersHeaderValue* New_ctor(::System::Net::Http::Headers::NameValueWithParametersHeaderValue* source);

  /// @brief Method .ctor, addr 0x2842810, size 0x1ec, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::NameValueWithParametersHeaderValue* source);

  static inline ::System::Net::Http::Headers::NameValueWithParametersHeaderValue* New_ctor();

  /// @brief Method .ctor, addr 0x2842a7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Parameters, addr 0x28429fc, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters();

  /// @brief Method System.ICloneable.Clone, addr 0x2842a84, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method Equals, addr 0x2842ae4, size 0xc0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2842ba4, size 0x60, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2842c04, size 0x94, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x2842c98, size 0xb0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>*> result);

  /// @brief Method TryParseElement, addr 0x2842d48, size 0x1dc, virtual false, abstract: false, final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*> parsedValue,
                                     ByRef<::System::Net::Http::Headers::Token> t);

  // Ctor Parameters [CppParam { name: "", ty: "NameValueWithParametersHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameValueWithParametersHeaderValue(NameValueWithParametersHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameValueWithParametersHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameValueWithParametersHeaderValue(NameValueWithParametersHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameValueWithParametersHeaderValue();

public:
  /// @brief Field parameters, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::NameValueWithParametersHeaderValue, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::NameValueWithParametersHeaderValue, ___parameters) == 0x20, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::NameValueWithParametersHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::NameValueWithParametersHeaderValue*, "System.Net.Http.Headers", "NameValueWithParametersHeaderValue");
