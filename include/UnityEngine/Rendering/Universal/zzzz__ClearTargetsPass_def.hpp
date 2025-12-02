#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ClearTargetsPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTClearFlags_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(ClearTargetsPass)
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal {
class ClearTargetsPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class ClearTargetsPass___c;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct RTClearFlags;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ClearTargetsPass;
}
namespace UnityEngine::Rendering::Universal {
class ClearTargetsPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class ClearTargetsPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ClearTargetsPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ClearTargetsPass___c);
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Rendering.RTClearFlags, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ClearTargetsPass/PassData
class CORDL_TYPE ClearTargetsPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field clearColor, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_clearColor, put = __cordl_internal_set_clearColor)) ::UnityEngine::Color clearColor;

  /// @brief Field clearFlags, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_clearFlags, put = __cordl_internal_set_clearFlags)) ::UnityEngine::Rendering::RTClearFlags clearFlags;

  /// @brief Field color, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle color;

  /// @brief Field depth, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depth;

  static inline ::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_clearColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_clearColor();

  constexpr ::UnityEngine::Rendering::RTClearFlags const& __cordl_internal_get_clearFlags() const;

  constexpr ::UnityEngine::Rendering::RTClearFlags& __cordl_internal_get_clearFlags();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_color();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depth() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depth();

  constexpr void __cordl_internal_set_clearColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_clearFlags(::UnityEngine::Rendering::RTClearFlags value);

  constexpr void __cordl_internal_set_color(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_depth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66b88ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClearTargetsPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClearTargetsPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClearTargetsPass_PassData(ClearTargetsPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClearTargetsPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClearTargetsPass_PassData(ClearTargetsPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12987 };

  /// @brief Field color, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___color;

  /// @brief Field depth, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depth;

  /// @brief Field clearFlags, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::Rendering::RTClearFlags ___clearFlags;

  /// @brief Field clearColor, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Color ___clearColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData, ___color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData, ___depth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData, ___clearFlags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData, ___clearColor) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ClearTargetsPass/<>c
class CORDL_TYPE ClearTargetsPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::ClearTargetsPass___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0,
                      put = setStaticF___9__3_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__3_0;

  static inline ::UnityEngine::Rendering::Universal::ClearTargetsPass___c* New_ctor();

  /// @brief Method <Render>b__3_0, addr 0x66b8948, size 0x38, virtual false, abstract: false, final false
  inline void _Render_b__3_0(::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x66b8944, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::ClearTargetsPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__3_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::ClearTargetsPass___c* value);

  static inline void setStaticF___9__3_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClearTargetsPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClearTargetsPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClearTargetsPass___c(ClearTargetsPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClearTargetsPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClearTargetsPass___c(ClearTargetsPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12988 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ClearTargetsPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ClearTargetsPass
class CORDL_TYPE ClearTargetsPass : public ::System::Object {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::ClearTargetsPass___c;

  /// @brief Field s_ClearProfilingSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ClearProfilingSampler, put = setStaticF_s_ClearProfilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* s_ClearProfilingSampler;

  static inline ::UnityEngine::Rendering::Universal::ClearTargetsPass* New_ctor();

  /// @brief Method Render, addr 0x66b8748, size 0x10c, virtual false, abstract: false, final false
  static inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorHandle,
                            ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthHandle, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method Render, addr 0x66b6754, size 0x6c0, virtual false, abstract: false, final false
  static inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorHandle,
                            ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthHandle, ::UnityEngine::Rendering::RTClearFlags clearFlags, ::UnityEngine::Color clearColor);

  /// @brief Method .ctor, addr 0x66b8854, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_s_ClearProfilingSampler();

  static inline void setStaticF_s_ClearProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClearTargetsPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClearTargetsPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClearTargetsPass(ClearTargetsPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClearTargetsPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClearTargetsPass(ClearTargetsPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12989 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ClearTargetsPass, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ClearTargetsPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ClearTargetsPass*, "UnityEngine.Rendering.Universal", "ClearTargetsPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*, "UnityEngine.Rendering.Universal", "ClearTargetsPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ClearTargetsPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ClearTargetsPass___c*, "UnityEngine.Rendering.Universal", "ClearTargetsPass/<>c");
