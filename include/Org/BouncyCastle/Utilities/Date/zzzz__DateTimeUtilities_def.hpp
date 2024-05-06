#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Date/DateTimeUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeUtilities)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Date::DateTimeUtilities);
// Type: Org.BouncyCastle.Utilities.Date::DateTimeUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Date {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Date::DateTimeUtilities*
class CORDL_TYPE DateTimeUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field UnixEpoch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UnixEpoch, put = setStaticF_UnixEpoch))::System::DateTime UnixEpoch;

  /// @brief Method CurrentUnixMs, addr 0x13bd140, size 0x84, virtual false, abstract: false, final false
  static inline int64_t CurrentUnixMs();

  /// @brief Method DateTimeToUnixMs, addr 0x13bcf50, size 0x15c, virtual false, abstract: false, final false
  static inline int64_t DateTimeToUnixMs(::System::DateTime dateTime);

  static inline ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities* New_ctor();

  /// @brief Method UnixMsToDateTime, addr 0x13bd0ac, size 0x94, virtual false, abstract: false, final false
  static inline ::System::DateTime UnixMsToDateTime(int64_t unixMs);

  /// @brief Method .ctor, addr 0x13bcf48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::DateTime getStaticF_UnixEpoch();

  static inline void setStaticF_UnixEpoch(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeUtilities(DateTimeUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeUtilities(DateTimeUtilities const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Date
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Date::DateTimeUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Date::DateTimeUtilities*, "Org.BouncyCastle.Utilities.Date", "DateTimeUtilities");
