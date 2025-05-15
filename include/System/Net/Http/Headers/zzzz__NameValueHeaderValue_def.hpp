#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/NameValueHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameValueHeaderValue)
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
class NameValueHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::NameValueHeaderValue);
// Dependencies System.ICloneable, System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.NameValueHeaderValue
class CORDL_TYPE NameValueHeaderValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::StringW value;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Create, addr 0x421d390, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Net::Http::Headers::NameValueHeaderValue* Create(::StringW name, ::StringW value);

  /// @brief Method Equals, addr 0x4224788, size 0xe0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x422470c, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::Headers::NameValueHeaderValue* New_ctor();

  static inline ::System::Net::Http::Headers::NameValueHeaderValue* New_ctor(::StringW name, ::StringW value);

  static inline ::System::Net::Http::Headers::NameValueHeaderValue* New_ctor(::System::Net::Http::Headers::NameValueHeaderValue* source);

  /// @brief Method System.ICloneable.Clone, addr 0x42246b4, size 0x58, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x4224918, size 0x74, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParseElement, addr 0x422498c, size 0x188, virtual false, abstract: false, final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::ByRef<::System::Net::Http::Headers::NameValueHeaderValue*> parsedValue,
                                     ::ByRef<::System::Net::Http::Headers::Token> t);

  /// @brief Method TryParseParameters, addr 0x421e6c0, size 0x2bc, virtual false, abstract: false, final false
  static inline bool TryParseParameters(::System::Net::Http::Headers::Lexer* lexer, ::ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> result,
                                        ::ByRef<::System::Net::Http::Headers::Token> t);

  /// @brief Method TryParsePragma, addr 0x4224868, size 0xb0, virtual false, abstract: false, final false
  static inline bool TryParsePragma(::StringW input, int32_t minimalCount, ::ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> result);

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_value(::StringW value);

  /// @brief Method .ctor, addr 0x4224694, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x421de80, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW value);

  /// @brief Method .ctor, addr 0x421e320, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::NameValueHeaderValue* source);

  /// @brief Method get_Name, addr 0x422469c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Value, addr 0x42246ac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Name, addr 0x42246a4, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Value, addr 0x421dd24, size 0x15c, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameValueHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameValueHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameValueHeaderValue(NameValueHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameValueHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameValueHeaderValue(NameValueHeaderValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16733 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::StringW ___value;

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::NameValueHeaderValue, ___value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::NameValueHeaderValue, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::NameValueHeaderValue, 0x20>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::NameValueHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::NameValueHeaderValue*, "System.Net.Http.Headers", "NameValueHeaderValue");
