#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/RetryConditionHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RetryConditionHeaderValue)
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
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class RetryConditionHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::RetryConditionHeaderValue);
// Dependencies System.DateTimeOffset, System.Nullable`1<T>, System.Object, System.TimeSpan
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.RetryConditionHeaderValue
class CORDL_TYPE RetryConditionHeaderValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Date, put = set_Date)) ::System::Nullable_1<::System::DateTimeOffset> Date;

  __declspec(property(get = get_Delta, put = set_Delta)) ::System::Nullable_1<::System::TimeSpan> Delta;

  /// @brief Field <Date>k__BackingField, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get__Date_k__BackingField, put = __cordl_internal_set__Date_k__BackingField)) ::System::Nullable_1<::System::DateTimeOffset> _Date_k__BackingField;

  /// @brief Field <Delta>k__BackingField, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__Delta_k__BackingField, put = __cordl_internal_set__Delta_k__BackingField)) ::System::Nullable_1<::System::TimeSpan> _Delta_k__BackingField;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Equals, addr 0x5f3a9a4, size 0x1b0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x5f3ab54, size 0x9c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::Headers::RetryConditionHeaderValue* New_ctor(::System::DateTimeOffset date);

  static inline ::System::Net::Http::Headers::RetryConditionHeaderValue* New_ctor(::System::TimeSpan delta);

  /// @brief Method System.ICloneable.Clone, addr 0x5f3a9a0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x5f3add8, size 0x18c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x5f3abf0, size 0x1e8, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<::System::Net::Http::Headers::RetryConditionHeaderValue*> parsedValue);

  constexpr ::System::Nullable_1<::System::DateTimeOffset> const& __cordl_internal_get__Date_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::DateTimeOffset>& __cordl_internal_get__Date_k__BackingField();

  constexpr ::System::Nullable_1<::System::TimeSpan> const& __cordl_internal_get__Delta_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::TimeSpan>& __cordl_internal_get__Delta_k__BackingField();

  constexpr void __cordl_internal_set__Date_k__BackingField(::System::Nullable_1<::System::DateTimeOffset> value);

  constexpr void __cordl_internal_set__Delta_k__BackingField(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method .ctor, addr 0x5f3a81c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTimeOffset date);

  /// @brief Method .ctor, addr 0x5f3a880, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::System::TimeSpan delta);

  /// @brief Method get_Date, addr 0x5f3a964, size 0x14, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTimeOffset> get_Date();

  /// @brief Method get_Delta, addr 0x5f3a98c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::TimeSpan> get_Delta();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Date, addr 0x5f3a978, size 0x14, virtual false, abstract: false, final false
  inline void set_Date(::System::Nullable_1<::System::DateTimeOffset> value);

  /// @brief Method set_Delta, addr 0x5f3a998, size 0x8, virtual false, abstract: false, final false
  inline void set_Delta(::System::Nullable_1<::System::TimeSpan> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RetryConditionHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RetryConditionHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RetryConditionHeaderValue(RetryConditionHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RetryConditionHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RetryConditionHeaderValue(RetryConditionHeaderValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20111 };

  /// @brief Field <Date>k__BackingField, offset: 0x10, size: 0x18, def value: None
  ::System::Nullable_1<::System::DateTimeOffset> ____Date_k__BackingField;

  /// @brief Field <Delta>k__BackingField, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<::System::TimeSpan> ____Delta_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::RetryConditionHeaderValue, ____Date_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::RetryConditionHeaderValue, ____Delta_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::RetryConditionHeaderValue, 0x38>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::RetryConditionHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::RetryConditionHeaderValue*, "System.Net.Http.Headers", "RetryConditionHeaderValue");
