#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Universal2DResourceData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceDataBase_def.hpp"
CORDL_MODULE_EXPORT(Universal2DResourceData)
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Universal2DResourceData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Universal2DResourceData);
// Dependencies UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.Universal.UniversalResourceDataBase
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Universal2DResourceData
class CORDL_TYPE Universal2DResourceData : public ::UnityEngine::Rendering::Universal::UniversalResourceDataBase {
public:
  // Declarations
  /// @brief Field _cameraNormalsTexture, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__cameraNormalsTexture,
      put = __cordl_internal_set__cameraNormalsTexture)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      _cameraNormalsTexture;

  /// @brief Field _cameraSortingLayerTexture, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__cameraSortingLayerTexture,
                      put = __cordl_internal_set__cameraSortingLayerTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _cameraSortingLayerTexture;

  /// @brief Field _lightTextures, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightTextures, put = __cordl_internal_set__lightTextures)) ::ArrayW<
      ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
      ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>
      _lightTextures;

  /// @brief Field _shadowDepth, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__shadowDepth, put = __cordl_internal_set__shadowDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _shadowDepth;

  /// @brief Field _shadowTextures, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__shadowTextures, put = __cordl_internal_set__shadowTextures)) ::ArrayW<
      ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
      ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>
      _shadowTextures;

  /// @brief Field _upscaleTexture, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__upscaleTexture, put = __cordl_internal_set__upscaleTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _upscaleTexture;

  __declspec(property(get = get_cameraSortingLayerTexture, put = set_cameraSortingLayerTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraSortingLayerTexture;

  __declspec(property(
      get = get_lightTextures,
      put = set_lightTextures)) ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                                         ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>
      lightTextures;

  __declspec(property(get = get_normalsTexture,
                      put = set_normalsTexture)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      normalsTexture;

  __declspec(property(get = get_shadowDepth, put = set_shadowDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle shadowDepth;

  __declspec(property(
      get = get_shadowTextures,
      put = set_shadowTextures)) ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                                          ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>
      shadowTextures;

  __declspec(property(get = get_upscaleTexture, put = set_upscaleTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle upscaleTexture;

  /// @brief Method CheckAndGetTextureHandle, addr 0x665507c, size 0x13c, virtual false, abstract: false, final false
  inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                  ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>
  CheckAndGetTextureHandle(::ByRef<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                                            ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>>
                               handle);

  /// @brief Method CheckAndSetTextureHandle, addr 0x665524c, size 0xe4, virtual false, abstract: false, final false
  inline void
  CheckAndSetTextureHandle(::ByRef<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                                            ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>>
                               handle,
                           ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                                    ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>
                               newHandle);

  static inline ::UnityEngine::Rendering::Universal::Universal2DResourceData* New_ctor();

  /// @brief Method Reset, addr 0x66556d0, size 0x380, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> const&
  __cordl_internal_get__cameraNormalsTexture() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>& __cordl_internal_get__cameraNormalsTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__cameraSortingLayerTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__cameraSortingLayerTexture();

  constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                     ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*> const&
  __cordl_internal_get__lightTextures() const;

  constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                     ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>&
  __cordl_internal_get__lightTextures();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__shadowDepth() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__shadowDepth();

  constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                     ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*> const&
  __cordl_internal_get__shadowTextures() const;

  constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                     ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>&
  __cordl_internal_get__shadowTextures();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__upscaleTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__upscaleTexture();

  constexpr void
  __cordl_internal_set__cameraNormalsTexture(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  constexpr void __cordl_internal_set__cameraSortingLayerTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void
  __cordl_internal_set__lightTextures(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                                               ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>
                                          value);

  constexpr void __cordl_internal_set__shadowDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void
  __cordl_internal_set__shadowTextures(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                                                ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>
                                           value);

  constexpr void __cordl_internal_set__upscaleTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6655a50, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cameraSortingLayerTexture, addr 0x665569c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_cameraSortingLayerTexture();

  /// @brief Method get_lightTextures, addr 0x6655330, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                  ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>
  get_lightTextures();

  /// @brief Method get_normalsTexture, addr 0x6655344, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> get_normalsTexture();

  /// @brief Method get_shadowDepth, addr 0x6655558, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_shadowDepth();

  /// @brief Method get_shadowTextures, addr 0x6655544, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                  ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>
  get_shadowTextures();

  /// @brief Method get_upscaleTexture, addr 0x6655668, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_upscaleTexture();

  /// @brief Method set_cameraSortingLayerTexture, addr 0x66556a4, size 0x2c, virtual false, abstract: false, final false
  inline void set_cameraSortingLayerTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_lightTextures, addr 0x6655338, size 0xc, virtual false, abstract: false, final false
  inline void set_lightTextures(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                                         ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>
                                    value);

  /// @brief Method set_normalsTexture, addr 0x665544c, size 0xc, virtual false, abstract: false, final false
  inline void set_normalsTexture(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  /// @brief Method set_shadowDepth, addr 0x6655610, size 0x2c, virtual false, abstract: false, final false
  inline void set_shadowDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_shadowTextures, addr 0x665554c, size 0xc, virtual false, abstract: false, final false
  inline void set_shadowTextures(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
                                          ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>
                                     value);

  /// @brief Method set_upscaleTexture, addr 0x6655670, size 0x2c, virtual false, abstract: false, final false
  inline void set_upscaleTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Universal2DResourceData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Universal2DResourceData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Universal2DResourceData(Universal2DResourceData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Universal2DResourceData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Universal2DResourceData(Universal2DResourceData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12722 };

  /// @brief Field _lightTextures, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
           ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>
      ____lightTextures;

  /// @brief Field _cameraNormalsTexture, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> ____cameraNormalsTexture;

  /// @brief Field _shadowTextures, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>,
           ::Array<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>*>
      ____shadowTextures;

  /// @brief Field _shadowDepth, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____shadowDepth;

  /// @brief Field _upscaleTexture, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____upscaleTexture;

  /// @brief Field _cameraSortingLayerTexture, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____cameraSortingLayerTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Universal2DResourceData, ____lightTextures) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Universal2DResourceData, ____cameraNormalsTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Universal2DResourceData, ____shadowTextures) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Universal2DResourceData, ____shadowDepth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Universal2DResourceData, ____upscaleTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Universal2DResourceData, ____cameraSortingLayerTexture) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Universal2DResourceData, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Universal2DResourceData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Universal2DResourceData*, "UnityEngine.Rendering.Universal", "Universal2DResourceData");
