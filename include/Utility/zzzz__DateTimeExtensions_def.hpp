#pragma once
// IWYU pragma private; include "Utility/DateTimeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeExtensions)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Utility {
class DateTimeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Utility::DateTimeExtensions);
// Dependencies System.DateTime, System.Object
namespace Utility {
// Is value type: false
// CS Name: Utility.DateTimeExtensions
class CORDL_TYPE DateTimeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field EPOCH, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EPOCH, put = setStaticF_EPOCH)) ::System::DateTime EPOCH;

  /// @brief Method GetSecondsSinceEpoch, addr 0x5d88970, size 0x10c, virtual false, abstract: false, final false
  static inline int32_t GetSecondsSinceEpoch();

  /// @brief Method UnixTimestampToUniversalDateTime, addr 0x5d88a7c, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::DateTime UnixTimestampToUniversalDateTime(int32_t unixSecondsTimestamp);

  static inline ::System::DateTime getStaticF_EPOCH();

  static inline void setStaticF_EPOCH(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeExtensions(DateTimeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeExtensions(DateTimeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21692 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Utility::DateTimeExtensions, 0x10>, "Size mismatch!");

} // namespace Utility
NEED_NO_BOX(::Utility::DateTimeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Utility::DateTimeExtensions*, "Utility", "DateTimeExtensions");
