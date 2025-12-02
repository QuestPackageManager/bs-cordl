#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenRendererDataCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(GPUDrivenRendererDataCallback)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererGroupData;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUDrivenRendererDataCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GPUDrivenRendererDataCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUDrivenRendererDataCallback
class CORDL_TYPE GPUDrivenRendererDataCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x68f7740, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                     ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>* materials);

  static inline ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x68f76c0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenRendererDataCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUDrivenRendererDataCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUDrivenRendererDataCallback(GPUDrivenRendererDataCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUDrivenRendererDataCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUDrivenRendererDataCallback(GPUDrivenRendererDataCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10849 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUDrivenRendererDataCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GPUDrivenRendererDataCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUDrivenRendererDataCallback*, "UnityEngine.Rendering", "GPUDrivenRendererDataCallback");
