#pragma once
// IWYU pragma private; include "UnityEngine/XR/ConnectionChangeType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionChangeType)
// Forward declare root types
namespace UnityEngine::XR {
struct ConnectionChangeType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::ConnectionChangeType);
// Type: UnityEngine.XR::ConnectionChangeType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::UnityEngine.XR::ConnectionChangeType
struct CORDL_TYPE ConnectionChangeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __ConnectionChangeType_Unwrapped
  enum struct __ConnectionChangeType_Unwrapped : uint32_t {
    __E_Connected = static_cast<uint32_t>(0x20100u),
    __E_Disconnected = static_cast<uint32_t>(0x1000201u),
    __E_ConfigChange = static_cast<uint32_t>(0x2010002u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConnectionChangeType_Unwrapped() const noexcept {
    return static_cast<__ConnectionChangeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionChangeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr ConnectionChangeType(uint32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief Field ConfigChange value: static_cast<uint32_t>(0x2010002u)
  static ::UnityEngine::XR::ConnectionChangeType const ConfigChange;

  /// @brief Field Connected value: static_cast<uint32_t>(0x20100u)
  static ::UnityEngine::XR::ConnectionChangeType const Connected;

  /// @brief Field Disconnected value: static_cast<uint32_t>(0x1000201u)
  static ::UnityEngine::XR::ConnectionChangeType const Disconnected;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18177 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::ConnectionChangeType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::ConnectionChangeType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::ConnectionChangeType, "UnityEngine.XR", "ConnectionChangeType");
