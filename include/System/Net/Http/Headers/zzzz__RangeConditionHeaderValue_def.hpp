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
CORDL_MODULE_EXPORT(RangeConditionHeaderValue)
namespace System::Net::Http::Headers {
class EntityTagHeaderValue;
}
namespace System {
struct DateTimeOffset;
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
class RangeConditionHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::RangeConditionHeaderValue);
// Type: System.Net.Http.Headers::RangeConditionHeaderValue
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2370)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2448)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 2702 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(14703)) CS Name:
// ::System.Net.Http.Headers::RangeConditionHeaderValue*
class CORDL_TYPE RangeConditionHeaderValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Date>k__BackingField, offset 0x10, size 0x18
  __declspec(property(get = __get__Date_k__BackingField, put = __set__Date_k__BackingField))::System::Nullable_1<::System::DateTimeOffset> _Date_k__BackingField;

  /// @brief Field <EntityTag>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__EntityTag_k__BackingField, put = __set__EntityTag_k__BackingField))::System::Net::Http::Headers::EntityTagHeaderValue* _EntityTag_k__BackingField;

  __declspec(property(get = get_Date, put = set_Date))::System::Nullable_1<::System::DateTimeOffset> Date;

  __declspec(property(get = get_EntityTag, put = set_EntityTag))::System::Net::Http::Headers::EntityTagHeaderValue* EntityTag;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  constexpr ::System::Nullable_1<::System::DateTimeOffset>& __get__Date_k__BackingField();

  constexpr ::System::Nullable_1<::System::DateTimeOffset> const& __get__Date_k__BackingField() const;

  constexpr void __set__Date_k__BackingField(::System::Nullable_1<::System::DateTimeOffset> value);

  constexpr ::System::Net::Http::Headers::EntityTagHeaderValue*& __get__EntityTag_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::EntityTagHeaderValue*> const& __get__EntityTag_k__BackingField() const;

  constexpr void __set__EntityTag_k__BackingField(::System::Net::Http::Headers::EntityTagHeaderValue* value);

  static inline ::System::Net::Http::Headers::RangeConditionHeaderValue* New_ctor(::System::DateTimeOffset date);

  /// @brief Method .ctor, addr 0x283fa94, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTimeOffset date);

  static inline ::System::Net::Http::Headers::RangeConditionHeaderValue* New_ctor(::System::Net::Http::Headers::EntityTagHeaderValue* entityTag);

  /// @brief Method .ctor, addr 0x283fb24, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::EntityTagHeaderValue* entityTag);

  /// @brief Method get_Date, addr 0x283fb9c, size 0x14, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTimeOffset> get_Date();

  /// @brief Method set_Date, addr 0x283fbb0, size 0x14, virtual false, abstract: false, final false
  inline void set_Date(::System::Nullable_1<::System::DateTimeOffset> value);

  /// @brief Method get_EntityTag, addr 0x283fbc4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Http::Headers::EntityTagHeaderValue* get_EntityTag();

  /// @brief Method set_EntityTag, addr 0x283fbcc, size 0x8, virtual false, abstract: false, final false
  inline void set_EntityTag(::System::Net::Http::Headers::EntityTagHeaderValue* value);

  /// @brief Method System.ICloneable.Clone, addr 0x283fbd4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method Equals, addr 0x283fbdc, size 0x144, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x283fd20, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method TryParse, addr 0x283fda4, size 0x24c, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::RangeConditionHeaderValue*> parsedValue);

  /// @brief Method ToString, addr 0x283fff0, size 0xe4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "RangeConditionHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RangeConditionHeaderValue(RangeConditionHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RangeConditionHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RangeConditionHeaderValue(RangeConditionHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeConditionHeaderValue();

public:
  /// @brief Field <Date>k__BackingField, offset: 0x10, size: 0x18, def value: None
  ::System::Nullable_1<::System::DateTimeOffset> ____Date_k__BackingField;

  /// @brief Field <EntityTag>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Http::Headers::EntityTagHeaderValue* ____EntityTag_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::RangeConditionHeaderValue, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::RangeConditionHeaderValue, ____Date_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::RangeConditionHeaderValue, ____EntityTag_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::RangeConditionHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::RangeConditionHeaderValue*, "System.Net.Http.Headers", "RangeConditionHeaderValue");
