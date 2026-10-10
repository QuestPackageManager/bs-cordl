#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRendererFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstddef>
#include <cstdint>
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
struct ScriptableRendererFeature_IntermediateTextureUsage;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ScriptableRendererFeature_IntermediateTextureUsage;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererFeature;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRendererFeature*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage, "UnityEngine.Rendering.Universal", "ScriptableRendererFeature/IntermediateTextureUsage");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRendererFeature*, "UnityEngine.Rendering.Universal", "ScriptableRendererFeature");
// [Obsolete("This enum is not used. #from(6000.3)", false)]
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScriptableRendererFeature/IntermediateTextureUsage
struct CORDL_TYPE ScriptableRendererFeature_IntermediateTextureUsage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScriptableRendererFeature_IntermediateTextureUsage_Unwrapped
  enum struct __ScriptableRendererFeature_IntermediateTextureUsage_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Required = static_cast<int32_t>(0x1),
    __E_NotRequired = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScriptableRendererFeature_IntermediateTextureUsage_Unwrapped() const noexcept {
    return static_cast<__ScriptableRendererFeature_IntermediateTextureUsage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRendererFeature_IntermediateTextureUsage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ScriptableRendererFeature_IntermediateTextureUsage(int32_t value__) noexcept;

  /// @brief Field NotRequired value: I32(2)
  static ::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage const NotRequired;

  /// @brief Field Required value: I32(1)
  static ::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage const Required;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12969 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [ExcludeFromPreset]
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRendererFeature
class CORDL_TYPE ScriptableRendererFeature : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using IntermediateTextureUsage = ::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage;

  __declspec(property(get = get_isActive)) bool isActive;

  /// @brief Field m_Active, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Active, put = __cordl_internal_set_m_Active)) bool m_Active;

  /// @brief [Obsolete("This property is not used. #from(6000.3)", false)]
  __declspec(property(get = get_useIntermediateTextures)) ::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage useIntermediateTextures;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddRenderPasses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Create();

  /// @brief Method Dispose, addr 0x6ca72a0, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6ca7310, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::Rendering::Universal::ScriptableRendererFeature* New_ctor();

  /// @brief Method OnCameraPreCull, addr 0x6ca7134, size 0x4, virtual true, abstract: false, final false
  inline void OnCameraPreCull(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::CameraData const> cameraData);

  /// @brief Method OnEnable, addr 0x6ca7138, size 0xa8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x6ca71e0, size 0xa8, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RequireRenderingLayers, addr 0x6ca7288, size 0x10, virtual true, abstract: false, final false
  inline bool RequireRenderingLayers(bool isDeferred, bool needsGBufferAccurateNormals, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> atEvent,
                                     ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize> maskSize);

  /// @brief Method SetActive, addr 0x6ca7298, size 0x8, virtual false, abstract: false, final false
  inline void SetActive(bool active);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method SetupRenderPasses, addr 0x6ca7120, size 0x4, virtual true, abstract: false, final false
  inline void SetupRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::RenderingData const> renderingData);

  constexpr bool const& __cordl_internal_get_m_Active() const;

  constexpr bool& __cordl_internal_get_m_Active();

  constexpr void __cordl_internal_set_m_Active(bool value);

  /// @brief Method .ctor, addr 0x6ca70a4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isActive, addr 0x6ca7124, size 0x8, virtual false, abstract: false, final false
  inline bool get_isActive();

  /// @brief Method get_useIntermediateTextures, addr 0x6ca712c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRendererFeature_IntermediateTextureUsage get_useIntermediateTextures();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRendererFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRendererFeature", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRendererFeature(ScriptableRendererFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRendererFeature", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRendererFeature(ScriptableRendererFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12970 };

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_Active, offset: 0x18, size: 0x1, def value: None
  bool ___m_Active;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererFeature, ___m_Active) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRendererFeature) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
