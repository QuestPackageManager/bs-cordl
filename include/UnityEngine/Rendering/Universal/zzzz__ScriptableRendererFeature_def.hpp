#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRendererFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ScriptableRendererFeature)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingLayerUtils_Event;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingLayerUtils_MaskSize;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererFeature;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRendererFeature);
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRendererFeature
class CORDL_TYPE ScriptableRendererFeature : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_isActive)) bool isActive;

  /// @brief Field m_Active, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Active, put = __cordl_internal_set_m_Active)) bool m_Active;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddRenderPasses, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Create();

  /// @brief Method Dispose, addr 0x669a15c, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x669a1cc, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::Rendering::Universal::ScriptableRendererFeature* New_ctor();

  /// @brief Method OnCameraPreCull, addr 0x6699f64, size 0x4, virtual true, abstract: false, final false
  inline void OnCameraPreCull(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method OnEnable, addr 0x6699f6c, size 0xe8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x669a054, size 0xe8, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RequireRenderingLayers, addr 0x669a144, size 0x10, virtual true, abstract: false, final false
  inline bool RequireRenderingLayers(bool isDeferred, bool needsGBufferAccurateNormals, ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> atEvent,
                                     ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize> maskSize);

  /// @brief Method SetActive, addr 0x669a154, size 0x8, virtual false, abstract: false, final false
  inline void SetActive(bool active);

  /// @brief Method SetupRenderPasses, addr 0x6699f68, size 0x4, virtual true, abstract: false, final false
  inline void SetupRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SupportsNativeRenderPass, addr 0x669a13c, size 0x8, virtual true, abstract: false, final false
  inline bool SupportsNativeRenderPass();

  constexpr bool const& __cordl_internal_get_m_Active() const;

  constexpr bool& __cordl_internal_get_m_Active();

  constexpr void __cordl_internal_set_m_Active(bool value);

  /// @brief Method .ctor, addr 0x669a1d0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isActive, addr 0x6699f5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isActive();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRendererFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRendererFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRendererFeature(ScriptableRendererFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRendererFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRendererFeature(ScriptableRendererFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12917 };

  /// @brief Field m_Active, offset: 0x18, size: 0x1, def value: None
  bool ___m_Active;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererFeature, ___m_Active) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRendererFeature, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRendererFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRendererFeature*, "UnityEngine.Rendering.Universal", "ScriptableRendererFeature");
