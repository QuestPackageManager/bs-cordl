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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14578))
// CS Name: ::OnWillRenderObjectTrigger*
class CORDL_TYPE OnWillRenderObjectTrigger : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _overrideShader, offset 0x18, size 0x8
  __declspec(property(get = __get__overrideShader, put = __set__overrideShader))::UnityEngine::Shader* _overrideShader;

  /// @brief Field _renderQueue, offset 0x20, size 0x4
  __declspec(property(get = __get__renderQueue, put = __set__renderQueue)) int32_t _renderQueue;

  /// @brief Field _material, offset 0x28, size 0x8
  __declspec(property(get = __get__material, put = __set__material))::UnityEngine::Material* _material;

  /// @brief Field _mesh, offset 0x30, size 0x8
  __declspec(property(get = __get__mesh, put = __set__mesh))::UnityEngine::Mesh* _mesh;

  /// @brief Field _meshFilter, offset 0x38, size 0x8
  __declspec(property(get = __get__meshFilter, put = __set__meshFilter))::UnityEngine::MeshFilter* _meshFilter;

  /// @brief Field _meshRenderer, offset 0x40, size 0x8
  __declspec(property(get = __get__meshRenderer, put = __set__meshRenderer))::UnityEngine::MeshRenderer* _meshRenderer;

  constexpr ::UnityEngine::Shader*& __get__overrideShader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get__overrideShader() const;

  constexpr void __set__overrideShader(::UnityEngine::Shader* value);

  constexpr int32_t& __get__renderQueue();

  constexpr int32_t const& __get__renderQueue() const;

  constexpr void __set__renderQueue(int32_t value);

  constexpr ::UnityEngine::Material*& __get__material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__material() const;

  constexpr void __set__material(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Mesh*& __get__mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get__mesh() const;

  constexpr void __set__mesh(::UnityEngine::Mesh* value);

  constexpr ::UnityEngine::MeshFilter*& __get__meshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__meshFilter() const;

  constexpr void __set__meshFilter(::UnityEngine::MeshFilter* value);

  constexpr ::UnityEngine::MeshRenderer*& __get__meshRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get__meshRenderer() const;

  constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer* value);

  /// @brief Method OnEnable, addr 0x21159a4, size 0x3f8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2115d9c, size 0x30, virtual false, abstract: false, final false
  inline void OnDisable();

  static inline ::GlobalNamespace::OnWillRenderObjectTrigger* New_ctor();

  /// @brief Method .ctor, addr 0x2115dcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OnWillRenderObjectTrigger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnWillRenderObjectTrigger(OnWillRenderObjectTrigger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnWillRenderObjectTrigger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnWillRenderObjectTrigger(OnWillRenderObjectTrigger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnWillRenderObjectTrigger();

public:
  /// @brief Field _overrideShader, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Shader* ____overrideShader;

  /// @brief Field _renderQueue, offset: 0x20, size: 0x4, def value: None
  int32_t ____renderQueue;

  /// @brief Field _material, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Material* ____material;

  /// @brief Field _mesh, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Mesh* ____mesh;

  /// @brief Field _meshFilter, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____meshFilter;

  /// @brief Field _meshRenderer, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ____meshRenderer;

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
