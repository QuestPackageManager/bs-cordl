#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/STP.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(STP)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct AccessFlags;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class ComputeGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IBaseRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct STP_Config;
}
namespace UnityEngine::Rendering {
class STP_HistoryContext;
}
namespace UnityEngine::Rendering {
struct STP_HistoryTextureType;
}
namespace UnityEngine::Rendering {
struct STP_HistoryUpdateInfo;
}
namespace UnityEngine::Rendering {
struct STP_PerViewConfig;
}
namespace UnityEngine::Rendering {
class STP_PreTaaData;
}
namespace UnityEngine::Rendering {
struct STP_ProfileId;
}
namespace UnityEngine::Rendering {
class STP_RuntimeResources;
}
namespace UnityEngine::Rendering {
class STP_SetupData;
}
namespace UnityEngine::Rendering {
class STP_ShaderKeywords;
}
namespace UnityEngine::Rendering {
class STP_ShaderResources;
}
namespace UnityEngine::Rendering {
struct STP_StpConstantBufferData;
}
namespace UnityEngine::Rendering {
struct STP_StpSetupPerViewConstants;
}
namespace UnityEngine::Rendering {
class STP_TaaData;
}
namespace UnityEngine::Rendering {
class STP___c;
}
namespace UnityEngine::Rendering {
struct StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
struct Hash128;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct STP_HistoryTextureType;
}
namespace UnityEngine::Rendering {
struct STP_ProfileId;
}
namespace UnityEngine::Rendering {
struct STP_StpSetupPerViewConstants;
}
namespace UnityEngine::Rendering {
class STP;
}
namespace UnityEngine::Rendering {
class STP_HistoryContext;
}
namespace UnityEngine::Rendering {
class STP_PreTaaData;
}
namespace UnityEngine::Rendering {
class STP_RuntimeResources;
}
namespace UnityEngine::Rendering {
class STP_SetupData;
}
namespace UnityEngine::Rendering {
class STP_ShaderKeywords;
}
namespace UnityEngine::Rendering {
class STP_ShaderResources;
}
namespace UnityEngine::Rendering {
class STP_TaaData;
}
namespace UnityEngine::Rendering {
class STP___c;
}
namespace UnityEngine::Rendering {
struct STP_Config;
}
namespace UnityEngine::Rendering {
struct STP_HistoryUpdateInfo;
}
namespace UnityEngine::Rendering {
struct STP_PerViewConfig;
}
namespace UnityEngine::Rendering {
struct STP_StpConstantBufferData;
}
namespace UnityEngine::Rendering {
struct StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::STP_HistoryTextureType);
MARK_VAL_T(::UnityEngine::Rendering::STP_ProfileId);
MARK_VAL_T(::UnityEngine::Rendering::STP_StpSetupPerViewConstants);
MARK_REF_PTR_T(::UnityEngine::Rendering::STP);
MARK_REF_PTR_T(::UnityEngine::Rendering::STP_HistoryContext);
MARK_REF_PTR_T(::UnityEngine::Rendering::STP_PreTaaData);
MARK_REF_PTR_T(::UnityEngine::Rendering::STP_RuntimeResources);
MARK_REF_PTR_T(::UnityEngine::Rendering::STP_SetupData);
MARK_REF_PTR_T(::UnityEngine::Rendering::STP_ShaderKeywords);
MARK_REF_PTR_T(::UnityEngine::Rendering::STP_ShaderResources);
MARK_REF_PTR_T(::UnityEngine::Rendering::STP_TaaData);
MARK_REF_PTR_T(::UnityEngine::Rendering::STP___c);
MARK_VAL_T(::UnityEngine::Rendering::STP_Config);
MARK_VAL_T(::UnityEngine::Rendering::STP_HistoryUpdateInfo);
MARK_VAL_T(::UnityEngine::Rendering::STP_PerViewConfig);
MARK_VAL_T(::UnityEngine::Rendering::STP_StpConstantBufferData);
MARK_VAL_T(::UnityEngine::Rendering::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer);
// Dependencies UnityEngine.Matrix4x4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/PerViewConfig
struct CORDL_TYPE STP_PerViewConfig {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr STP_PerViewConfig();

  // Ctor Parameters [CppParam { name: "currentProj", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "lastProj", ty: "::UnityEngine::Matrix4x4", modifiers: "",
  // def_value: None }, CppParam { name: "lastLastProj", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "currentView", ty: "::UnityEngine::Matrix4x4", modifiers:
  // "", def_value: None }, CppParam { name: "lastView", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "lastLastView", ty: "::UnityEngine::Matrix4x4", modifiers:
  // "", def_value: None }]
  constexpr STP_PerViewConfig(::UnityEngine::Matrix4x4 currentProj, ::UnityEngine::Matrix4x4 lastProj, ::UnityEngine::Matrix4x4 lastLastProj, ::UnityEngine::Matrix4x4 currentView,
                              ::UnityEngine::Matrix4x4 lastView, ::UnityEngine::Matrix4x4 lastLastView) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12187 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x180 };

  /// @brief Field currentProj, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 currentProj;

  /// @brief Field lastProj, offset: 0x40, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 lastProj;

  /// @brief Field lastLastProj, offset: 0x80, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 lastLastProj;

  /// @brief Field currentView, offset: 0xc0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 currentView;

  /// @brief Field lastView, offset: 0x100, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 lastView;

  /// @brief Field lastLastView, offset: 0x140, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 lastLastView;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::STP_PerViewConfig, currentProj) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_PerViewConfig, lastProj) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_PerViewConfig, lastLastProj) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_PerViewConfig, currentView) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_PerViewConfig, lastView) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_PerViewConfig, lastLastView) == 0x140, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP_PerViewConfig, 0x180>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector2Int
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/Config
struct CORDL_TYPE STP_Config {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr STP_Config();

  // Ctor Parameters [CppParam { name: "noiseTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "inputColor", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None }, CppParam { name: "inputDepth", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle",
  // modifiers: "", def_value: None }, CppParam { name: "inputMotion", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None }, CppParam { name:
  // "inputStencil", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None }, CppParam { name: "debugView", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None }, CppParam { name: "destination", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle",
  // modifiers: "", def_value: None }, CppParam { name: "historyContext", ty: "::UnityEngine::Rendering::STP_HistoryContext*", modifiers: "", def_value: None }, CppParam { name: "enableHwDrs", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "enableTexArray", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enableMotionScaling", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "farPlane", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "frameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hasValidHistory", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "stencilMask", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "debugViewIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "deltaTime", ty: "float_t", modifiers: "", def_value: None
  // }, CppParam { name: "lastDeltaTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "currentImageSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None },
  // CppParam { name: "priorImageSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "outputImageSize", ty: "::UnityEngine::Vector2Int", modifiers: "",
  // def_value: None }, CppParam { name: "numActiveViews", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "perViewConfigs", ty:
  // "::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig,::Array<::UnityEngine::Rendering::STP_PerViewConfig>*>", modifiers: "", def_value: None }]
  constexpr STP_Config(::UnityW<::UnityEngine::Texture2D> noiseTexture, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputColor,
                       ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputDepth, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputMotion,
                       ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputStencil, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle debugView,
                       ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Rendering::STP_HistoryContext* historyContext, bool enableHwDrs, bool enableTexArray,
                       bool enableMotionScaling, float_t nearPlane, float_t farPlane, int32_t frameIndex, bool hasValidHistory, int32_t stencilMask, int32_t debugViewIndex, float_t deltaTime,
                       float_t lastDeltaTime, ::UnityEngine::Vector2Int currentImageSize, ::UnityEngine::Vector2Int priorImageSize, ::UnityEngine::Vector2Int outputImageSize, int32_t numActiveViews,
                       ::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig, ::Array<::UnityEngine::Rendering::STP_PerViewConfig>*> perViewConfigs) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12188 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb8 };

  /// @brief Field noiseTexture, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> noiseTexture;

  /// @brief Field inputColor, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputColor;

  /// @brief Field inputDepth, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputDepth;

  /// @brief Field inputMotion, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputMotion;

  /// @brief Field inputStencil, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputStencil;

  /// @brief Field debugView, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle debugView;

  /// @brief Field destination, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination;

  /// @brief Field historyContext, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::STP_HistoryContext* historyContext;

  /// @brief Field enableHwDrs, offset: 0x70, size: 0x1, def value: None
  bool enableHwDrs;

  /// @brief Field enableTexArray, offset: 0x71, size: 0x1, def value: None
  bool enableTexArray;

  /// @brief Field enableMotionScaling, offset: 0x72, size: 0x1, def value: None
  bool enableMotionScaling;

  /// @brief Field nearPlane, offset: 0x74, size: 0x4, def value: None
  float_t nearPlane;

  /// @brief Field farPlane, offset: 0x78, size: 0x4, def value: None
  float_t farPlane;

  /// @brief Field frameIndex, offset: 0x7c, size: 0x4, def value: None
  int32_t frameIndex;

  /// @brief Field hasValidHistory, offset: 0x80, size: 0x1, def value: None
  bool hasValidHistory;

  /// @brief Field stencilMask, offset: 0x84, size: 0x4, def value: None
  int32_t stencilMask;

  /// @brief Field debugViewIndex, offset: 0x88, size: 0x4, def value: None
  int32_t debugViewIndex;

  /// @brief Field deltaTime, offset: 0x8c, size: 0x4, def value: None
  float_t deltaTime;

  /// @brief Field lastDeltaTime, offset: 0x90, size: 0x4, def value: None
  float_t lastDeltaTime;

  /// @brief Field currentImageSize, offset: 0x94, size: 0x8, def value: None
  ::UnityEngine::Vector2Int currentImageSize;

  /// @brief Field priorImageSize, offset: 0x9c, size: 0x8, def value: None
  ::UnityEngine::Vector2Int priorImageSize;

  /// @brief Field outputImageSize, offset: 0xa4, size: 0x8, def value: None
  ::UnityEngine::Vector2Int outputImageSize;

  /// @brief Field numActiveViews, offset: 0xac, size: 0x4, def value: None
  int32_t numActiveViews;

  /// @brief Field perViewConfigs, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig, ::Array<::UnityEngine::Rendering::STP_PerViewConfig>*> perViewConfigs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::STP_Config, noiseTexture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, inputColor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, inputDepth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, inputMotion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, inputStencil) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, debugView) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, destination) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, historyContext) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, enableHwDrs) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, enableTexArray) == 0x71, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, enableMotionScaling) == 0x72, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, nearPlane) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, farPlane) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, frameIndex) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, hasValidHistory) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, stencilMask) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, debugViewIndex) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, deltaTime) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, lastDeltaTime) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, currentImageSize) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, priorImageSize) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, outputImageSize) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, numActiveViews) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_Config, perViewConfigs) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP_Config, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/HistoryTextureType
struct CORDL_TYPE STP_HistoryTextureType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __STP_HistoryTextureType_Unwrapped
  enum struct __STP_HistoryTextureType_Unwrapped : int32_t {
    __E_DepthMotion = static_cast<int32_t>(0x0),
    __E_Luma = static_cast<int32_t>(0x1),
    __E_Convergence = static_cast<int32_t>(0x2),
    __E_Feedback = static_cast<int32_t>(0x3),
    __E_Count = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __STP_HistoryTextureType_Unwrapped() const noexcept {
    return static_cast<__STP_HistoryTextureType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr STP_HistoryTextureType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr STP_HistoryTextureType(int32_t value__) noexcept;

  /// @brief Field Convergence value: I32(2)
  static ::UnityEngine::Rendering::STP_HistoryTextureType const Convergence;

  /// @brief Field Count value: I32(4)
  static ::UnityEngine::Rendering::STP_HistoryTextureType const Count;

  /// @brief Field DepthMotion value: I32(0)
  static ::UnityEngine::Rendering::STP_HistoryTextureType const DepthMotion;

  /// @brief Field Feedback value: I32(3)
  static ::UnityEngine::Rendering::STP_HistoryTextureType const Feedback;

  /// @brief Field Luma value: I32(1)
  static ::UnityEngine::Rendering::STP_HistoryTextureType const Luma;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12189 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::STP_HistoryTextureType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP_HistoryTextureType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Vector2Int
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/HistoryUpdateInfo
struct CORDL_TYPE STP_HistoryUpdateInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr STP_HistoryUpdateInfo();

  // Ctor Parameters [CppParam { name: "preUpscaleSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "postUpscaleSize", ty: "::UnityEngine::Vector2Int",
  // modifiers: "", def_value: None }, CppParam { name: "useHwDrs", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useTexArray", ty: "bool", modifiers: "", def_value: None }]
  constexpr STP_HistoryUpdateInfo(::UnityEngine::Vector2Int preUpscaleSize, ::UnityEngine::Vector2Int postUpscaleSize, bool useHwDrs, bool useTexArray) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12190 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field preUpscaleSize, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2Int preUpscaleSize;

  /// @brief Field postUpscaleSize, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2Int postUpscaleSize;

  /// @brief Field useHwDrs, offset: 0x10, size: 0x1, def value: None
  bool useHwDrs;

  /// @brief Field useTexArray, offset: 0x11, size: 0x1, def value: None
  bool useTexArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::STP_HistoryUpdateInfo, preUpscaleSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_HistoryUpdateInfo, postUpscaleSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_HistoryUpdateInfo, useHwDrs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_HistoryUpdateInfo, useTexArray) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP_HistoryUpdateInfo, 0x14>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Hash128
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.STP/HistoryContext
class CORDL_TYPE STP_HistoryContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_hash, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_hash, put = __cordl_internal_set_m_hash)) ::UnityEngine::Hash128 m_hash;

  /// @brief Field m_textures, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_textures, put = __cordl_internal_set_m_textures)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      m_textures;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x65886ec, size 0x88, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetCurrentHistoryTexture, addr 0x6587ebc, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetCurrentHistoryTexture(::UnityEngine::Rendering::STP_HistoryTextureType historyType, int32_t frameIndex);

  /// @brief Method GetPreviousHistoryTexture, addr 0x6587e80, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetPreviousHistoryTexture(::UnityEngine::Rendering::STP_HistoryTextureType historyType, int32_t frameIndex);

  static inline ::UnityEngine::Rendering::STP_HistoryContext* New_ctor();

  /// @brief Method Update, addr 0x658834c, size 0x3a0, virtual false, abstract: false, final false
  inline bool Update(::ByRef<::UnityEngine::Rendering::STP_HistoryUpdateInfo> info);

  constexpr ::UnityEngine::Hash128 const& __cordl_internal_get_m_hash() const;

  constexpr ::UnityEngine::Hash128& __cordl_internal_get_m_hash();

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get_m_textures() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>& __cordl_internal_get_m_textures();

  constexpr void __cordl_internal_set_m_hash(::UnityEngine::Hash128 value);

  constexpr void __cordl_internal_set_m_textures(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  /// @brief Method .ctor, addr 0x6588774, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr STP_HistoryContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "STP_HistoryContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  STP_HistoryContext(STP_HistoryContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "STP_HistoryContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  STP_HistoryContext(STP_HistoryContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12191 };

  /// @brief Field m_textures, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> ___m_textures;

  /// @brief Field m_hash, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Hash128 ___m_hash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::STP_HistoryContext, ___m_textures) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_HistoryContext, ___m_hash) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP_HistoryContext, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/StpSetupPerViewConstants
struct CORDL_TYPE STP_StpSetupPerViewConstants {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __STP_StpSetupPerViewConstants_Unwrapped
  enum struct __STP_StpSetupPerViewConstants_Unwrapped : int32_t {
    __E_Count = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __STP_StpSetupPerViewConstants_Unwrapped() const noexcept {
    return static_cast<__STP_StpSetupPerViewConstants_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr STP_StpSetupPerViewConstants();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr STP_StpSetupPerViewConstants(int32_t value__) noexcept;

  /// @brief Field Count value: I32(8)
  static ::UnityEngine::Rendering::STP_StpSetupPerViewConstants const Count;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12192 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::STP_StpSetupPerViewConstants, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP_StpSetupPerViewConstants, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/StpConstantBufferData/<_StpSetupPerViewConstants>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12193 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x100 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x100 - 0x4 = 0xfc, packed as 0xfc
  uint8_t _cordl_size_padding[0xfc];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer, 0x100>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.STP::StpConstantBufferData::<_StpSetupPerViewConstants>e__FixedBuffer, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/StpConstantBufferData
struct CORDL_TYPE STP_StpConstantBufferData {
public:
  // Declarations
  using __StpSetupPerViewConstants_e__FixedBuffer = ::UnityEngine::Rendering::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr STP_StpConstantBufferData();

  // Ctor Parameters [CppParam { name: "_StpCommonConstant", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_StpSetupConstants0", ty: "::UnityEngine::Vector4",
  // modifiers: "", def_value: None }, CppParam { name: "_StpSetupConstants1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_StpSetupConstants2", ty:
  // "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_StpSetupConstants3", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name:
  // "_StpSetupConstants4", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_StpSetupConstants5", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None },
  // CppParam { name: "_StpSetupPerViewConstants", ty: "::UnityEngine::Rendering::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer", modifiers: "", def_value: None }, CppParam {
  // name: "_StpDilConstants0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_StpTaaConstants0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None },
  // CppParam { name: "_StpTaaConstants1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_StpTaaConstants2", ty: "::UnityEngine::Vector4", modifiers: "", def_value:
  // None }, CppParam { name: "_StpTaaConstants3", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr STP_StpConstantBufferData(::UnityEngine::Vector4 _StpCommonConstant, ::UnityEngine::Vector4 _StpSetupConstants0, ::UnityEngine::Vector4 _StpSetupConstants1,
                                      ::UnityEngine::Vector4 _StpSetupConstants2, ::UnityEngine::Vector4 _StpSetupConstants3, ::UnityEngine::Vector4 _StpSetupConstants4,
                                      ::UnityEngine::Vector4 _StpSetupConstants5,
                                      ::UnityEngine::Rendering::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer _StpSetupPerViewConstants, ::UnityEngine::Vector4 _StpDilConstants0,
                                      ::UnityEngine::Vector4 _StpTaaConstants0, ::UnityEngine::Vector4 _StpTaaConstants1, ::UnityEngine::Vector4 _StpTaaConstants2,
                                      ::UnityEngine::Vector4 _StpTaaConstants3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12194 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c0 };

  /// @brief Field _StpCommonConstant, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Vector4 _StpCommonConstant;

  /// @brief Field _StpSetupConstants0, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 _StpSetupConstants0;

  /// @brief Field _StpSetupConstants1, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 _StpSetupConstants1;

  /// @brief Field _StpSetupConstants2, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Vector4 _StpSetupConstants2;

  /// @brief Field _StpSetupConstants3, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Vector4 _StpSetupConstants3;

  /// @brief Field _StpSetupConstants4, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Vector4 _StpSetupConstants4;

  /// @brief Field _StpSetupConstants5, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Vector4 _StpSetupConstants5;

  /// @brief Field _StpSetupPerViewConstants, offset: 0x70, size: 0x100, def value: None
  ::UnityEngine::Rendering::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer _StpSetupPerViewConstants;

  /// @brief Field _StpDilConstants0, offset: 0x170, size: 0x10, def value: None
  ::UnityEngine::Vector4 _StpDilConstants0;

  /// @brief Field _StpTaaConstants0, offset: 0x180, size: 0x10, def value: None
  ::UnityEngine::Vector4 _StpTaaConstants0;

  /// @brief Field _StpTaaConstants1, offset: 0x190, size: 0x10, def value: None
  ::UnityEngine::Vector4 _StpTaaConstants1;

  /// @brief Field _StpTaaConstants2, offset: 0x1a0, size: 0x10, def value: None
  ::UnityEngine::Vector4 _StpTaaConstants2;

  /// @brief Field _StpTaaConstants3, offset: 0x1b0, size: 0x10, def value: None
  ::UnityEngine::Vector4 _StpTaaConstants3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::STP_StpConstantBufferData, _StpCommonConstant) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_StpConstantBufferData, _StpSetupConstants0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_StpConstantBufferData, _StpSetupConstants1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_StpConstantBufferData, _StpSetupConstants2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_StpConstantBufferData, _StpSetupConstants3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_StpConstantBufferData, _StpSetupConstants4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_StpConstantBufferData, _StpSetupConstants5) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_StpConstantBufferData, _StpSetupPerViewConstants) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_StpConstantBufferData, _StpDilConstants0) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_StpConstantBufferData, _StpTaaConstants0) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_StpConstantBufferData, _StpTaaConstants1) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_StpConstantBufferData, _StpTaaConstants2) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_StpConstantBufferData, _StpTaaConstants3) == 0x1b0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP_StpConstantBufferData, 0x1c0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.STP/ShaderResources
class CORDL_TYPE STP_ShaderResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field _StpBlueNoiseIn, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpBlueNoiseIn, put = setStaticF__StpBlueNoiseIn)) int32_t _StpBlueNoiseIn;

  /// @brief Field _StpConstantBufferData, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpConstantBufferData, put = setStaticF__StpConstantBufferData)) int32_t _StpConstantBufferData;

  /// @brief Field _StpConvergence, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpConvergence, put = setStaticF__StpConvergence)) int32_t _StpConvergence;

  /// @brief Field _StpDebugOut, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpDebugOut, put = setStaticF__StpDebugOut)) int32_t _StpDebugOut;

  /// @brief Field _StpDepthMotion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpDepthMotion, put = setStaticF__StpDepthMotion)) int32_t _StpDepthMotion;

  /// @brief Field _StpFeedback, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpFeedback, put = setStaticF__StpFeedback)) int32_t _StpFeedback;

  /// @brief Field _StpInputColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpInputColor, put = setStaticF__StpInputColor)) int32_t _StpInputColor;

  /// @brief Field _StpInputDepth, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpInputDepth, put = setStaticF__StpInputDepth)) int32_t _StpInputDepth;

  /// @brief Field _StpInputMotion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpInputMotion, put = setStaticF__StpInputMotion)) int32_t _StpInputMotion;

  /// @brief Field _StpInputStencil, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpInputStencil, put = setStaticF__StpInputStencil)) int32_t _StpInputStencil;

  /// @brief Field _StpIntermediateColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpIntermediateColor, put = setStaticF__StpIntermediateColor)) int32_t _StpIntermediateColor;

  /// @brief Field _StpIntermediateConvergence, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpIntermediateConvergence, put = setStaticF__StpIntermediateConvergence)) int32_t _StpIntermediateConvergence;

  /// @brief Field _StpIntermediateWeights, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpIntermediateWeights, put = setStaticF__StpIntermediateWeights)) int32_t _StpIntermediateWeights;

  /// @brief Field _StpLuma, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpLuma, put = setStaticF__StpLuma)) int32_t _StpLuma;

  /// @brief Field _StpOutput, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpOutput, put = setStaticF__StpOutput)) int32_t _StpOutput;

  /// @brief Field _StpPriorConvergence, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpPriorConvergence, put = setStaticF__StpPriorConvergence)) int32_t _StpPriorConvergence;

  /// @brief Field _StpPriorDepthMotion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpPriorDepthMotion, put = setStaticF__StpPriorDepthMotion)) int32_t _StpPriorDepthMotion;

  /// @brief Field _StpPriorFeedback, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpPriorFeedback, put = setStaticF__StpPriorFeedback)) int32_t _StpPriorFeedback;

  /// @brief Field _StpPriorLuma, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StpPriorLuma, put = setStaticF__StpPriorLuma)) int32_t _StpPriorLuma;

  static inline int32_t getStaticF__StpBlueNoiseIn();

  static inline int32_t getStaticF__StpConstantBufferData();

  static inline int32_t getStaticF__StpConvergence();

  static inline int32_t getStaticF__StpDebugOut();

  static inline int32_t getStaticF__StpDepthMotion();

  static inline int32_t getStaticF__StpFeedback();

  static inline int32_t getStaticF__StpInputColor();

  static inline int32_t getStaticF__StpInputDepth();

  static inline int32_t getStaticF__StpInputMotion();

  static inline int32_t getStaticF__StpInputStencil();

  static inline int32_t getStaticF__StpIntermediateColor();

  static inline int32_t getStaticF__StpIntermediateConvergence();

  static inline int32_t getStaticF__StpIntermediateWeights();

  static inline int32_t getStaticF__StpLuma();

  static inline int32_t getStaticF__StpOutput();

  static inline int32_t getStaticF__StpPriorConvergence();

  static inline int32_t getStaticF__StpPriorDepthMotion();

  static inline int32_t getStaticF__StpPriorFeedback();

  static inline int32_t getStaticF__StpPriorLuma();

  static inline void setStaticF__StpBlueNoiseIn(int32_t value);

  static inline void setStaticF__StpConstantBufferData(int32_t value);

  static inline void setStaticF__StpConvergence(int32_t value);

  static inline void setStaticF__StpDebugOut(int32_t value);

  static inline void setStaticF__StpDepthMotion(int32_t value);

  static inline void setStaticF__StpFeedback(int32_t value);

  static inline void setStaticF__StpInputColor(int32_t value);

  static inline void setStaticF__StpInputDepth(int32_t value);

  static inline void setStaticF__StpInputMotion(int32_t value);

  static inline void setStaticF__StpInputStencil(int32_t value);

  static inline void setStaticF__StpIntermediateColor(int32_t value);

  static inline void setStaticF__StpIntermediateConvergence(int32_t value);

  static inline void setStaticF__StpIntermediateWeights(int32_t value);

  static inline void setStaticF__StpLuma(int32_t value);

  static inline void setStaticF__StpOutput(int32_t value);

  static inline void setStaticF__StpPriorConvergence(int32_t value);

  static inline void setStaticF__StpPriorDepthMotion(int32_t value);

  static inline void setStaticF__StpPriorFeedback(int32_t value);

  static inline void setStaticF__StpPriorLuma(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr STP_ShaderResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "STP_ShaderResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  STP_ShaderResources(STP_ShaderResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "STP_ShaderResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  STP_ShaderResources(STP_ShaderResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12195 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP_ShaderResources, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.STP/ShaderKeywords
class CORDL_TYPE STP_ShaderKeywords : public ::System::Object {
public:
  // Declarations
  /// @brief Field DisableTexture2DXArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DisableTexture2DXArray, put = setStaticF_DisableTexture2DXArray)) ::StringW DisableTexture2DXArray;

  /// @brief Field EnableDebugMode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EnableDebugMode, put = setStaticF_EnableDebugMode)) ::StringW EnableDebugMode;

  /// @brief Field EnableLargeKernel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EnableLargeKernel, put = setStaticF_EnableLargeKernel)) ::StringW EnableLargeKernel;

  /// @brief Field EnableStencilResponsive, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EnableStencilResponsive, put = setStaticF_EnableStencilResponsive)) ::StringW EnableStencilResponsive;

  static inline ::StringW getStaticF_DisableTexture2DXArray();

  static inline ::StringW getStaticF_EnableDebugMode();

  static inline ::StringW getStaticF_EnableLargeKernel();

  static inline ::StringW getStaticF_EnableStencilResponsive();

  static inline void setStaticF_DisableTexture2DXArray(::StringW value);

  static inline void setStaticF_EnableDebugMode(::StringW value);

  static inline void setStaticF_EnableLargeKernel(::StringW value);

  static inline void setStaticF_EnableStencilResponsive(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr STP_ShaderKeywords();

public:
  // Ctor Parameters [CppParam { name: "", ty: "STP_ShaderKeywords", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  STP_ShaderKeywords(STP_ShaderKeywords&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "STP_ShaderKeywords", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  STP_ShaderKeywords(STP_ShaderKeywords const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12196 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP_ShaderKeywords, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.STP/RuntimeResources
class CORDL_TYPE STP_RuntimeResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_preTaaCS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_preTaaCS, put = __cordl_internal_set_m_preTaaCS)) ::UnityW<::UnityEngine::ComputeShader> m_preTaaCS;

  /// @brief Field m_setupCS, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_setupCS, put = __cordl_internal_set_m_setupCS)) ::UnityW<::UnityEngine::ComputeShader> m_setupCS;

  /// @brief Field m_taaCS, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_taaCS, put = __cordl_internal_set_m_taaCS)) ::UnityW<::UnityEngine::ComputeShader> m_taaCS;

  __declspec(property(get = get_preTaaCS, put = set_preTaaCS)) ::UnityW<::UnityEngine::ComputeShader> preTaaCS;

  __declspec(property(get = get_setupCS, put = set_setupCS)) ::UnityW<::UnityEngine::ComputeShader> setupCS;

  __declspec(property(get = get_taaCS, put = set_taaCS)) ::UnityW<::UnityEngine::ComputeShader> taaCS;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::STP_RuntimeResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_preTaaCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_preTaaCS();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_setupCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_setupCS();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_taaCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_taaCS();

  constexpr void __cordl_internal_set_m_preTaaCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_setupCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_taaCS(::UnityW<::UnityEngine::ComputeShader> value);

  /// @brief Method .ctor, addr 0x6588e2c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_preTaaCS, addr 0x6588d3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_preTaaCS();

  /// @brief Method get_setupCS, addr 0x6588cc4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_setupCS();

  /// @brief Method get_taaCS, addr 0x6588db4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_taaCS();

  /// @brief Method get_version, addr 0x6588cbc, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

  /// @brief Method set_preTaaCS, addr 0x6588d44, size 0x70, virtual false, abstract: false, final false
  inline void set_preTaaCS(::UnityEngine::ComputeShader* value);

  /// @brief Method set_setupCS, addr 0x6588ccc, size 0x70, virtual false, abstract: false, final false
  inline void set_setupCS(::UnityEngine::ComputeShader* value);

  /// @brief Method set_taaCS, addr 0x6588dbc, size 0x70, virtual false, abstract: false, final false
  inline void set_taaCS(::UnityEngine::ComputeShader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr STP_RuntimeResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "STP_RuntimeResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  STP_RuntimeResources(STP_RuntimeResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "STP_RuntimeResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  STP_RuntimeResources(STP_RuntimeResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12197 };

  /// @brief Field m_setupCS, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_setupCS;

  /// @brief Field m_preTaaCS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_preTaaCS;

  /// @brief Field m_taaCS, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_taaCS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::STP_RuntimeResources, ___m_setupCS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_RuntimeResources, ___m_preTaaCS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_RuntimeResources, ___m_taaCS) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP_RuntimeResources, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/ProfileId
struct CORDL_TYPE STP_ProfileId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __STP_ProfileId_Unwrapped
  enum struct __STP_ProfileId_Unwrapped : int32_t {
    __E_StpSetup = static_cast<int32_t>(0x0),
    __E_StpPreTaa = static_cast<int32_t>(0x1),
    __E_StpTaa = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __STP_ProfileId_Unwrapped() const noexcept {
    return static_cast<__STP_ProfileId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr STP_ProfileId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr STP_ProfileId(int32_t value__) noexcept;

  /// @brief Field StpPreTaa value: I32(1)
  static ::UnityEngine::Rendering::STP_ProfileId const StpPreTaa;

  /// @brief Field StpSetup value: I32(0)
  static ::UnityEngine::Rendering::STP_ProfileId const StpSetup;

  /// @brief Field StpTaa value: I32(2)
  static ::UnityEngine::Rendering::STP_ProfileId const StpTaa;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12198 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::STP_ProfileId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP_ProfileId, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.STP::StpConstantBufferData, UnityEngine.Vector2Int
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.STP/SetupData
class CORDL_TYPE STP_SetupData : public ::System::Object {
public:
  // Declarations
  /// @brief Field constantBufferData, offset 0x28, size 0x1c0
  __declspec(property(get = __cordl_internal_get_constantBufferData, put = __cordl_internal_set_constantBufferData)) ::UnityEngine::Rendering::STP_StpConstantBufferData constantBufferData;

  /// @brief Field cs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cs, put = __cordl_internal_set_cs)) ::UnityW<::UnityEngine::ComputeShader> cs;

  /// @brief Field debugView, offset 0x1f8, size 0x10
  __declspec(property(get = __cordl_internal_get_debugView, put = __cordl_internal_set_debugView)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle debugView;

  /// @brief Field depthMotion, offset 0x278, size 0x10
  __declspec(property(get = __cordl_internal_get_depthMotion, put = __cordl_internal_set_depthMotion)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthMotion;

  /// @brief Field dispatchSize, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dispatchSize, put = __cordl_internal_set_dispatchSize)) ::UnityEngine::Vector2Int dispatchSize;

  /// @brief Field inputColor, offset 0x208, size 0x10
  __declspec(property(get = __cordl_internal_get_inputColor, put = __cordl_internal_set_inputColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputColor;

  /// @brief Field inputDepth, offset 0x218, size 0x10
  __declspec(property(get = __cordl_internal_get_inputDepth, put = __cordl_internal_set_inputDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputDepth;

  /// @brief Field inputMotion, offset 0x228, size 0x10
  __declspec(property(get = __cordl_internal_get_inputMotion, put = __cordl_internal_set_inputMotion)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputMotion;

  /// @brief Field inputStencil, offset 0x238, size 0x10
  __declspec(property(get = __cordl_internal_get_inputStencil, put = __cordl_internal_set_inputStencil)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputStencil;

  /// @brief Field intermediateColor, offset 0x248, size 0x10
  __declspec(property(get = __cordl_internal_get_intermediateColor, put = __cordl_internal_set_intermediateColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle intermediateColor;

  /// @brief Field intermediateConvergence, offset 0x258, size 0x10
  __declspec(property(get = __cordl_internal_get_intermediateConvergence,
                      put = __cordl_internal_set_intermediateConvergence)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle intermediateConvergence;

  /// @brief Field kernelIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelIndex, put = __cordl_internal_set_kernelIndex)) int32_t kernelIndex;

  /// @brief Field luma, offset 0x298, size 0x10
  __declspec(property(get = __cordl_internal_get_luma, put = __cordl_internal_set_luma)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle luma;

  /// @brief Field noiseTexture, offset 0x1e8, size 0x10
  __declspec(property(get = __cordl_internal_get_noiseTexture, put = __cordl_internal_set_noiseTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle noiseTexture;

  /// @brief Field priorConvergence, offset 0x2b8, size 0x10
  __declspec(property(get = __cordl_internal_get_priorConvergence, put = __cordl_internal_set_priorConvergence)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle priorConvergence;

  /// @brief Field priorDepthMotion, offset 0x268, size 0x10
  __declspec(property(get = __cordl_internal_get_priorDepthMotion, put = __cordl_internal_set_priorDepthMotion)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle priorDepthMotion;

  /// @brief Field priorFeedback, offset 0x2a8, size 0x10
  __declspec(property(get = __cordl_internal_get_priorFeedback, put = __cordl_internal_set_priorFeedback)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle priorFeedback;

  /// @brief Field priorLuma, offset 0x288, size 0x10
  __declspec(property(get = __cordl_internal_get_priorLuma, put = __cordl_internal_set_priorLuma)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle priorLuma;

  /// @brief Field viewCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_viewCount, put = __cordl_internal_set_viewCount)) int32_t viewCount;

  static inline ::UnityEngine::Rendering::STP_SetupData* New_ctor();

  constexpr ::UnityEngine::Rendering::STP_StpConstantBufferData const& __cordl_internal_get_constantBufferData() const;

  constexpr ::UnityEngine::Rendering::STP_StpConstantBufferData& __cordl_internal_get_constantBufferData();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_cs() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_cs();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_debugView() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_debugView();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depthMotion() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depthMotion();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_dispatchSize() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_dispatchSize();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_inputColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_inputColor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_inputDepth() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_inputDepth();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_inputMotion() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_inputMotion();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_inputStencil() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_inputStencil();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_intermediateColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_intermediateColor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_intermediateConvergence() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_intermediateConvergence();

  constexpr int32_t const& __cordl_internal_get_kernelIndex() const;

  constexpr int32_t& __cordl_internal_get_kernelIndex();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_luma() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_luma();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_noiseTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_noiseTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_priorConvergence() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_priorConvergence();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_priorDepthMotion() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_priorDepthMotion();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_priorFeedback() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_priorFeedback();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_priorLuma() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_priorLuma();

  constexpr int32_t const& __cordl_internal_get_viewCount() const;

  constexpr int32_t& __cordl_internal_get_viewCount();

  constexpr void __cordl_internal_set_constantBufferData(::UnityEngine::Rendering::STP_StpConstantBufferData value);

  constexpr void __cordl_internal_set_cs(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_debugView(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_depthMotion(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_dispatchSize(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_inputColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_inputDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_inputMotion(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_inputStencil(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_intermediateColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_intermediateConvergence(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_kernelIndex(int32_t value);

  constexpr void __cordl_internal_set_luma(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_noiseTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_priorConvergence(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_priorDepthMotion(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_priorFeedback(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_priorLuma(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_viewCount(int32_t value);

  /// @brief Method .ctor, addr 0x6588e30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr STP_SetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "STP_SetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  STP_SetupData(STP_SetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "STP_SetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  STP_SetupData(STP_SetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12199 };

  /// @brief Field cs, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___cs;

  /// @brief Field kernelIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___kernelIndex;

  /// @brief Field viewCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ___viewCount;

  /// @brief Field dispatchSize, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___dispatchSize;

  /// @brief Field constantBufferData, offset: 0x28, size: 0x1c0, def value: None
  ::UnityEngine::Rendering::STP_StpConstantBufferData ___constantBufferData;

  /// @brief Field noiseTexture, offset: 0x1e8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___noiseTexture;

  /// @brief Field debugView, offset: 0x1f8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___debugView;

  /// @brief Field inputColor, offset: 0x208, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___inputColor;

  /// @brief Field inputDepth, offset: 0x218, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___inputDepth;

  /// @brief Field inputMotion, offset: 0x228, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___inputMotion;

  /// @brief Field inputStencil, offset: 0x238, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___inputStencil;

  /// @brief Field intermediateColor, offset: 0x248, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___intermediateColor;

  /// @brief Field intermediateConvergence, offset: 0x258, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___intermediateConvergence;

  /// @brief Field priorDepthMotion, offset: 0x268, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___priorDepthMotion;

  /// @brief Field depthMotion, offset: 0x278, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depthMotion;

  /// @brief Field priorLuma, offset: 0x288, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___priorLuma;

  /// @brief Field luma, offset: 0x298, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___luma;

  /// @brief Field priorFeedback, offset: 0x2a8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___priorFeedback;

  /// @brief Field priorConvergence, offset: 0x2b8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___priorConvergence;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___cs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___kernelIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___viewCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___dispatchSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___constantBufferData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___noiseTexture) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___debugView) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___inputColor) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___inputDepth) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___inputMotion) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___inputStencil) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___intermediateColor) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___intermediateConvergence) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___priorDepthMotion) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___depthMotion) == 0x278, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___priorLuma) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___luma) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___priorFeedback) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_SetupData, ___priorConvergence) == 0x2b8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP_SetupData, 0x2c8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector2Int
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.STP/PreTaaData
class CORDL_TYPE STP_PreTaaData : public ::System::Object {
public:
  // Declarations
  /// @brief Field convergence, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get_convergence, put = __cordl_internal_set_convergence)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle convergence;

  /// @brief Field cs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cs, put = __cordl_internal_set_cs)) ::UnityW<::UnityEngine::ComputeShader> cs;

  /// @brief Field debugView, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_debugView, put = __cordl_internal_set_debugView)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle debugView;

  /// @brief Field dispatchSize, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dispatchSize, put = __cordl_internal_set_dispatchSize)) ::UnityEngine::Vector2Int dispatchSize;

  /// @brief Field intermediateConvergence, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_intermediateConvergence,
                      put = __cordl_internal_set_intermediateConvergence)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle intermediateConvergence;

  /// @brief Field intermediateWeights, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_intermediateWeights, put = __cordl_internal_set_intermediateWeights)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle intermediateWeights;

  /// @brief Field kernelIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelIndex, put = __cordl_internal_set_kernelIndex)) int32_t kernelIndex;

  /// @brief Field luma, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_luma, put = __cordl_internal_set_luma)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle luma;

  /// @brief Field noiseTexture, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_noiseTexture, put = __cordl_internal_set_noiseTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle noiseTexture;

  /// @brief Field viewCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_viewCount, put = __cordl_internal_set_viewCount)) int32_t viewCount;

  static inline ::UnityEngine::Rendering::STP_PreTaaData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_convergence() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_convergence();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_cs() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_cs();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_debugView() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_debugView();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_dispatchSize() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_dispatchSize();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_intermediateConvergence() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_intermediateConvergence();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_intermediateWeights() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_intermediateWeights();

  constexpr int32_t const& __cordl_internal_get_kernelIndex() const;

  constexpr int32_t& __cordl_internal_get_kernelIndex();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_luma() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_luma();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_noiseTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_noiseTexture();

  constexpr int32_t const& __cordl_internal_get_viewCount() const;

  constexpr int32_t& __cordl_internal_get_viewCount();

  constexpr void __cordl_internal_set_convergence(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_cs(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_debugView(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_dispatchSize(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_intermediateConvergence(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_intermediateWeights(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_kernelIndex(int32_t value);

  constexpr void __cordl_internal_set_luma(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_noiseTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_viewCount(int32_t value);

  /// @brief Method .ctor, addr 0x6588e34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr STP_PreTaaData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "STP_PreTaaData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  STP_PreTaaData(STP_PreTaaData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "STP_PreTaaData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  STP_PreTaaData(STP_PreTaaData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12200 };

  /// @brief Field cs, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___cs;

  /// @brief Field kernelIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___kernelIndex;

  /// @brief Field viewCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ___viewCount;

  /// @brief Field dispatchSize, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___dispatchSize;

  /// @brief Field noiseTexture, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___noiseTexture;

  /// @brief Field debugView, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___debugView;

  /// @brief Field intermediateConvergence, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___intermediateConvergence;

  /// @brief Field intermediateWeights, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___intermediateWeights;

  /// @brief Field luma, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___luma;

  /// @brief Field convergence, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___convergence;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::STP_PreTaaData, ___cs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_PreTaaData, ___kernelIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_PreTaaData, ___viewCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_PreTaaData, ___dispatchSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_PreTaaData, ___noiseTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_PreTaaData, ___debugView) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_PreTaaData, ___intermediateConvergence) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_PreTaaData, ___intermediateWeights) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_PreTaaData, ___luma) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_PreTaaData, ___convergence) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP_PreTaaData, 0x88>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector2Int
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.STP/TaaData
class CORDL_TYPE STP_TaaData : public ::System::Object {
public:
  // Declarations
  /// @brief Field convergence, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get_convergence, put = __cordl_internal_set_convergence)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle convergence;

  /// @brief Field cs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cs, put = __cordl_internal_set_cs)) ::UnityW<::UnityEngine::ComputeShader> cs;

  /// @brief Field debugView, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_debugView, put = __cordl_internal_set_debugView)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle debugView;

  /// @brief Field depthMotion, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get_depthMotion, put = __cordl_internal_set_depthMotion)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthMotion;

  /// @brief Field dispatchSize, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dispatchSize, put = __cordl_internal_set_dispatchSize)) ::UnityEngine::Vector2Int dispatchSize;

  /// @brief Field feedback, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get_feedback, put = __cordl_internal_set_feedback)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle feedback;

  /// @brief Field intermediateColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_intermediateColor, put = __cordl_internal_set_intermediateColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle intermediateColor;

  /// @brief Field intermediateWeights, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_intermediateWeights, put = __cordl_internal_set_intermediateWeights)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle intermediateWeights;

  /// @brief Field kernelIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelIndex, put = __cordl_internal_set_kernelIndex)) int32_t kernelIndex;

  /// @brief Field noiseTexture, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_noiseTexture, put = __cordl_internal_set_noiseTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle noiseTexture;

  /// @brief Field output, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get_output, put = __cordl_internal_set_output)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle output;

  /// @brief Field priorFeedback, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_priorFeedback, put = __cordl_internal_set_priorFeedback)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle priorFeedback;

  /// @brief Field viewCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_viewCount, put = __cordl_internal_set_viewCount)) int32_t viewCount;

  static inline ::UnityEngine::Rendering::STP_TaaData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_convergence() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_convergence();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_cs() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_cs();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_debugView() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_debugView();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depthMotion() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depthMotion();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_dispatchSize() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_dispatchSize();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_feedback() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_feedback();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_intermediateColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_intermediateColor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_intermediateWeights() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_intermediateWeights();

  constexpr int32_t const& __cordl_internal_get_kernelIndex() const;

  constexpr int32_t& __cordl_internal_get_kernelIndex();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_noiseTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_noiseTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_output() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_output();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_priorFeedback() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_priorFeedback();

  constexpr int32_t const& __cordl_internal_get_viewCount() const;

  constexpr int32_t& __cordl_internal_get_viewCount();

  constexpr void __cordl_internal_set_convergence(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_cs(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_debugView(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_depthMotion(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_dispatchSize(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_feedback(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_intermediateColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_intermediateWeights(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_kernelIndex(int32_t value);

  constexpr void __cordl_internal_set_noiseTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_output(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_priorFeedback(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_viewCount(int32_t value);

  /// @brief Method .ctor, addr 0x6588e38, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr STP_TaaData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "STP_TaaData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  STP_TaaData(STP_TaaData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "STP_TaaData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  STP_TaaData(STP_TaaData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12201 };

  /// @brief Field cs, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___cs;

  /// @brief Field kernelIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___kernelIndex;

  /// @brief Field viewCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ___viewCount;

  /// @brief Field dispatchSize, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___dispatchSize;

  /// @brief Field noiseTexture, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___noiseTexture;

  /// @brief Field debugView, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___debugView;

  /// @brief Field intermediateColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___intermediateColor;

  /// @brief Field intermediateWeights, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___intermediateWeights;

  /// @brief Field priorFeedback, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___priorFeedback;

  /// @brief Field depthMotion, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depthMotion;

  /// @brief Field convergence, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___convergence;

  /// @brief Field feedback, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___feedback;

  /// @brief Field output, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___output;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::STP_TaaData, ___cs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_TaaData, ___kernelIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_TaaData, ___viewCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_TaaData, ___dispatchSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_TaaData, ___noiseTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_TaaData, ___debugView) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_TaaData, ___intermediateColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_TaaData, ___intermediateWeights) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_TaaData, ___priorFeedback) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_TaaData, ___depthMotion) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_TaaData, ___convergence) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_TaaData, ___feedback) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::STP_TaaData, ___output) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP_TaaData, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.STP/<>c
class CORDL_TYPE STP___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::STP___c* __9;

  /// @brief Field <>9__38_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__38_0,
                      put = setStaticF___9__38_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_SetupData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* __9__38_0;

  /// @brief Field <>9__38_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__38_1,
                      put = setStaticF___9__38_1)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_PreTaaData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* __9__38_1;

  /// @brief Field <>9__38_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__38_2,
                      put = setStaticF___9__38_2)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_TaaData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* __9__38_2;

  static inline ::UnityEngine::Rendering::STP___c* New_ctor();

  /// @brief Method <Execute>b__38_0, addr 0x6588e94, size 0x5a4, virtual false, abstract: false, final false
  inline void _Execute_b__38_0(::UnityEngine::Rendering::STP_SetupData* data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* ctx);

  /// @brief Method <Execute>b__38_1, addr 0x6589438, size 0x2f8, virtual false, abstract: false, final false
  inline void _Execute_b__38_1(::UnityEngine::Rendering::STP_PreTaaData* data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* ctx);

  /// @brief Method <Execute>b__38_2, addr 0x6589730, size 0x370, virtual false, abstract: false, final false
  inline void _Execute_b__38_2(::UnityEngine::Rendering::STP_TaaData* data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* ctx);

  /// @brief Method .ctor, addr 0x6588e90, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::STP___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_SetupData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
  getStaticF___9__38_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_PreTaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
  getStaticF___9__38_1();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_TaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
  getStaticF___9__38_2();

  static inline void setStaticF___9(::UnityEngine::Rendering::STP___c* value);

  static inline void setStaticF___9__38_0(
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_SetupData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value);

  static inline void setStaticF___9__38_1(
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_PreTaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value);

  static inline void
  setStaticF___9__38_2(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_TaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr STP___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "STP___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  STP___c(STP___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "STP___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  STP___c(STP___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12202 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.STP
class CORDL_TYPE STP : public ::System::Object {
public:
  // Declarations
  using Config = ::UnityEngine::Rendering::STP_Config;

  using HistoryContext = ::UnityEngine::Rendering::STP_HistoryContext;

  using HistoryTextureType = ::UnityEngine::Rendering::STP_HistoryTextureType;

  using HistoryUpdateInfo = ::UnityEngine::Rendering::STP_HistoryUpdateInfo;

  using PerViewConfig = ::UnityEngine::Rendering::STP_PerViewConfig;

  using PreTaaData = ::UnityEngine::Rendering::STP_PreTaaData;

  using ProfileId = ::UnityEngine::Rendering::STP_ProfileId;

  using RuntimeResources = ::UnityEngine::Rendering::STP_RuntimeResources;

  using SetupData = ::UnityEngine::Rendering::STP_SetupData;

  using ShaderKeywords = ::UnityEngine::Rendering::STP_ShaderKeywords;

  using ShaderResources = ::UnityEngine::Rendering::STP_ShaderResources;

  using StpConstantBufferData = ::UnityEngine::Rendering::STP_StpConstantBufferData;

  using StpSetupPerViewConstants = ::UnityEngine::Rendering::STP_StpSetupPerViewConstants;

  using TaaData = ::UnityEngine::Rendering::STP_TaaData;

  using __c = ::UnityEngine::Rendering::STP___c;

  /// @brief Field kQualcommVendorId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kQualcommVendorId, put = setStaticF_kQualcommVendorId)) int32_t kQualcommVendorId;

  /// @brief Field s_DebugViewDescriptions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DebugViewDescriptions, put = setStaticF_s_DebugViewDescriptions)) ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>
      s_DebugViewDescriptions;

  /// @brief Field s_DebugViewIndices, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DebugViewIndices, put = setStaticF_s_DebugViewIndices)) ::ArrayW<int32_t, ::Array<int32_t>*> s_DebugViewIndices;

  /// @brief Field s_PerViewConfigs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PerViewConfigs,
                      put = setStaticF_s_PerViewConfigs)) ::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig, ::Array<::UnityEngine::Rendering::STP_PerViewConfig>*>
      s_PerViewConfigs;

  /// @brief Method CalculateConvergenceTextureSize, addr 0x6585290, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int CalculateConvergenceTextureSize(::UnityEngine::Vector2Int historyTextureSize);

  /// @brief Method CalculateMotionScale, addr 0x6585314, size 0x98, virtual false, abstract: false, final false
  static inline float_t CalculateMotionScale(float_t deltaTime, float_t lastDeltaTime);

  /// @brief Method ComputeHistoryHash, addr 0x65851dc, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Hash128 ComputeHistoryHash(::ByRef<::UnityEngine::Rendering::STP_HistoryUpdateInfo> info);

  /// @brief Method Execute, addr 0x6585fe4, size 0x1e9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle Execute(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                   ::ByRef<::UnityEngine::Rendering::STP_Config> config);

  /// @brief Method ExtractRotation, addr 0x65853ac, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 ExtractRotation(::UnityEngine::Matrix4x4 input);

  /// @brief Method IsSupported, addr 0x6584f68, size 0x68, virtual false, abstract: false, final false
  static inline bool IsSupported();

  /// @brief Method Jit16, addr 0x6584fd0, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Jit16(int32_t frameIndex);

  /// @brief Method PackVector2ToInt, addr 0x65853c8, size 0x78, virtual false, abstract: false, final false
  static inline int32_t PackVector2ToInt(::UnityEngine::Vector2 value);

  /// @brief Method PopulateConstantData, addr 0x6585440, size 0xadc, virtual false, abstract: false, final false
  static inline void PopulateConstantData(::ByRef<::UnityEngine::Rendering::STP_Config> config, ::ByRef<::UnityEngine::Rendering::STP_StpConstantBufferData> constants);

  /// @brief Method UseTexture, addr 0x6585f1c, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UseTexture(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* builder,
                                                                                      ::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture,
                                                                                      ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  static inline int32_t getStaticF_kQualcommVendorId();

  static inline ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> getStaticF_s_DebugViewDescriptions();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_DebugViewIndices();

  static inline ::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig, ::Array<::UnityEngine::Rendering::STP_PerViewConfig>*> getStaticF_s_PerViewConfigs();

  /// @brief Method get_debugViewDescriptions, addr 0x6585068, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> get_debugViewDescriptions();

  /// @brief Method get_debugViewIndices, addr 0x65850c4, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> get_debugViewIndices();

  /// @brief Method get_perViewConfigs, addr 0x6585120, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig, ::Array<::UnityEngine::Rendering::STP_PerViewConfig>*> get_perViewConfigs();

  static inline void setStaticF_kQualcommVendorId(int32_t value);

  static inline void setStaticF_s_DebugViewDescriptions(::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> value);

  static inline void setStaticF_s_DebugViewIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_PerViewConfigs(::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig, ::Array<::UnityEngine::Rendering::STP_PerViewConfig>*> value);

  /// @brief Method set_perViewConfigs, addr 0x658517c, size 0x60, virtual false, abstract: false, final false
  static inline void set_perViewConfigs(::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig, ::Array<::UnityEngine::Rendering::STP_PerViewConfig>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr STP();

public:
  // Ctor Parameters [CppParam { name: "", ty: "STP", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  STP(STP&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "STP", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  STP(STP const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12203 };

  /// @brief Field kMaxPerViewConfigs offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPerViewConfigs{ static_cast<int32_t>(0x2) };

  /// @brief Field kNumDebugViews offset 0xffffffff size 0x4
  static constexpr int32_t kNumDebugViews{ static_cast<int32_t>(0x6) };

  /// @brief Field kNumHistoryTextureTypes offset 0xffffffff size 0x4
  static constexpr int32_t kNumHistoryTextureTypes{ static_cast<int32_t>(0x4) };

  /// @brief Field kTotalSetupViewConstantsCount offset 0xffffffff size 0x4
  static constexpr int32_t kTotalSetupViewConstantsCount{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::STP, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP_HistoryTextureType, "UnityEngine.Rendering", "STP/HistoryTextureType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP_ProfileId, "UnityEngine.Rendering", "STP/ProfileId");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP_StpSetupPerViewConstants, "UnityEngine.Rendering", "STP/StpSetupPerViewConstants");
NEED_NO_BOX(::UnityEngine::Rendering::STP);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP*, "UnityEngine.Rendering", "STP");
NEED_NO_BOX(::UnityEngine::Rendering::STP_HistoryContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP_HistoryContext*, "UnityEngine.Rendering", "STP/HistoryContext");
NEED_NO_BOX(::UnityEngine::Rendering::STP_PreTaaData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP_PreTaaData*, "UnityEngine.Rendering", "STP/PreTaaData");
NEED_NO_BOX(::UnityEngine::Rendering::STP_RuntimeResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP_RuntimeResources*, "UnityEngine.Rendering", "STP/RuntimeResources");
NEED_NO_BOX(::UnityEngine::Rendering::STP_SetupData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP_SetupData*, "UnityEngine.Rendering", "STP/SetupData");
NEED_NO_BOX(::UnityEngine::Rendering::STP_ShaderKeywords);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP_ShaderKeywords*, "UnityEngine.Rendering", "STP/ShaderKeywords");
NEED_NO_BOX(::UnityEngine::Rendering::STP_ShaderResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP_ShaderResources*, "UnityEngine.Rendering", "STP/ShaderResources");
NEED_NO_BOX(::UnityEngine::Rendering::STP_TaaData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP_TaaData*, "UnityEngine.Rendering", "STP/TaaData");
NEED_NO_BOX(::UnityEngine::Rendering::STP___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP___c*, "UnityEngine.Rendering", "STP/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP_Config, "UnityEngine.Rendering", "STP/Config");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP_HistoryUpdateInfo, "UnityEngine.Rendering", "STP/HistoryUpdateInfo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP_PerViewConfig, "UnityEngine.Rendering", "STP/PerViewConfig");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::STP_StpConstantBufferData, "UnityEngine.Rendering", "STP/StpConstantBufferData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer, "UnityEngine.Rendering",
                       "STP/StpConstantBufferData/<_StpSetupPerViewConstants>e__FixedBuffer");
