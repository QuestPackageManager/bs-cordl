#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
CORDL_MODULE_EXPORT(DaylightTime)
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Globalization {
class DaylightTime;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::DaylightTime);
// Type: System.Globalization::DaylightTime
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// CS Name: ::System.Globalization::DaylightTime*
class CORDL_TYPE DaylightTime : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Delta))::System::TimeSpan Delta;

  __declspec(property(get = get_End))::System::DateTime End;

  __declspec(property(get = get_Start))::System::DateTime Start;

  /// @brief Field _delta, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__delta, put = __cordl_internal_set__delta))::System::TimeSpan _delta;

  /// @brief Field _end, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__end, put = __cordl_internal_set__end))::System::DateTime _end;

  /// @brief Field _start, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__start, put = __cordl_internal_set__start))::System::DateTime _start;

  static inline ::System::Globalization::DaylightTime* New_ctor(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta);

  constexpr ::System::TimeSpan const& __cordl_internal_get__delta() const;

  constexpr ::System::TimeSpan& __cordl_internal_get__delta();

  constexpr ::System::DateTime const& __cordl_internal_get__end() const;

  constexpr ::System::DateTime& __cordl_internal_get__end();

  constexpr ::System::DateTime const& __cordl_internal_get__start() const;

  constexpr ::System::DateTime& __cordl_internal_get__start();

  constexpr void __cordl_internal_set__delta(::System::TimeSpan value);

  constexpr void __cordl_internal_set__end(::System::DateTime value);

  constexpr void __cordl_internal_set__start(::System::DateTime value);

  /// @brief Method .ctor, addr 0x28d7bfc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta);

  /// @brief Method get_Delta, addr 0x28d7c48, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_Delta();

  /// @brief Method get_End, addr 0x28d7c40, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_End();

  /// @brief Method get_Start, addr 0x28d7c38, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_Start();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DaylightTime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DaylightTime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DaylightTime(DaylightTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DaylightTime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DaylightTime(DaylightTime const&) = delete;

  /// @brief Field _start, offset: 0x10, size: 0x8, def value: None
  ::System::DateTime ____start;

  /// @brief Field _end, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ____end;

  /// @brief Field _delta, offset: 0x20, size: 0x8, def value: None
  ::System::TimeSpan ____delta;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::DaylightTime, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::DaylightTime, ____start) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DaylightTime, ____end) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::DaylightTime, ____delta) == 0x20, "Offset mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::DaylightTime);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::DaylightTime*, "System.Globalization", "DaylightTime");
