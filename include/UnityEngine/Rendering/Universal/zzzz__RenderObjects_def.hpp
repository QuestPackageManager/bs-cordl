#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderObjects.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderQueueType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderObjects)
namespace UnityEngine::Rendering::Universal {
class RenderObjectsPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderObjectsSettings_RenderObjects_OverrideMaterialMode;
}
namespace UnityEngine::Rendering::Universal {
class RenderObjects_CustomCameraSettings;
}
namespace UnityEngine::Rendering::Universal {
class RenderObjects_FilterSettings;
}
namespace UnityEngine::Rendering::Universal {
class RenderObjects_RenderObjectsSettings;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class StencilStateData;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct RenderObjectsSettings_RenderObjects_OverrideMaterialMode;
}
namespace UnityEngine::Rendering::Universal {
class RenderObjects;
}
namespace UnityEngine::Rendering::Universal {
class RenderObjects_CustomCameraSettings;
}
namespace UnityEngine::Rendering::Universal {
class RenderObjects_FilterSettings;
}
namespace UnityEngine::Rendering::Universal {
class RenderObjects_RenderObjectsSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderObjects);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.RenderObjects/RenderObjectsSettings/OverrideMaterialMode
struct CORDL_TYPE RenderObjectsSettings_RenderObjects_OverrideMaterialMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderObjectsSettings_RenderObjects_OverrideMaterialMode_Unwrapped
  enum struct __RenderObjectsSettings_RenderObjects_OverrideMaterialMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Material = static_cast<int32_t>(0x1),
    __E_Shader = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderObjectsSettings_RenderObjects_OverrideMaterialMode_Unwrapped() const noexcept {
    return static_cast<__RenderObjectsSettings_RenderObjects_OverrideMaterialMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderObjectsSettings_RenderObjects_OverrideMaterialMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderObjectsSettings_RenderObjects_OverrideMaterialMode(int32_t value__) noexcept;

  /// @brief Field Material value: I32(1)
  static ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode const Material;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode const None;

  /// @brief Field Shader value: I32(2)
  static ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode const Shader;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12888 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.CompareFunction, UnityEngine.Rendering.Universal.RenderObjects::RenderObjectsSettings::OverrideMaterialMode,
// UnityEngine.Rendering.Universal.RenderPassEvent
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderObjects/RenderObjectsSettings
class CORDL_TYPE RenderObjects_RenderObjectsSettings : public ::System::Object {
public:
  // Declarations
  using OverrideMaterialMode = ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode;

  /// @brief Field Event, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Event, put = __cordl_internal_set_Event)) ::UnityEngine::Rendering::Universal::RenderPassEvent Event;

  /// @brief Field cameraSettings, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraSettings, put = __cordl_internal_set_cameraSettings)) ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings;

  /// @brief Field depthCompareFunction, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_depthCompareFunction, put = __cordl_internal_set_depthCompareFunction)) ::UnityEngine::Rendering::CompareFunction depthCompareFunction;

  /// @brief Field enableWrite, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_enableWrite, put = __cordl_internal_set_enableWrite)) bool enableWrite;

  /// @brief Field filterSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_filterSettings, put = __cordl_internal_set_filterSettings)) ::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings* filterSettings;

  /// @brief Field overrideDepthState, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideDepthState, put = __cordl_internal_set_overrideDepthState)) bool overrideDepthState;

  /// @brief Field overrideMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_overrideMaterial, put = __cordl_internal_set_overrideMaterial)) ::UnityW<::UnityEngine::Material> overrideMaterial;

  /// @brief Field overrideMaterialPassIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_overrideMaterialPassIndex, put = __cordl_internal_set_overrideMaterialPassIndex)) int32_t overrideMaterialPassIndex;

  /// @brief Field overrideMode, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_overrideMode,
                      put = __cordl_internal_set_overrideMode)) ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode overrideMode;

  /// @brief Field overrideShader, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_overrideShader, put = __cordl_internal_set_overrideShader)) ::UnityW<::UnityEngine::Shader> overrideShader;

  /// @brief Field overrideShaderPassIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_overrideShaderPassIndex, put = __cordl_internal_set_overrideShaderPassIndex)) int32_t overrideShaderPassIndex;

  /// @brief Field passTag, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_passTag, put = __cordl_internal_set_passTag)) ::StringW passTag;

  /// @brief Field stencilSettings, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_stencilSettings, put = __cordl_internal_set_stencilSettings)) ::UnityEngine::Rendering::Universal::StencilStateData* stencilSettings;

  static inline ::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& __cordl_internal_get_Event() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& __cordl_internal_get_Event();

  constexpr ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* const& __cordl_internal_get_cameraSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*& __cordl_internal_get_cameraSettings();

  constexpr ::UnityEngine::Rendering::CompareFunction const& __cordl_internal_get_depthCompareFunction() const;

  constexpr ::UnityEngine::Rendering::CompareFunction& __cordl_internal_get_depthCompareFunction();

  constexpr bool const& __cordl_internal_get_enableWrite() const;

  constexpr bool& __cordl_internal_get_enableWrite();

  constexpr ::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings* const& __cordl_internal_get_filterSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings*& __cordl_internal_get_filterSettings();

  constexpr bool const& __cordl_internal_get_overrideDepthState() const;

  constexpr bool& __cordl_internal_get_overrideDepthState();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_overrideMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_overrideMaterial();

  constexpr int32_t const& __cordl_internal_get_overrideMaterialPassIndex() const;

  constexpr int32_t& __cordl_internal_get_overrideMaterialPassIndex();

  constexpr ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode const& __cordl_internal_get_overrideMode() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode& __cordl_internal_get_overrideMode();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_overrideShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_overrideShader();

  constexpr int32_t const& __cordl_internal_get_overrideShaderPassIndex() const;

  constexpr int32_t& __cordl_internal_get_overrideShaderPassIndex();

  constexpr ::StringW const& __cordl_internal_get_passTag() const;

  constexpr ::StringW& __cordl_internal_get_passTag();

  constexpr ::UnityEngine::Rendering::Universal::StencilStateData* const& __cordl_internal_get_stencilSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::StencilStateData*& __cordl_internal_get_stencilSettings();

  constexpr void __cordl_internal_set_Event(::UnityEngine::Rendering::Universal::RenderPassEvent value);

  constexpr void __cordl_internal_set_cameraSettings(::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* value);

  constexpr void __cordl_internal_set_depthCompareFunction(::UnityEngine::Rendering::CompareFunction value);

  constexpr void __cordl_internal_set_enableWrite(bool value);

  constexpr void __cordl_internal_set_filterSettings(::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings* value);

  constexpr void __cordl_internal_set_overrideDepthState(bool value);

  constexpr void __cordl_internal_set_overrideMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_overrideMaterialPassIndex(int32_t value);

  constexpr void __cordl_internal_set_overrideMode(::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode value);

  constexpr void __cordl_internal_set_overrideShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_overrideShaderPassIndex(int32_t value);

  constexpr void __cordl_internal_set_passTag(::StringW value);

  constexpr void __cordl_internal_set_stencilSettings(::UnityEngine::Rendering::Universal::StencilStateData* value);

  /// @brief Method .ctor, addr 0x66f74c8, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderObjects_RenderObjectsSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderObjects_RenderObjectsSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderObjects_RenderObjectsSettings(RenderObjects_RenderObjectsSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderObjects_RenderObjectsSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderObjects_RenderObjectsSettings(RenderObjects_RenderObjectsSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12889 };

  /// @brief Field passTag, offset: 0x10, size: 0x8, def value: None
  ::StringW ___passTag;

  /// @brief Field Event, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderPassEvent ___Event;

  /// @brief Field filterSettings, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings* ___filterSettings;

  /// @brief Field overrideMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___overrideMaterial;

  /// @brief Field overrideMaterialPassIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ___overrideMaterialPassIndex;

  /// @brief Field overrideShader, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___overrideShader;

  /// @brief Field overrideShaderPassIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___overrideShaderPassIndex;

  /// @brief Field overrideMode, offset: 0x44, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode ___overrideMode;

  /// @brief Field overrideDepthState, offset: 0x48, size: 0x1, def value: None
  bool ___overrideDepthState;

  /// @brief Field depthCompareFunction, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::Rendering::CompareFunction ___depthCompareFunction;

  /// @brief Field enableWrite, offset: 0x50, size: 0x1, def value: None
  bool ___enableWrite;

  /// @brief Field stencilSettings, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::StencilStateData* ___stencilSettings;

  /// @brief Field cameraSettings, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* ___cameraSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings, ___passTag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings, ___Event) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings, ___filterSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings, ___overrideMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings, ___overrideMaterialPassIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings, ___overrideShader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings, ___overrideShaderPassIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings, ___overrideMode) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings, ___overrideDepthState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings, ___depthCompareFunction) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings, ___enableWrite) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings, ___stencilSettings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings, ___cameraSettings) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.LayerMask, UnityEngine.Rendering.Universal.RenderQueueType
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderObjects/FilterSettings
class CORDL_TYPE RenderObjects_FilterSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field LayerMask, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_LayerMask, put = __cordl_internal_set_LayerMask)) ::UnityEngine::LayerMask LayerMask;

  /// @brief Field PassNames, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_PassNames, put = __cordl_internal_set_PassNames)) ::ArrayW<::StringW, ::Array<::StringW>*> PassNames;

  /// @brief Field RenderQueueType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_RenderQueueType, put = __cordl_internal_set_RenderQueueType)) ::UnityEngine::Rendering::Universal::RenderQueueType RenderQueueType;

  static inline ::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings* New_ctor();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_LayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_LayerMask();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_PassNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_PassNames();

  constexpr ::UnityEngine::Rendering::Universal::RenderQueueType const& __cordl_internal_get_RenderQueueType() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderQueueType& __cordl_internal_get_RenderQueueType();

  constexpr void __cordl_internal_set_LayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_PassNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_RenderQueueType(::UnityEngine::Rendering::Universal::RenderQueueType value);

  /// @brief Method .ctor, addr 0x66f75b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderObjects_FilterSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderObjects_FilterSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderObjects_FilterSettings(RenderObjects_FilterSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderObjects_FilterSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderObjects_FilterSettings(RenderObjects_FilterSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12890 };

  /// @brief Field RenderQueueType, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderQueueType ___RenderQueueType;

  /// @brief Field LayerMask, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___LayerMask;

  /// @brief Field PassNames, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___PassNames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings, ___RenderQueueType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings, ___LayerMask) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings, ___PassNames) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderObjects/CustomCameraSettings
class CORDL_TYPE RenderObjects_CustomCameraSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraFieldOfView, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_cameraFieldOfView, put = __cordl_internal_set_cameraFieldOfView)) float_t cameraFieldOfView;

  /// @brief Field offset, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) ::UnityEngine::Vector4 offset;

  /// @brief Field overrideCamera, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideCamera, put = __cordl_internal_set_overrideCamera)) bool overrideCamera;

  /// @brief Field restoreCamera, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_restoreCamera, put = __cordl_internal_set_restoreCamera)) bool restoreCamera;

  static inline ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* New_ctor();

  constexpr float_t const& __cordl_internal_get_cameraFieldOfView() const;

  constexpr float_t& __cordl_internal_get_cameraFieldOfView();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_offset() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_offset();

  constexpr bool const& __cordl_internal_get_overrideCamera() const;

  constexpr bool& __cordl_internal_get_overrideCamera();

  constexpr bool const& __cordl_internal_get_restoreCamera() const;

  constexpr bool& __cordl_internal_get_restoreCamera();

  constexpr void __cordl_internal_set_cameraFieldOfView(float_t value);

  constexpr void __cordl_internal_set_offset(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_overrideCamera(bool value);

  constexpr void __cordl_internal_set_restoreCamera(bool value);

  /// @brief Method .ctor, addr 0x66f75c0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderObjects_CustomCameraSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderObjects_CustomCameraSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderObjects_CustomCameraSettings(RenderObjects_CustomCameraSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderObjects_CustomCameraSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderObjects_CustomCameraSettings(RenderObjects_CustomCameraSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12891 };

  /// @brief Field overrideCamera, offset: 0x10, size: 0x1, def value: None
  bool ___overrideCamera;

  /// @brief Field restoreCamera, offset: 0x11, size: 0x1, def value: None
  bool ___restoreCamera;

  /// @brief Field offset, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___offset;

  /// @brief Field cameraFieldOfView, offset: 0x24, size: 0x4, def value: None
  float_t ___cameraFieldOfView;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings, ___overrideCamera) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings, ___restoreCamera) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings, ___offset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings, ___cameraFieldOfView) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderObjects
class CORDL_TYPE RenderObjects : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  using CustomCameraSettings = ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings;

  using FilterSettings = ::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings;

  using RenderObjectsSettings = ::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings;

  /// @brief Field renderObjectsPass, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_renderObjectsPass, put = __cordl_internal_set_renderObjectsPass)) ::UnityEngine::Rendering::Universal::RenderObjectsPass* renderObjectsPass;

  /// @brief Field settings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_settings, put = __cordl_internal_set_settings)) ::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings* settings;

  /// @brief Method AddRenderPasses, addr 0x66f73a8, size 0xb0, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x66f7208, size 0x1a0, virtual true, abstract: false, final false
  inline void Create();

  static inline ::UnityEngine::Rendering::Universal::RenderObjects* New_ctor();

  /// @brief Method SupportsNativeRenderPass, addr 0x66f7458, size 0x8, virtual true, abstract: false, final false
  inline bool SupportsNativeRenderPass();

  constexpr ::UnityEngine::Rendering::Universal::RenderObjectsPass* const& __cordl_internal_get_renderObjectsPass() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderObjectsPass*& __cordl_internal_get_renderObjectsPass();

  constexpr ::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings* const& __cordl_internal_get_settings() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings*& __cordl_internal_get_settings();

  constexpr void __cordl_internal_set_renderObjectsPass(::UnityEngine::Rendering::Universal::RenderObjectsPass* value);

  constexpr void __cordl_internal_set_settings(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings* value);

  /// @brief Method .ctor, addr 0x66f7460, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderObjects();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderObjects", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderObjects(RenderObjects&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderObjects", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderObjects(RenderObjects const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12892 };

  /// @brief Field settings, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings* ___settings;

  /// @brief Field renderObjectsPass, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::RenderObjectsPass* ___renderObjectsPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects, ___settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjects, ___renderObjectsPass) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderObjects, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderObjectsSettings_RenderObjects_OverrideMaterialMode, "UnityEngine.Rendering.Universal",
                       "RenderObjects/RenderObjectsSettings/OverrideMaterialMode");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderObjects);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderObjects*, "UnityEngine.Rendering.Universal", "RenderObjects");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*, "UnityEngine.Rendering.Universal", "RenderObjects/CustomCameraSettings");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderObjects_FilterSettings*, "UnityEngine.Rendering.Universal", "RenderObjects/FilterSettings");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderObjects_RenderObjectsSettings*, "UnityEngine.Rendering.Universal", "RenderObjects/RenderObjectsSettings");
