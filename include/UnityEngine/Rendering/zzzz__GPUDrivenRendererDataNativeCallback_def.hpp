#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenRendererDataNativeCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(GPUDrivenRendererDataNativeCallback)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class GPUDrivenRendererDataCallback;
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
class GPUDrivenRendererDataNativeCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUDrivenRendererDataNativeCallback
class CORDL_TYPE GPUDrivenRendererDataNativeCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6960658, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative> rendererDataNative, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                     ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* materials, ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* callback);

  static inline ::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x69605d8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenRendererDataNativeCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUDrivenRendererDataNativeCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUDrivenRendererDataNativeCallback(GPUDrivenRendererDataNativeCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUDrivenRendererDataNativeCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUDrivenRendererDataNativeCallback(GPUDrivenRendererDataNativeCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10854 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*, "UnityEngine.Rendering", "GPUDrivenRendererDataNativeCallback");
