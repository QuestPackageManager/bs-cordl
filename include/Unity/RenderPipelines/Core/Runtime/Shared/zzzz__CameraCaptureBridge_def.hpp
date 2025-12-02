#pragma once
// IWYU pragma private; include "Unity/RenderPipelines/Core/Runtime/Shared/CameraCaptureBridge.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CameraCaptureBridge)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Unity::RenderPipelines::Core::Runtime::Shared {
class CameraCaptureBridge;
}
// Write type traits
MARK_REF_PTR_T(::Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge);
// Dependencies System.Object
namespace Unity::RenderPipelines::Core::Runtime::Shared {
// Is value type: false
// CS Name: Unity.RenderPipelines.Core.Runtime.Shared.CameraCaptureBridge
class CORDL_TYPE CameraCaptureBridge : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCachedCaptureActionsEnumerator, addr 0x653bfc4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*
  GetCachedCaptureActionsEnumerator(::UnityEngine::Camera* camera);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraCaptureBridge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraCaptureBridge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraCaptureBridge(CameraCaptureBridge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraCaptureBridge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraCaptureBridge(CameraCaptureBridge const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23355 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge, 0x10>, "Size mismatch!");

} // namespace Unity::RenderPipelines::Core::Runtime::Shared
NEED_NO_BOX(::Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge);
DEFINE_IL2CPP_ARG_TYPE(::Unity::RenderPipelines::Core::Runtime::Shared::CameraCaptureBridge*, "Unity.RenderPipelines.Core.Runtime.Shared", "CameraCaptureBridge");
