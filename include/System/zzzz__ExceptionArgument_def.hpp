#pragma once
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
// Type: System::ExceptionArgument
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2570))
// CS Name: ::System::ExceptionArgument
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExceptionArgument(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionArgument();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field obj value: static_cast<int32_t>(0x0)
  static ::System::ExceptionArgument const obj;

  /// @brief Field dictionary value: static_cast<int32_t>(0x1)
  static ::System::ExceptionArgument const dictionary;

  /// @brief Field dictionaryCreationThreshold value: static_cast<int32_t>(0x2)
  static ::System::ExceptionArgument const dictionaryCreationThreshold;

  /// @brief Field array value: static_cast<int32_t>(0x3)
  static ::System::ExceptionArgument const array;

  /// @brief Field info value: static_cast<int32_t>(0x4)
  static ::System::ExceptionArgument const info;

  /// @brief Field key value: static_cast<int32_t>(0x5)
  static ::System::ExceptionArgument const key;

  /// @brief Field collection value: static_cast<int32_t>(0x6)
  static ::System::ExceptionArgument const collection;

  /// @brief Field list value: static_cast<int32_t>(0x7)
  static ::System::ExceptionArgument const list;

  /// @brief Field match value: static_cast<int32_t>(0x8)
  static ::System::ExceptionArgument const match;

  /// @brief Field converter value: static_cast<int32_t>(0x9)
  static ::System::ExceptionArgument const converter;

  /// @brief Field queue value: static_cast<int32_t>(0xa)
  static ::System::ExceptionArgument const queue;

  /// @brief Field stack value: static_cast<int32_t>(0xb)
  static ::System::ExceptionArgument const stack;

  /// @brief Field capacity value: static_cast<int32_t>(0xc)
  static ::System::ExceptionArgument const capacity;

  /// @brief Field index value: static_cast<int32_t>(0xd)
  static ::System::ExceptionArgument const index;

  /// @brief Field startIndex value: static_cast<int32_t>(0xe)
  static ::System::ExceptionArgument const startIndex;

  /// @brief Field value value: static_cast<int32_t>(0xf)
  static ::System::ExceptionArgument const value;

  /// @brief Field count value: static_cast<int32_t>(0x10)
  static ::System::ExceptionArgument const count;

  /// @brief Field arrayIndex value: static_cast<int32_t>(0x11)
  static ::System::ExceptionArgument const arrayIndex;

  /// @brief Field name value: static_cast<int32_t>(0x12)
  static ::System::ExceptionArgument const name;

  /// @brief Field mode value: static_cast<int32_t>(0x13)
  static ::System::ExceptionArgument const mode;

  /// @brief Field item value: static_cast<int32_t>(0x14)
  static ::System::ExceptionArgument const item;

  /// @brief Field options value: static_cast<int32_t>(0x15)
  static ::System::ExceptionArgument const options;

  /// @brief Field view value: static_cast<int32_t>(0x16)
  static ::System::ExceptionArgument const view;

  /// @brief Field sourceBytesToCopy value: static_cast<int32_t>(0x17)
  static ::System::ExceptionArgument const sourceBytesToCopy;

  /// @brief Field start value: static_cast<int32_t>(0x18)
  static ::System::ExceptionArgument const start;

  /// @brief Field pointer value: static_cast<int32_t>(0x19)
  static ::System::ExceptionArgument const pointer;

  /// @brief Field ownedMemory value: static_cast<int32_t>(0x1a)
  static ::System::ExceptionArgument const ownedMemory;

  /// @brief Field text value: static_cast<int32_t>(0x1b)
  static ::System::ExceptionArgument const text;

  /// @brief Field length value: static_cast<int32_t>(0x1c)
  static ::System::ExceptionArgument const length;

  /// @brief Field comparer value: static_cast<int32_t>(0x1d)
  static ::System::ExceptionArgument const comparer;

  /// @brief Field comparable value: static_cast<int32_t>(0x1e)
  static ::System::ExceptionArgument const comparable;

  /// @brief Field exceptions value: static_cast<int32_t>(0x1f)
  static ::System::ExceptionArgument const exceptions;

  /// @brief Field exception value: static_cast<int32_t>(0x20)
  static ::System::ExceptionArgument const exception;

  /// @brief Field action value: static_cast<int32_t>(0x21)
  static ::System::ExceptionArgument const action;

  /// @brief Field comparison value: static_cast<int32_t>(0x22)
  static ::System::ExceptionArgument const comparison;

  /// @brief Field startSegment value: static_cast<int32_t>(0x23)
  static ::System::ExceptionArgument const startSegment;

  /// @brief Field endSegment value: static_cast<int32_t>(0x24)
  static ::System::ExceptionArgument const endSegment;

  /// @brief Field endIndex value: static_cast<int32_t>(0x25)
  static ::System::ExceptionArgument const endIndex;

  /// @brief Field task value: static_cast<int32_t>(0x26)
  static ::System::ExceptionArgument const task;

  /// @brief Field source value: static_cast<int32_t>(0x27)
  static ::System::ExceptionArgument const source;

  /// @brief Field state value: static_cast<int32_t>(0x28)
  static ::System::ExceptionArgument const state;

  /// @brief Field culture value: static_cast<int32_t>(0x29)
  static ::System::ExceptionArgument const culture;

  /// @brief Field destination value: static_cast<int32_t>(0x2a)
  static ::System::ExceptionArgument const destination;

  /// @brief Field byteOffset value: static_cast<int32_t>(0x2b)
  static ::System::ExceptionArgument const byteOffset;

  /// @brief Field minimumBufferSize value: static_cast<int32_t>(0x2c)
  static ::System::ExceptionArgument const minimumBufferSize;

  /// @brief Field offset value: static_cast<int32_t>(0x2d)
  static ::System::ExceptionArgument const offset;

  /// @brief Field values value: static_cast<int32_t>(0x2e)
  static ::System::ExceptionArgument const values;

  /// @brief Field comparisonType value: static_cast<int32_t>(0x2f)
  static ::System::ExceptionArgument const comparisonType;

  /// @brief Field s value: static_cast<int32_t>(0x30)
  static ::System::ExceptionArgument const s;

  /// @brief Field input value: static_cast<int32_t>(0x31)
  static ::System::ExceptionArgument const input;

  /// @brief Field format value: static_cast<int32_t>(0x32)
  static ::System::ExceptionArgument const format;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ExceptionArgument, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ExceptionArgument, "System", "ExceptionArgument");
