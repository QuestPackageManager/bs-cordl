#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/FinalBlitPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FinalBlitPass)
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
namespace UnityEngine::Rendering::Universal::Internal {
struct FinalBlitPass_BlitMaterialData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class FinalBlitPass_BlitPassNames;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct FinalBlitPass_BlitType;
}
namespace UnityEngine::Rendering::Universal::Internal {
class FinalBlitPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class FinalBlitPass___c;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderTargetHandle;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct HDROutputUtils_Operation;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
struct ColorGamut;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
struct FinalBlitPass_BlitType;
}
namespace UnityEngine::Rendering::Universal::Internal {
class FinalBlitPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class FinalBlitPass_BlitPassNames;
}
namespace UnityEngine::Rendering::Universal::Internal {
class FinalBlitPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class FinalBlitPass___c;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct FinalBlitPass_BlitMaterialData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitPassNames);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.FinalBlitPass/BlitPassNames
class CORDL_TYPE FinalBlitPass_BlitPassNames : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FinalBlitPass_BlitPassNames();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FinalBlitPass_BlitPassNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FinalBlitPass_BlitPassNames(FinalBlitPass_BlitPassNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FinalBlitPass_BlitPassNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FinalBlitPass_BlitPassNames(FinalBlitPass_BlitPassNames const&) = delete;

  /// @brief Field BilinearSampler offset 0xffffffff size 0x8
  static constexpr ::ConstString BilinearSampler{ u"BilinearDebugDraw" };

  /// @brief Field NearestSampler offset 0xffffffff size 0x8
  static constexpr ::ConstString NearestSampler{ u"NearestDebugDraw" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13069 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitPassNames, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.FinalBlitPass/BlitType
struct CORDL_TYPE FinalBlitPass_BlitType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FinalBlitPass_BlitType_Unwrapped
  enum struct __FinalBlitPass_BlitType_Unwrapped : int32_t {
    __E_Core = static_cast<int32_t>(0x0),
    __E_HDR = static_cast<int32_t>(0x1),
    __E_Count = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FinalBlitPass_BlitType_Unwrapped() const noexcept {
    return static_cast<__FinalBlitPass_BlitType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FinalBlitPass_BlitType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FinalBlitPass_BlitType(int32_t value__) noexcept;

  /// @brief Field Core value: I32(0)
  static ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType const Core;

  /// @brief Field Count value: I32(2)
  static ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType const Count;

  /// @brief Field HDR value: I32(1)
  static ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType const HDR;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13070 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.FinalBlitPass/BlitMaterialData
struct CORDL_TYPE FinalBlitPass_BlitMaterialData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FinalBlitPass_BlitMaterialData();

  // Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "nearestSamplerPass", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "bilinearSamplerPass", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FinalBlitPass_BlitMaterialData(::UnityW<::UnityEngine::Material> material, int32_t nearestSamplerPass, int32_t bilinearSamplerPass) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13071 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field material, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field nearestSamplerPass, offset: 0x8, size: 0x4, def value: None
  int32_t nearestSamplerPass;

  /// @brief Field bilinearSamplerPass, offset: 0xc, size: 0x4, def value: None
  int32_t bilinearSamplerPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData, material) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData, nearestSamplerPass) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData, bilinearSamplerPass) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.Universal.Internal.FinalBlitPass::BlitMaterialData, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.FinalBlitPass/PassData
class CORDL_TYPE FinalBlitPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field blitMaterialData, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_blitMaterialData,
                      put = __cordl_internal_set_blitMaterialData)) ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData blitMaterialData;

  /// @brief Field cameraData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field destination, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_destination, put = __cordl_internal_set_destination)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination;

  /// @brief Field enableAlphaOutput, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get_enableAlphaOutput, put = __cordl_internal_set_enableAlphaOutput)) bool enableAlphaOutput;

  /// @brief Field hdrOutputLuminanceParams, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_hdrOutputLuminanceParams, put = __cordl_internal_set_hdrOutputLuminanceParams)) ::UnityEngine::Vector4 hdrOutputLuminanceParams;

  /// @brief Field requireSrgbConversion, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_requireSrgbConversion, put = __cordl_internal_set_requireSrgbConversion)) bool requireSrgbConversion;

  /// @brief Field source, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source;

  /// @brief Field sourceID, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_sourceID, put = __cordl_internal_set_sourceID)) int32_t sourceID;

  static inline ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData const& __cordl_internal_get_blitMaterialData() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData& __cordl_internal_get_blitMaterialData();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destination() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destination();

  constexpr bool const& __cordl_internal_get_enableAlphaOutput() const;

  constexpr bool& __cordl_internal_get_enableAlphaOutput();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_hdrOutputLuminanceParams() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_hdrOutputLuminanceParams();

  constexpr bool const& __cordl_internal_get_requireSrgbConversion() const;

  constexpr bool& __cordl_internal_get_requireSrgbConversion();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_source() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_source();

  constexpr int32_t const& __cordl_internal_get_sourceID() const;

  constexpr int32_t& __cordl_internal_get_sourceID();

  constexpr void __cordl_internal_set_blitMaterialData(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData value);

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_enableAlphaOutput(bool value);

  constexpr void __cordl_internal_set_hdrOutputLuminanceParams(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_requireSrgbConversion(bool value);

  constexpr void __cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_sourceID(int32_t value);

  /// @brief Method .ctor, addr 0x674b9d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FinalBlitPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FinalBlitPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FinalBlitPass_PassData(FinalBlitPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FinalBlitPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FinalBlitPass_PassData(FinalBlitPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13072 };

  /// @brief Field source, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___source;

  /// @brief Field destination, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destination;

  /// @brief Field sourceID, offset: 0x30, size: 0x4, def value: None
  int32_t ___sourceID;

  /// @brief Field hdrOutputLuminanceParams, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___hdrOutputLuminanceParams;

  /// @brief Field requireSrgbConversion, offset: 0x44, size: 0x1, def value: None
  bool ___requireSrgbConversion;

  /// @brief Field enableAlphaOutput, offset: 0x45, size: 0x1, def value: None
  bool ___enableAlphaOutput;

  /// @brief Field blitMaterialData, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData ___blitMaterialData;

  /// @brief Field cameraData, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData, ___destination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData, ___sourceID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData, ___hdrOutputLuminanceParams) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData, ___requireSrgbConversion) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData, ___enableAlphaOutput) == 0x45, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData, ___blitMaterialData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData, ___cameraData) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.FinalBlitPass/<>c
class CORDL_TYPE FinalBlitPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0,
                      put = setStaticF___9__17_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__17_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c* New_ctor();

  /// @brief Method <Render>b__17_0, addr 0x674d3a8, size 0x3d4, virtual false, abstract: false, final false
  inline void _Render_b__17_0(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x674d3a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__17_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c* value);

  static inline void setStaticF___9__17_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FinalBlitPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FinalBlitPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FinalBlitPass___c(FinalBlitPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FinalBlitPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FinalBlitPass___c(FinalBlitPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13073 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.FinalBlitPass
class CORDL_TYPE FinalBlitPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using BlitMaterialData = ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData;

  using BlitPassNames = ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitPassNames;

  using BlitType = ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType;

  using PassData = ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c;

  /// @brief Field m_BlitMaterialData, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitMaterialData,
                      put = __cordl_internal_set_m_BlitMaterialData)) ::ArrayW<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData,
                                                                               ::Array<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData>*>
      m_BlitMaterialData;

  /// @brief Field m_PassData, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData* m_PassData;

  /// @brief Field m_Source, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Source, put = __cordl_internal_set_m_Source)) ::UnityEngine::Rendering::RTHandle* m_Source;

  /// @brief Field s_CameraDepthTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraDepthTextureID, put = setStaticF_s_CameraDepthTextureID)) int32_t s_CameraDepthTextureID;

  /// @brief Method Dispose, addr 0x674b9dc, size 0x4, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Execute, addr 0x674bc44, size 0x9dc, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x674c6b0, size 0x22c, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData* data,
                                 ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method InitPassData, addr 0x674c620, size 0x90, virtual false, abstract: false, final false
  inline void InitPassData(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*> passData,
                           ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType blitType, bool enableAlphaOutput);

  static inline ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* blitMaterial,
                                                                                       ::UnityEngine::Material* blitHDRMaterial);

  /// @brief Method OnCameraSetup, addr 0x674bb70, size 0xd4, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Render, addr 0x674c8dc, size 0xa04, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> src,
                     ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> dest, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle overlayUITexture);

  /// @brief Method Setup, addr 0x674ba2c, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::RenderTextureDescriptor baseDescriptor, ::UnityEngine::Rendering::RTHandle* colorHandle);

  /// @brief Method Setup, addr 0x674b9e0, size 0x4c, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::RenderTextureDescriptor baseDescriptor, ::UnityEngine::Rendering::Universal::RenderTargetHandle colorHandle);

  /// @brief Method SetupHDROutput, addr 0x674ba34, size 0x13c, virtual false, abstract: false, final false
  static inline void SetupHDROutput(::UnityEngine::ColorGamut hdrDisplayColorGamut, ::UnityEngine::Material* material, ::UnityEngine::Rendering::HDROutputUtils_Operation hdrOperation,
                                    ::UnityEngine::Vector4 hdrOutputParameters, bool rendersOverlayUI);

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData, ::Array<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData>*> const&
  __cordl_internal_get_m_BlitMaterialData() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData, ::Array<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData>*>&
  __cordl_internal_get_m_BlitMaterialData();

  constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_Source() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_Source();

  constexpr void __cordl_internal_set_m_BlitMaterialData(
      ::ArrayW<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData, ::Array<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData>*> value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData* value);

  constexpr void __cordl_internal_set_m_Source(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method .ctor, addr 0x674b7d0, size 0x208, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* blitMaterial, ::UnityEngine::Material* blitHDRMaterial);

  static inline int32_t getStaticF_s_CameraDepthTextureID();

  static inline void setStaticF_s_CameraDepthTextureID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FinalBlitPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FinalBlitPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FinalBlitPass(FinalBlitPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FinalBlitPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FinalBlitPass(FinalBlitPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13074 };

  /// @brief Field m_Source, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_Source;

  /// @brief Field m_PassData, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData* ___m_PassData;

  /// @brief Field m_BlitMaterialData, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData, ::Array<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData>*>
      ___m_BlitMaterialData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass, ___m_Source) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass, ___m_PassData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass, ___m_BlitMaterialData) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass, 0xd0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType, "UnityEngine.Rendering.Universal.Internal", "FinalBlitPass/BlitType");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*, "UnityEngine.Rendering.Universal.Internal", "FinalBlitPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitPassNames);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitPassNames*, "UnityEngine.Rendering.Universal.Internal", "FinalBlitPass/BlitPassNames");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*, "UnityEngine.Rendering.Universal.Internal", "FinalBlitPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c*, "UnityEngine.Rendering.Universal.Internal", "FinalBlitPass/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData, "UnityEngine.Rendering.Universal.Internal", "FinalBlitPass/BlitMaterialData");
