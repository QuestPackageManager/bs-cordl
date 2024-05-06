#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceCommandPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "IgnoranceCore/zzzz__IgnoranceCommandType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceCommandPacket)
namespace IgnoranceCore {
struct IgnoranceCommandType;
}
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceCommandPacket;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceCommandPacket);
// Type: IgnoranceCore::IgnoranceCommandPacket
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace IgnoranceCore {
// Is value type: true
// CS Name: ::IgnoranceCore::IgnoranceCommandPacket
struct CORDL_TYPE IgnoranceCommandPacket {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceCommandPacket();

  // Ctor Parameters [CppParam { name: "Type", ty: "::IgnoranceCore::IgnoranceCommandType", modifiers: "", def_value: None }, CppParam { name: "PeerId", ty: "uint32_t", modifiers: "", def_value: None
  // }]
  constexpr IgnoranceCommandPacket(::IgnoranceCore::IgnoranceCommandType Type, uint32_t PeerId) noexcept;

  /// @brief Field Type, offset: 0x0, size: 0x4, def value: None
  ::IgnoranceCore::IgnoranceCommandType Type;

  /// @brief Field PeerId, offset: 0x4, size: 0x4, def value: None
  uint32_t PeerId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceCommandPacket, 0x8>, "Size mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceCommandPacket, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceCommandPacket, PeerId) == 0x4, "Offset mismatch!");

} // namespace IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceCommandPacket, "IgnoranceCore", "IgnoranceCommandPacket");
