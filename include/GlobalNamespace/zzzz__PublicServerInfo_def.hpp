#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PublicServerInfo)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct PublicServerInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PublicServerInfo);
// Type: ::PublicServerInfo
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12855))
// CS Name: ::PublicServerInfo
struct CORDL_TYPE PublicServerInfo {
public:
  // Declarations
  /// @brief Method .ctor addr 0xdcf388 size 0xc virtual false final false
  inline void _ctor(::StringW code, int32_t currentPlayerCount);

  /// @brief Method Serialize addr 0xdcf394 size 0x40 virtual false final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xdcf3d4 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PublicServerInfo Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  // Ctor Parameters [CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "currentPlayerCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PublicServerInfo(::StringW code, int32_t currentPlayerCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PublicServerInfo();

  /// @brief Field code, offset: 0x0, size: 0x8, def value: None
  ::StringW code;

  /// @brief Field currentPlayerCount, offset: 0x8, size: 0x4, def value: None
  int32_t currentPlayerCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PublicServerInfo, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PublicServerInfo, code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PublicServerInfo, currentPlayerCount) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PublicServerInfo, "", "PublicServerInfo");
