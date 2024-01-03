#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WarningHeaderValue)
namespace System {
class ICloneable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
struct DateTimeOffset;
}
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
class WarningHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::WarningHeaderValue);
// Type: System.Net.Http.Headers::WarningHeaderValue
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 2702 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2370)), TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14711)) CS Name:
// ::System.Net.Http.Headers::WarningHeaderValue*
class CORDL_TYPE WarningHeaderValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Agent>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Agent_k__BackingField, put = __set__Agent_k__BackingField))::StringW _Agent_k__BackingField;

  /// @brief Field <Code>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__Code_k__BackingField, put = __set__Code_k__BackingField)) int32_t _Code_k__BackingField;

  /// @brief Field <Date>k__BackingField, offset 0x20, size 0x18
  __declspec(property(get = __get__Date_k__BackingField, put = __set__Date_k__BackingField))::System::Nullable_1<::System::DateTimeOffset> _Date_k__BackingField;

  /// @brief Field <Text>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__Text_k__BackingField, put = __set__Text_k__BackingField))::StringW _Text_k__BackingField;

  __declspec(property(get = get_Agent, put = set_Agent))::StringW Agent;

  __declspec(property(get = get_Code, put = set_Code)) int32_t Code;

  __declspec(property(get = get_Date, put = set_Date))::System::Nullable_1<::System::DateTimeOffset> Date;

  __declspec(property(get = get_Text, put = set_Text))::StringW Text;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::StringW& __get__Agent_k__BackingField();

  constexpr ::StringW const& __get__Agent_k__BackingField() const;

  constexpr void __set__Agent_k__BackingField(::StringW value);

  constexpr int32_t& __get__Code_k__BackingField();

  constexpr int32_t const& __get__Code_k__BackingField() const;

  constexpr void __set__Code_k__BackingField(int32_t value);

  constexpr ::System::Nullable_1<::System::DateTimeOffset>& __get__Date_k__BackingField();

  constexpr ::System::Nullable_1<::System::DateTimeOffset> const& __get__Date_k__BackingField() const;

  constexpr void __set__Date_k__BackingField(::System::Nullable_1<::System::DateTimeOffset> value);

  constexpr ::StringW& __get__Text_k__BackingField();

  constexpr ::StringW const& __get__Text_k__BackingField() const;

  constexpr void __set__Text_k__BackingField(::StringW value);

  static inline ::System::Net::Http::Headers::WarningHeaderValue* New_ctor();

  /// @brief Method .ctor, addr 0x2842ca4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Agent, addr 0x2842cac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Agent();

  /// @brief Method set_Agent, addr 0x2842cb4, size 0x8, virtual false, abstract: false, final false
  inline void set_Agent(::StringW value);

  /// @brief Method get_Code, addr 0x2842cbc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Code();

  /// @brief Method set_Code, addr 0x2842cc4, size 0x8, virtual false, abstract: false, final false
  inline void set_Code(int32_t value);

  /// @brief Method get_Date, addr 0x2842ccc, size 0x14, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTimeOffset> get_Date();

  /// @brief Method set_Date, addr 0x2842ce0, size 0x14, virtual false, abstract: false, final false
  inline void set_Date(::System::Nullable_1<::System::DateTimeOffset> value);

  /// @brief Method get_Text, addr 0x2842cf4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Text();

  /// @brief Method set_Text, addr 0x2842cfc, size 0x8, virtual false, abstract: false, final false
  inline void set_Text(::StringW value);

  /// @brief Method IsCodeValid, addr 0x2842d04, size 0xc, virtual false, abstract: false, final false
  static inline bool IsCodeValid(int32_t code);

  /// @brief Method System.ICloneable.Clone, addr 0x2842d10, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method Equals, addr 0x2842d18, size 0x158, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2842e70, size 0xe0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method TryParse, addr 0x2842f50, size 0xb0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::WarningHeaderValue*>*> result);

  /// @brief Method TryParseElement, addr 0x2843000, size 0x28c, virtual false, abstract: false, final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::WarningHeaderValue*> parsedValue, ByRef<::System::Net::Http::Headers::Token> t);

  /// @brief Method ToString, addr 0x284328c, size 0x12a8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "WarningHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WarningHeaderValue(WarningHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WarningHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WarningHeaderValue(WarningHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WarningHeaderValue();

public:
  /// @brief Field <Agent>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Agent_k__BackingField;

  /// @brief Field <Code>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____Code_k__BackingField;

  /// @brief Field <Date>k__BackingField, offset: 0x20, size: 0x18, def value: None
  ::System::Nullable_1<::System::DateTimeOffset> ____Date_k__BackingField;

  /// @brief Field <Text>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____Text_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::WarningHeaderValue, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::WarningHeaderValue, ____Agent_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::WarningHeaderValue, ____Code_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::WarningHeaderValue, ____Date_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::WarningHeaderValue, ____Text_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::WarningHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::WarningHeaderValue*, "System.Net.Http.Headers", "WarningHeaderValue");
