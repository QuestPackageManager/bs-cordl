#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/AccessFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessFlags)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct AccessFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::AccessFlags);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.AccessFlags
struct CORDL_TYPE AccessFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AccessFlags_Unwrapped
  enum struct __AccessFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Read = static_cast<int32_t>(0x1),
    __E_Write = static_cast<int32_t>(0x2),
    __E_Discard = static_cast<int32_t>(0x4),
    __E_WriteAll = static_cast<int32_t>(0x6),
    __E_ReadWrite = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AccessFlags_Unwrapped() const noexcept {
    return static_cast<__AccessFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AccessFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AccessFlags(int32_t value__) noexcept;

  /// @brief Field Discard value: I32(4)
  static ::UnityEngine::Rendering::RenderGraphModule::AccessFlags const Discard;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::AccessFlags const None;

  /// @brief Field Read value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphModule::AccessFlags const Read;

  /// @brief Field ReadWrite value: I32(3)
  static ::UnityEngine::Rendering::RenderGraphModule::AccessFlags const ReadWrite;

  /// @brief Field Write value: I32(2)
  static ::UnityEngine::Rendering::RenderGraphModule::AccessFlags const Write;

  /// @brief Field WriteAll value: I32(6)
  static ::UnityEngine::Rendering::RenderGraphModule::AccessFlags const WriteAll;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12383 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::AccessFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::AccessFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::AccessFlags, "UnityEngine.Rendering.RenderGraphModule", "AccessFlags");
