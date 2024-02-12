#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbeClearFlags)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ReflectionProbeClearFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ReflectionProbeClearFlags);
// Type: UnityEngine.Rendering::ReflectionProbeClearFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9099))
// CS Name: ::UnityEngine.Rendering::ReflectionProbeClearFlags
struct CORDL_TYPE ReflectionProbeClearFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ReflectionProbeClearFlags_Unwrapped
  enum struct __ReflectionProbeClearFlags_Unwrapped : int32_t {
    __E_Skybox = static_cast<int32_t>(0x1),
    __E_SolidColor = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ReflectionProbeClearFlags_Unwrapped() const noexcept {
    return static_cast<__ReflectionProbeClearFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReflectionProbeClearFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbeClearFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Skybox value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::ReflectionProbeClearFlags const Skybox;

  /// @brief Field SolidColor value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::ReflectionProbeClearFlags const SolidColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ReflectionProbeClearFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ReflectionProbeClearFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ReflectionProbeClearFlags, "UnityEngine.Rendering", "ReflectionProbeClearFlags");
