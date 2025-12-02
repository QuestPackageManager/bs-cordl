#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/SerializedCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__SerializedCommandType_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializedCommand)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct SerializedCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::SerializedCommand);
// Dependencies System.IntPtr, UnityEngine.UIElements.UIR.SerializedCommandType, UnityEngine.Vector4
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.SerializedCommand
struct CORDL_TYPE SerializedCommand {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializedCommand();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::UIElements::UIR::SerializedCommandType", modifiers: "", def_value: None }, CppParam { name: "vertexBuffer", ty: "::System::IntPtr",
  // modifiers: "", def_value: None }, CppParam { name: "indexBuffer", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "firstRange", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "rangeCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureName", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "gpuDataOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "gpuData0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "gpuData1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr SerializedCommand(::UnityEngine::UIElements::UIR::SerializedCommandType type, ::System::IntPtr vertexBuffer, ::System::IntPtr indexBuffer, int32_t firstRange, int32_t rangeCount,
                              int32_t textureName, ::UnityW<::UnityEngine::Texture> texture, int32_t gpuDataOffset, ::UnityEngine::Vector4 gpuData0, ::UnityEngine::Vector4 gpuData1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5281 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::SerializedCommandType type;

  /// @brief Field vertexBuffer, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr vertexBuffer;

  /// @brief Field indexBuffer, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr indexBuffer;

  /// @brief Field firstRange, offset: 0x18, size: 0x4, def value: None
  int32_t firstRange;

  /// @brief Field rangeCount, offset: 0x1c, size: 0x4, def value: None
  int32_t rangeCount;

  /// @brief Field textureName, offset: 0x20, size: 0x4, def value: None
  int32_t textureName;

  /// @brief Field texture, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> texture;

  /// @brief Field gpuDataOffset, offset: 0x30, size: 0x4, def value: None
  int32_t gpuDataOffset;

  /// @brief Field gpuData0, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Vector4 gpuData0;

  /// @brief Field gpuData1, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Vector4 gpuData1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::SerializedCommand, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::SerializedCommand, vertexBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::SerializedCommand, indexBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::SerializedCommand, firstRange) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::SerializedCommand, rangeCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::SerializedCommand, textureName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::SerializedCommand, texture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::SerializedCommand, gpuDataOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::SerializedCommand, gpuData0) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::SerializedCommand, gpuData1) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::SerializedCommand, 0x58>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::SerializedCommand, "UnityEngine.UIElements.UIR", "SerializedCommand");
