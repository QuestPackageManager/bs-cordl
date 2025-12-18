#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphDefaultResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
CORDL_MODULE_EXPORT(RenderGraphDefaultResources)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDefaultResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphDefaultResources
class CORDL_TYPE RenderGraphDefaultResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field <blackTexture3DXR>k__BackingField, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get__blackTexture3DXR_k__BackingField,
                      put = __cordl_internal_set__blackTexture3DXR_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _blackTexture3DXR_k__BackingField;

  /// @brief Field <blackTextureArrayXR>k__BackingField, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__blackTextureArrayXR_k__BackingField,
                      put = __cordl_internal_set__blackTextureArrayXR_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _blackTextureArrayXR_k__BackingField;

  /// @brief Field <blackTextureXR>k__BackingField, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__blackTextureXR_k__BackingField,
                      put = __cordl_internal_set__blackTextureXR_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _blackTextureXR_k__BackingField;

  /// @brief Field <blackTexture>k__BackingField, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__blackTexture_k__BackingField,
                      put = __cordl_internal_set__blackTexture_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _blackTexture_k__BackingField;

  /// @brief Field <blackUIntTextureXR>k__BackingField, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get__blackUIntTextureXR_k__BackingField,
                      put = __cordl_internal_set__blackUIntTextureXR_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _blackUIntTextureXR_k__BackingField;

  /// @brief Field <clearTextureXR>k__BackingField, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__clearTextureXR_k__BackingField,
                      put = __cordl_internal_set__clearTextureXR_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _clearTextureXR_k__BackingField;

  /// @brief Field <defaultShadowTexture>k__BackingField, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get__defaultShadowTexture_k__BackingField,
                      put = __cordl_internal_set__defaultShadowTexture_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _defaultShadowTexture_k__BackingField;

  /// @brief Field <magentaTextureXR>k__BackingField, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__magentaTextureXR_k__BackingField,
                      put = __cordl_internal_set__magentaTextureXR_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _magentaTextureXR_k__BackingField;

  /// @brief Field <whiteTextureXR>k__BackingField, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get__whiteTextureXR_k__BackingField,
                      put = __cordl_internal_set__whiteTextureXR_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _whiteTextureXR_k__BackingField;

  /// @brief Field <whiteTexture>k__BackingField, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__whiteTexture_k__BackingField,
                      put = __cordl_internal_set__whiteTexture_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _whiteTexture_k__BackingField;

  __declspec(property(get = get_blackTexture, put = set_blackTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle blackTexture;

  __declspec(property(get = get_blackTexture3DXR, put = set_blackTexture3DXR)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle blackTexture3DXR;

  __declspec(property(get = get_blackTextureArrayXR, put = set_blackTextureArrayXR)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle blackTextureArrayXR;

  __declspec(property(get = get_blackTextureXR, put = set_blackTextureXR)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle blackTextureXR;

  __declspec(property(get = get_blackUIntTextureXR, put = set_blackUIntTextureXR)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle blackUIntTextureXR;

  __declspec(property(get = get_clearTextureXR, put = set_clearTextureXR)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle clearTextureXR;

  __declspec(property(get = get_defaultShadowTexture, put = set_defaultShadowTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle defaultShadowTexture;

  /// @brief Field m_BlackTexture2D, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlackTexture2D, put = __cordl_internal_set_m_BlackTexture2D)) ::UnityEngine::Rendering::RTHandle* m_BlackTexture2D;

  /// @brief Field m_ShadowTexture2D, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShadowTexture2D, put = __cordl_internal_set_m_ShadowTexture2D)) ::UnityEngine::Rendering::RTHandle* m_ShadowTexture2D;

  /// @brief Field m_WhiteTexture2D, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WhiteTexture2D, put = __cordl_internal_set_m_WhiteTexture2D)) ::UnityEngine::Rendering::RTHandle* m_WhiteTexture2D;

  __declspec(property(get = get_magentaTextureXR, put = set_magentaTextureXR)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle magentaTextureXR;

  __declspec(property(get = get_whiteTexture, put = set_whiteTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle whiteTexture;

  __declspec(property(get = get_whiteTextureXR, put = set_whiteTextureXR)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle whiteTextureXR;

  /// @brief Method Cleanup, addr 0x6629078, size 0x40, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method InitializeForRendering, addr 0x66290b8, size 0x20c, virtual false, abstract: false, final false
  inline void InitializeForRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__blackTexture3DXR_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__blackTexture3DXR_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__blackTextureArrayXR_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__blackTextureArrayXR_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__blackTextureXR_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__blackTextureXR_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__blackTexture_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__blackTexture_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__blackUIntTextureXR_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__blackUIntTextureXR_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__clearTextureXR_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__clearTextureXR_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__defaultShadowTexture_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__defaultShadowTexture_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__magentaTextureXR_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__magentaTextureXR_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__whiteTextureXR_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__whiteTextureXR_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__whiteTexture_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__whiteTexture_k__BackingField();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_BlackTexture2D() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_BlackTexture2D();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_ShadowTexture2D() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_ShadowTexture2D();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_WhiteTexture2D() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_WhiteTexture2D();

  constexpr void __cordl_internal_set__blackTexture3DXR_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__blackTextureArrayXR_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__blackTextureXR_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__blackTexture_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__blackUIntTextureXR_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__clearTextureXR_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__defaultShadowTexture_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__magentaTextureXR_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__whiteTextureXR_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__whiteTexture_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_m_BlackTexture2D(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_ShadowTexture2D(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_WhiteTexture2D(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method .ctor, addr 0x6628f70, size 0x108, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_blackTexture, addr 0x6628ea8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_blackTexture();

  /// @brief Method get_blackTexture3DXR, addr 0x6628f34, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_blackTexture3DXR();

  /// @brief Method get_blackTextureArrayXR, addr 0x6628f0c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_blackTextureArrayXR();

  /// @brief Method get_blackTextureXR, addr 0x6628ef8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_blackTextureXR();

  /// @brief Method get_blackUIntTextureXR, addr 0x6628f20, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_blackUIntTextureXR();

  /// @brief Method get_clearTextureXR, addr 0x6628ed0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_clearTextureXR();

  /// @brief Method get_defaultShadowTexture, addr 0x6628f5c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_defaultShadowTexture();

  /// @brief Method get_magentaTextureXR, addr 0x6628ee4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_magentaTextureXR();

  /// @brief Method get_whiteTexture, addr 0x6628ebc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_whiteTexture();

  /// @brief Method get_whiteTextureXR, addr 0x6628f48, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_whiteTextureXR();

  /// @brief Method set_blackTexture, addr 0x6628eb4, size 0x8, virtual false, abstract: false, final false
  inline void set_blackTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_blackTexture3DXR, addr 0x6628f40, size 0x8, virtual false, abstract: false, final false
  inline void set_blackTexture3DXR(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_blackTextureArrayXR, addr 0x6628f18, size 0x8, virtual false, abstract: false, final false
  inline void set_blackTextureArrayXR(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_blackTextureXR, addr 0x6628f04, size 0x8, virtual false, abstract: false, final false
  inline void set_blackTextureXR(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_blackUIntTextureXR, addr 0x6628f2c, size 0x8, virtual false, abstract: false, final false
  inline void set_blackUIntTextureXR(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_clearTextureXR, addr 0x6628edc, size 0x8, virtual false, abstract: false, final false
  inline void set_clearTextureXR(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_defaultShadowTexture, addr 0x6628f68, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultShadowTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_magentaTextureXR, addr 0x6628ef0, size 0x8, virtual false, abstract: false, final false
  inline void set_magentaTextureXR(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_whiteTexture, addr 0x6628ec8, size 0x8, virtual false, abstract: false, final false
  inline void set_whiteTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_whiteTextureXR, addr 0x6628f54, size 0x8, virtual false, abstract: false, final false
  inline void set_whiteTextureXR(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphDefaultResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDefaultResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphDefaultResources(RenderGraphDefaultResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDefaultResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphDefaultResources(RenderGraphDefaultResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12395 };

  /// @brief Field m_BlackTexture2D, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_BlackTexture2D;

  /// @brief Field m_WhiteTexture2D, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_WhiteTexture2D;

  /// @brief Field m_ShadowTexture2D, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_ShadowTexture2D;

  /// @brief Field <blackTexture>k__BackingField, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____blackTexture_k__BackingField;

  /// @brief Field <whiteTexture>k__BackingField, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____whiteTexture_k__BackingField;

  /// @brief Field <clearTextureXR>k__BackingField, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____clearTextureXR_k__BackingField;

  /// @brief Field <magentaTextureXR>k__BackingField, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____magentaTextureXR_k__BackingField;

  /// @brief Field <blackTextureXR>k__BackingField, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____blackTextureXR_k__BackingField;

  /// @brief Field <blackTextureArrayXR>k__BackingField, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____blackTextureArrayXR_k__BackingField;

  /// @brief Field <blackUIntTextureXR>k__BackingField, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____blackUIntTextureXR_k__BackingField;

  /// @brief Field <blackTexture3DXR>k__BackingField, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____blackTexture3DXR_k__BackingField;

  /// @brief Field <whiteTextureXR>k__BackingField, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____whiteTextureXR_k__BackingField;

  /// @brief Field <defaultShadowTexture>k__BackingField, offset: 0xb8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____defaultShadowTexture_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources, ___m_BlackTexture2D) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources, ___m_WhiteTexture2D) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources, ___m_ShadowTexture2D) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources, ____blackTexture_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources, ____whiteTexture_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources, ____clearTextureXR_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources, ____magentaTextureXR_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources, ____blackTextureXR_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources, ____blackTextureArrayXR_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources, ____blackUIntTextureXR_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources, ____blackTexture3DXR_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources, ____whiteTextureXR_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources, ____defaultShadowTexture_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources, 0xc8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphDefaultResources");
