#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundNonLightRendererCore)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
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
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14465))
// CS Name: ::BloomPrePassBackgroundNonLightRendererCore*
class CORDL_TYPE BloomPrePassBackgroundNonLightRendererCore : public ::GlobalNamespace::BloomPrePassNonLightPass {
public:
  // Declarations
  /// @brief Field _keepDefaultRendering, offset 0x20, size 0x1
  __declspec(property(get = __get__keepDefaultRendering, put = __set__keepDefaultRendering)) bool _keepDefaultRendering;

  /// @brief Field _useCustomMaterial, offset 0x21, size 0x1
  __declspec(property(get = __get__useCustomMaterial, put = __set__useCustomMaterial)) bool _useCustomMaterial;

  /// @brief Field _customMaterial, offset 0x28, size 0x8
  __declspec(property(get = __get__customMaterial, put = __set__customMaterial))::UnityEngine::Material* _customMaterial;

  /// @brief Field _useCustomPropertyBlock, offset 0x30, size 0x1
  __declspec(property(get = __get__useCustomPropertyBlock, put = __set__useCustomPropertyBlock)) bool _useCustomPropertyBlock;

  /// @brief Field _commandBuffer, offset 0x38, size 0x8
  __declspec(property(get = __get__commandBuffer, put = __set__commandBuffer))::UnityEngine::Rendering::CommandBuffer* _commandBuffer;

  /// @brief Field _customPropertyBlock, offset 0x40, size 0x8
  __declspec(property(get = __get__customPropertyBlock, put = __set__customPropertyBlock))::UnityEngine::MaterialPropertyBlock* _customPropertyBlock;

  /// @brief Field _worldSpaceCameraPosID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__worldSpaceCameraPosID, put = setStaticF__worldSpaceCameraPosID)) int32_t _worldSpaceCameraPosID;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  __declspec(property(get = get_renderer))::UnityEngine::Renderer* renderer;

  __declspec(property(get = get_useCustomMaterial)) bool useCustomMaterial;

  __declspec(property(get = get_customMaterial))::UnityEngine::Material* customMaterial;

  constexpr bool& __get__keepDefaultRendering();

  constexpr bool const& __get__keepDefaultRendering() const;

  constexpr void __set__keepDefaultRendering(bool value);

  constexpr bool& __get__useCustomMaterial();

  constexpr bool const& __get__useCustomMaterial() const;

  constexpr void __set__useCustomMaterial(bool value);

  constexpr ::UnityEngine::Material*& __get__customMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__customMaterial() const;

  constexpr void __set__customMaterial(::UnityEngine::Material* value);

  constexpr bool& __get__useCustomPropertyBlock();

  constexpr bool const& __get__useCustomPropertyBlock() const;

  constexpr void __set__useCustomPropertyBlock(bool value);

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __get__commandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __get__commandBuffer() const;

  constexpr void __set__commandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr ::UnityEngine::MaterialPropertyBlock*& __get__customPropertyBlock();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& __get__customPropertyBlock() const;

  constexpr void __set__customPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline void setStaticF__worldSpaceCameraPosID(int32_t value);

  static inline int32_t getStaticF__worldSpaceCameraPosID();

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  /// @brief Method get_renderer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Renderer* get_renderer();

  /// @brief Method get_useCustomMaterial, addr 0x2105cec, size 0x8, virtual false, abstract: false, final false
  inline bool get_useCustomMaterial();

  /// @brief Method get_customMaterial, addr 0x2105cf4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Material* get_customMaterial();

  /// @brief Method SetCustomPropertyBlock, addr 0x2105cfc, size 0xbc, virtual false, abstract: false, final false
  inline void SetCustomPropertyBlock(::UnityEngine::MaterialPropertyBlock* bloomPropertyBlock);

  /// @brief Method InitIfNeeded, addr 0x2105b84, size 0x114, virtual true, abstract: false, final false
  inline void InitIfNeeded();

  /// @brief Method Awake, addr 0x2105a68, size 0xc, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method Render, addr 0x2105db8, size 0x310, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);

  static inline ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore* New_ctor();

  /// @brief Method .ctor, addr 0x2104a20, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightRendererCore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundNonLightRendererCore(BloomPrePassBackgroundNonLightRendererCore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightRendererCore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundNonLightRendererCore(BloomPrePassBackgroundNonLightRendererCore const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundNonLightRendererCore();

public:
  /// @brief Field _keepDefaultRendering, offset: 0x20, size: 0x1, def value: None
  bool ____keepDefaultRendering;

  /// @brief Field _useCustomMaterial, offset: 0x21, size: 0x1, def value: None
  bool ____useCustomMaterial;

  /// @brief Field _customMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Material* ____customMaterial;

  /// @brief Field _useCustomPropertyBlock, offset: 0x30, size: 0x1, def value: None
  bool ____useCustomPropertyBlock;

  /// @brief Field _commandBuffer, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ____commandBuffer;

  /// @brief Field _customPropertyBlock, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ____customPropertyBlock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, ____keepDefaultRendering) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, ____useCustomMaterial) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, ____customMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, ____useCustomPropertyBlock) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, ____commandBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, ____customPropertyBlock) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*, "", "BloomPrePassBackgroundNonLightRendererCore");
