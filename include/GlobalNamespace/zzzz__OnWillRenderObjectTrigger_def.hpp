#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OnWillRenderObjectTrigger)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class OnWillRenderObjectTrigger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OnWillRenderObjectTrigger);
// Type: ::OnWillRenderObjectTrigger
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OnWillRenderObjectTrigger*
class CORDL_TYPE OnWillRenderObjectTrigger : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _material, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__material, put = __cordl_internal_set__material))::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _mesh, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mesh, put = __cordl_internal_set__mesh))::UnityW<::UnityEngine::Mesh> _mesh;

  /// @brief Field _meshFilter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__meshFilter, put = __cordl_internal_set__meshFilter))::UnityW<::UnityEngine::MeshFilter> _meshFilter;

  /// @brief Field _meshRenderer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderer, put = __cordl_internal_set__meshRenderer))::UnityW<::UnityEngine::MeshRenderer> _meshRenderer;

  /// @brief Field _overrideShader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideShader, put = __cordl_internal_set__overrideShader))::UnityW<::UnityEngine::Shader> _overrideShader;

  /// @brief Field _renderQueue, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__renderQueue, put = __cordl_internal_set__renderQueue)) int32_t _renderQueue;

  static inline ::GlobalNamespace::OnWillRenderObjectTrigger* New_ctor();

  /// @brief Method OnDisable, addr 0x22d8c18, size 0x30, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x22d8820, size 0x3f8, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__overrideShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__overrideShader();

  constexpr int32_t const& __cordl_internal_get__renderQueue() const;

  constexpr int32_t& __cordl_internal_get__renderQueue();

  constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__overrideShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__renderQueue(int32_t value);

  /// @brief Method .ctor, addr 0x22d8c48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnWillRenderObjectTrigger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnWillRenderObjectTrigger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnWillRenderObjectTrigger(OnWillRenderObjectTrigger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnWillRenderObjectTrigger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnWillRenderObjectTrigger(OnWillRenderObjectTrigger const&) = delete;

  /// @brief Field _overrideShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____overrideShader;

  /// @brief Field _renderQueue, offset: 0x20, size: 0x4, def value: None
  int32_t ____renderQueue;

  /// @brief Field _material, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material;

  /// @brief Field _mesh, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____mesh;

  /// @brief Field _meshFilter, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____meshFilter;

  /// @brief Field _meshRenderer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____meshRenderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OnWillRenderObjectTrigger, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OnWillRenderObjectTrigger, ____overrideShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnWillRenderObjectTrigger, ____renderQueue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnWillRenderObjectTrigger, ____material) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnWillRenderObjectTrigger, ____mesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnWillRenderObjectTrigger, ____meshFilter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnWillRenderObjectTrigger, ____meshRenderer) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OnWillRenderObjectTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OnWillRenderObjectTrigger*, "", "OnWillRenderObjectTrigger");
