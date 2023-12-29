#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassBackgroundNonLightRenderer)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class MeshFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightRenderer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer);
// Type: ::BloomPrePassBackgroundNonLightRenderer
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14683))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14682))
// CS Name: ::BloomPrePassBackgroundNonLightRenderer*
class CORDL_TYPE BloomPrePassBackgroundNonLightRenderer : public ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
public:
  // Declarations
  /// @brief Field _renderer, offset 0x38, size 0x8
  __declspec(property(get = __get__renderer, put = __set__renderer))::UnityEngine::Renderer* _renderer;

  /// @brief Field _meshFilter, offset 0x40, size 0x8
  __declspec(property(get = __get__meshFilter, put = __set__meshFilter))::UnityEngine::MeshFilter* _meshFilter;

  /// @brief Field _isPartOfInstancedRendering, offset 0x48, size 0x1
  __declspec(property(get = __get__isPartOfInstancedRendering, put = __set__isPartOfInstancedRendering)) bool _isPartOfInstancedRendering;

  /// @brief Field _cachedTransform, offset 0x50, size 0x8
  __declspec(property(get = __get__cachedTransform, put = __set__cachedTransform))::UnityEngine::Transform* _cachedTransform;

  __declspec(property(get = get_renderer))::UnityEngine::Renderer* renderer;

  __declspec(property(get = get_meshFilter))::UnityEngine::MeshFilter* meshFilter;

  __declspec(property(get = get_cachedTransform))::UnityEngine::Transform* cachedTransform;

  __declspec(property(put = set_isPartOfInstancedRendering)) bool isPartOfInstancedRendering;

  constexpr ::UnityEngine::Renderer*& __get__renderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& __get__renderer() const;

  constexpr void __set__renderer(::UnityEngine::Renderer* value);

  constexpr ::UnityEngine::MeshFilter*& __get__meshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__meshFilter() const;

  constexpr void __set__meshFilter(::UnityEngine::MeshFilter* value);

  constexpr bool& __get__isPartOfInstancedRendering();

  constexpr bool const& __get__isPartOfInstancedRendering() const;

  constexpr void __set__isPartOfInstancedRendering(bool value);

  constexpr ::UnityEngine::Transform*& __get__cachedTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__cachedTransform() const;

  constexpr void __set__cachedTransform(::UnityEngine::Transform* value);

  /// @brief Method get_renderer addr 0x1fb0694 size 0x8 virtual true final false
  inline ::UnityEngine::Renderer* get_renderer();

  /// @brief Method get_meshFilter addr 0x1fb069c size 0x8 virtual false final false
  inline ::UnityEngine::MeshFilter* get_meshFilter();

  /// @brief Method get_cachedTransform addr 0x1fb06a4 size 0x8 virtual false final false
  inline ::UnityEngine::Transform* get_cachedTransform();

  /// @brief Method set_isPartOfInstancedRendering addr 0x1fafb24 size 0x30 virtual false final false
  inline void set_isPartOfInstancedRendering(bool value);

  /// @brief Method Awake addr 0x1fb088c size 0x2c virtual true final false
  inline void Awake();

  /// @brief Method OnEnable addr 0x1fb08c4 size 0x10 virtual true final false
  inline void OnEnable();

  /// @brief Method OnValidate addr 0x1fb08d8 size 0x34 virtual true final false
  inline void OnValidate();

  /// @brief Method InitIfNeeded addr 0x1fb090c size 0xc8 virtual true final false
  inline void InitIfNeeded();

  static inline ::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer* New_ctor();

  /// @brief Method .ctor addr 0x1fb0a88 size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundNonLightRenderer(BloomPrePassBackgroundNonLightRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundNonLightRenderer(BloomPrePassBackgroundNonLightRenderer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundNonLightRenderer();

public:
  /// @brief Field _renderer, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Renderer* ____renderer;

  /// @brief Field _meshFilter, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____meshFilter;

  /// @brief Field _isPartOfInstancedRendering, offset: 0x48, size: 0x1, def value: None
  bool ____isPartOfInstancedRendering;

  /// @brief Field _cachedTransform, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Transform* ____cachedTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer, ____renderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer, ____meshFilter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer, ____isPartOfInstancedRendering) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer, ____cachedTransform) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*, "", "BloomPrePassBackgroundNonLightRenderer");
