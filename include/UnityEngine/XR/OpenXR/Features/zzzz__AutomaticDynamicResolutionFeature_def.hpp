#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/AutomaticDynamicResolutionFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AutomaticDynamicResolutionFeature)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features {
class AutomaticDynamicResolutionFeature;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*, "UnityEngine.XR.OpenXR.Features", "AutomaticDynamicResolutionFeature");
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.AutomaticDynamicResolutionFeature
class CORDL_TYPE AutomaticDynamicResolutionFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Field <usingSuggestedResolutionScale>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__usingSuggestedResolutionScale_k__BackingField,
                      put = setStaticF__usingSuggestedResolutionScale_k__BackingField)) bool _usingSuggestedResolutionScale_k__BackingField;

  /// @brief Field m_MaxResolutionScalar, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxResolutionScalar, put = __cordl_internal_set_m_MaxResolutionScalar)) float_t m_MaxResolutionScalar;

  /// @brief Field m_MinResolutionScalar, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinResolutionScalar, put = __cordl_internal_set_m_MinResolutionScalar)) float_t m_MinResolutionScalar;

  __declspec(property(get = get_maxResolutionScalar, put = set_maxResolutionScalar)) float_t maxResolutionScalar;

  __declspec(property(get = get_minResolutionScalar, put = set_minResolutionScalar)) float_t minResolutionScalar;

  /// @brief Method Internal_IsAutomaticDynamicResolutionScalingSupported, addr 0x6e4a140, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_IsAutomaticDynamicResolutionScalingSupported();

  /// @brief Method Internal_SetMinMaxScalerResolution, addr 0x6e4a228, size 0x80, virtual false, abstract: false, final false
  static inline void Internal_SetMinMaxScalerResolution(float_t min, float_t max);

  /// @brief Method Internal_SetUsingSuggestedResolutionScale, addr 0x6e4a1ac, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetUsingSuggestedResolutionScale(bool usingSuggestedScale);

  /// @brief Method IsAutomaticDynamicResolutionScalingSupported, addr 0x6e4a2a8, size 0x50, virtual false, abstract: false, final false
  static inline bool IsAutomaticDynamicResolutionScalingSupported();

  static inline ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x6e49e48, size 0x1f4, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t instance);

  /// @brief Method SetUsingSuggestedResolutionScale, addr 0x6e4a2f8, size 0xa4, virtual false, abstract: false, final false
  static inline void SetUsingSuggestedResolutionScale(bool usingSuggestedScale);

  constexpr float_t const& __cordl_internal_get_m_MaxResolutionScalar() const;

  constexpr float_t& __cordl_internal_get_m_MaxResolutionScalar();

  constexpr float_t const& __cordl_internal_get_m_MinResolutionScalar() const;

  constexpr float_t& __cordl_internal_get_m_MinResolutionScalar();

  constexpr void __cordl_internal_set_m_MaxResolutionScalar(float_t value);

  constexpr void __cordl_internal_set_m_MinResolutionScalar(float_t value);

  /// @brief Method .ctor, addr 0x6e4a39c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__usingSuggestedResolutionScale_k__BackingField();

  /// @brief Method get_maxResolutionScalar, addr 0x6e49c84, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxResolutionScalar();

  /// @brief Method get_minResolutionScalar, addr 0x6e49b80, size 0x8, virtual false, abstract: false, final false
  inline float_t get_minResolutionScalar();

  /// [CompilerGenerated]
  /// @brief Method get_usingSuggestedResolutionScale, addr 0x6e49d88, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_usingSuggestedResolutionScale();

  static inline void setStaticF__usingSuggestedResolutionScale_k__BackingField(bool value);

  /// @brief Method set_maxResolutionScalar, addr 0x6e49c8c, size 0xfc, virtual false, abstract: false, final false
  inline void set_maxResolutionScalar(float_t value);

  /// @brief Method set_minResolutionScalar, addr 0x6e49b88, size 0xfc, virtual false, abstract: false, final false
  inline void set_minResolutionScalar(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_usingSuggestedResolutionScale, addr 0x6e49de4, size 0x64, virtual false, abstract: false, final false
  static inline void set_usingSuggestedResolutionScale(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutomaticDynamicResolutionFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutomaticDynamicResolutionFeature", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutomaticDynamicResolutionFeature(AutomaticDynamicResolutionFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutomaticDynamicResolutionFeature", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutomaticDynamicResolutionFeature(AutomaticDynamicResolutionFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17603 };

  /// @brief Field k_DynamicResolutionFeatureId offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DynamicResolutionFeatureId{ u"com.unity.openxr.feature.ViewportDynamicResolution" };

  /// @brief Field k_InitialMaxResolutionScalar offset 0xffffffff size 0x4
  static constexpr float_t k_InitialMaxResolutionScalar{ static_cast<float_t>(1.0f) };

  /// @brief Field k_InitialMinResolutionScalar offset 0xffffffff size 0x4
  static constexpr float_t k_InitialMinResolutionScalar{ static_cast<float_t>(0.05f) };

  /// @brief Field k_Library offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Library{ u"UnityOpenXR" };

  /// @brief Field k_OpenXRRequestedExtensions offset 0xffffffff size 0x8
  static constexpr ::ConstString k_OpenXRRequestedExtensions{ u"XR_META_recommended_layer_resolution XR_ANDROID_recommended_resolution" };

  /// @brief Field k_UIName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_UIName{ u"Automatic Viewport Dynamic Resolution" };

  /// @brief Field maxResolutionScalarLimit offset 0xffffffff size 0x4
  static constexpr float_t maxResolutionScalarLimit{ static_cast<float_t>(2.0f) };

  /// @brief Field minResolutionScalarLimit offset 0xffffffff size 0x4
  static constexpr float_t minResolutionScalarLimit{ static_cast<float_t>(0.05f) };

  /// [SerializeField]
  /// [Tooltip("Select the minimum resolution scalar.")]
  /// @brief Field m_MinResolutionScalar, offset: 0x6c, size: 0x4, def value: None
  float_t ___m_MinResolutionScalar;

  /// [SerializeField]
  /// [Tooltip("Select the maximum resolution scalar.")]
  /// @brief Field m_MaxResolutionScalar, offset: 0x70, size: 0x4, def value: None
  float_t ___m_MaxResolutionScalar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature, ___m_MinResolutionScalar) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature, ___m_MaxResolutionScalar) == 0x70, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature) == 0x78, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
