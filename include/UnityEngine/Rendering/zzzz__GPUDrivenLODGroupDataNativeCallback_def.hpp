#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenLODGroupDataNativeCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(GPUDrivenLODGroupDataNativeCallback)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class GPUDrivenLODGroupDataCallback;
}
namespace UnityEngine::Rendering {
struct GPUDrivenLODGroupDataNative;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUDrivenLODGroupDataNativeCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUDrivenLODGroupDataNativeCallback
class CORDL_TYPE GPUDrivenLODGroupDataNativeCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x68f76ac, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative> lodGroupDataNative, ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* callback);

  static inline ::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x68f762c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenLODGroupDataNativeCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUDrivenLODGroupDataNativeCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUDrivenLODGroupDataNativeCallback(GPUDrivenLODGroupDataNativeCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUDrivenLODGroupDataNativeCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUDrivenLODGroupDataNativeCallback(GPUDrivenLODGroupDataNativeCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10848 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*, "UnityEngine.Rendering", "GPUDrivenLODGroupDataNativeCallback");
