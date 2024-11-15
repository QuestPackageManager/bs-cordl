#pragma once
// IWYU pragma private; include "GlobalNamespace/PublicServerInfo.hpp"
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
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PublicServerInfo
struct CORDL_TYPE PublicServerInfo {
public:
  // Declarations
  /// @brief Method Deserialize, addr 0x22aefdc, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PublicServerInfo Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Serialize, addr 0x22aef9c, size 0x40, virtual false, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method .ctor, addr 0x22aef90, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW code, int32_t currentPlayerCount);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PublicServerInfo();

  // Ctor Parameters [CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "currentPlayerCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PublicServerInfo(::StringW code, int32_t currentPlayerCount) noexcept;

  /// @brief Field code, offset: 0x0, size: 0x8, def value: None
  ::StringW code;

  /// @brief Field currentPlayerCount, offset: 0x8, size: 0x4, def value: None
  int32_t currentPlayerCount;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14905 };

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
