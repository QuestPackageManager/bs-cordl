#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRSettings)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_BackendFovationApi;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_ColorSubmissionModeGroup;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings_ColorSubmissionModeList;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_DepthSubmissionMode;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_LatencyOptimization;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_MultiviewRenderRegionsOptimizationMode;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_RenderMode;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_SpaceWarpMotionVectorTextureFormat;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings___c;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_BackendFovationApi;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_ColorSubmissionModeGroup;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_DepthSubmissionMode;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_LatencyOptimization;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_MultiviewRenderRegionsOptimizationMode;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_RenderMode;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_SpaceWarpMotionVectorTextureFormat;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings_ColorSubmissionModeList;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings___c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi);
MARK_VAL_T(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup);
MARK_VAL_T(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode);
MARK_VAL_T(::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization);
MARK_VAL_T(::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode);
MARK_VAL_T(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode);
MARK_VAL_T(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat);
MARK_REF_T(::UnityEngine::XR::OpenXR::OpenXRSettings*);
MARK_REF_T(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*);
MARK_REF_T(::UnityEngine::XR::OpenXR::OpenXRSettings___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi, "UnityEngine.XR.OpenXR", "OpenXRSettings/BackendFovationApi");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, "UnityEngine.XR.OpenXR", "OpenXRSettings/ColorSubmissionModeGroup");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode, "UnityEngine.XR.OpenXR", "OpenXRSettings/DepthSubmissionMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization, "UnityEngine.XR.OpenXR", "OpenXRSettings/LatencyOptimization");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode, "UnityEngine.XR.OpenXR", "OpenXRSettings/MultiviewRenderRegionsOptimizationMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode, "UnityEngine.XR.OpenXR", "OpenXRSettings/RenderMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat, "UnityEngine.XR.OpenXR", "OpenXRSettings/SpaceWarpMotionVectorTextureFormat");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRSettings*, "UnityEngine.XR.OpenXR", "OpenXRSettings");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*, "UnityEngine.XR.OpenXR", "OpenXRSettings/ColorSubmissionModeList");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRSettings___c*, "UnityEngine.XR.OpenXR", "OpenXRSettings/<>c");
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/ColorSubmissionModeGroup
struct CORDL_TYPE OpenXRSettings_ColorSubmissionModeGroup {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRSettings_ColorSubmissionModeGroup_Unwrapped
  enum struct __OpenXRSettings_ColorSubmissionModeGroup_Unwrapped : int32_t {
    __E_kRenderTextureFormatGroup8888 = static_cast<int32_t>(0x0),
    __E_kRenderTextureFormatGroup1010102_Float = static_cast<int32_t>(0x1),
    __E_kRenderTextureFormatGroup16161616_Float = static_cast<int32_t>(0x2),
    __E_kRenderTextureFormatGroup565 = static_cast<int32_t>(0x3),
    __E_kRenderTextureFormatGroup111110_Float = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRSettings_ColorSubmissionModeGroup_Unwrapped() const noexcept {
    return static_cast<__OpenXRSettings_ColorSubmissionModeGroup_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings_ColorSubmissionModeGroup();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr OpenXRSettings_ColorSubmissionModeGroup(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17457 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field kRenderTextureFormatGroup1010102_Float value: I32(1)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup1010102_Float;

  /// @brief Field kRenderTextureFormatGroup111110_Float value: I32(4)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup111110_Float;

  /// @brief Field kRenderTextureFormatGroup16161616_Float value: I32(2)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup16161616_Float;

  /// @brief Field kRenderTextureFormatGroup565 value: I32(3)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup565;

  /// @brief Field kRenderTextureFormatGroup8888 value: I32(0)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup8888;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies System.Object, UnityEngine.XR.OpenXR.OpenXRSettings::ColorSubmissionModeGroup
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/ColorSubmissionModeList
class CORDL_TYPE OpenXRSettings_ColorSubmissionModeList : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_List, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_List, put = __cordl_internal_set_m_List)) ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup> m_List;

  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* New_ctor();

  constexpr ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup> const& __cordl_internal_get_m_List() const;

  constexpr ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>& __cordl_internal_get_m_List();

  constexpr void __cordl_internal_set_m_List(::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup> value);

  /// @brief Method .ctor, addr 0x6e2ef58, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings_ColorSubmissionModeList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings_ColorSubmissionModeList", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRSettings_ColorSubmissionModeList(OpenXRSettings_ColorSubmissionModeList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings_ColorSubmissionModeList", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRSettings_ColorSubmissionModeList(OpenXRSettings_ColorSubmissionModeList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17458 };

  /// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup> ___m_List;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList, ___m_List) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode
struct CORDL_TYPE OpenXRSettings_RenderMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRSettings_RenderMode_Unwrapped
  enum struct __OpenXRSettings_RenderMode_Unwrapped : int32_t {
    __E_MultiPass = static_cast<int32_t>(0x0),
    __E_SinglePassInstanced = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRSettings_RenderMode_Unwrapped() const noexcept {
    return static_cast<__OpenXRSettings_RenderMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings_RenderMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr OpenXRSettings_RenderMode(int32_t value__) noexcept;

  /// @brief Field MultiPass value: I32(0)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode const MultiPass;

  /// @brief Field SinglePassInstanced value: I32(1)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode const SinglePassInstanced;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17459 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/LatencyOptimization
struct CORDL_TYPE OpenXRSettings_LatencyOptimization {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRSettings_LatencyOptimization_Unwrapped
  enum struct __OpenXRSettings_LatencyOptimization_Unwrapped : int32_t {
    __E_PrioritizeRendering = static_cast<int32_t>(0x0),
    __E_PrioritizeInputPolling = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRSettings_LatencyOptimization_Unwrapped() const noexcept {
    return static_cast<__OpenXRSettings_LatencyOptimization_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings_LatencyOptimization();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr OpenXRSettings_LatencyOptimization(int32_t value__) noexcept;

  /// @brief Field PrioritizeInputPolling value: I32(1)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization const PrioritizeInputPolling;

  /// @brief Field PrioritizeRendering value: I32(0)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization const PrioritizeRendering;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17460 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode
struct CORDL_TYPE OpenXRSettings_DepthSubmissionMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRSettings_DepthSubmissionMode_Unwrapped
  enum struct __OpenXRSettings_DepthSubmissionMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Depth16Bit = static_cast<int32_t>(0x1),
    __E_Depth24Bit = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRSettings_DepthSubmissionMode_Unwrapped() const noexcept {
    return static_cast<__OpenXRSettings_DepthSubmissionMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings_DepthSubmissionMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr OpenXRSettings_DepthSubmissionMode(int32_t value__) noexcept;

  /// @brief Field Depth16Bit value: I32(1)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode const Depth16Bit;

  /// @brief Field Depth24Bit value: I32(2)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode const Depth24Bit;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17461 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/BackendFovationApi
struct CORDL_TYPE OpenXRSettings_BackendFovationApi {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __OpenXRSettings_BackendFovationApi_Unwrapped
  enum struct __OpenXRSettings_BackendFovationApi_Unwrapped : uint8_t {
    __E_Legacy = static_cast<uint8_t>(0x0u),
    __E_SRPFoveation = static_cast<uint8_t>(0x1u),
    __E_QuadViews = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRSettings_BackendFovationApi_Unwrapped() const noexcept {
    return static_cast<__OpenXRSettings_BackendFovationApi_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings_BackendFovationApi();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
  constexpr OpenXRSettings_BackendFovationApi(uint8_t value__) noexcept;

  /// @brief Field Legacy value: U8(0)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi const Legacy;

  /// @brief Field QuadViews value: U8(2)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi const QuadViews;

  /// @brief Field SRPFoveation value: U8(1)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi const SRPFoveation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17462 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi) == 0x1, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/SpaceWarpMotionVectorTextureFormat
struct CORDL_TYPE OpenXRSettings_SpaceWarpMotionVectorTextureFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRSettings_SpaceWarpMotionVectorTextureFormat_Unwrapped
  enum struct __OpenXRSettings_SpaceWarpMotionVectorTextureFormat_Unwrapped : int32_t {
    __E_RGBA16f = static_cast<int32_t>(0x0),
    __E_RG16f = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRSettings_SpaceWarpMotionVectorTextureFormat_Unwrapped() const noexcept {
    return static_cast<__OpenXRSettings_SpaceWarpMotionVectorTextureFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings_SpaceWarpMotionVectorTextureFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr OpenXRSettings_SpaceWarpMotionVectorTextureFormat(int32_t value__) noexcept;

  /// @brief Field RG16f value: I32(1)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat const RG16f;

  /// @brief Field RGBA16f value: I32(0)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat const RGBA16f;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17463 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/MultiviewRenderRegionsOptimizationMode
struct CORDL_TYPE OpenXRSettings_MultiviewRenderRegionsOptimizationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __OpenXRSettings_MultiviewRenderRegionsOptimizationMode_Unwrapped
  enum struct __OpenXRSettings_MultiviewRenderRegionsOptimizationMode_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_FinalPass = static_cast<uint8_t>(0x1u),
    __E_AllPasses = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRSettings_MultiviewRenderRegionsOptimizationMode_Unwrapped() const noexcept {
    return static_cast<__OpenXRSettings_MultiviewRenderRegionsOptimizationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings_MultiviewRenderRegionsOptimizationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
  constexpr OpenXRSettings_MultiviewRenderRegionsOptimizationMode(uint8_t value__) noexcept;

  /// @brief Field AllPasses value: U8(2)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode const AllPasses;

  /// @brief Field FinalPass value: U8(1)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode const FinalPass;

  /// @brief Field None value: U8(0)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17464 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode) == 0x1, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/<>c
class CORDL_TYPE OpenXRSettings___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::XR::OpenXR::OpenXRSettings___c* __9;

  /// @brief Field <>9__47_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__47_0, put = setStaticF___9__47_0)) ::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>* __9__47_0;

  /// @brief Field <>9__48_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__48_0, put = setStaticF___9__48_0)) ::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* __9__48_0;

  /// @brief Field <>9__64_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__64_0, put = setStaticF___9__64_0)) ::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* __9__64_0;

  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings___c* New_ctor();

  /// @brief Method <ApplyRenderSettings>b__64_0, addr 0x6e2f014, size 0x8, virtual false, abstract: false, final false
  inline int32_t _ApplyRenderSettings_b__64_0(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup e);

  /// @brief Method .ctor, addr 0x6e2f000, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_colorSubmissionModes>b__47_0, addr 0x6e2f004, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup _get_colorSubmissionModes_b__47_0(int32_t i);

  /// @brief Method <set_colorSubmissionModes>b__48_0, addr 0x6e2f00c, size 0x8, virtual false, abstract: false, final false
  inline int32_t _set_colorSubmissionModes_b__48_0(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup e);

  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings___c* getStaticF___9();

  static inline ::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>* getStaticF___9__47_0();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* getStaticF___9__48_0();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* getStaticF___9__64_0();

  static inline void setStaticF___9(::UnityEngine::XR::OpenXR::OpenXRSettings___c* value);

  static inline void setStaticF___9__47_0(::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>* value);

  static inline void setStaticF___9__48_0(::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* value);

  static inline void setStaticF___9__64_0(::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRSettings___c(OpenXRSettings___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRSettings___c(OpenXRSettings___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17465 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRSettings___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies UnityEngine.ScriptableObject, UnityEngine.XR.OpenXR.Features.OpenXRFeature, UnityEngine.XR.OpenXR.OpenXRSettings::BackendFovationApi,
// UnityEngine.XR.OpenXR.OpenXRSettings::ColorSubmissionModeGroup, UnityEngine.XR.OpenXR.OpenXRSettings::DepthSubmissionMode, UnityEngine.XR.OpenXR.OpenXRSettings::LatencyOptimization,
// UnityEngine.XR.OpenXR.OpenXRSettings::MultiviewRenderRegionsOptimizationMode, UnityEngine.XR.OpenXR.OpenXRSettings::RenderMode,
// UnityEngine.XR.OpenXR.OpenXRSettings::SpaceWarpMotionVectorTextureFormat
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings
class CORDL_TYPE OpenXRSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using BackendFovationApi = ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi;

  using ColorSubmissionModeGroup = ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup;

  using ColorSubmissionModeList = ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList;

  using DepthSubmissionMode = ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode;

  using LatencyOptimization = ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization;

  using MultiviewRenderRegionsOptimizationMode = ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode;

  using RenderMode = ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode;

  using SpaceWarpMotionVectorTextureFormat = ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat;

  using __c = ::UnityEngine::XR::OpenXR::OpenXRSettings___c;

  __declspec(property(get = get_autoColorSubmissionMode, put = set_autoColorSubmissionMode)) bool autoColorSubmissionMode;

  __declspec(property(get = get_colorSubmissionModes, put = set_colorSubmissionModes)) ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup> colorSubmissionModes;

  /// @brief Field customLoaderName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_customLoaderName, put = __cordl_internal_set_customLoaderName)) ::StringW customLoaderName;

  __declspec(property(get = get_depthSubmissionMode, put = set_depthSubmissionMode)) ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode depthSubmissionMode;

  __declspec(property(get = get_featureCount)) int32_t featureCount;

  /// @brief Field features, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_features, put = __cordl_internal_set_features)) ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> features;

  __declspec(property(get = get_foveatedRenderingApi, put = set_foveatedRenderingApi)) ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi foveatedRenderingApi;

  /// @brief Field kDefaultColorMode, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kDefaultColorMode, put = setStaticF_kDefaultColorMode)) ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup kDefaultColorMode;

  __declspec(property(get = get_latencyOptimization, put = set_latencyOptimization)) ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization latencyOptimization;

  /// @brief Field m_autoColorSubmissionMode, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_autoColorSubmissionMode, put = __cordl_internal_set_m_autoColorSubmissionMode)) bool m_autoColorSubmissionMode;

  /// @brief Field m_colorSubmissionModes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_colorSubmissionModes,
                      put = __cordl_internal_set_m_colorSubmissionModes)) ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* m_colorSubmissionModes;

  /// @brief Field m_depthSubmissionMode, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_depthSubmissionMode,
                      put = __cordl_internal_set_m_depthSubmissionMode)) ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode m_depthSubmissionMode;

  /// @brief Field m_eyeTrackingAndroidXRPermissionsToRequest, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_eyeTrackingAndroidXRPermissionsToRequest,
                      put = __cordl_internal_set_m_eyeTrackingAndroidXRPermissionsToRequest)) ::StringW m_eyeTrackingAndroidXRPermissionsToRequest;

  /// @brief Field m_eyeTrackingQuestPermissionsToRequest, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_eyeTrackingQuestPermissionsToRequest,
                      put = __cordl_internal_set_m_eyeTrackingQuestPermissionsToRequest)) ::StringW m_eyeTrackingQuestPermissionsToRequest;

  /// @brief Field m_foveatedRenderingApi, offset 0x5d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_foveatedRenderingApi,
                      put = __cordl_internal_set_m_foveatedRenderingApi)) ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi m_foveatedRenderingApi;

  /// @brief Field m_hasMigratedMultiviewRenderRegionSetting, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_hasMigratedMultiviewRenderRegionSetting,
                      put = __cordl_internal_set_m_hasMigratedMultiviewRenderRegionSetting)) bool m_hasMigratedMultiviewRenderRegionSetting;

  /// @brief Field m_latencyOptimization, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_latencyOptimization,
                      put = __cordl_internal_set_m_latencyOptimization)) ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization m_latencyOptimization;

  /// @brief Field m_multiviewRenderRegionsOptimizationMode, offset 0x5b, size 0x1
  __declspec(property(
      get = __cordl_internal_get_m_multiviewRenderRegionsOptimizationMode,
      put = __cordl_internal_set_m_multiviewRenderRegionsOptimizationMode)) ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode m_multiviewRenderRegionsOptimizationMode;

  /// @brief Field m_optimizeBufferDiscards, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_m_optimizeBufferDiscards, put = __cordl_internal_set_m_optimizeBufferDiscards)) bool m_optimizeBufferDiscards;

  /// @brief Field m_optimizeMultiviewRenderRegions, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_optimizeMultiviewRenderRegions, put = __cordl_internal_set_m_optimizeMultiviewRenderRegions)) bool m_optimizeMultiviewRenderRegions;

  /// @brief Field m_renderMode, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_renderMode, put = __cordl_internal_set_m_renderMode)) ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode m_renderMode;

  /// @brief Field m_spacewarpMotionVectorTextureFormat, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_spacewarpMotionVectorTextureFormat,
                      put =
                          __cordl_internal_set_m_spacewarpMotionVectorTextureFormat)) ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat m_spacewarpMotionVectorTextureFormat;

  /// @brief Field m_symmetricProjection, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_m_symmetricProjection, put = __cordl_internal_set_m_symmetricProjection)) bool m_symmetricProjection;

  /// @brief Field m_useOpenXRPredictedTime, offset 0x5e, size 0x1
  __declspec(property(get = __cordl_internal_get_m_useOpenXRPredictedTime, put = __cordl_internal_set_m_useOpenXRPredictedTime)) bool m_useOpenXRPredictedTime;

  __declspec(property(get = get_multiviewRenderRegionsOptimizationMode,
                      put = set_multiviewRenderRegionsOptimizationMode)) ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode multiviewRenderRegionsOptimizationMode;

  __declspec(property(get = get_optimizeBufferDiscards, put = set_optimizeBufferDiscards)) bool optimizeBufferDiscards;

  /// @brief [Obsolete("optimizeMultiviewRenderRegions is deprecated. Use multiviewRenderRegionsMode instead.", false)]
  __declspec(property(get = get_optimizeMultiviewRenderRegions, put = set_optimizeMultiviewRenderRegions)) bool optimizeMultiviewRenderRegions;

  __declspec(property(get = get_renderMode, put = set_renderMode)) ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode renderMode;

  /// @brief Field s_RuntimeInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RuntimeInstance, put = setStaticF_s_RuntimeInstance)) ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> s_RuntimeInstance;

  __declspec(property(get = get_spacewarpMotionVectorTextureFormat,
                      put = set_spacewarpMotionVectorTextureFormat)) ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat spacewarpMotionVectorTextureFormat;

  __declspec(property(get = get_symmetricProjection, put = set_symmetricProjection)) bool symmetricProjection;

  __declspec(property(get = get_useOpenXRPredictedTime, put = set_useOpenXRPredictedTime)) bool useOpenXRPredictedTime;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method ApplyPermissionSettings, addr 0x6e2c48c, size 0x380, virtual false, abstract: false, final false
  inline void ApplyPermissionSettings();

  /// @brief Method ApplyRenderSettings, addr 0x6e2d974, size 0x190, virtual false, abstract: false, final false
  inline void ApplyRenderSettings();

  /// @brief Method ApplySettings, addr 0x6e2ece8, size 0x7c, virtual false, abstract: false, final false
  inline void ApplySettings(bool logSettings);

  /// @brief Method Awake, addr 0x6e2ec98, size 0x50, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetFeature, addr 0x6e2bc5c, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> GetFeature(::System::Type* featureType);

  /// @brief Method GetFeature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFeature>
    requires(::cordl_internals::type_constraint<TFeature, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>)
  inline TFeature GetFeature();

  /// @brief Method GetFeatures, addr 0x6e2bfcc, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> GetFeatures();

  /// @brief Method GetFeatures, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFeature> inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> GetFeatures();

  /// @brief Method GetFeatures, addr 0x6e2bce8, size 0x17c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> GetFeatures(::System::Type* featureType);

  /// @brief Method GetFeatures, addr 0x6e2be64, size 0x168, virtual false, abstract: false, final false
  inline int32_t GetFeatures(::System::Type* featureType, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>* featuresOut);

  /// @brief Method GetFeatures, addr 0x6e2c05c, size 0xd0, virtual false, abstract: false, final false
  inline int32_t GetFeatures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>* featuresOut);

  /// @brief Method GetFeatures, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFeature>
    requires(::cordl_internals::type_constraint<TFeature, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>)
  inline int32_t GetFeatures(::System::Collections::Generic::List_1<TFeature>* featuresOut);

  /// @brief Method GetInstance, addr 0x6e2c354, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> GetInstance(bool useActiveBuildTarget);

  /// @brief Method Internal_GetAllowRecentering, addr 0x6e2c228, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_GetAllowRecentering();

  /// @brief Method Internal_GetColorSubmissionModes, addr 0x6e2cee0, size 0xe8, virtual false, abstract: false, final false
  static inline int32_t Internal_GetColorSubmissionModes(::ArrayW<int32_t> colorSubmissionMode, int32_t arraySize);

  /// @brief Method Internal_GetDepthSubmissionMode, addr 0x6e2d344, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode Internal_GetDepthSubmissionMode();

  /// @brief Method Internal_GetFloorOffset, addr 0x6e2c298, size 0x64, virtual false, abstract: false, final false
  static inline float_t Internal_GetFloorOffset();

  /// @brief Method Internal_GetIsUsingLegacyXRDisplay, addr 0x6e2ec2c, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_GetIsUsingLegacyXRDisplay();

  /// @brief Method Internal_GetLatencyOptimization, addr 0x6e2cbd0, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization Internal_GetLatencyOptimization();

  /// @brief Method Internal_GetRenderMode, addr 0x6e2c900, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode Internal_GetRenderMode();

  /// @brief Method Internal_GetSpaceWarpMotionVectorTextureFormat, addr 0x6e2d614, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat Internal_GetSpaceWarpMotionVectorTextureFormat();

  /// @brief Method Internal_GetUseOpenXRPredictedTime, addr 0x6e2ea3c, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_GetUseOpenXRPredictedTime();

  /// @brief Method Internal_GetUsedFoveatedRenderingApi, addr 0x6e2e7e8, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi Internal_GetUsedFoveatedRenderingApi();

  /// @brief Method Internal_RegenerateTrackingOrigin, addr 0x6e2c1c0, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_RegenerateTrackingOrigin();

  /// @brief Method Internal_SetAllowRecentering, addr 0x6e2c130, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_SetAllowRecentering(bool active, float_t height);

  /// @brief Method Internal_SetColorSubmissionMode, addr 0x6e2eba8, size 0x84, virtual false, abstract: false, final false
  static inline void Internal_SetColorSubmissionMode(::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup> colorSubmissionMode);

  /// @brief Method Internal_SetColorSubmissionModes, addr 0x6e2d1c4, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_SetColorSubmissionModes(::ArrayW<int32_t> colorSubmissionMode, int32_t arraySize);

  /// @brief Method Internal_SetDepthSubmissionMode, addr 0x6e2d4a4, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetDepthSubmissionMode(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode depthSubmissionMode);

  /// @brief Method Internal_SetHasEyeTrackingPermissions, addr 0x6e2c408, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetHasEyeTrackingPermissions(bool value);

  /// @brief Method Internal_SetLatencyOptimization, addr 0x6e2dcf4, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetLatencyOptimization(::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization latencyOptimzation);

  /// @brief Method Internal_SetMultiviewRenderRegionsOptimizationMode, addr 0x6e2db80, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetMultiviewRenderRegionsOptimizationMode(::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode mode);

  /// @brief Method Internal_SetOptimizeBufferDiscards, addr 0x6e2d8f8, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetOptimizeBufferDiscards(bool enabled);

  /// @brief Method Internal_SetRenderMode, addr 0x6e2ca60, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetRenderMode(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode renderMode);

  /// @brief Method Internal_SetSpaceWarpMotionVectorTextureFormat, addr 0x6e2d774, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetSpaceWarpMotionVectorTextureFormat(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat spaceWarpMotionVectorTextureFormat);

  /// @brief Method Internal_SetSymmetricProjection, addr 0x6e2db04, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetSymmetricProjection(bool enabled);

  /// @brief Method Internal_SetUseOpenXRPredictedTime, addr 0x6e2dbfc, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetUseOpenXRPredictedTime(bool enabled);

  /// @brief Method Internal_SetUsedFoveatedRenderingApi, addr 0x6e2dc78, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetUsedFoveatedRenderingApi(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi api);

  /// @brief Method IsPermissionGranted, addr 0x6e2c484, size 0x8, virtual false, abstract: false, final false
  static inline bool IsPermissionGranted(::StringW permissionName);

  /// @brief Method LogRendererSettings, addr 0x6e2dd70, size 0x570, virtual false, abstract: false, final false
  inline void LogRendererSettings(uint64_t diagnosticsSectionHandle);

  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x6e2e3b0, size 0x20, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x6e2e39c, size 0x14, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method PermissionGrantedCallback, addr 0x6e2c2fc, size 0x58, virtual false, abstract: false, final false
  static inline void PermissionGrantedCallback(::StringW permissionName);

  /// @brief Method RefreshRecenterSpace, addr 0x6e2c1bc, size 0x4, virtual false, abstract: false, final false
  static inline void RefreshRecenterSpace();

  /// @brief Method SetAllowRecentering, addr 0x6e2c12c, size 0x4, virtual false, abstract: false, final false
  static inline void SetAllowRecentering(bool allowRecentering, float_t floorOffset);

  constexpr ::StringW const& __cordl_internal_get_customLoaderName() const;

  constexpr ::StringW& __cordl_internal_get_customLoaderName();

  constexpr ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> const& __cordl_internal_get_features() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>& __cordl_internal_get_features();

  constexpr bool const& __cordl_internal_get_m_autoColorSubmissionMode() const;

  constexpr bool& __cordl_internal_get_m_autoColorSubmissionMode();

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* const& __cordl_internal_get_m_colorSubmissionModes() const;

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*& __cordl_internal_get_m_colorSubmissionModes();

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode const& __cordl_internal_get_m_depthSubmissionMode() const;

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode& __cordl_internal_get_m_depthSubmissionMode();

  constexpr ::StringW const& __cordl_internal_get_m_eyeTrackingAndroidXRPermissionsToRequest() const;

  constexpr ::StringW& __cordl_internal_get_m_eyeTrackingAndroidXRPermissionsToRequest();

  constexpr ::StringW const& __cordl_internal_get_m_eyeTrackingQuestPermissionsToRequest() const;

  constexpr ::StringW& __cordl_internal_get_m_eyeTrackingQuestPermissionsToRequest();

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi const& __cordl_internal_get_m_foveatedRenderingApi() const;

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi& __cordl_internal_get_m_foveatedRenderingApi();

  constexpr bool const& __cordl_internal_get_m_hasMigratedMultiviewRenderRegionSetting() const;

  constexpr bool& __cordl_internal_get_m_hasMigratedMultiviewRenderRegionSetting();

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization const& __cordl_internal_get_m_latencyOptimization() const;

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization& __cordl_internal_get_m_latencyOptimization();

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode const& __cordl_internal_get_m_multiviewRenderRegionsOptimizationMode() const;

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode& __cordl_internal_get_m_multiviewRenderRegionsOptimizationMode();

  constexpr bool const& __cordl_internal_get_m_optimizeBufferDiscards() const;

  constexpr bool& __cordl_internal_get_m_optimizeBufferDiscards();

  constexpr bool const& __cordl_internal_get_m_optimizeMultiviewRenderRegions() const;

  constexpr bool& __cordl_internal_get_m_optimizeMultiviewRenderRegions();

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode const& __cordl_internal_get_m_renderMode() const;

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode& __cordl_internal_get_m_renderMode();

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat const& __cordl_internal_get_m_spacewarpMotionVectorTextureFormat() const;

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat& __cordl_internal_get_m_spacewarpMotionVectorTextureFormat();

  constexpr bool const& __cordl_internal_get_m_symmetricProjection() const;

  constexpr bool& __cordl_internal_get_m_symmetricProjection();

  constexpr bool const& __cordl_internal_get_m_useOpenXRPredictedTime() const;

  constexpr bool& __cordl_internal_get_m_useOpenXRPredictedTime();

  constexpr void __cordl_internal_set_customLoaderName(::StringW value);

  constexpr void __cordl_internal_set_features(::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> value);

  constexpr void __cordl_internal_set_m_autoColorSubmissionMode(bool value);

  constexpr void __cordl_internal_set_m_colorSubmissionModes(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* value);

  constexpr void __cordl_internal_set_m_depthSubmissionMode(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode value);

  constexpr void __cordl_internal_set_m_eyeTrackingAndroidXRPermissionsToRequest(::StringW value);

  constexpr void __cordl_internal_set_m_eyeTrackingQuestPermissionsToRequest(::StringW value);

  constexpr void __cordl_internal_set_m_foveatedRenderingApi(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi value);

  constexpr void __cordl_internal_set_m_hasMigratedMultiviewRenderRegionSetting(bool value);

  constexpr void __cordl_internal_set_m_latencyOptimization(::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization value);

  constexpr void __cordl_internal_set_m_multiviewRenderRegionsOptimizationMode(::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode value);

  constexpr void __cordl_internal_set_m_optimizeBufferDiscards(bool value);

  constexpr void __cordl_internal_set_m_optimizeMultiviewRenderRegions(bool value);

  constexpr void __cordl_internal_set_m_renderMode(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode value);

  constexpr void __cordl_internal_set_m_spacewarpMotionVectorTextureFormat(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat value);

  constexpr void __cordl_internal_set_m_symmetricProjection(bool value);

  constexpr void __cordl_internal_set_m_useOpenXRPredictedTime(bool value);

  /// @brief Method .ctor, addr 0x6e2ee70, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup getStaticF_kDefaultColorMode();

  static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> getStaticF_s_RuntimeInstance();

  /// @brief Method get_ActiveBuildTargetInstance, addr 0x6e2afd0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> get_ActiveBuildTargetInstance();

  /// @brief Method get_AllowRecentering, addr 0x6e2c224, size 0x4, virtual false, abstract: false, final false
  static inline bool get_AllowRecentering();

  /// @brief Method get_FloorOffset, addr 0x6e2c294, size 0x4, virtual false, abstract: false, final false
  static inline float_t get_FloorOffset();

  /// @brief Method get_Instance, addr 0x6e2ee68, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> get_Instance();

  /// @brief Method get_autoColorSubmissionMode, addr 0x6e2cc3c, size 0x8, virtual false, abstract: false, final false
  inline bool get_autoColorSubmissionMode();

  /// @brief Method get_colorSubmissionModes, addr 0x6e2cc4c, size 0x294, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup> get_colorSubmissionModes();

  /// @brief Method get_depthSubmissionMode, addr 0x6e2d250, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode get_depthSubmissionMode();

  /// @brief Method get_featureCount, addr 0x6e2bc44, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_featureCount();

  /// @brief Method get_foveatedRenderingApi, addr 0x6e2e6f4, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi get_foveatedRenderingApi();

  /// @brief Method get_latencyOptimization, addr 0x6e2cadc, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization get_latencyOptimization();

  /// @brief Method get_multiviewRenderRegionsOptimizationMode, addr 0x6e2e5f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode get_multiviewRenderRegionsOptimizationMode();

  /// @brief Method get_optimizeBufferDiscards, addr 0x6e2d7f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_optimizeBufferDiscards();

  /// @brief Method get_optimizeMultiviewRenderRegions, addr 0x6e2e4d8, size 0x14, virtual false, abstract: false, final false
  inline bool get_optimizeMultiviewRenderRegions();

  /// @brief Method get_renderMode, addr 0x6e2c80c, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode get_renderMode();

  /// @brief Method get_spacewarpMotionVectorTextureFormat, addr 0x6e2d520, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat get_spacewarpMotionVectorTextureFormat();

  /// @brief Method get_symmetricProjection, addr 0x6e2e3d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_symmetricProjection();

  /// @brief Method get_useOpenXRPredictedTime, addr 0x6e2e948, size 0xf4, virtual false, abstract: false, final false
  inline bool get_useOpenXRPredictedTime();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  static inline void setStaticF_kDefaultColorMode(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup value);

  static inline void setStaticF_s_RuntimeInstance(::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> value);

  /// @brief Method set_autoColorSubmissionMode, addr 0x6e2cc44, size 0x8, virtual false, abstract: false, final false
  inline void set_autoColorSubmissionMode(bool value);

  /// @brief Method set_colorSubmissionModes, addr 0x6e2cfc8, size 0x1fc, virtual false, abstract: false, final false
  inline void set_colorSubmissionModes(::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup> value);

  /// @brief Method set_depthSubmissionMode, addr 0x6e2d3a8, size 0xfc, virtual false, abstract: false, final false
  inline void set_depthSubmissionMode(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode value);

  /// @brief Method set_foveatedRenderingApi, addr 0x6e2e84c, size 0xfc, virtual false, abstract: false, final false
  inline void set_foveatedRenderingApi(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi value);

  /// @brief Method set_latencyOptimization, addr 0x6e2cc34, size 0x8, virtual false, abstract: false, final false
  inline void set_latencyOptimization(::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization value);

  /// @brief Method set_multiviewRenderRegionsOptimizationMode, addr 0x6e2e5f8, size 0xfc, virtual false, abstract: false, final false
  inline void set_multiviewRenderRegionsOptimizationMode(::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode value);

  /// @brief Method set_optimizeBufferDiscards, addr 0x6e2d7f8, size 0x100, virtual false, abstract: false, final false
  inline void set_optimizeBufferDiscards(bool value);

  /// @brief Method set_optimizeMultiviewRenderRegions, addr 0x6e2e4ec, size 0x104, virtual false, abstract: false, final false
  inline void set_optimizeMultiviewRenderRegions(bool value);

  /// @brief Method set_renderMode, addr 0x6e2c964, size 0xfc, virtual false, abstract: false, final false
  inline void set_renderMode(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode value);

  /// @brief Method set_spacewarpMotionVectorTextureFormat, addr 0x6e2d678, size 0xfc, virtual false, abstract: false, final false
  inline void set_spacewarpMotionVectorTextureFormat(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat value);

  /// @brief Method set_symmetricProjection, addr 0x6e2e3d8, size 0x100, virtual false, abstract: false, final false
  inline void set_symmetricProjection(bool value);

  /// @brief Method set_useOpenXRPredictedTime, addr 0x6e2eaa8, size 0x100, virtual false, abstract: false, final false
  inline void set_useOpenXRPredictedTime(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRSettings(OpenXRSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRSettings(OpenXRSettings const&) = delete;

  /// @brief Field LibraryName offset 0xffffffff size 0x8
  static constexpr ::ConstString LibraryName{ u"UnityOpenXR" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17466 };

  /// [FormerlySerializedAs("extensions")]
  /// [HideInInspector]
  /// [SerializeField]
  /// @brief Field features, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> ___features;

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field customLoaderName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___customLoaderName;

  /// @brief Field m_eyeTrackingQuestPermissionsToRequest, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_eyeTrackingQuestPermissionsToRequest;

  /// @brief Field m_eyeTrackingAndroidXRPermissionsToRequest, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_eyeTrackingAndroidXRPermissionsToRequest;

  /// [SerializeField]
  /// @brief Field m_renderMode, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode ___m_renderMode;

  /// [SerializeField]
  /// @brief Field m_latencyOptimization, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRSettings_LatencyOptimization ___m_latencyOptimization;

  /// [SerializeField]
  /// @brief Field m_autoColorSubmissionMode, offset: 0x40, size: 0x1, def value: None
  bool ___m_autoColorSubmissionMode;

  /// [SerializeField]
  /// @brief Field m_colorSubmissionModes, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* ___m_colorSubmissionModes;

  /// [SerializeField]
  /// [Tooltip("Enables XR_KHR_composition_layer_depth if possible and resolves or submits depth to OpenXR runtime.")]
  /// @brief Field m_depthSubmissionMode, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode ___m_depthSubmissionMode;

  /// [SerializeField]
  /// @brief Field m_spacewarpMotionVectorTextureFormat, offset: 0x54, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat ___m_spacewarpMotionVectorTextureFormat;

  /// [SerializeField]
  /// @brief Field m_optimizeBufferDiscards, offset: 0x58, size: 0x1, def value: None
  bool ___m_optimizeBufferDiscards;

  /// [SerializeField]
  /// @brief Field m_symmetricProjection, offset: 0x59, size: 0x1, def value: None
  bool ___m_symmetricProjection;

  /// [SerializeField]
  /// [HideInInspector]
  /// [Obsolete("m_optimizeMultiviewRenderRegions is deprecated. Use m_multiviewRenderRegionsOptimizationMode instead.", false)]
  /// @brief Field m_optimizeMultiviewRenderRegions, offset: 0x5a, size: 0x1, def value: None
  bool ___m_optimizeMultiviewRenderRegions;

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_multiviewRenderRegionsOptimizationMode, offset: 0x5b, size: 0x1, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRSettings_MultiviewRenderRegionsOptimizationMode ___m_multiviewRenderRegionsOptimizationMode;

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_hasMigratedMultiviewRenderRegionSetting, offset: 0x5c, size: 0x1, def value: None
  bool ___m_hasMigratedMultiviewRenderRegionSetting;

  /// [SerializeField]
  /// @brief Field m_foveatedRenderingApi, offset: 0x5d, size: 0x1, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi ___m_foveatedRenderingApi;

  /// [SerializeField]
  /// [Tooltip("When enabled, Unity uses OpenXR\'s time prediction methods to predict the display presentation time of the next frame. OpenXR time prediction ensures that the user\'s view on the
  /// device matches their movement to enhance real-time feedback. This results in smoother rendering on OpenXR runtimes through synchronization between application and display rendering. Unity
  /// recommends enabling this setting for smoother rendering on headsets to reduce unwanted effects such as motion sickness.")]
  /// @brief Field m_useOpenXRPredictedTime, offset: 0x5e, size: 0x1, def value: None
  bool ___m_useOpenXRPredictedTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___features) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___customLoaderName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_eyeTrackingQuestPermissionsToRequest) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_eyeTrackingAndroidXRPermissionsToRequest) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_renderMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_latencyOptimization) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_autoColorSubmissionMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_colorSubmissionModes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_depthSubmissionMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_spacewarpMotionVectorTextureFormat) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_optimizeBufferDiscards) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_symmetricProjection) == 0x59, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_optimizeMultiviewRenderRegions) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_multiviewRenderRegionsOptimizationMode) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_hasMigratedMultiviewRenderRegionSetting) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_foveatedRenderingApi) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_useOpenXRPredictedTime) == 0x5e, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRSettings) == 0x60, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
