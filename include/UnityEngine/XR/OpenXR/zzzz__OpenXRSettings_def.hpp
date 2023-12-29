#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRSettings)
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::OpenXR {
struct __OpenXRSettings__DepthSubmissionMode;
}
namespace UnityEngine::XR::OpenXR {
struct __OpenXRSettings__RenderMode;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
struct __OpenXRSettings__DepthSubmissionMode;
}
namespace UnityEngine::XR::OpenXR {
struct __OpenXRSettings__RenderMode;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode);
MARK_VAL_T(::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRSettings);
// Type: ::RenderMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14398))
// CS Name: ::OpenXRSettings::RenderMode
struct CORDL_TYPE __OpenXRSettings__RenderMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OpenXRSettings__RenderMode_Unwrapped
  enum struct ____OpenXRSettings__RenderMode_Unwrapped : int32_t {
    __E_MultiPass = static_cast<int32_t>(0x0),
    __E_SinglePassInstanced = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OpenXRSettings__RenderMode_Unwrapped() const noexcept {
    return static_cast<____OpenXRSettings__RenderMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OpenXRSettings__RenderMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRSettings__RenderMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MultiPass value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode const MultiPass;

  /// @brief Field SinglePassInstanced value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode const SinglePassInstanced;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Type: ::DepthSubmissionMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14399))
// CS Name: ::OpenXRSettings::DepthSubmissionMode
struct CORDL_TYPE __OpenXRSettings__DepthSubmissionMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OpenXRSettings__DepthSubmissionMode_Unwrapped
  enum struct ____OpenXRSettings__DepthSubmissionMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Depth16Bit = static_cast<int32_t>(0x1),
    __E_Depth24Bit = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OpenXRSettings__DepthSubmissionMode_Unwrapped() const noexcept {
    return static_cast<____OpenXRSettings__DepthSubmissionMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OpenXRSettings__DepthSubmissionMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRSettings__DepthSubmissionMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode const None;

  /// @brief Field Depth16Bit value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode const Depth16Bit;

  /// @brief Field Depth24Bit value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode const Depth24Bit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Type: UnityEngine.XR.OpenXR::OpenXRSettings
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14398)), TypeDefinitionIndex(TypeDefinitionIndex(10137)), TypeDefinitionIndex(TypeDefinitionIndex(14399))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14400))
// CS Name: ::UnityEngine.XR.OpenXR::OpenXRSettings*
class CORDL_TYPE OpenXRSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using DepthSubmissionMode = ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode;

  using RenderMode = ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode;

  /// @brief Field features, offset 0x18, size 0x8
  __declspec(property(get = __get_features, put = __set_features))::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*> features;

  /// @brief Field m_renderMode, offset 0x20, size 0x4
  __declspec(property(get = __get_m_renderMode, put = __set_m_renderMode))::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode m_renderMode;

  /// @brief Field m_depthSubmissionMode, offset 0x24, size 0x4
  __declspec(property(get = __get_m_depthSubmissionMode, put = __set_m_depthSubmissionMode))::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode m_depthSubmissionMode;

  /// @brief Field s_RuntimeInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_RuntimeInstance, put = setStaticF_s_RuntimeInstance))::UnityEngine::XR::OpenXR::OpenXRSettings* s_RuntimeInstance;

  __declspec(property(get = get_featureCount)) int32_t featureCount;

  __declspec(property(get = get_renderMode, put = set_renderMode))::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode renderMode;

  __declspec(property(get = get_depthSubmissionMode, put = set_depthSubmissionMode))::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode depthSubmissionMode;

  constexpr ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*>& __get_features();

  constexpr ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*> const& __get_features() const;

  constexpr void __set_features(::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*> value);

  constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode& __get_m_renderMode();

  constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode const& __get_m_renderMode() const;

  constexpr void __set_m_renderMode(::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode value);

  constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode& __get_m_depthSubmissionMode();

  constexpr ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode const& __get_m_depthSubmissionMode() const;

  constexpr void __set_m_depthSubmissionMode(::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode value);

  static inline void setStaticF_s_RuntimeInstance(::UnityEngine::XR::OpenXR::OpenXRSettings* value);

  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings* getStaticF_s_RuntimeInstance();

  /// @brief Method get_featureCount addr 0x2afa2ec size 0x1c virtual false final false
  inline int32_t get_featureCount();

  /// @brief Method GetFeature addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TFeature> inline TFeature GetFeature();

  /// @brief Method GetFeature addr 0x2afa308 size 0x8c virtual false final false
  inline ::UnityEngine::XR::OpenXR::Features::OpenXRFeature* GetFeature(::System::Type* featureType);

  /// @brief Method GetFeatures addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TFeature> inline ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*> GetFeatures();

  /// @brief Method GetFeatures addr 0x2afa394 size 0x16c virtual false final false
  inline ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*> GetFeatures(::System::Type* featureType);

  /// @brief Method GetFeatures addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TFeature> inline int32_t GetFeatures(::System::Collections::Generic::List_1<TFeature>* featuresOut);

  /// @brief Method GetFeatures addr 0x2afa500 size 0x158 virtual false final false
  inline int32_t GetFeatures(::System::Type* featureType, ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>* featuresOut);

  /// @brief Method GetFeatures addr 0x2afa658 size 0x8c virtual false final false
  inline ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*> GetFeatures();

  /// @brief Method GetFeatures addr 0x2afa6e4 size 0x9c virtual false final false
  inline int32_t GetFeatures(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>* featuresOut);

  /// @brief Method get_renderMode addr 0x2afa780 size 0xd8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode get_renderMode();

  /// @brief Method set_renderMode addr 0x2afa8c0 size 0xec virtual false final false
  inline void set_renderMode(::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode value);

  /// @brief Method get_depthSubmissionMode addr 0x2afaa28 size 0xd8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode get_depthSubmissionMode();

  /// @brief Method set_depthSubmissionMode addr 0x2afab68 size 0xec virtual false final false
  inline void set_depthSubmissionMode(::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode value);

  /// @brief Method ApplyRenderSettings addr 0x2afacd0 size 0x1c virtual false final false
  inline void ApplyRenderSettings();

  /// @brief Method Internal_SetRenderMode addr 0x2afa9ac size 0x7c virtual false final false
  static inline void Internal_SetRenderMode(::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode renderMode);

  /// @brief Method Internal_GetRenderMode addr 0x2afa858 size 0x68 virtual false final false
  static inline ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode Internal_GetRenderMode();

  /// @brief Method Internal_SetDepthSubmissionMode addr 0x2afac54 size 0x7c virtual false final false
  static inline void Internal_SetDepthSubmissionMode(::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode depthSubmissionMode);

  /// @brief Method Internal_GetDepthSubmissionMode addr 0x2afab00 size 0x68 virtual false final false
  static inline ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode Internal_GetDepthSubmissionMode();

  /// @brief Method Awake addr 0x2afacec size 0x4c virtual false final false
  inline void Awake();

  /// @brief Method ApplySettings addr 0x2afad38 size 0x1c virtual false final false
  inline void ApplySettings();

  /// @brief Method GetInstance addr 0x2afad54 size 0xa8 virtual false final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings* GetInstance(bool useActiveBuildTarget);

  /// @brief Method get_ActiveBuildTargetInstance addr 0x2afadfc size 0x8 virtual false final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings* get_ActiveBuildTargetInstance();

  /// @brief Method get_Instance addr 0x2afae04 size 0x8 virtual false final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings* get_Instance();

  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings* New_ctor();

  /// @brief Method .ctor addr 0x2afae0c size 0x60 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRSettings(OpenXRSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRSettings(OpenXRSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings();

public:
  /// @brief Field features, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::Array<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>*> ___features;

  /// @brief Field m_renderMode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode ___m_renderMode;

  /// @brief Field m_depthSubmissionMode, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode ___m_depthSubmissionMode;

  /// @brief Field LibraryName offset 0xffffffff size 0x8
  static constexpr ::ConstString LibraryName{ u"UnityOpenXR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRSettings, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___features) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_renderMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_depthSubmissionMode) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::__OpenXRSettings__DepthSubmissionMode, "UnityEngine.XR.OpenXR", "OpenXRSettings/DepthSubmissionMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::__OpenXRSettings__RenderMode, "UnityEngine.XR.OpenXR", "OpenXRSettings/RenderMode");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRSettings*, "UnityEngine.XR.OpenXR", "OpenXRSettings");
