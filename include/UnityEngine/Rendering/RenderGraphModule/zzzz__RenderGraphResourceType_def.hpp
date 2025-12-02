#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphResourceType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphResourceType)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphResourceType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourceType
struct CORDL_TYPE RenderGraphResourceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderGraphResourceType_Unwrapped
  enum struct __RenderGraphResourceType_Unwrapped : int32_t {
    __E_Texture = static_cast<int32_t>(0x0),
    __E_Buffer = static_cast<int32_t>(0x1),
    __E_AccelerationStructure = static_cast<int32_t>(0x2),
    __E_Count = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderGraphResourceType_Unwrapped() const noexcept {
    return static_cast<__RenderGraphResourceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResourceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderGraphResourceType(int32_t value__) noexcept;

  /// @brief Field AccelerationStructure value: I32(2)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType const AccelerationStructure;

  /// @brief Field Buffer value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType const Buffer;

  /// @brief Field Count value: I32(3)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType const Count;

  /// @brief Field Texture value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType const Texture;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12428 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphResourceType");
