#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/AdditionalLightsShadowAtlasLayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdditionalLightsShadowAtlasLayout)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering::Universal {
struct AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest;
}
namespace UnityEngine::Rendering::Universal {
class AdditionalLightsShadowAtlasLayout___c;
}
namespace UnityEngine::Rendering::Universal {
struct ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalShadowData;
}
namespace UnityEngine {
struct RectInt;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions;
}
namespace UnityEngine::Rendering::Universal {
class AdditionalLightsShadowAtlasLayout___c;
}
namespace UnityEngine::Rendering::Universal {
struct AdditionalLightsShadowAtlasLayout;
}
namespace UnityEngine::Rendering::Universal {
struct AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c);
MARK_VAL_T(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout);
MARK_VAL_T(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout/ShadowResolutionRequest/SettingsOptions
struct CORDL_TYPE ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions_Unwrapped
  enum struct __ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions_Unwrapped : uint16_t {
    __E_None = static_cast<uint16_t>(0x0u),
    __E_SoftShadow = static_cast<uint16_t>(0x1u),
    __E_PointLightShadow = static_cast<uint16_t>(0x2u),
    __E_All = static_cast<uint16_t>(0xffffu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions_Unwrapped() const noexcept {
    return static_cast<__ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions(uint16_t value__) noexcept;

  /// @brief Field All value: U16(65535)
  static ::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions const All;

  /// @brief Field None value: U16(0)
  static ::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions const None;

  /// @brief Field PointLightShadow value: U16(2)
  static ::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions const PointLightShadow;

  /// @brief Field SoftShadow value: U16(1)
  static ::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions const SoftShadow;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12794 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions, 0x2>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout::ShadowResolutionRequest::SettingsOptions
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout/ShadowResolutionRequest
struct CORDL_TYPE AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest {
public:
  // Declarations
  using SettingsOptions = ::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions;

  __declspec(property(get = get_pointLightShadow, put = set_pointLightShadow)) bool pointLightShadow;

  __declspec(property(get = get_softShadow, put = set_softShadow)) bool softShadow;

  /// @brief Method get_pointLightShadow, addr 0x66c8d0c, size 0xc, virtual false, abstract: false, final false
  inline bool get_pointLightShadow();

  /// @brief Method get_softShadow, addr 0x66c8d00, size 0xc, virtual false, abstract: false, final false
  inline bool get_softShadow();

  /// @brief Method set_pointLightShadow, addr 0x66c8c80, size 0x20, virtual false, abstract: false, final false
  inline void set_pointLightShadow(bool value);

  /// @brief Method set_softShadow, addr 0x66c8c70, size 0x10, virtual false, abstract: false, final false
  inline void set_softShadow(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest();

  // Ctor Parameters [CppParam { name: "visibleLightIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "perLightShadowSliceIndex", ty: "uint16_t", modifiers: "", def_value:
  // None }, CppParam { name: "requestedResolution", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "offsetX", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "offsetY", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "allocatedResolution", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_ShadowProperties", ty:
  // "::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions", modifiers: "", def_value: None }]
  constexpr AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest(
      uint16_t visibleLightIndex, uint16_t perLightShadowSliceIndex, uint16_t requestedResolution, uint16_t offsetX, uint16_t offsetY, uint16_t allocatedResolution,
      ::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions m_ShadowProperties) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12795 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xe };

  /// @brief Field visibleLightIndex, offset: 0x0, size: 0x2, def value: None
  uint16_t visibleLightIndex;

  /// @brief Field perLightShadowSliceIndex, offset: 0x2, size: 0x2, def value: None
  uint16_t perLightShadowSliceIndex;

  /// @brief Field requestedResolution, offset: 0x4, size: 0x2, def value: None
  uint16_t requestedResolution;

  /// @brief Field offsetX, offset: 0x6, size: 0x2, def value: None
  uint16_t offsetX;

  /// @brief Field offsetY, offset: 0x8, size: 0x2, def value: None
  uint16_t offsetY;

  /// @brief Field allocatedResolution, offset: 0xa, size: 0x2, def value: None
  uint16_t allocatedResolution;

  /// @brief Field m_ShadowProperties, offset: 0xc, size: 0x2, def value: None
  ::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions m_ShadowProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, visibleLightIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, perLightShadowSliceIndex) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, requestedResolution) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, offsetX) == 0x6, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, offsetY) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, allocatedResolution) == 0xa, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, m_ShadowProperties) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, 0xe>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout/<>c
class CORDL_TYPE AdditionalLightsShadowAtlasLayout___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c* __9;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_0,
                      put = setStaticF___9__24_0)) ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                                    ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>* __9__24_0;

  static inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c* New_ctor();

  /// @brief Method <CreateCompareShadowResolutionRequesPredicate>b__24_0, addr 0x66c8e5c, size 0x128, virtual false, abstract: false, final false
  inline int32_t _CreateCompareShadowResolutionRequesPredicate_b__24_0(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest curr,
                                                                       ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest other);

  /// @brief Method .ctor, addr 0x66c8e58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c* getStaticF___9();

  static inline ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                 ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*
  getStaticF___9__24_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c* value);

  static inline void setStaticF___9__24_0(::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                           ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalLightsShadowAtlasLayout___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowAtlasLayout___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdditionalLightsShadowAtlasLayout___c(AdditionalLightsShadowAtlasLayout___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowAtlasLayout___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdditionalLightsShadowAtlasLayout___c(AdditionalLightsShadowAtlasLayout___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12796 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout::ShadowResolutionRequest
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout
struct CORDL_TYPE AdditionalLightsShadowAtlasLayout {
public:
  // Declarations
  using ShadowResolutionRequest = ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest;

  using __c = ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c;

  /// @brief Field s_CompareShadowResolutionRequest, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CompareShadowResolutionRequest,
                      put = setStaticF_s_CompareShadowResolutionRequest)) ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                                                           ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*
      s_CompareShadowResolutionRequest;

  /// @brief Field s_ShadowResolutionRequests, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ShadowResolutionRequests, put = setStaticF_s_ShadowResolutionRequests)) ::System::Collections::Generic::List_1<
      ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>* s_ShadowResolutionRequests;

  /// @brief Field s_SortedShadowResolutionRequests, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SortedShadowResolutionRequests,
                      put = setStaticF_s_SortedShadowResolutionRequests)) ::ArrayW<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                                                   ::Array<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*>
      s_SortedShadowResolutionRequests;

  /// @brief Field s_UnusedAtlasSquareAreas, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UnusedAtlasSquareAreas, put = setStaticF_s_UnusedAtlasSquareAreas)) ::System::Collections::Generic::List_1<::UnityEngine::RectInt>* s_UnusedAtlasSquareAreas;

  /// @brief Field s_VisibleLightIndexToCameraSquareDistance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_VisibleLightIndexToCameraSquareDistance, put = setStaticF_s_VisibleLightIndexToCameraSquareDistance)) ::ArrayW<float_t, ::Array<float_t>*>
      s_VisibleLightIndexToCameraSquareDistance;

  /// @brief Method ClearStaticCaches, addr 0x66c8da4, size 0x60, virtual false, abstract: false, final false
  static inline void ClearStaticCaches();

  /// @brief Method CreateCompareShadowResolutionRequesPredicate, addr 0x66c8b9c, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                 ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*
  CreateCompareShadowResolutionRequesPredicate();

  /// @brief Method EstimateScaleFactorNeededToFitAllShadowsInAtlas, addr 0x66c8ca0, size 0x60, virtual false, abstract: false, final false
  static inline int32_t EstimateScaleFactorNeededToFitAllShadowsInAtlas(
      ::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>> shadowResolutionRequests, int32_t endIndex,
      int32_t atlasSize);

  /// @brief Method GetAtlasSize, addr 0x66c8d38, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetAtlasSize();

  /// @brief Method GetShadowSlicesScaleFactor, addr 0x66c8d30, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetShadowSlicesScaleFactor();

  /// @brief Method GetSliceShadowResolutionRequest, addr 0x66c8d78, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest GetSliceShadowResolutionRequest(int32_t originalVisibleLightIndex, int32_t sliceIndex);

  /// @brief Method GetSortedShadowResolutionRequest, addr 0x66c8d54, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest GetSortedShadowResolutionRequest(int32_t sortedShadowResolutionRequestIndex);

  /// @brief Method GetTotalShadowResolutionRequestCount, addr 0x66c8d20, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetTotalShadowResolutionRequestCount();

  /// @brief Method GetTotalShadowSlicesCount, addr 0x66c8d18, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetTotalShadowSlicesCount();

  /// @brief Method HasSpaceForLight, addr 0x66c8d40, size 0x14, virtual false, abstract: false, final false
  inline bool HasSpaceForLight(int32_t originalVisibleLightIndex);

  /// @brief Method HasTooManyShadowMaps, addr 0x66c8d28, size 0x8, virtual false, abstract: false, final false
  inline bool HasTooManyShadowMaps();

  /// @brief Method .ctor, addr 0x66c7d50, size 0xe4c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::UniversalLightData* lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  static inline ::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                 ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>*
  getStaticF_s_CompareShadowResolutionRequest();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>* getStaticF_s_ShadowResolutionRequests();

  static inline ::ArrayW<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                         ::Array<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*>
  getStaticF_s_SortedShadowResolutionRequests();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::RectInt>* getStaticF_s_UnusedAtlasSquareAreas();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_s_VisibleLightIndexToCameraSquareDistance();

  static inline void setStaticF_s_CompareShadowResolutionRequest(::System::Func_3<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                                                  ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, int32_t>* value);

  static inline void
  setStaticF_s_ShadowResolutionRequests(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>* value);

  static inline void setStaticF_s_SortedShadowResolutionRequests(::ArrayW<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,
                                                                          ::Array<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*>
                                                                     value);

  static inline void setStaticF_s_UnusedAtlasSquareAreas(::System::Collections::Generic::List_1<::UnityEngine::RectInt>* value);

  static inline void setStaticF_s_VisibleLightIndexToCameraSquareDistance(::ArrayW<float_t, ::Array<float_t>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalLightsShadowAtlasLayout();

  // Ctor Parameters [CppParam { name: "m_SortedShadowResolutionRequests", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>", modifiers: "", def_value: None }, CppParam { name:
  // "m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name:
  // "m_TotalShadowSlicesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TotalShadowResolutionRequestCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_TooManyShadowMaps", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_ShadowSlicesScaleFactor", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_AtlasSize", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AdditionalLightsShadowAtlasLayout(
      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest> m_SortedShadowResolutionRequests,
      ::Unity::Collections::NativeArray_1<int32_t> m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex, int32_t m_TotalShadowSlicesCount, int32_t m_TotalShadowResolutionRequestCount,
      bool m_TooManyShadowMaps, int32_t m_ShadowSlicesScaleFactor, int32_t m_AtlasSize) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12797 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field m_SortedShadowResolutionRequests, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest> m_SortedShadowResolutionRequests;

  /// @brief Field m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex;

  /// @brief Field m_TotalShadowSlicesCount, offset: 0x20, size: 0x4, def value: None
  int32_t m_TotalShadowSlicesCount;

  /// @brief Field m_TotalShadowResolutionRequestCount, offset: 0x24, size: 0x4, def value: None
  int32_t m_TotalShadowResolutionRequestCount;

  /// @brief Field m_TooManyShadowMaps, offset: 0x28, size: 0x1, def value: None
  bool m_TooManyShadowMaps;

  /// @brief Field m_ShadowSlicesScaleFactor, offset: 0x2c, size: 0x4, def value: None
  int32_t m_ShadowSlicesScaleFactor;

  /// @brief Field m_AtlasSize, offset: 0x30, size: 0x4, def value: None
  int32_t m_AtlasSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, m_SortedShadowResolutionRequests) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, m_TotalShadowSlicesCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, m_TotalShadowResolutionRequestCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, m_TooManyShadowMaps) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, m_ShadowSlicesScaleFactor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, m_AtlasSize) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions, "UnityEngine.Rendering.Universal",
                       "AdditionalLightsShadowAtlasLayout/ShadowResolutionRequest/SettingsOptions");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*, "UnityEngine.Rendering.Universal", "AdditionalLightsShadowAtlasLayout/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, "UnityEngine.Rendering.Universal", "AdditionalLightsShadowAtlasLayout");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, "UnityEngine.Rendering.Universal",
                       "AdditionalLightsShadowAtlasLayout/ShadowResolutionRequest");
