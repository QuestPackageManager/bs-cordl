#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceConnectionEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceConnectionEvent)
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceConnectionEvent;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceConnectionEvent);
// Type: IgnoranceCore::IgnoranceConnectionEvent
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace IgnoranceCore {
// Is value type: true
// CS Name: ::IgnoranceCore::IgnoranceConnectionEvent
struct CORDL_TYPE IgnoranceConnectionEvent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceConnectionEvent();

  // Ctor Parameters [CppParam { name: "EventType", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Port", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "NativePeerId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "IP", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr IgnoranceConnectionEvent(uint8_t EventType, uint16_t Port, uint32_t NativePeerId, ::StringW IP) noexcept;

  /// @brief Field EventType, offset: 0x0, size: 0x1, def value: None
  uint8_t EventType;

  /// @brief Field Port, offset: 0x2, size: 0x2, def value: None
  uint16_t Port;

  /// @brief Field NativePeerId, offset: 0x4, size: 0x4, def value: None
  uint32_t NativePeerId;

  /// @brief Field IP, offset: 0x8, size: 0x8, def value: None
  ::StringW IP;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceConnectionEvent, 0x10>, "Size mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceConnectionEvent, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceConnectionEvent, Port) == 0x2, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceConnectionEvent, NativePeerId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceConnectionEvent, IP) == 0x8, "Offset mismatch!");

} // namespace IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceConnectionEvent, "IgnoranceCore", "IgnoranceConnectionEvent");
