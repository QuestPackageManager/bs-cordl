#pragma once
// IWYU pragma private; include "Oculus/Platform/NetSyncVoipMicSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetSyncVoipMicSource)
// Forward declare root types
namespace Oculus::Platform {
struct NetSyncVoipMicSource;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::NetSyncVoipMicSource);
// Type: Oculus.Platform::NetSyncVoipMicSource
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::Oculus.Platform::NetSyncVoipMicSource
struct CORDL_TYPE NetSyncVoipMicSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NetSyncVoipMicSource_Unwrapped
  enum struct __NetSyncVoipMicSource_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_None = static_cast<int32_t>(0x1),
    __E_Internal = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NetSyncVoipMicSource_Unwrapped() const noexcept {
    return static_cast<__NetSyncVoipMicSource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSyncVoipMicSource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NetSyncVoipMicSource(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Internal value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::NetSyncVoipMicSource const Internal;

  /// @brief Field None value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::NetSyncVoipMicSource const None;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::NetSyncVoipMicSource const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::NetSyncVoipMicSource, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::NetSyncVoipMicSource, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::NetSyncVoipMicSource, "Oculus.Platform", "NetSyncVoipMicSource");
