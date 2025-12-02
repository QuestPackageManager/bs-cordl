#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenLODGroupDataCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(GPUDrivenLODGroupDataCallback)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct GPUDrivenLODGroupData;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUDrivenLODGroupDataCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUDrivenLODGroupDataCallback
class CORDL_TYPE GPUDrivenLODGroupDataCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x68f7618, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupData> lodGroupData);

  static inline ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x68f759c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenLODGroupDataCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUDrivenLODGroupDataCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUDrivenLODGroupDataCallback(GPUDrivenLODGroupDataCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUDrivenLODGroupDataCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUDrivenLODGroupDataCallback(GPUDrivenLODGroupDataCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10847 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*, "UnityEngine.Rendering", "GPUDrivenLODGroupDataCallback");
