#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class ICloneable;
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
// Type: System.Net.Http.Headers::StringWithQualityHeaderValue
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 2704 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2448))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14707)) CS Name: ::System.Net.Http.Headers::StringWithQualityHeaderValue*
class CORDL_TYPE StringWithQualityHeaderValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Quality>k__BackingField, offset 0x10, size 0x10
  __declspec(property(get = __get__Quality_k__BackingField, put = __set__Quality_k__BackingField))::System::Nullable_1<double_t> _Quality_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__Value_k__BackingField, put = __set__Value_k__BackingField))::StringW _Value_k__BackingField;

  __declspec(property(get = get_Quality, put = set_Quality))::System::Nullable_1<double_t> Quality;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  constexpr ::System::Nullable_1<double_t>& __get__Quality_k__BackingField();

  constexpr ::System::Nullable_1<double_t> const& __get__Quality_k__BackingField() const;

  constexpr void __set__Quality_k__BackingField(::System::Nullable_1<double_t> value);

  constexpr ::StringW& __get__Value_k__BackingField();

  constexpr ::StringW const& __get__Value_k__BackingField() const;

  constexpr void __set__Value_k__BackingField(::StringW value);

  static inline ::System::Net::Http::Headers::StringWithQualityHeaderValue* New_ctor();

  /// @brief Method .ctor, addr 0x2841764, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Quality, addr 0x284176c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<double_t> get_Quality();

  /// @brief Method set_Quality, addr 0x2841778, size 0x8, virtual false, abstract: false, final false
  inline void set_Quality(::System::Nullable_1<double_t> value);

  /// @brief Method get_Value, addr 0x2841780, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x2841788, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

  /// @brief Method System.ICloneable.Clone, addr 0x2841790, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method Equals, addr 0x2841798, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2841880, size 0x8c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method TryParse, addr 0x284190c, size 0xb0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::StringWithQualityHeaderValue*>*> result);

  /// @brief Method TryParseElement, addr 0x28419bc, size 0x268, virtual false, abstract: false, final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::StringWithQualityHeaderValue*> parsedValue,
                                     ByRef<::System::Net::Http::Headers::Token> t);

  /// @brief Method ToString, addr 0x2841c24, size 0x10c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "StringWithQualityHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringWithQualityHeaderValue(StringWithQualityHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringWithQualityHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringWithQualityHeaderValue(StringWithQualityHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringWithQualityHeaderValue();

public:
  /// @brief Field <Quality>k__BackingField, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____Quality_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::StringWithQualityHeaderValue, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::StringWithQualityHeaderValue, ____Quality_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::StringWithQualityHeaderValue, ____Value_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::StringWithQualityHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::StringWithQualityHeaderValue*, "System.Net.Http.Headers", "StringWithQualityHeaderValue");
