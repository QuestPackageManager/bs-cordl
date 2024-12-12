#pragma once
// IWYU pragma private; include "System/CurrentSystemTimeZone.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TimeZone_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CurrentSystemTimeZone)
namespace System::Collections {
class Hashtable;
}
namespace System::Globalization {
class DaylightTime;
}
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System {
class CurrentSystemTimeZone;
}
// Write type traits
MARK_REF_PTR_T(::System::CurrentSystemTimeZone);
// Dependencies System.TimeZone
namespace System {
// Is value type: false
// CS Name: System.CurrentSystemTimeZone
class CORDL_TYPE CurrentSystemTimeZone : public ::System::TimeZone {
public:
  // Declarations
  /// @brief Field m_CachedDaylightChanges, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedDaylightChanges, put = __cordl_internal_set_m_CachedDaylightChanges)) ::System::Collections::Hashtable* m_CachedDaylightChanges;

  /// @brief Field m_daylightName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_daylightName, put = __cordl_internal_set_m_daylightName)) ::StringW m_daylightName;

  /// @brief Field m_standardName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_standardName, put = __cordl_internal_set_m_standardName)) ::StringW m_standardName;

  /// @brief Field m_ticksOffset, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ticksOffset, put = __cordl_internal_set_m_ticksOffset)) int64_t m_ticksOffset;

  /// @brief Method CreateDaylightChanges, addr 0x3dc8db4, size 0x2a0, virtual false, abstract: false, final false
  static inline ::System::Globalization::DaylightTime* CreateDaylightChanges(int32_t year);

  /// @brief Method GetCachedDaylightChanges, addr 0x3dc8bc8, size 0x1ec, virtual false, abstract: false, final false
  inline ::System::Globalization::DaylightTime* GetCachedDaylightChanges(int32_t year);

  /// @brief Method GetDaylightChanges, addr 0x3dc8afc, size 0xcc, virtual true, abstract: false, final false
  inline ::System::Globalization::DaylightTime* GetDaylightChanges(int32_t year);

  /// @brief Method GetTimeZoneData, addr 0x3dc9220, size 0x4, virtual false, abstract: false, final false
  static inline bool GetTimeZoneData(int32_t year, ::ByRef<::ArrayW<int64_t, ::Array<int64_t>*>> data, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> names, ::ByRef<bool> daylight_inverted);

  /// @brief Method GetUtcOffset, addr 0x3dc90ac, size 0x100, virtual true, abstract: false, final false
  inline ::System::TimeSpan GetUtcOffset(::System::DateTime time);

  static inline ::System::CurrentSystemTimeZone* New_ctor();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_m_CachedDaylightChanges() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_m_CachedDaylightChanges();

  constexpr ::StringW const& __cordl_internal_get_m_daylightName() const;

  constexpr ::StringW& __cordl_internal_get_m_daylightName();

  constexpr ::StringW const& __cordl_internal_get_m_standardName() const;

  constexpr ::StringW& __cordl_internal_get_m_standardName();

  constexpr int64_t const& __cordl_internal_get_m_ticksOffset() const;

  constexpr int64_t& __cordl_internal_get_m_ticksOffset();

  constexpr void __cordl_internal_set_m_CachedDaylightChanges(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_m_daylightName(::StringW value);

  constexpr void __cordl_internal_set_m_standardName(::StringW value);

  constexpr void __cordl_internal_set_m_ticksOffset(int64_t value);

  /// @brief Method .ctor, addr 0x3dc8a0c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurrentSystemTimeZone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CurrentSystemTimeZone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CurrentSystemTimeZone(CurrentSystemTimeZone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CurrentSystemTimeZone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CurrentSystemTimeZone(CurrentSystemTimeZone const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2368 };

  /// @brief Field m_ticksOffset, offset: 0x10, size: 0x8, def value: None
  int64_t ___m_ticksOffset;

  /// @brief Field m_standardName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_standardName;

  /// @brief Field m_daylightName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_daylightName;

  /// @brief Field m_CachedDaylightChanges, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___m_CachedDaylightChanges;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::CurrentSystemTimeZone, ___m_ticksOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::CurrentSystemTimeZone, ___m_standardName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::CurrentSystemTimeZone, ___m_daylightName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::CurrentSystemTimeZone, ___m_CachedDaylightChanges) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::CurrentSystemTimeZone, 0x30>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::CurrentSystemTimeZone);
DEFINE_IL2CPP_ARG_TYPE(::System::CurrentSystemTimeZone*, "System", "CurrentSystemTimeZone");
