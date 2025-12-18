#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/HDRDebugViewPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRDebugMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HDRDebugViewPass)
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
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
struct HDRDebugMode;
}
namespace UnityEngine::Rendering::Universal {
struct HDRDebugViewPass_HDRDebugPassId;
}
namespace UnityEngine::Rendering::Universal {
class HDRDebugViewPass_PassDataCIExy;
}
namespace UnityEngine::Rendering::Universal {
class HDRDebugViewPass_PassDataDebugView;
}
namespace UnityEngine::Rendering::Universal {
class HDRDebugViewPass_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal {
class HDRDebugViewPass___c;
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
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
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
namespace UnityEngine::Rendering::Universal {
struct HDRDebugViewPass_HDRDebugPassId;
}
namespace UnityEngine::Rendering::Universal {
class HDRDebugViewPass;
}
namespace UnityEngine::Rendering::Universal {
class HDRDebugViewPass_PassDataCIExy;
}
namespace UnityEngine::Rendering::Universal {
class HDRDebugViewPass_PassDataDebugView;
}
namespace UnityEngine::Rendering::Universal {
class HDRDebugViewPass_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal {
class HDRDebugViewPass___c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::HDRDebugViewPass_HDRDebugPassId);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::HDRDebugViewPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::HDRDebugViewPass___c);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.HDRDebugViewPass/HDRDebugPassId
struct CORDL_TYPE HDRDebugViewPass_HDRDebugPassId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HDRDebugViewPass_HDRDebugPassId_Unwrapped
  enum struct __HDRDebugViewPass_HDRDebugPassId_Unwrapped : int32_t {
    __E_CIExyPrepass = static_cast<int32_t>(0x0),
    __E_DebugViewPass = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HDRDebugViewPass_HDRDebugPassId_Unwrapped() const noexcept {
    return static_cast<__HDRDebugViewPass_HDRDebugPassId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HDRDebugViewPass_HDRDebugPassId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HDRDebugViewPass_HDRDebugPassId(int32_t value__) noexcept;

  /// @brief Field CIExyPrepass value: I32(0)
  static ::UnityEngine::Rendering::Universal::HDRDebugViewPass_HDRDebugPassId const CIExyPrepass;

  /// @brief Field DebugViewPass value: I32(1)
  static ::UnityEngine::Rendering::Universal::HDRDebugViewPass_HDRDebugPassId const DebugViewPass;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12808 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass_HDRDebugPassId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::HDRDebugViewPass_HDRDebugPassId, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.HDRDebugViewPass/PassDataCIExy
class CORDL_TYPE HDRDebugViewPass_PassDataCIExy : public ::System::Object {
public:
  // Declarations
  /// @brief Field luminanceParameters, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_luminanceParameters, put = __cordl_internal_set_luminanceParameters)) ::UnityEngine::Vector4 luminanceParameters;

  /// @brief Field material, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field passThrough, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_passThrough, put = __cordl_internal_set_passThrough)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle passThrough;

  /// @brief Field srcColor, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_srcColor, put = __cordl_internal_set_srcColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle srcColor;

  /// @brief Field xyBuffer, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_xyBuffer, put = __cordl_internal_set_xyBuffer)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle xyBuffer;

  static inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* New_ctor();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_luminanceParameters() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_luminanceParameters();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_passThrough() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_passThrough();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_srcColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_srcColor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_xyBuffer() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_xyBuffer();

  constexpr void __cordl_internal_set_luminanceParameters(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_passThrough(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_srcColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_xyBuffer(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66cca54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HDRDebugViewPass_PassDataCIExy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HDRDebugViewPass_PassDataCIExy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HDRDebugViewPass_PassDataCIExy(HDRDebugViewPass_PassDataCIExy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HDRDebugViewPass_PassDataCIExy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HDRDebugViewPass_PassDataCIExy(HDRDebugViewPass_PassDataCIExy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12809 };

  /// @brief Field material, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field luminanceParameters, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___luminanceParameters;

  /// @brief Field srcColor, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___srcColor;

  /// @brief Field xyBuffer, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___xyBuffer;

  /// @brief Field passThrough, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___passThrough;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy, ___material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy, ___luminanceParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy, ___srcColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy, ___xyBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy, ___passThrough) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.Universal.HDRDebugMode, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.HDRDebugViewPass/PassDataDebugView
class CORDL_TYPE HDRDebugViewPass_PassDataDebugView : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field dstColor, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_dstColor, put = __cordl_internal_set_dstColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dstColor;

  /// @brief Field hdrDebugMode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_hdrDebugMode, put = __cordl_internal_set_hdrDebugMode)) ::UnityEngine::Rendering::Universal::HDRDebugMode hdrDebugMode;

  /// @brief Field luminanceParameters, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_luminanceParameters, put = __cordl_internal_set_luminanceParameters)) ::UnityEngine::Vector4 luminanceParameters;

  /// @brief Field material, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field overlayUITexture, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_overlayUITexture, put = __cordl_internal_set_overlayUITexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle overlayUITexture;

  /// @brief Field srcColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_srcColor, put = __cordl_internal_set_srcColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle srcColor;

  /// @brief Field xyBuffer, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_xyBuffer, put = __cordl_internal_set_xyBuffer)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle xyBuffer;

  static inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_dstColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_dstColor();

  constexpr ::UnityEngine::Rendering::Universal::HDRDebugMode const& __cordl_internal_get_hdrDebugMode() const;

  constexpr ::UnityEngine::Rendering::Universal::HDRDebugMode& __cordl_internal_get_hdrDebugMode();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_luminanceParameters() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_luminanceParameters();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_overlayUITexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_overlayUITexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_srcColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_srcColor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_xyBuffer() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_xyBuffer();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_dstColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_hdrDebugMode(::UnityEngine::Rendering::Universal::HDRDebugMode value);

  constexpr void __cordl_internal_set_luminanceParameters(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_overlayUITexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_srcColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_xyBuffer(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66cca58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HDRDebugViewPass_PassDataDebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HDRDebugViewPass_PassDataDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HDRDebugViewPass_PassDataDebugView(HDRDebugViewPass_PassDataDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HDRDebugViewPass_PassDataDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HDRDebugViewPass_PassDataDebugView(HDRDebugViewPass_PassDataDebugView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12810 };

  /// @brief Field material, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field hdrDebugMode, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::HDRDebugMode ___hdrDebugMode;

  /// @brief Field cameraData, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field luminanceParameters, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___luminanceParameters;

  /// @brief Field overlayUITexture, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___overlayUITexture;

  /// @brief Field xyBuffer, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___xyBuffer;

  /// @brief Field srcColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___srcColor;

  /// @brief Field dstColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___dstColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView, ___material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView, ___hdrDebugMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView, ___cameraData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView, ___luminanceParameters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView, ___overlayUITexture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView, ___xyBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView, ___srcColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView, ___dstColor) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.HDRDebugViewPass/ShaderConstants
class CORDL_TYPE HDRDebugViewPass_ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field _CIExyUAVIndex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CIExyUAVIndex, put = setStaticF__CIExyUAVIndex)) int32_t _CIExyUAVIndex;

  /// @brief Field _DebugHDRModeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__DebugHDRModeId, put = setStaticF__DebugHDRModeId)) int32_t _DebugHDRModeId;

  /// @brief Field _HDRDebugParamsId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__HDRDebugParamsId, put = setStaticF__HDRDebugParamsId)) int32_t _HDRDebugParamsId;

  /// @brief Field _SizeOfHDRXYMapping, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SizeOfHDRXYMapping, put = setStaticF__SizeOfHDRXYMapping)) int32_t _SizeOfHDRXYMapping;

  /// @brief Field _xyTextureId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__xyTextureId, put = setStaticF__xyTextureId)) int32_t _xyTextureId;

  static inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants* New_ctor();

  /// @brief Method .ctor, addr 0x66ce474, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__CIExyUAVIndex();

  static inline int32_t getStaticF__DebugHDRModeId();

  static inline int32_t getStaticF__HDRDebugParamsId();

  static inline int32_t getStaticF__SizeOfHDRXYMapping();

  static inline int32_t getStaticF__xyTextureId();

  static inline void setStaticF__CIExyUAVIndex(int32_t value);

  static inline void setStaticF__DebugHDRModeId(int32_t value);

  static inline void setStaticF__HDRDebugParamsId(int32_t value);

  static inline void setStaticF__SizeOfHDRXYMapping(int32_t value);

  static inline void setStaticF__xyTextureId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HDRDebugViewPass_ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HDRDebugViewPass_ShaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HDRDebugViewPass_ShaderConstants(HDRDebugViewPass_ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HDRDebugViewPass_ShaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HDRDebugViewPass_ShaderConstants(HDRDebugViewPass_ShaderConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12811 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.HDRDebugViewPass/<>c
class CORDL_TYPE HDRDebugViewPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0,
                      put = setStaticF___9__17_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__17_0;

  /// @brief Field <>9__17_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_1,
                      put = setStaticF___9__17_1)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__17_1;

  static inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c* New_ctor();

  /// @brief Method <RenderHDRDebug>b__17_0, addr 0x66ce5b4, size 0xf0, virtual false, abstract: false, final false
  inline void _RenderHDRDebug_b__17_0(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <RenderHDRDebug>b__17_1, addr 0x66ce6a4, size 0xc8, virtual false, abstract: false, final false
  inline void _RenderHDRDebug_b__17_1(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x66ce5b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__17_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__17_1();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::HDRDebugViewPass___c* value);

  static inline void setStaticF___9__17_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__17_1(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HDRDebugViewPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HDRDebugViewPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HDRDebugViewPass___c(HDRDebugViewPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HDRDebugViewPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HDRDebugViewPass___c(HDRDebugViewPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12812 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::HDRDebugViewPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.HDRDebugViewPass
class CORDL_TYPE HDRDebugViewPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using HDRDebugPassId = ::UnityEngine::Rendering::Universal::HDRDebugViewPass_HDRDebugPassId;

  using PassDataCIExy = ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy;

  using PassDataDebugView = ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView;

  using ShaderConstants = ::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants;

  using __c = ::UnityEngine::Rendering::Universal::HDRDebugViewPass___c;

  /// @brief Field m_CIExyTarget, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CIExyTarget, put = __cordl_internal_set_m_CIExyTarget)) ::UnityEngine::Rendering::RTHandle* m_CIExyTarget;

  /// @brief Field m_PassDataCIExy, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassDataCIExy, put = __cordl_internal_set_m_PassDataCIExy)) ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* m_PassDataCIExy;

  /// @brief Field m_PassDataDebugView, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassDataDebugView,
                      put = __cordl_internal_set_m_PassDataDebugView)) ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* m_PassDataDebugView;

  /// @brief Field m_PassthroughRT, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassthroughRT, put = __cordl_internal_set_m_PassthroughRT)) ::UnityEngine::Rendering::RTHandle* m_PassthroughRT;

  /// @brief Field m_material, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_material, put = __cordl_internal_set_m_material)) ::UnityW<::UnityEngine::Material> m_material;

  /// @brief Method ConfigureDescriptorForCIEPrepass, addr 0x66cca5c, size 0x9c, virtual false, abstract: false, final false
  static inline void ConfigureDescriptorForCIEPrepass(::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor);

  /// @brief Method Dispose, addr 0x66cd2dc, size 0x34, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Execute, addr 0x66cd490, size 0x1c8, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecuteCIExyPrepass, addr 0x66ccc68, size 0x2ac, virtual false, abstract: false, final false
  static inline void ExecuteCIExyPrepass(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* data,
                                         ::UnityEngine::Rendering::RTHandle* sourceTexture, ::UnityEngine::Rendering::RTHandle* xyTarget, ::UnityEngine::Rendering::RTHandle* destTexture);

  /// @brief Method ExecuteHDRDebugViewFinalPass, addr 0x66ccf14, size 0x3c8, virtual false, abstract: false, final false
  static inline void ExecuteHDRDebugViewFinalPass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* data,
                                                  ::UnityEngine::Rendering::RTHandle* sourceTexture, ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::Rendering::RTHandle* xyTarget);

  /// @brief Method ExecutePass, addr 0x66cd658, size 0x1c4, virtual false, abstract: false, final false
  inline void ExecutePass(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* dataCIExy,
                          ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* dataDebugView, ::UnityEngine::Rendering::RTHandle* sourceTexture,
                          ::UnityEngine::Rendering::RTHandle* xyTarget, ::UnityEngine::Rendering::RTHandle* destTexture);

  /// @brief Method GetLuminanceParameters, addr 0x66ccaf8, size 0x170, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetLuminanceParameters(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  static inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass* New_ctor(::UnityEngine::Material* mat);

  /// @brief Method RenderHDRDebug, addr 0x66cd81c, size 0xc58, virtual false, abstract: false, final false
  inline void RenderHDRDebug(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                             ::UnityEngine::Rendering::RenderGraphModule::TextureHandle srcColor, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle overlayUITexture,
                             ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dstColor, ::UnityEngine::Rendering::Universal::HDRDebugMode hdrDebugMode);

  /// @brief Method Setup, addr 0x66cd310, size 0x180, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::HDRDebugMode hdrdebugMode);

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CIExyTarget() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CIExyTarget();

  constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* const& __cordl_internal_get_m_PassDataCIExy() const;

  constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*& __cordl_internal_get_m_PassDataCIExy();

  constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* const& __cordl_internal_get_m_PassDataDebugView() const;

  constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*& __cordl_internal_get_m_PassDataDebugView();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_PassthroughRT() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_PassthroughRT();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_material();

  constexpr void __cordl_internal_set_m_CIExyTarget(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_PassDataCIExy(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* value);

  constexpr void __cordl_internal_set_m_PassDataDebugView(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* value);

  constexpr void __cordl_internal_set_m_PassthroughRT(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_material(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x66cc920, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Material* mat);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HDRDebugViewPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HDRDebugViewPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HDRDebugViewPass(HDRDebugViewPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HDRDebugViewPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HDRDebugViewPass(HDRDebugViewPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12813 };

  /// @brief Field m_PassDataCIExy, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy* ___m_PassDataCIExy;

  /// @brief Field m_PassDataDebugView, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView* ___m_PassDataDebugView;

  /// @brief Field m_CIExyTarget, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_CIExyTarget;

  /// @brief Field m_PassthroughRT, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_PassthroughRT;

  /// @brief Field m_material, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass, ___m_PassDataCIExy) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass, ___m_PassDataDebugView) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass, ___m_CIExyTarget) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass, ___m_PassthroughRT) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRDebugViewPass, ___m_material) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::HDRDebugViewPass, 0xe0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::HDRDebugViewPass_HDRDebugPassId, "UnityEngine.Rendering.Universal", "HDRDebugViewPass/HDRDebugPassId");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::HDRDebugViewPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::HDRDebugViewPass*, "UnityEngine.Rendering.Universal", "HDRDebugViewPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataCIExy*, "UnityEngine.Rendering.Universal", "HDRDebugViewPass/PassDataCIExy");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::HDRDebugViewPass_PassDataDebugView*, "UnityEngine.Rendering.Universal", "HDRDebugViewPass/PassDataDebugView");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::HDRDebugViewPass_ShaderConstants*, "UnityEngine.Rendering.Universal", "HDRDebugViewPass/ShaderConstants");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::HDRDebugViewPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::HDRDebugViewPass___c*, "UnityEngine.Rendering.Universal", "HDRDebugViewPass/<>c");
