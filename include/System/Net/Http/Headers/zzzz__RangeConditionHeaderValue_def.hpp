#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/RangeConditionHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.DateTimeOffset, System.ICloneable, System.Nullable`1<T>, System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.RangeConditionHeaderValue
class CORDL_TYPE RangeConditionHeaderValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Date, put = set_Date)) ::System::Nullable_1<::System::DateTimeOffset> Date;

  __declspec(property(get = get_EntityTag, put = set_EntityTag)) ::System::Net::Http::Headers::EntityTagHeaderValue* EntityTag;

  /// @brief Field <Date>k__BackingField, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get__Date_k__BackingField, put = __cordl_internal_set__Date_k__BackingField)) ::System::Nullable_1<::System::DateTimeOffset> _Date_k__BackingField;

  /// @brief Field <EntityTag>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__EntityTag_k__BackingField,
                      put = __cordl_internal_set__EntityTag_k__BackingField)) ::System::Net::Http::Headers::EntityTagHeaderValue* _EntityTag_k__BackingField;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Equals, addr 0x42215b0, size 0x144, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x42216f4, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::Headers::RangeConditionHeaderValue* New_ctor(::System::DateTimeOffset date);

  static inline ::System::Net::Http::Headers::RangeConditionHeaderValue* New_ctor(::System::Net::Http::Headers::EntityTagHeaderValue* entityTag);

  /// @brief Method System.ICloneable.Clone, addr 0x42215a8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x42219bc, size 0x110, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x4221778, size 0x244, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<::System::Net::Http::Headers::RangeConditionHeaderValue*> parsedValue);

  constexpr ::System::Nullable_1<::System::DateTimeOffset> const& __cordl_internal_get__Date_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::DateTimeOffset>& __cordl_internal_get__Date_k__BackingField();

  constexpr ::System::Net::Http::Headers::EntityTagHeaderValue* const& __cordl_internal_get__EntityTag_k__BackingField() const;

  constexpr ::System::Net::Http::Headers::EntityTagHeaderValue*& __cordl_internal_get__EntityTag_k__BackingField();

  constexpr void __cordl_internal_set__Date_k__BackingField(::System::Nullable_1<::System::DateTimeOffset> value);

  constexpr void __cordl_internal_set__EntityTag_k__BackingField(::System::Net::Http::Headers::EntityTagHeaderValue* value);

  /// @brief Method .ctor, addr 0x422146c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTimeOffset date);

  /// @brief Method .ctor, addr 0x42214fc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::EntityTagHeaderValue* entityTag);

  /// @brief Method get_Date, addr 0x4221570, size 0x14, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTimeOffset> get_Date();

  /// @brief Method get_EntityTag, addr 0x4221598, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Http::Headers::EntityTagHeaderValue* get_EntityTag();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Date, addr 0x4221584, size 0x14, virtual false, abstract: false, final false
  inline void set_Date(::System::Nullable_1<::System::DateTimeOffset> value);

  /// @brief Method set_EntityTag, addr 0x42215a0, size 0x8, virtual false, abstract: false, final false
  inline void set_EntityTag(::System::Net::Http::Headers::EntityTagHeaderValue* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeConditionHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RangeConditionHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RangeConditionHeaderValue(RangeConditionHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RangeConditionHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RangeConditionHeaderValue(RangeConditionHeaderValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16747 };

  /// @brief Field <Date>k__BackingField, offset: 0x10, size: 0x18, def value: None
  ::System::Nullable_1<::System::DateTimeOffset> ____Date_k__BackingField;

  /// @brief Field <EntityTag>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Http::Headers::EntityTagHeaderValue* ____EntityTag_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::RangeConditionHeaderValue, ____Date_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::RangeConditionHeaderValue, ____EntityTag_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::RangeConditionHeaderValue, 0x30>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::RangeConditionHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::RangeConditionHeaderValue*, "System.Net.Http.Headers", "RangeConditionHeaderValue");
