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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3671))
// CS Name: ::System.Globalization::DaylightTime*
class CORDL_TYPE DaylightTime : public ::System::Object {
public:
  // Declarations
  /// @brief Field _start, offset 0x10, size 0x8
  __declspec(property(get = __get__start, put = __set__start))::System::DateTime _start;

  /// @brief Field _end, offset 0x18, size 0x8
  __declspec(property(get = __get__end, put = __set__end))::System::DateTime _end;

  /// @brief Field _delta, offset 0x20, size 0x8
  __declspec(property(get = __get__delta, put = __set__delta))::System::TimeSpan _delta;

  __declspec(property(get = get_Start))::System::DateTime Start;

  __declspec(property(get = get_End))::System::DateTime End;

  __declspec(property(get = get_Delta))::System::TimeSpan Delta;

  constexpr ::System::DateTime& __get__start();

  constexpr ::System::DateTime const& __get__start() const;

  constexpr void __set__start(::System::DateTime value);

  constexpr ::System::DateTime& __get__end();

  constexpr ::System::DateTime const& __get__end() const;

  constexpr void __set__end(::System::DateTime value);

  constexpr ::System::TimeSpan& __get__delta();

  constexpr ::System::TimeSpan const& __get__delta() const;

  constexpr void __set__delta(::System::TimeSpan value);

  static inline ::System::Globalization::DaylightTime* New_ctor(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta);

  /// @brief Method .ctor, addr 0x2554bec, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta);

  /// @brief Method get_Start, addr 0x2554c28, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_Start();

  /// @brief Method get_End, addr 0x2554c30, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_End();

  /// @brief Method get_Delta, addr 0x2554c38, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_Delta();

  // Ctor Parameters [CppParam { name: "", ty: "DaylightTime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DaylightTime(DaylightTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DaylightTime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DaylightTime(DaylightTime const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DaylightTime();

public:
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
