#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundNonLightRendererCore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundNonLightRendererCore)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightRendererCore;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore);
// Type: ::BloomPrePassBackgroundNonLightRendererCore
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassBackgroundNonLightRendererCore*
class CORDL_TYPE BloomPrePassBackgroundNonLightRendererCore : public ::GlobalNamespace::BloomPrePassNonLightPass {
public:
  // Declarations
  /// @brief Field _commandBuffer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__commandBuffer, put = __cordl_internal_set__commandBuffer)) ::UnityEngine::Rendering::CommandBuffer* _commandBuffer;

  /// @brief Field _customMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__customMaterial, put = __cordl_internal_set__customMaterial)) ::UnityW<::UnityEngine::Material> _customMaterial;

  /// @brief Field _customPropertyBlock, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__customPropertyBlock, put = __cordl_internal_set__customPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* _customPropertyBlock;

  /// @brief Field _keepDefaultRendering, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__keepDefaultRendering, put = __cordl_internal_set__keepDefaultRendering)) bool _keepDefaultRendering;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _useCustomMaterial, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__useCustomMaterial, put = __cordl_internal_set__useCustomMaterial)) bool _useCustomMaterial;

  /// @brief Field _useCustomPropertyBlock, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__useCustomPropertyBlock, put = __cordl_internal_set__useCustomPropertyBlock)) bool _useCustomPropertyBlock;

  /// @brief Field _worldSpaceCameraPosID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__worldSpaceCameraPosID, put = setStaticF__worldSpaceCameraPosID)) int32_t _worldSpaceCameraPosID;

  __declspec(property(get = get_customMaterial)) ::UnityW<::UnityEngine::Material> customMaterial;

  __declspec(property(get = get_renderer)) ::UnityW<::UnityEngine::Renderer> renderer;

  __declspec(property(get = get_useCustomMaterial)) bool useCustomMaterial;

  /// @brief Method Awake, addr 0x3981c5c, size 0xc, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method InitIfNeeded, addr 0x3981d80, size 0x114, virtual true, abstract: false, final false
  inline void InitIfNeeded();

  static inline ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore* New_ctor();

  /// @brief Method Render, addr 0x3981fac, size 0x304, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);

  /// @brief Method SetCustomPropertyBlock, addr 0x3981ef8, size 0xb4, virtual false, abstract: false, final false
  inline void SetCustomPropertyBlock(::UnityEngine::MaterialPropertyBlock* bloomPropertyBlock);

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__commandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __cordl_internal_get__commandBuffer() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__customMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__customMaterial();

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__customPropertyBlock();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& __cordl_internal_get__customPropertyBlock() const;

  constexpr bool const& __cordl_internal_get__keepDefaultRendering() const;

  constexpr bool& __cordl_internal_get__keepDefaultRendering();

  constexpr bool const& __cordl_internal_get__useCustomMaterial() const;

  constexpr bool& __cordl_internal_get__useCustomMaterial();

  constexpr bool const& __cordl_internal_get__useCustomPropertyBlock() const;

  constexpr bool& __cordl_internal_get__useCustomPropertyBlock();

  constexpr void __cordl_internal_set__commandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set__customMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__customPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set__keepDefaultRendering(bool value);

  constexpr void __cordl_internal_set__useCustomMaterial(bool value);

  constexpr void __cordl_internal_set__useCustomPropertyBlock(bool value);

  /// @brief Method .ctor, addr 0x3980e38, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  static inline int32_t getStaticF__worldSpaceCameraPosID();

  /// @brief Method get_customMaterial, addr 0x3981ef0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_customMaterial();

  /// @brief Method get_renderer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::Renderer> get_renderer();

  /// @brief Method get_useCustomMaterial, addr 0x3981ee8, size 0x8, virtual false, abstract: false, final false
  inline bool get_useCustomMaterial();

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline void setStaticF__worldSpaceCameraPosID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundNonLightRendererCore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightRendererCore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundNonLightRendererCore(BloomPrePassBackgroundNonLightRendererCore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightRendererCore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundNonLightRendererCore(BloomPrePassBackgroundNonLightRendererCore const&) = delete;

  /// @brief Field _keepDefaultRendering, offset: 0x28, size: 0x1, def value: None
  bool ____keepDefaultRendering;

  /// @brief Field _useCustomMaterial, offset: 0x29, size: 0x1, def value: None
  bool ____useCustomMaterial;

  /// @brief Field _customMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____customMaterial;

  /// @brief Field _useCustomPropertyBlock, offset: 0x38, size: 0x1, def value: None
  bool ____useCustomPropertyBlock;

  /// @brief Field _commandBuffer, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ____commandBuffer;

  /// @brief Field _customPropertyBlock, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ____customPropertyBlock;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16208 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, ____keepDefaultRendering) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, ____useCustomMaterial) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, ____customMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, ____useCustomPropertyBlock) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, ____commandBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, ____customPropertyBlock) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*, "", "BloomPrePassBackgroundNonLightRendererCore");
