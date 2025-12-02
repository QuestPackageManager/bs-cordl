#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicResolutionHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DynamicResScalePolicyType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicResolutionHandler)
namespace UnityEngine::Rendering {
class PerformDynamicRes;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct DynamicResolutionHandler_UpsamplerScheduleType;
}
namespace UnityEngine::Rendering {
struct DynamicResolutionHandler_ScalerContainer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType);
MARK_VAL_T(::UnityEngine::Rendering::DynamicResolutionHandler_ScalerContainer);
// Dependencies UnityEngine.Rendering.DynamicResScalePolicyType
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DynamicResolutionHandler/ScalerContainer
struct CORDL_TYPE DynamicResolutionHandler_ScalerContainer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicResolutionHandler_ScalerContainer();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::Rendering::DynamicResScalePolicyType", modifiers: "", def_value: None }, CppParam { name: "method", ty:
  // "::UnityEngine::Rendering::PerformDynamicRes*", modifiers: "", def_value: None }]
  constexpr DynamicResolutionHandler_ScalerContainer(::UnityEngine::Rendering::DynamicResScalePolicyType type, ::UnityEngine::Rendering::PerformDynamicRes* method) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11881 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::DynamicResScalePolicyType type;

  /// @brief Field method, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::PerformDynamicRes* method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler_ScalerContainer, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler_ScalerContainer, method) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DynamicResolutionHandler_ScalerContainer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DynamicResolutionHandler/UpsamplerScheduleType
struct CORDL_TYPE DynamicResolutionHandler_UpsamplerScheduleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DynamicResolutionHandler_UpsamplerScheduleType_Unwrapped
  enum struct __DynamicResolutionHandler_UpsamplerScheduleType_Unwrapped : int32_t {
    __E_BeforePost = static_cast<int32_t>(0x0),
    __E_AfterDepthOfField = static_cast<int32_t>(0x1),
    __E_AfterPost = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DynamicResolutionHandler_UpsamplerScheduleType_Unwrapped() const noexcept {
    return static_cast<__DynamicResolutionHandler_UpsamplerScheduleType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicResolutionHandler_UpsamplerScheduleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DynamicResolutionHandler_UpsamplerScheduleType(int32_t value__) noexcept;

  /// @brief Field AfterDepthOfField value: I32(1)
  static ::UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType const AfterDepthOfField;

  /// @brief Field AfterPost value: I32(2)
  static ::UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType const AfterPost;

  /// @brief Field BeforePost value: I32(0)
  static ::UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType const BeforePost;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11882 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DynamicResolutionHandler_UpsamplerScheduleType, "UnityEngine.Rendering", "DynamicResolutionHandler/UpsamplerScheduleType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DynamicResolutionHandler_ScalerContainer, "UnityEngine.Rendering", "DynamicResolutionHandler/ScalerContainer");
