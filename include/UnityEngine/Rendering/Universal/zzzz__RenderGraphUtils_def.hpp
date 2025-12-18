#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderGraphUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphUtils)
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IRasterRenderGraphBuilder;
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
class RenderGraphUtils_PassData;
}
namespace UnityEngine::Rendering::Universal {
class RenderGraphUtils___c;
}
namespace UnityEngine::Rendering::Universal {
class UniversalResourceData;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class RenderGraphUtils;
}
namespace UnityEngine::Rendering::Universal {
class RenderGraphUtils_PassData;
}
namespace UnityEngine::Rendering::Universal {
class RenderGraphUtils___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderGraphUtils);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderGraphUtils___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderGraphUtils/PassData
class CORDL_TYPE RenderGraphUtils_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field nameID, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_nameID, put = __cordl_internal_set_nameID)) int32_t nameID;

  /// @brief Field texture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_texture, put = __cordl_internal_set_texture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture;

  static inline ::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData* New_ctor();

  constexpr int32_t const& __cordl_internal_get_nameID() const;

  constexpr int32_t& __cordl_internal_get_nameID();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_texture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_texture();

  constexpr void __cordl_internal_set_nameID(int32_t value);

  constexpr void __cordl_internal_set_texture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6720274, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphUtils_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphUtils_PassData(RenderGraphUtils_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphUtils_PassData(RenderGraphUtils_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12988 };

  /// @brief Field texture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___texture;

  /// @brief Field nameID, offset: 0x20, size: 0x4, def value: None
  int32_t ___nameID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData, ___texture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData, ___nameID) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderGraphUtils/<>c
class CORDL_TYPE RenderGraphUtils___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::RenderGraphUtils___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0,
                      put = setStaticF___9__6_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__6_0;

  static inline ::UnityEngine::Rendering::Universal::RenderGraphUtils___c* New_ctor();

  /// @brief Method <SetGlobalTexture>b__6_0, addr 0x67202d0, size 0x4, virtual false, abstract: false, final false
  inline void _SetGlobalTexture_b__6_0(::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x67202cc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::RenderGraphUtils___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__6_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::RenderGraphUtils___c* value);

  static inline void setStaticF___9__6_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphUtils___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphUtils___c(RenderGraphUtils___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphUtils___c(RenderGraphUtils___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12989 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderGraphUtils___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderGraphUtils
class CORDL_TYPE RenderGraphUtils : public ::System::Object {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData;

  using __c = ::UnityEngine::Rendering::Universal::RenderGraphUtils___c;

  /// @brief Field s_SetGlobalTextureProfilingSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SetGlobalTextureProfilingSampler,
                      put = setStaticF_s_SetGlobalTextureProfilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* s_SetGlobalTextureProfilingSampler;

  /// @brief Method SetGlobalTexture, addr 0x671f758, size 0x4e4, virtual false, abstract: false, final false
  static inline void SetGlobalTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph, int32_t nameId, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle handle,
                                      ::StringW passName, ::StringW file, int32_t line);

  /// @brief Method UseDBufferIfValid, addr 0x671ffe8, size 0x1f8, virtual false, abstract: false, final false
  static inline void UseDBufferIfValid(::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder* builder, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_s_SetGlobalTextureProfilingSampler();

  static inline void setStaticF_s_SetGlobalTextureProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphUtils(RenderGraphUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphUtils(RenderGraphUtils const&) = delete;

  /// @brief Field DBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t DBufferSize{ static_cast<int32_t>(0x3) };

  /// @brief Field GBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t GBufferSize{ static_cast<int32_t>(0x7) };

  /// @brief Field LightTextureSize offset 0xffffffff size 0x4
  static constexpr int32_t LightTextureSize{ static_cast<int32_t>(0x4) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12990 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderGraphUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderGraphUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderGraphUtils*, "UnityEngine.Rendering.Universal", "RenderGraphUtils");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderGraphUtils_PassData*, "UnityEngine.Rendering.Universal", "RenderGraphUtils/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderGraphUtils___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderGraphUtils___c*, "UnityEngine.Rendering.Universal", "RenderGraphUtils/<>c");
