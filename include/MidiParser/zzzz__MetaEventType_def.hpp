#pragma once
// IWYU pragma private; include "MidiParser/MetaEventType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaEventType)
// Forward declare root types
namespace MidiParser {
struct MetaEventType;
}
// Write type traits
MARK_VAL_T(::MidiParser::MetaEventType);
// Type: MidiParser::MetaEventType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, packing: None, specified_packing: None }
namespace MidiParser {
// Is value type: true
// CS Name: ::MidiParser::MetaEventType
struct CORDL_TYPE MetaEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __MetaEventType_Unwrapped
  enum struct __MetaEventType_Unwrapped : uint8_t {
    __E_Tempo = static_cast<uint8_t>(0x51u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MetaEventType_Unwrapped() const noexcept {
    return static_cast<__MetaEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr MetaEventType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Tempo value: static_cast<uint8_t>(0x51u)
  static ::MidiParser::MetaEventType const Tempo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19022 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MidiParser::MetaEventType, 0x1>, "Size mismatch!");

static_assert(offsetof(::MidiParser::MetaEventType, value__) == 0x0, "Offset mismatch!");

} // namespace MidiParser
DEFINE_IL2CPP_ARG_TYPE(::MidiParser::MetaEventType, "MidiParser", "MetaEventType");
