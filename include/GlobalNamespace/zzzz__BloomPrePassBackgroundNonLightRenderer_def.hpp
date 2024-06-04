#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundNonLightRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassBackgroundNonLightRenderer)
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightRenderer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer);
// Type: ::BloomPrePassBackgroundNonLightRenderer
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassBackgroundNonLightRenderer*
class CORDL_TYPE BloomPrePassBackgroundNonLightRenderer : public ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
public:
  // Declarations
  /// @brief Field _cachedTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedTransform, put = __cordl_internal_set__cachedTransform))::UnityW<::UnityEngine::Transform> _cachedTransform;

  /// @brief Field _isPartOfInstancedRendering, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__isPartOfInstancedRendering, put = __cordl_internal_set__isPartOfInstancedRendering)) bool _isPartOfInstancedRendering;

  /// @brief Field _meshFilter, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__meshFilter, put = __cordl_internal_set__meshFilter))::UnityW<::UnityEngine::MeshFilter> _meshFilter;

  /// @brief Field _renderer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__renderer, put = __cordl_internal_set__renderer))::UnityW<::UnityEngine::Renderer> _renderer;

  __declspec(property(get = get_cachedTransform))::UnityW<::UnityEngine::Transform> cachedTransform;

  __declspec(property(put = set_isPartOfInstancedRendering)) bool isPartOfInstancedRendering;

  __declspec(property(get = get_meshFilter))::UnityW<::UnityEngine::MeshFilter> meshFilter;

  __declspec(property(get = get_renderer))::UnityW<::UnityEngine::Renderer> renderer;

  /// @brief Method Awake, addr 0x25022f0, size 0x2c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method InitIfNeeded, addr 0x2502370, size 0xc8, virtual true, abstract: false, final false
  inline void InitIfNeeded();

  static inline ::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer* New_ctor();

  /// @brief Method OnEnable, addr 0x2502328, size 0x10, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x250233c, size 0x34, virtual true, abstract: false, final false
  inline void OnValidate();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cachedTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cachedTransform();

  constexpr bool const& __cordl_internal_get__isPartOfInstancedRendering() const;

  constexpr bool& __cordl_internal_get__isPartOfInstancedRendering();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer();

  constexpr void __cordl_internal_set__cachedTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__isPartOfInstancedRendering(bool value);

  constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value);

  /// @brief Method .ctor, addr 0x250254c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cachedTransform, addr 0x25022e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_cachedTransform();

  /// @brief Method get_meshFilter, addr 0x25022e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::MeshFilter> get_meshFilter();

  /// @brief Method get_renderer, addr 0x25022d8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Renderer> get_renderer();

  /// @brief Method set_isPartOfInstancedRendering, addr 0x2501768, size 0x30, virtual false, abstract: false, final false
  inline void set_isPartOfInstancedRendering(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundNonLightRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundNonLightRenderer(BloomPrePassBackgroundNonLightRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundNonLightRenderer(BloomPrePassBackgroundNonLightRenderer const&) = delete;

  /// @brief Field _renderer, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ____renderer;

  /// @brief Field _meshFilter, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____meshFilter;

  /// @brief Field _isPartOfInstancedRendering, offset: 0x58, size: 0x1, def value: None
  bool ____isPartOfInstancedRendering;

  /// @brief Field _cachedTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____cachedTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer, ____renderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer, ____meshFilter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer, ____isPartOfInstancedRendering) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer, ____cachedTransform) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*, "", "BloomPrePassBackgroundNonLightRenderer");
