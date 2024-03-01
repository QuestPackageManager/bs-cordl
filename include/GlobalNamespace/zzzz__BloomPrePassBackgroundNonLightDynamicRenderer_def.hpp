#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassBackgroundNonLightDynamicRenderer)
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightDynamicRenderer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer);
// Type: ::BloomPrePassBackgroundNonLightDynamicRenderer
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassBackgroundNonLightDynamicRenderer*
class CORDL_TYPE BloomPrePassBackgroundNonLightDynamicRenderer : public ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
public:
  // Declarations
  /// @brief Field _renderer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__renderer, put = __cordl_internal_set__renderer))::UnityW<::UnityEngine::Renderer> _renderer;

  __declspec(property(get = get_renderer))::UnityW<::UnityEngine::Renderer> renderer;

  static inline ::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer* New_ctor();

  /// @brief Method SetRenderer, addr 0x22677d4, size 0x8, virtual false, abstract: false, final false
  inline void SetRenderer(::UnityEngine::Renderer* renderer);

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer();

  constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value);

  /// @brief Method .ctor, addr 0x22677dc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_renderer, addr 0x22677cc, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Renderer> get_renderer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundNonLightDynamicRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightDynamicRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundNonLightDynamicRenderer(BloomPrePassBackgroundNonLightDynamicRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightDynamicRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundNonLightDynamicRenderer(BloomPrePassBackgroundNonLightDynamicRenderer const&) = delete;

  /// @brief Field _renderer, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ____renderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer, ____renderer) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*, "", "BloomPrePassBackgroundNonLightDynamicRenderer");
