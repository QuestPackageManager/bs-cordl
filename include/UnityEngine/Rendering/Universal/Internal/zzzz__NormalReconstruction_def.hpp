#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/NormalReconstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NormalReconstruction)
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class NormalReconstruction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::NormalReconstruction);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.NormalReconstruction
class CORDL_TYPE NormalReconstruction : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_NormalReconstructionMatrix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_NormalReconstructionMatrix, put = setStaticF_s_NormalReconstructionMatrix)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>
      s_NormalReconstructionMatrix;

  /// @brief Field s_NormalReconstructionMatrixID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_NormalReconstructionMatrixID, put = setStaticF_s_NormalReconstructionMatrixID)) int32_t s_NormalReconstructionMatrixID;

  /// @brief Method SetupProperties, addr 0x673ff0c, size 0xa4, virtual false, abstract: false, final false
  static inline void SetupProperties(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method SetupProperties, addr 0x67402b8, size 0xa8, virtual false, abstract: false, final false
  static inline void SetupProperties(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method SetupProperties, addr 0x673ffb0, size 0x90, virtual false, abstract: false, final false
  static inline void SetupProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method SetupProperties, addr 0x6740040, size 0x278, virtual false, abstract: false, final false
  static inline void SetupProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData);

  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> getStaticF_s_NormalReconstructionMatrix();

  static inline int32_t getStaticF_s_NormalReconstructionMatrixID();

  static inline void setStaticF_s_NormalReconstructionMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  static inline void setStaticF_s_NormalReconstructionMatrixID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NormalReconstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NormalReconstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NormalReconstruction(NormalReconstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NormalReconstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NormalReconstruction(NormalReconstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13042 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::NormalReconstruction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*, "UnityEngine.Rendering.Universal.Internal", "NormalReconstruction");
