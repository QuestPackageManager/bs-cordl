#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchBufferTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchBufferTarget)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchBufferTarget;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchBufferTarget);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BatchBufferTarget
struct CORDL_TYPE BatchBufferTarget {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BatchBufferTarget_Unwrapped
  enum struct __BatchBufferTarget_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_UnsupportedByUnderlyingGraphicsApi = static_cast<int32_t>(0xffffffff),
    __E_RawBuffer = static_cast<int32_t>(0x1),
    __E_ConstantBuffer = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BatchBufferTarget_Unwrapped() const noexcept {
    return static_cast<__BatchBufferTarget_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchBufferTarget();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BatchBufferTarget(int32_t value__) noexcept;

  /// @brief Field ConstantBuffer value: I32(2)
  static ::UnityEngine::Rendering::BatchBufferTarget const ConstantBuffer;

  /// @brief Field RawBuffer value: I32(1)
  static ::UnityEngine::Rendering::BatchBufferTarget const RawBuffer;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::Rendering::BatchBufferTarget const Unknown;

  /// @brief Field UnsupportedByUnderlyingGraphicsApi value: I32(-1)
  static ::UnityEngine::Rendering::BatchBufferTarget const UnsupportedByUnderlyingGraphicsApi;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10832 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchBufferTarget, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchBufferTarget, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchBufferTarget, "UnityEngine.Rendering", "BatchBufferTarget");
