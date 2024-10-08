#pragma once
// IWYU pragma private; include "System/InputRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputRecord)
// Forward declare root types
namespace System {
struct InputRecord;
}
// Write type traits
MARK_VAL_T(::System::InputRecord);
// Type: System::InputRecord
// SizeInfo { instance_size: 24, native_size: 28, calculated_instance_size: 24, calculated_native_size: 37, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::InputRecord
struct CORDL_TYPE InputRecord {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRecord();

  // Ctor Parameters [CppParam { name: "EventType", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "KeyDown", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "RepeatCount", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "VirtualKeyCode", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "VirtualScanCode", ty:
  // "int16_t", modifiers: "", def_value: None }, CppParam { name: "Character", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "ControlKeyState", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "pad1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pad2", ty: "bool", modifiers: "", def_value: None }]
  constexpr InputRecord(int16_t EventType, bool KeyDown, int16_t RepeatCount, int16_t VirtualKeyCode, int16_t VirtualScanCode, char16_t Character, int32_t ControlKeyState, int32_t pad1,
                        bool pad2) noexcept;

  /// @brief Field EventType, offset: 0x0, size: 0x2, def value: None
  int16_t EventType;

  /// @brief Field KeyDown, offset: 0x2, size: 0x1, def value: None
  bool KeyDown;

  /// @brief Field RepeatCount, offset: 0x4, size: 0x2, def value: None
  int16_t RepeatCount;

  /// @brief Field VirtualKeyCode, offset: 0x6, size: 0x2, def value: None
  int16_t VirtualKeyCode;

  /// @brief Field VirtualScanCode, offset: 0x8, size: 0x2, def value: None
  int16_t VirtualScanCode;

  /// @brief Field Character, offset: 0xa, size: 0x2, def value: None
  char16_t Character;

  /// @brief Field ControlKeyState, offset: 0xc, size: 0x4, def value: None
  int32_t ControlKeyState;

  /// @brief Field pad1, offset: 0x10, size: 0x4, def value: None
  int32_t pad1;

  /// @brief Field pad2, offset: 0x14, size: 0x1, def value: None
  bool pad2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2646 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::InputRecord, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::InputRecord, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::InputRecord, KeyDown) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::InputRecord, RepeatCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::InputRecord, VirtualKeyCode) == 0x6, "Offset mismatch!");

static_assert(offsetof(::System::InputRecord, VirtualScanCode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::InputRecord, Character) == 0xa, "Offset mismatch!");

static_assert(offsetof(::System::InputRecord, ControlKeyState) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::InputRecord, pad1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::InputRecord, pad2) == 0x14, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::InputRecord, "System", "InputRecord");
