#pragma once
// IWYU pragma private; include "MidiParser/MidiEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MidiEvent)
namespace MidiParser {
struct MetaEventType;
}
// Forward declare root types
namespace MidiParser {
struct MidiEvent;
}
// Write type traits
MARK_VAL_T(::MidiParser::MidiEvent);
// Dependencies
namespace MidiParser {
// Is value type: true
// CS Name: MidiParser.MidiEvent
struct CORDL_TYPE MidiEvent {
public:
  // Declarations
  __declspec(property(get = get_Channel)) int32_t Channel;

  __declspec(property(get = get_MetaEventType)) ::MidiParser::MetaEventType MetaEventType;

  __declspec(property(get = get_Note)) int32_t Note;

  __declspec(property(get = get_Value)) int32_t Value;

  __declspec(property(get = get_Velocity)) int32_t Velocity;

  /// @brief Method get_Channel, addr 0x3c29d7c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Channel();

  /// @brief Method get_MetaEventType, addr 0x3c29d74, size 0x8, virtual false, abstract: false, final false
  inline ::MidiParser::MetaEventType get_MetaEventType();

  /// @brief Method get_Note, addr 0x3c29d84, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Note();

  /// @brief Method get_Value, addr 0x3c29d94, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Value();

  /// @brief Method get_Velocity, addr 0x3c29d8c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Velocity();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MidiEvent();

  // Ctor Parameters [CppParam { name: "AbsoluteTicksTime", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "Arg1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Arg2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Arg3", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr MidiEvent(int32_t AbsoluteTicksTime, uint8_t Type, int32_t Arg1, int32_t Arg2, int32_t Arg3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19118 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field AbsoluteTicksTime, offset: 0x0, size: 0x4, def value: None
  int32_t AbsoluteTicksTime;

  /// @brief Field Type, offset: 0x4, size: 0x1, def value: None
  uint8_t Type;

  /// @brief Field Arg1, offset: 0x8, size: 0x4, def value: None
  int32_t Arg1;

  /// @brief Field Arg2, offset: 0xc, size: 0x4, def value: None
  int32_t Arg2;

  /// @brief Field Arg3, offset: 0x10, size: 0x4, def value: None
  int32_t Arg3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MidiParser::MidiEvent, AbsoluteTicksTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MidiParser::MidiEvent, Type) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MidiParser::MidiEvent, Arg1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MidiParser::MidiEvent, Arg2) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MidiParser::MidiEvent, Arg3) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MidiParser::MidiEvent, 0x14>, "Size mismatch!");

} // namespace MidiParser
DEFINE_IL2CPP_ARG_TYPE(::MidiParser::MidiEvent, "MidiParser", "MidiEvent");
