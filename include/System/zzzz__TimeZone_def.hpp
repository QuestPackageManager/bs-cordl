#pragma once
// IWYU pragma private; include "System/TimeZone.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeZone)
namespace System::Globalization {
class DaylightTime;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System {
class TimeZone;
}
// Write type traits
MARK_REF_PTR_T(::System::TimeZone);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.TimeZone
class CORDL_TYPE TimeZone : public ::System::Object {
public:
  // Declarations
  /// @brief Field currentTimeZone, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_currentTimeZone, put = setStaticF_currentTimeZone)) ::System::TimeZone* currentTimeZone;

  /// @brief Field s_InternalSyncObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InternalSyncObject, put = setStaticF_s_InternalSyncObject)) ::System::Object* s_InternalSyncObject;

  /// @brief Method CalculateUtcOffset, addr 0x3e02d58, size 0x268, virtual false, abstract: false, final false
  static inline ::System::TimeSpan CalculateUtcOffset(::System::DateTime time, ::System::Globalization::DaylightTime* daylightTimes);

  /// @brief Method GetDaylightChanges, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Globalization::DaylightTime* GetDaylightChanges(int32_t year);

  /// @brief Method GetUtcOffset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::TimeSpan GetUtcOffset(::System::DateTime time);

  static inline ::System::TimeZone* New_ctor();

  /// @brief Method .ctor, addr 0x3e02bf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::TimeZone* getStaticF_currentTimeZone();

  static inline ::System::Object* getStaticF_s_InternalSyncObject();

  /// @brief Method get_CurrentTimeZone, addr 0x3e02bfc, size 0x15c, virtual false, abstract: false, final false
  static inline ::System::TimeZone* get_CurrentTimeZone();

  /// @brief Method get_InternalSyncObject, addr 0x3e02b5c, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Object* get_InternalSyncObject();

  static inline void setStaticF_currentTimeZone(::System::TimeZone* value);

  static inline void setStaticF_s_InternalSyncObject(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeZone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeZone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeZone(TimeZone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeZone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeZone(TimeZone const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2484 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TimeZone, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::TimeZone);
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZone*, "System", "TimeZone");
