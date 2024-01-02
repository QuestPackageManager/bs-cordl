#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TimeZone_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System::CurrentSystemTimeZone
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2485))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2366))
// CS Name: ::System::CurrentSystemTimeZone*
class CORDL_TYPE CurrentSystemTimeZone : public ::System::TimeZone {
public:
  // Declarations
  /// @brief Field m_ticksOffset, offset 0x10, size 0x8
  __declspec(property(get = __get_m_ticksOffset, put = __set_m_ticksOffset)) int64_t m_ticksOffset;

  /// @brief Field m_standardName, offset 0x18, size 0x8
  __declspec(property(get = __get_m_standardName, put = __set_m_standardName))::StringW m_standardName;

  /// @brief Field m_daylightName, offset 0x20, size 0x8
  __declspec(property(get = __get_m_daylightName, put = __set_m_daylightName))::StringW m_daylightName;

  /// @brief Field m_CachedDaylightChanges, offset 0x28, size 0x8
  __declspec(property(get = __get_m_CachedDaylightChanges, put = __set_m_CachedDaylightChanges))::System::Collections::Hashtable* m_CachedDaylightChanges;

  constexpr int64_t& __get_m_ticksOffset();

  constexpr int64_t const& __get_m_ticksOffset() const;

  constexpr void __set_m_ticksOffset(int64_t value);

  constexpr ::StringW& __get_m_standardName();

  constexpr ::StringW const& __get_m_standardName() const;

  constexpr void __set_m_standardName(::StringW value);

  constexpr ::StringW& __get_m_daylightName();

  constexpr ::StringW const& __get_m_daylightName() const;

  constexpr void __set_m_daylightName(::StringW value);

  constexpr ::System::Collections::Hashtable*& __get_m_CachedDaylightChanges();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_m_CachedDaylightChanges() const;

  constexpr void __set_m_CachedDaylightChanges(::System::Collections::Hashtable* value);

  static inline ::System::CurrentSystemTimeZone* New_ctor();

  /// @brief Method .ctor, addr 0x258d878, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method GetDaylightChanges, addr 0x258d93c, size 0xd0, virtual true, abstract: false, final false
  inline ::System::Globalization::DaylightTime* GetDaylightChanges(int32_t year);

  /// @brief Method CreateDaylightChanges, addr 0x258dbf8, size 0x284, virtual false, abstract: false, final false
  static inline ::System::Globalization::DaylightTime* CreateDaylightChanges(int32_t year);

  /// @brief Method GetUtcOffset, addr 0x258de84, size 0xb4, virtual true, abstract: false, final false
  inline ::System::TimeSpan GetUtcOffset(::System::DateTime time);

  /// @brief Method GetTimeZoneData, addr 0x258df60, size 0x4, virtual false, abstract: false, final false
  static inline bool GetTimeZoneData(int32_t year, ByRef<::ArrayW<int64_t, ::Array<int64_t>*>> data, ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> names, ByRef<bool> daylight_inverted);

  /// @brief Method GetCachedDaylightChanges, addr 0x258da0c, size 0x1ec, virtual false, abstract: false, final false
  inline ::System::Globalization::DaylightTime* GetCachedDaylightChanges(int32_t year);

  // Ctor Parameters [CppParam { name: "", ty: "CurrentSystemTimeZone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CurrentSystemTimeZone(CurrentSystemTimeZone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CurrentSystemTimeZone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CurrentSystemTimeZone(CurrentSystemTimeZone const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurrentSystemTimeZone();

public:
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
static_assert(::cordl_internals::size_check_v<::System::CurrentSystemTimeZone, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::CurrentSystemTimeZone, ___m_ticksOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::CurrentSystemTimeZone, ___m_standardName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::CurrentSystemTimeZone, ___m_daylightName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::CurrentSystemTimeZone, ___m_CachedDaylightChanges) == 0x28, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::CurrentSystemTimeZone);
DEFINE_IL2CPP_ARG_TYPE(::System::CurrentSystemTimeZone*, "System", "CurrentSystemTimeZone");
