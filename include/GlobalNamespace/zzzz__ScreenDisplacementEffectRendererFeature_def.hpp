#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenDisplacementEffectRendererFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScreenDisplacementEffectRendererFeature)
namespace GlobalNamespace {
class ScreenDisplacementEffectDrawPass;
}
namespace GlobalNamespace {
class ScreenDisplacementEffectGrabPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class ScreenDisplacementEffectRendererFeature;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScreenDisplacementEffectRendererFeature);
// Dependencies UnityEngine.LayerMask, UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenDisplacementEffectRendererFeature
class CORDL_TYPE ScreenDisplacementEffectRendererFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  /// @brief Field _drawPass, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__drawPass, put = __cordl_internal_set__drawPass)) ::GlobalNamespace::ScreenDisplacementEffectDrawPass* _drawPass;

  /// @brief Field _grabPass, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__grabPass, put = __cordl_internal_set__grabPass)) ::GlobalNamespace::ScreenDisplacementEffectGrabPass* _grabPass;

  /// @brief Field effectLayerMask, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_effectLayerMask, put = __cordl_internal_set_effectLayerMask)) ::UnityEngine::LayerMask effectLayerMask;

  /// @brief Field enabled, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_enabled, put = setStaticF_enabled)) bool enabled;

  /// @brief Method AddRenderPasses, addr 0x5d313d8, size 0x94, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x5d3104c, size 0x144, virtual true, abstract: false, final false
  inline void Create();

  /// @brief Method DestroySafe, addr 0x5d3146c, size 0x8c, virtual false, abstract: false, final false
  static inline void DestroySafe(::UnityEngine::Object* obj);

  /// @brief Method Dispose, addr 0x5d3139c, size 0x30, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::GlobalNamespace::ScreenDisplacementEffectRendererFeature* New_ctor();

  constexpr ::GlobalNamespace::ScreenDisplacementEffectDrawPass* const& __cordl_internal_get__drawPass() const;

  constexpr ::GlobalNamespace::ScreenDisplacementEffectDrawPass*& __cordl_internal_get__drawPass();

  constexpr ::GlobalNamespace::ScreenDisplacementEffectGrabPass* const& __cordl_internal_get__grabPass() const;

  constexpr ::GlobalNamespace::ScreenDisplacementEffectGrabPass*& __cordl_internal_get__grabPass();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_effectLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_effectLayerMask();

  constexpr void __cordl_internal_set__drawPass(::GlobalNamespace::ScreenDisplacementEffectDrawPass* value);

  constexpr void __cordl_internal_set__grabPass(::GlobalNamespace::ScreenDisplacementEffectGrabPass* value);

  constexpr void __cordl_internal_set_effectLayerMask(::UnityEngine::LayerMask value);

  /// @brief Method .ctor, addr 0x5d314f8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF_enabled();

  static inline void setStaticF_enabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenDisplacementEffectRendererFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectRendererFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenDisplacementEffectRendererFeature(ScreenDisplacementEffectRendererFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectRendererFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenDisplacementEffectRendererFeature(ScreenDisplacementEffectRendererFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20780 };

  /// @brief Field kGrabTextureName offset 0xffffffff size 0x8
  static constexpr ::ConstString kGrabTextureName{ u"_ScreenDisplacementGrabTexture" };

  /// @brief Field effectLayerMask, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___effectLayerMask;

  /// @brief Field _grabPass, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ScreenDisplacementEffectGrabPass* ____grabPass;

  /// @brief Field _drawPass, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ScreenDisplacementEffectDrawPass* ____drawPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenDisplacementEffectRendererFeature, ___effectLayerMask) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenDisplacementEffectRendererFeature, ____grabPass) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenDisplacementEffectRendererFeature, ____drawPass) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenDisplacementEffectRendererFeature, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScreenDisplacementEffectRendererFeature);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenDisplacementEffectRendererFeature*, "", "ScreenDisplacementEffectRendererFeature");
