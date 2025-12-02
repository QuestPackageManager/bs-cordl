#pragma once
// IWYU pragma private; include "System/ExceptionArgument.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExceptionArgument)
// Forward declare root types
namespace System {
struct ExceptionArgument;
}
// Write type traits
MARK_VAL_T(::System::ExceptionArgument);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.ExceptionArgument
struct CORDL_TYPE ExceptionArgument {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ExceptionArgument_Unwrapped
  enum struct __ExceptionArgument_Unwrapped : int32_t {
    __E_obj = static_cast<int32_t>(0x0),
    __E_dictionary = static_cast<int32_t>(0x1),
    __E_dictionaryCreationThreshold = static_cast<int32_t>(0x2),
    __E_array = static_cast<int32_t>(0x3),
    __E_info = static_cast<int32_t>(0x4),
    __E_key = static_cast<int32_t>(0x5),
    __E_collection = static_cast<int32_t>(0x6),
    __E_list = static_cast<int32_t>(0x7),
    __E_match = static_cast<int32_t>(0x8),
    __E_converter = static_cast<int32_t>(0x9),
    __E_queue = static_cast<int32_t>(0xa),
    __E_stack = static_cast<int32_t>(0xb),
    __E_capacity = static_cast<int32_t>(0xc),
    __E_index = static_cast<int32_t>(0xd),
    __E_startIndex = static_cast<int32_t>(0xe),
    __E_value = static_cast<int32_t>(0xf),
    __E_count = static_cast<int32_t>(0x10),
    __E_arrayIndex = static_cast<int32_t>(0x11),
    __E_name = static_cast<int32_t>(0x12),
    __E_mode = static_cast<int32_t>(0x13),
    __E_item = static_cast<int32_t>(0x14),
    __E_options = static_cast<int32_t>(0x15),
    __E_view = static_cast<int32_t>(0x16),
    __E_sourceBytesToCopy = static_cast<int32_t>(0x17),
    __E_start = static_cast<int32_t>(0x18),
    __E_pointer = static_cast<int32_t>(0x19),
    __E_ownedMemory = static_cast<int32_t>(0x1a),
    __E_text = static_cast<int32_t>(0x1b),
    __E_length = static_cast<int32_t>(0x1c),
    __E_comparer = static_cast<int32_t>(0x1d),
    __E_comparable = static_cast<int32_t>(0x1e),
    __E_exceptions = static_cast<int32_t>(0x1f),
    __E_exception = static_cast<int32_t>(0x20),
    __E_action = static_cast<int32_t>(0x21),
    __E_comparison = static_cast<int32_t>(0x22),
    __E_startSegment = static_cast<int32_t>(0x23),
    __E_endSegment = static_cast<int32_t>(0x24),
    __E_endIndex = static_cast<int32_t>(0x25),
    __E_task = static_cast<int32_t>(0x26),
    __E_source = static_cast<int32_t>(0x27),
    __E_state = static_cast<int32_t>(0x28),
    __E_culture = static_cast<int32_t>(0x29),
    __E_destination = static_cast<int32_t>(0x2a),
    __E_byteOffset = static_cast<int32_t>(0x2b),
    __E_minimumBufferSize = static_cast<int32_t>(0x2c),
    __E_offset = static_cast<int32_t>(0x2d),
    __E_values = static_cast<int32_t>(0x2e),
    __E_comparisonType = static_cast<int32_t>(0x2f),
    __E_s = static_cast<int32_t>(0x30),
    __E_input = static_cast<int32_t>(0x31),
    __E_format = static_cast<int32_t>(0x32),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ExceptionArgument_Unwrapped() const noexcept {
    return static_cast<__ExceptionArgument_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionArgument();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExceptionArgument(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2580 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field action value: I32(33)
  static ::System::ExceptionArgument const action;

  /// @brief Field array value: I32(3)
  static ::System::ExceptionArgument const array;

  /// @brief Field arrayIndex value: I32(17)
  static ::System::ExceptionArgument const arrayIndex;

  /// @brief Field byteOffset value: I32(43)
  static ::System::ExceptionArgument const byteOffset;

  /// @brief Field capacity value: I32(12)
  static ::System::ExceptionArgument const capacity;

  /// @brief Field collection value: I32(6)
  static ::System::ExceptionArgument const collection;

  /// @brief Field comparable value: I32(30)
  static ::System::ExceptionArgument const comparable;

  /// @brief Field comparer value: I32(29)
  static ::System::ExceptionArgument const comparer;

  /// @brief Field comparison value: I32(34)
  static ::System::ExceptionArgument const comparison;

  /// @brief Field comparisonType value: I32(47)
  static ::System::ExceptionArgument const comparisonType;

  /// @brief Field converter value: I32(9)
  static ::System::ExceptionArgument const converter;

  /// @brief Field count value: I32(16)
  static ::System::ExceptionArgument const count;

  /// @brief Field culture value: I32(41)
  static ::System::ExceptionArgument const culture;

  /// @brief Field destination value: I32(42)
  static ::System::ExceptionArgument const destination;

  /// @brief Field dictionary value: I32(1)
  static ::System::ExceptionArgument const dictionary;

  /// @brief Field dictionaryCreationThreshold value: I32(2)
  static ::System::ExceptionArgument const dictionaryCreationThreshold;

  /// @brief Field endIndex value: I32(37)
  static ::System::ExceptionArgument const endIndex;

  /// @brief Field endSegment value: I32(36)
  static ::System::ExceptionArgument const endSegment;

  /// @brief Field exception value: I32(32)
  static ::System::ExceptionArgument const exception;

  /// @brief Field exceptions value: I32(31)
  static ::System::ExceptionArgument const exceptions;

  /// @brief Field format value: I32(50)
  static ::System::ExceptionArgument const format;

  /// @brief Field index value: I32(13)
  static ::System::ExceptionArgument const index;

  /// @brief Field info value: I32(4)
  static ::System::ExceptionArgument const info;

  /// @brief Field input value: I32(49)
  static ::System::ExceptionArgument const input;

  /// @brief Field item value: I32(20)
  static ::System::ExceptionArgument const item;

  /// @brief Field key value: I32(5)
  static ::System::ExceptionArgument const key;

  /// @brief Field length value: I32(28)
  static ::System::ExceptionArgument const length;

  /// @brief Field list value: I32(7)
  static ::System::ExceptionArgument const list;

  /// @brief Field match value: I32(8)
  static ::System::ExceptionArgument const match;

  /// @brief Field minimumBufferSize value: I32(44)
  static ::System::ExceptionArgument const minimumBufferSize;

  /// @brief Field mode value: I32(19)
  static ::System::ExceptionArgument const mode;

  /// @brief Field name value: I32(18)
  static ::System::ExceptionArgument const name;

  /// @brief Field obj value: I32(0)
  static ::System::ExceptionArgument const obj;

  /// @brief Field offset value: I32(45)
  static ::System::ExceptionArgument const offset;

  /// @brief Field options value: I32(21)
  static ::System::ExceptionArgument const options;

  /// @brief Field ownedMemory value: I32(26)
  static ::System::ExceptionArgument const ownedMemory;

  /// @brief Field pointer value: I32(25)
  static ::System::ExceptionArgument const pointer;

  /// @brief Field queue value: I32(10)
  static ::System::ExceptionArgument const queue;

  /// @brief Field s value: I32(48)
  static ::System::ExceptionArgument const s;

  /// @brief Field source value: I32(39)
  static ::System::ExceptionArgument const source;

  /// @brief Field sourceBytesToCopy value: I32(23)
  static ::System::ExceptionArgument const sourceBytesToCopy;

  /// @brief Field stack value: I32(11)
  static ::System::ExceptionArgument const stack;

  /// @brief Field start value: I32(24)
  static ::System::ExceptionArgument const start;

  /// @brief Field startIndex value: I32(14)
  static ::System::ExceptionArgument const startIndex;

  /// @brief Field startSegment value: I32(35)
  static ::System::ExceptionArgument const startSegment;

  /// @brief Field state value: I32(40)
  static ::System::ExceptionArgument const state;

  /// @brief Field task value: I32(38)
  static ::System::ExceptionArgument const task;

  /// @brief Field text value: I32(27)
  static ::System::ExceptionArgument const text;

  /// @brief Field value value: I32(15)
  static ::System::ExceptionArgument const value;

  /// @brief Field values value: I32(46)
  static ::System::ExceptionArgument const values;

  /// @brief Field view value: I32(22)
  static ::System::ExceptionArgument const view;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ExceptionArgument, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ExceptionArgument, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ExceptionArgument, "System", "ExceptionArgument");
