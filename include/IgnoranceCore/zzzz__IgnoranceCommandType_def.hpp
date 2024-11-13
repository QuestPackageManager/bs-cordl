#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceCommandType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceCommandType)
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceCommandType;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceCommandType);
// Type: IgnoranceCore::IgnoranceCommandType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace IgnoranceCore {
// Is value type: true
// CS Name: ::IgnoranceCore::IgnoranceCommandType
struct CORDL_TYPE IgnoranceCommandType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IgnoranceCommandType_Unwrapped
  enum struct __IgnoranceCommandType_Unwrapped : int32_t {
    __E_ClientWantsToStop = static_cast<int32_t>(0x0),
    __E_ClientStatusRequest = static_cast<int32_t>(0x1),
    __E_ServerKickPeer = static_cast<int32_t>(0x2),
    __E_ServerStatusRequest = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IgnoranceCommandType_Unwrapped() const noexcept {
    return static_cast<__IgnoranceCommandType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceCommandType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IgnoranceCommandType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ClientStatusRequest value: static_cast<int32_t>(0x1)
  static ::IgnoranceCore::IgnoranceCommandType const ClientStatusRequest;

  /// @brief Field ClientWantsToStop value: static_cast<int32_t>(0x0)
  static ::IgnoranceCore::IgnoranceCommandType const ClientWantsToStop;

  /// @brief Field ServerKickPeer value: static_cast<int32_t>(0x2)
  static ::IgnoranceCore::IgnoranceCommandType const ServerKickPeer;

  /// @brief Field ServerStatusRequest value: static_cast<int32_t>(0x3)
  static ::IgnoranceCore::IgnoranceCommandType const ServerStatusRequest;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17718 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceCommandType, 0x4>, "Size mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceCommandType, value__) == 0x0, "Offset mismatch!");

} // namespace IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceCommandType, "IgnoranceCore", "IgnoranceCommandType");
