#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\UniversalCameraDataExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalCameraDataExtension)
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalCameraDataExtension;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalCameraDataExtension*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalCameraDataExtension*, "UnityEngine.Rendering.Universal", "UniversalCameraDataExtension");
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalCameraDataExtension
class CORDL_TYPE UniversalCameraDataExtension : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetGPUProjectionMatrixRenderGraph, addr 0x683ce58, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetGPUProjectionMatrixRenderGraph(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, int32_t viewIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalCameraDataExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalCameraDataExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalCameraDataExtension(UniversalCameraDataExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalCameraDataExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalCameraDataExtension(UniversalCameraDataExtension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12573 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalCameraDataExtension) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
