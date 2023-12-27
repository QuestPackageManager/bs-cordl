#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationHeaderValue)
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
class ICloneable;
}
namespace System::Net::Http::Headers {
class Lexer;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class AuthenticationHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::AuthenticationHeaderValue);
// Type: System.Net.Http.Headers::AuthenticationHeaderValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14658))
// CS Name: ::System.Net.Http.Headers::AuthenticationHeaderValue*
class CORDL_TYPE AuthenticationHeaderValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Parameter>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Parameter_k__BackingField, put = __set__Parameter_k__BackingField))::StringW _Parameter_k__BackingField;

  /// @brief Field <Scheme>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Scheme_k__BackingField, put = __set__Scheme_k__BackingField))::StringW _Scheme_k__BackingField;

  __declspec(property(get = get_Parameter, put = set_Parameter))::StringW Parameter;

  __declspec(property(get = get_Scheme, put = set_Scheme))::StringW Scheme;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::StringW& __get__Parameter_k__BackingField();

  constexpr ::StringW const& __get__Parameter_k__BackingField() const;

  constexpr void __set__Parameter_k__BackingField(::StringW value);

  constexpr ::StringW& __get__Scheme_k__BackingField();

  constexpr ::StringW const& __get__Scheme_k__BackingField() const;

  constexpr void __set__Scheme_k__BackingField(::StringW value);

  static inline ::System::Net::Http::Headers::AuthenticationHeaderValue* New_ctor(::StringW scheme, ::StringW parameter);

  /// @brief Method .ctor addr 0x28348fc size 0x34 virtual false final false
  inline void _ctor(::StringW scheme, ::StringW parameter);

  static inline ::System::Net::Http::Headers::AuthenticationHeaderValue* New_ctor();

  /// @brief Method .ctor addr 0x2834930 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_Parameter addr 0x2834938 size 0x8 virtual false final false
  inline ::StringW get_Parameter();

  /// @brief Method set_Parameter addr 0x2834940 size 0x8 virtual false final false
  inline void set_Parameter(::StringW value);

  /// @brief Method get_Scheme addr 0x2834948 size 0x8 virtual false final false
  inline ::StringW get_Scheme();

  /// @brief Method set_Scheme addr 0x2834950 size 0x8 virtual false final false
  inline void set_Scheme(::StringW value);

  /// @brief Method System.ICloneable.Clone addr 0x2834958 size 0x8 virtual true final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method Equals addr 0x2834960 size 0xb4 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2834a14 size 0x7c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method TryParse addr 0x2834a90 size 0xd0 virtual false final false
  static inline bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::AuthenticationHeaderValue*> parsedValue);

  /// @brief Method TryParse addr 0x2834cbc size 0xb0 virtual false final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::AuthenticationHeaderValue*>*> result);

  /// @brief Method TryParseElement addr 0x2834b88 size 0x134 virtual false final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::AuthenticationHeaderValue*> parsedValue,
                                     ByRef<::System::Net::Http::Headers::Token> t);

  /// @brief Method ToString addr 0x28350c4 size 0x5c virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticationHeaderValue(AuthenticationHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticationHeaderValue(AuthenticationHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationHeaderValue();

public:
  /// @brief Field <Parameter>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Parameter_k__BackingField;

  /// @brief Field <Scheme>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Scheme_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::AuthenticationHeaderValue, 0x20>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::AuthenticationHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::AuthenticationHeaderValue*, "System.Net.Http.Headers", "AuthenticationHeaderValue");
