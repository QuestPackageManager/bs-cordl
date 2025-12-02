#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DateTimeOffsetAdapter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeOffsetAdapter)
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System::Runtime::Serialization {
struct DateTimeOffsetAdapter;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::DateTimeOffsetAdapter);
// Dependencies System.DateTime
namespace System::Runtime::Serialization {
// Is value type: true
// CS Name: System.Runtime.Serialization.DateTimeOffsetAdapter
struct CORDL_TYPE DateTimeOffsetAdapter {
public:
  // Declarations
  __declspec(property(get = get_OffsetMinutes)) int16_t OffsetMinutes;

  __declspec(property(get = get_UtcDateTime)) ::System::DateTime UtcDateTime;

  /// @brief Method GetDateTimeOffset, addr 0x5f30910, size 0x210, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset GetDateTimeOffset(::System::Runtime::Serialization::DateTimeOffsetAdapter value);

  /// @brief Method GetDateTimeOffsetAdapter, addr 0x5f30bf0, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DateTimeOffsetAdapter GetDateTimeOffsetAdapter(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x5f30b20, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method .ctor, addr 0x5f308f4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime dateTime, int16_t offsetMinutes);

  /// @brief Method get_OffsetMinutes, addr 0x5f30908, size 0x8, virtual false, abstract: false, final false
  inline int16_t get_OffsetMinutes();

  /// @brief Method get_UtcDateTime, addr 0x5f30900, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_UtcDateTime();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeOffsetAdapter();

  // Ctor Parameters [CppParam { name: "utcDateTime", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "offsetMinutes", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr DateTimeOffsetAdapter(::System::DateTime utcDateTime, int16_t offsetMinutes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16982 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field utcDateTime, offset: 0x0, size: 0x8, def value: None
  ::System::DateTime utcDateTime;

  /// @brief Field offsetMinutes, offset: 0x8, size: 0x2, def value: None
  int16_t offsetMinutes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::DateTimeOffsetAdapter, utcDateTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DateTimeOffsetAdapter, offsetMinutes) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DateTimeOffsetAdapter, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DateTimeOffsetAdapter, "System.Runtime.Serialization", "DateTimeOffsetAdapter");
