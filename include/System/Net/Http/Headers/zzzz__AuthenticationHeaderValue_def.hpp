#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/AuthenticationHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationHeaderValue)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class AuthenticationHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::AuthenticationHeaderValue);
// Dependencies System.ICloneable, System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.AuthenticationHeaderValue
class CORDL_TYPE AuthenticationHeaderValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Parameter, put = set_Parameter)) ::StringW Parameter;

  __declspec(property(get = get_Scheme, put = set_Scheme)) ::StringW Scheme;

  /// @brief Field <Parameter>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Parameter_k__BackingField, put = __cordl_internal_set__Parameter_k__BackingField)) ::StringW _Parameter_k__BackingField;

  /// @brief Field <Scheme>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Scheme_k__BackingField, put = __cordl_internal_set__Scheme_k__BackingField)) ::StringW _Scheme_k__BackingField;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Equals, addr 0x42197b4, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x4219868, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::Headers::AuthenticationHeaderValue* New_ctor();

  static inline ::System::Net::Http::Headers::AuthenticationHeaderValue* New_ctor(::StringW scheme, ::StringW parameter);

  /// @brief Method System.ICloneable.Clone, addr 0x42197ac, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x421a02c, size 0x5c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x4219b44, size 0xb0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ::ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::AuthenticationHeaderValue*>*> result);

  /// @brief Method TryParse, addr 0x42198e4, size 0xc8, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<::System::Net::Http::Headers::AuthenticationHeaderValue*> parsedValue);

  /// @brief Method TryParseElement, addr 0x42199d4, size 0x170, virtual false, abstract: false, final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::ByRef<::System::Net::Http::Headers::AuthenticationHeaderValue*> parsedValue,
                                     ::ByRef<::System::Net::Http::Headers::Token> t);

  constexpr ::StringW const& __cordl_internal_get__Parameter_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Parameter_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Scheme_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Scheme_k__BackingField();

  constexpr void __cordl_internal_set__Parameter_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Scheme_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4219784, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4219750, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW scheme, ::StringW parameter);

  /// @brief Method get_Parameter, addr 0x421978c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Parameter();

  /// @brief Method get_Scheme, addr 0x421979c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Scheme();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Parameter, addr 0x4219794, size 0x8, virtual false, abstract: false, final false
  inline void set_Parameter(::StringW value);

  /// @brief Method set_Scheme, addr 0x42197a4, size 0x8, virtual false, abstract: false, final false
  inline void set_Scheme(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticationHeaderValue(AuthenticationHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticationHeaderValue(AuthenticationHeaderValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16693 };

  /// @brief Field <Parameter>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Parameter_k__BackingField;

  /// @brief Field <Scheme>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Scheme_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::AuthenticationHeaderValue, ____Parameter_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::AuthenticationHeaderValue, ____Scheme_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::AuthenticationHeaderValue, 0x20>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::AuthenticationHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::AuthenticationHeaderValue*, "System.Net.Http.Headers", "AuthenticationHeaderValue");
