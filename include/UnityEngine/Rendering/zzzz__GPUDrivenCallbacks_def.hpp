#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenCallbacks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GPUDrivenCallbacks)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
class GPUDrivenLODGroupDataCallback;
}
namespace UnityEngine::Rendering {
class GPUDrivenLODGroupDataNativeCallback;
}
namespace UnityEngine::Rendering {
struct GPUDrivenLODGroupDataNative;
}
namespace UnityEngine::Rendering {
class GPUDrivenRendererDataCallback;
}
namespace UnityEngine::Rendering {
class GPUDrivenRendererDataNativeCallback;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererGroupDataNative;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUDrivenCallbacks;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GPUDrivenCallbacks);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUDrivenCallbacks
class CORDL_TYPE GPUDrivenCallbacks : public ::System::Object {
public:
  // Declarations
  /// @brief Method InvokeGPUDrivenLODGroupDataNativeCallback, addr 0x68f77e8, size 0x20, virtual false, abstract: false, final false
  static inline void InvokeGPUDrivenLODGroupDataNativeCallback(::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback* callback,
                                                               ::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative> lodGroupDataNative,
                                                               ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* target);

  /// @brief Method InvokeGPUDrivenRendererDataNativeCallback, addr 0x68f7808, size 0x20, virtual false, abstract: false, final false
  static inline void InvokeGPUDrivenRendererDataNativeCallback(::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback* callback,
                                                               ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative> rendererDataNative,
                                                               ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                               ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* materials,
                                                               ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* target);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenCallbacks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUDrivenCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUDrivenCallbacks(GPUDrivenCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUDrivenCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUDrivenCallbacks(GPUDrivenCallbacks const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10851 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUDrivenCallbacks, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GPUDrivenCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUDrivenCallbacks*, "UnityEngine.Rendering", "GPUDrivenCallbacks");
