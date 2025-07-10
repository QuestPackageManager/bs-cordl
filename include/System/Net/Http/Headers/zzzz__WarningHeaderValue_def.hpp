#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/WarningHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WarningHeaderValue)
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
struct DateTimeOffset;
}
namespace System {
template <typename T> struct Nullable_1;
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
// Dependencies System.DateTimeOffset, System.ICloneable, System.Nullable`1<T>, System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.WarningHeaderValue
class CORDL_TYPE WarningHeaderValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Agent, put = set_Agent)) ::StringW Agent;

  __declspec(property(get = get_Code, put = set_Code)) int32_t Code;

  __declspec(property(get = get_Date, put = set_Date)) ::System::Nullable_1<::System::DateTimeOffset> Date;

  __declspec(property(get = get_Text, put = set_Text)) ::StringW Text;

  /// @brief Field <Agent>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Agent_k__BackingField, put = __cordl_internal_set__Agent_k__BackingField)) ::StringW _Agent_k__BackingField;

  /// @brief Field <Code>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__Code_k__BackingField, put = __cordl_internal_set__Code_k__BackingField)) int32_t _Code_k__BackingField;

  /// @brief Field <Date>k__BackingField, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get__Date_k__BackingField, put = __cordl_internal_set__Date_k__BackingField)) ::System::Nullable_1<::System::DateTimeOffset> _Date_k__BackingField;

  /// @brief Field <Text>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Text_k__BackingField, put = __cordl_internal_set__Text_k__BackingField)) ::StringW _Text_k__BackingField;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Equals, addr 0x4229230, size 0x158, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x4229388, size 0xe0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsCodeValid, addr 0x422921c, size 0xc, virtual false, abstract: false, final false
  static inline bool IsCodeValid(int32_t code);

  static inline ::System::Net::Http::Headers::WarningHeaderValue* New_ctor();

  /// @brief Method System.ICloneable.Clone, addr 0x4229228, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x42297a4, size 0x23c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x4229468, size 0xb0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ::ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::WarningHeaderValue*>*> result);

  /// @brief Method TryParseElement, addr 0x4229518, size 0x28c, virtual false, abstract: false, final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::ByRef<::System::Net::Http::Headers::WarningHeaderValue*> parsedValue,
                                     ::ByRef<::System::Net::Http::Headers::Token> t);

  constexpr ::StringW const& __cordl_internal_get__Agent_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Agent_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__Code_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Code_k__BackingField();

  constexpr ::System::Nullable_1<::System::DateTimeOffset> const& __cordl_internal_get__Date_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::DateTimeOffset>& __cordl_internal_get__Date_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Text_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Text_k__BackingField();

  constexpr void __cordl_internal_set__Agent_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Code_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Date_k__BackingField(::System::Nullable_1<::System::DateTimeOffset> value);

  constexpr void __cordl_internal_set__Text_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x42291bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Agent, addr 0x42291c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Agent();

  /// @brief Method get_Code, addr 0x42291d4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Code();

  /// @brief Method get_Date, addr 0x42291e4, size 0x14, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTimeOffset> get_Date();

  /// @brief Method get_Text, addr 0x422920c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Text();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Agent, addr 0x42291cc, size 0x8, virtual false, abstract: false, final false
  inline void set_Agent(::StringW value);

  /// @brief Method set_Code, addr 0x42291dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Code(int32_t value);

  /// @brief Method set_Date, addr 0x42291f8, size 0x14, virtual false, abstract: false, final false
  inline void set_Date(::System::Nullable_1<::System::DateTimeOffset> value);

  /// @brief Method set_Text, addr 0x4229214, size 0x8, virtual false, abstract: false, final false
  inline void set_Text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WarningHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WarningHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WarningHeaderValue(WarningHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WarningHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WarningHeaderValue(WarningHeaderValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16757 };

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
static_assert(offsetof(::System::Net::Http::Headers::WarningHeaderValue, ____Agent_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::WarningHeaderValue, ____Code_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::WarningHeaderValue, ____Date_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::WarningHeaderValue, ____Text_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::WarningHeaderValue, 0x40>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::WarningHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::WarningHeaderValue*, "System.Net.Http.Headers", "WarningHeaderValue");
