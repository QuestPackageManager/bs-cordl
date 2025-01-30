#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/StringWithQualityHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StringWithQualityHeaderValue)
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
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class StringWithQualityHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::StringWithQualityHeaderValue);
// Dependencies System.ICloneable, System.Nullable`1<T>, System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.StringWithQualityHeaderValue
class CORDL_TYPE StringWithQualityHeaderValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Quality, put = set_Quality)) ::System::Nullable_1<double_t> Quality;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  /// @brief Field <Quality>k__BackingField, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__Quality_k__BackingField, put = __cordl_internal_set__Quality_k__BackingField)) ::System::Nullable_1<double_t> _Quality_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField)) ::StringW _Value_k__BackingField;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Equals, addr 0x4229990, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x4229a78, size 0x8c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::Headers::StringWithQualityHeaderValue* New_ctor();

  /// @brief Method System.ICloneable.Clone, addr 0x4229988, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x4229e1c, size 0x10c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x4229b04, size 0xb0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ::ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::StringWithQualityHeaderValue*>*> result);

  /// @brief Method TryParseElement, addr 0x4229bb4, size 0x268, virtual false, abstract: false, final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::ByRef<::System::Net::Http::Headers::StringWithQualityHeaderValue*> parsedValue,
                                     ::ByRef<::System::Net::Http::Headers::Token> t);

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__Quality_k__BackingField() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__Quality_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Value_k__BackingField();

  constexpr void __cordl_internal_set__Quality_k__BackingField(::System::Nullable_1<double_t> value);

  constexpr void __cordl_internal_set__Value_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x422995c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Quality, addr 0x4229964, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<double_t> get_Quality();

  /// @brief Method get_Value, addr 0x4229978, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Quality, addr 0x4229970, size 0x8, virtual false, abstract: false, final false
  inline void set_Quality(::System::Nullable_1<double_t> value);

  /// @brief Method set_Value, addr 0x4229980, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringWithQualityHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringWithQualityHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringWithQualityHeaderValue(StringWithQualityHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringWithQualityHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringWithQualityHeaderValue(StringWithQualityHeaderValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16745 };

  /// @brief Field <Quality>k__BackingField, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____Quality_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::StringWithQualityHeaderValue, ____Quality_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::StringWithQualityHeaderValue, ____Value_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::StringWithQualityHeaderValue, 0x28>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::StringWithQualityHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::StringWithQualityHeaderValue*, "System.Net.Http.Headers", "StringWithQualityHeaderValue");
