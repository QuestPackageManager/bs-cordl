#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LensFlareCommonSRP.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LensFlareCommonSRP)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
class Object;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class LensFlareCommonSRP_LensFlareCompInfo;
}
namespace UnityEngine::Rendering {
class LensFlareCommonSRP___c__DisplayClass50_0;
}
namespace UnityEngine::Rendering {
class LensFlareCommonSRP___c__DisplayClass51_0;
}
namespace UnityEngine::Rendering {
struct LensFlareCommonSRP___c__DisplayClass74_0;
}
namespace UnityEngine::Rendering {
class LensFlareComponentSRP;
}
namespace UnityEngine::Rendering {
class LensFlareDataElementSRP;
}
namespace UnityEngine::Rendering {
class LensFlareDataSRP;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
class UnsafeCommandBuffer;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class LensFlareCommonSRP;
}
namespace UnityEngine::Rendering {
class LensFlareCommonSRP_LensFlareCompInfo;
}
namespace UnityEngine::Rendering {
class LensFlareCommonSRP___c__DisplayClass50_0;
}
namespace UnityEngine::Rendering {
class LensFlareCommonSRP___c__DisplayClass51_0;
}
namespace UnityEngine::Rendering {
struct LensFlareCommonSRP___c__DisplayClass74_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::LensFlareCommonSRP);
MARK_REF_PTR_T(::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo);
MARK_REF_PTR_T(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0);
MARK_VAL_T(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LensFlareCommonSRP/LensFlareCompInfo
class CORDL_TYPE LensFlareCommonSRP_LensFlareCompInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field comp, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_comp, put = __cordl_internal_set_comp)) ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> comp;

  /// @brief Field index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  static inline ::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo* New_ctor(int32_t idx, ::UnityEngine::Rendering::LensFlareComponentSRP* cmp);

  constexpr ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> const& __cordl_internal_get_comp() const;

  constexpr ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>& __cordl_internal_get_comp();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr void __cordl_internal_set_comp(::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> value);

  constexpr void __cordl_internal_set_index(int32_t value);

  /// @brief Method .ctor, addr 0x65e32f4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t idx, ::UnityEngine::Rendering::LensFlareComponentSRP* cmp);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LensFlareCommonSRP_LensFlareCompInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LensFlareCommonSRP_LensFlareCompInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LensFlareCommonSRP_LensFlareCompInfo(LensFlareCommonSRP_LensFlareCompInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LensFlareCommonSRP_LensFlareCompInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LensFlareCommonSRP_LensFlareCompInfo(LensFlareCommonSRP_LensFlareCompInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12142 };

  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field comp, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> ___comp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo, ___index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo, ___comp) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LensFlareCommonSRP/<>c__DisplayClass50_0
class CORDL_TYPE LensFlareCommonSRP___c__DisplayClass50_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field newData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_newData, put = __cordl_internal_set_newData)) ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> newData;

  static inline ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0* New_ctor();

  /// @brief Method <AddData>b__0, addr 0x65ea430, size 0x7c, virtual false, abstract: false, final false
  inline bool _AddData_b__0(::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo* x);

  constexpr ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> const& __cordl_internal_get_newData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>& __cordl_internal_get_newData();

  constexpr void __cordl_internal_set_newData(::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> value);

  /// @brief Method .ctor, addr 0x65e32f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LensFlareCommonSRP___c__DisplayClass50_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LensFlareCommonSRP___c__DisplayClass50_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LensFlareCommonSRP___c__DisplayClass50_0(LensFlareCommonSRP___c__DisplayClass50_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LensFlareCommonSRP___c__DisplayClass50_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LensFlareCommonSRP___c__DisplayClass50_0(LensFlareCommonSRP___c__DisplayClass50_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12143 };

  /// @brief Field newData, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> ___newData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0, ___newData) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LensFlareCommonSRP/<>c__DisplayClass51_0
class CORDL_TYPE LensFlareCommonSRP___c__DisplayClass51_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> data;

  static inline ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0* New_ctor();

  /// @brief Method <RemoveData>b__0, addr 0x65ea4ac, size 0x7c, virtual false, abstract: false, final false
  inline bool _RemoveData_b__0(::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo* x);

  constexpr ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> const& __cordl_internal_get_data() const;

  constexpr ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> value);

  /// @brief Method .ctor, addr 0x65e3544, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LensFlareCommonSRP___c__DisplayClass51_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LensFlareCommonSRP___c__DisplayClass51_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LensFlareCommonSRP___c__DisplayClass51_0(LensFlareCommonSRP___c__DisplayClass51_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LensFlareCommonSRP___c__DisplayClass51_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LensFlareCommonSRP___c__DisplayClass51_0(LensFlareCommonSRP___c__DisplayClass51_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12144 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0, ___data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Vector2
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LensFlareCommonSRP/<>c__DisplayClass74_0
struct CORDL_TYPE LensFlareCommonSRP___c__DisplayClass74_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LensFlareCommonSRP___c__DisplayClass74_0();

  // Ctor Parameters [CppParam { name: "screenPos", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "position", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "globalCos0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "globalSin0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vScreenRatio",
  // ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "element", ty: "::UnityEngine::Rendering::LensFlareDataElementSRP*", modifiers: "", def_value: None }, CppParam {
  // name: "combinedScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "usedAspectRatio", ty: "float_t", modifiers: "", def_value: None }]
  constexpr LensFlareCommonSRP___c__DisplayClass74_0(::UnityEngine::Vector2 screenPos, float_t position, float_t globalCos0, float_t globalSin0, ::UnityEngine::Vector2 vScreenRatio,
                                                     ::UnityEngine::Rendering::LensFlareDataElementSRP* element, float_t combinedScale, float_t usedAspectRatio) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12145 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field screenPos, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 screenPos;

  /// @brief Field position, offset: 0x8, size: 0x4, def value: None
  float_t position;

  /// @brief Field globalCos0, offset: 0xc, size: 0x4, def value: None
  float_t globalCos0;

  /// @brief Field globalSin0, offset: 0x10, size: 0x4, def value: None
  float_t globalSin0;

  /// @brief Field vScreenRatio, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::Vector2 vScreenRatio;

  /// @brief Field element, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::LensFlareDataElementSRP* element;

  /// @brief Field combinedScale, offset: 0x28, size: 0x4, def value: None
  float_t combinedScale;

  /// @brief Field usedAspectRatio, offset: 0x2c, size: 0x4, def value: None
  float_t usedAspectRatio;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0, screenPos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0, position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0, globalCos0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0, globalSin0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0, vScreenRatio) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0, element) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0, combinedScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0, usedAspectRatio) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LensFlareCommonSRP
class CORDL_TYPE LensFlareCommonSRP : public ::System::Object {
public:
  // Declarations
  using LensFlareCompInfo = ::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo;

  using __c__DisplayClass50_0 = ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0;

  using __c__DisplayClass51_0 = ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0;

  using __c__DisplayClass74_0 = ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0;

  __declspec(property(get = get_Data)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>* Data;

  /// @brief Field _FlareCloudOpacity, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareCloudOpacity, put = setStaticF__FlareCloudOpacity)) int32_t _FlareCloudOpacity;

  /// @brief Field _FlareColorValue, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareColorValue, put = setStaticF__FlareColorValue)) int32_t _FlareColorValue;

  /// @brief Field _FlareData0, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareData0, put = setStaticF__FlareData0)) int32_t _FlareData0;

  /// @brief Field _FlareData1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareData1, put = setStaticF__FlareData1)) int32_t _FlareData1;

  /// @brief Field _FlareData2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareData2, put = setStaticF__FlareData2)) int32_t _FlareData2;

  /// @brief Field _FlareData3, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareData3, put = setStaticF__FlareData3)) int32_t _FlareData3;

  /// @brief Field _FlareData4, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareData4, put = setStaticF__FlareData4)) int32_t _FlareData4;

  /// @brief Field _FlareData5, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareData5, put = setStaticF__FlareData5)) int32_t _FlareData5;

  /// @brief Field _FlareOcclusionIndex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareOcclusionIndex, put = setStaticF__FlareOcclusionIndex)) int32_t _FlareOcclusionIndex;

  /// @brief Field _FlareOcclusionPermutation, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareOcclusionPermutation, put = setStaticF__FlareOcclusionPermutation)) int32_t _FlareOcclusionPermutation;

  /// @brief Field _FlareOcclusionRemapTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareOcclusionRemapTex, put = setStaticF__FlareOcclusionRemapTex)) int32_t _FlareOcclusionRemapTex;

  /// @brief Field _FlareOcclusionTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareOcclusionTex, put = setStaticF__FlareOcclusionTex)) int32_t _FlareOcclusionTex;

  /// @brief Field _FlareRadialTint, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareRadialTint, put = setStaticF__FlareRadialTint)) int32_t _FlareRadialTint;

  /// @brief Field _FlareSunOcclusionTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareSunOcclusionTex, put = setStaticF__FlareSunOcclusionTex)) int32_t _FlareSunOcclusionTex;

  /// @brief Field _FlareTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareTex, put = setStaticF__FlareTex)) int32_t _FlareTex;

  /// @brief Field _LensFlareScreenSpaceBloomMipTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensFlareScreenSpaceBloomMipTexture, put = setStaticF__LensFlareScreenSpaceBloomMipTexture)) int32_t _LensFlareScreenSpaceBloomMipTexture;

  /// @brief Field _LensFlareScreenSpaceMipLevel, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensFlareScreenSpaceMipLevel, put = setStaticF__LensFlareScreenSpaceMipLevel)) int32_t _LensFlareScreenSpaceMipLevel;

  /// @brief Field _LensFlareScreenSpaceParams1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensFlareScreenSpaceParams1, put = setStaticF__LensFlareScreenSpaceParams1)) int32_t _LensFlareScreenSpaceParams1;

  /// @brief Field _LensFlareScreenSpaceParams2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensFlareScreenSpaceParams2, put = setStaticF__LensFlareScreenSpaceParams2)) int32_t _LensFlareScreenSpaceParams2;

  /// @brief Field _LensFlareScreenSpaceParams3, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensFlareScreenSpaceParams3, put = setStaticF__LensFlareScreenSpaceParams3)) int32_t _LensFlareScreenSpaceParams3;

  /// @brief Field _LensFlareScreenSpaceParams4, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensFlareScreenSpaceParams4, put = setStaticF__LensFlareScreenSpaceParams4)) int32_t _LensFlareScreenSpaceParams4;

  /// @brief Field _LensFlareScreenSpaceParams5, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensFlareScreenSpaceParams5, put = setStaticF__LensFlareScreenSpaceParams5)) int32_t _LensFlareScreenSpaceParams5;

  /// @brief Field _LensFlareScreenSpaceResultTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensFlareScreenSpaceResultTexture, put = setStaticF__LensFlareScreenSpaceResultTexture)) int32_t _LensFlareScreenSpaceResultTexture;

  /// @brief Field _LensFlareScreenSpaceSpectralLut, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensFlareScreenSpaceSpectralLut, put = setStaticF__LensFlareScreenSpaceSpectralLut)) int32_t _LensFlareScreenSpaceSpectralLut;

  /// @brief Field _LensFlareScreenSpaceStreakTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensFlareScreenSpaceStreakTex, put = setStaticF__LensFlareScreenSpaceStreakTex)) int32_t _LensFlareScreenSpaceStreakTex;

  /// @brief Field _LensFlareScreenSpaceTintColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensFlareScreenSpaceTintColor, put = setStaticF__LensFlareScreenSpaceTintColor)) int32_t _LensFlareScreenSpaceTintColor;

  /// @brief Field _ViewId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ViewId, put = setStaticF__ViewId)) int32_t _ViewId;

  /// @brief Field frameIdx, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_frameIdx, put = setStaticF_frameIdx)) int32_t frameIdx;

  /// @brief Field m_AvailableIndicies, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_AvailableIndicies, put = setStaticF_m_AvailableIndicies)) ::System::Collections::Generic::List_1<int32_t>* m_AvailableIndicies;

  /// @brief Field m_Data, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Data, put = setStaticF_m_Data)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>* m_Data;

  /// @brief Field m_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Instance, put = setStaticF_m_Instance)) ::UnityEngine::Rendering::LensFlareCommonSRP* m_Instance;

  /// @brief Field m_Padlock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Padlock, put = setStaticF_m_Padlock)) ::System::Object* m_Padlock;

  /// @brief Field maxLensFlareWithOcclusion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_maxLensFlareWithOcclusion, put = setStaticF_maxLensFlareWithOcclusion)) int32_t maxLensFlareWithOcclusion;

  /// @brief Field maxLensFlareWithOcclusionTemporalSample, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_maxLensFlareWithOcclusionTemporalSample, put = setStaticF_maxLensFlareWithOcclusionTemporalSample)) int32_t maxLensFlareWithOcclusionTemporalSample;

  /// @brief Field mergeNeeded, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_mergeNeeded, put = setStaticF_mergeNeeded)) int32_t mergeNeeded;

  /// @brief Field occlusionRT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_occlusionRT, put = setStaticF_occlusionRT)) ::UnityEngine::Rendering::RTHandle* occlusionRT;

  /// @brief Field s_SupportsLensFlare16bitsFormat, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_SupportsLensFlare16bitsFormat, put = setStaticF_s_SupportsLensFlare16bitsFormat)) bool s_SupportsLensFlare16bitsFormat;

  /// @brief Field s_SupportsLensFlare32bitsFormat, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_SupportsLensFlare32bitsFormat, put = setStaticF_s_SupportsLensFlare32bitsFormat)) bool s_SupportsLensFlare32bitsFormat;

  /// @brief Method AddData, addr 0x65e310c, size 0x1e4, virtual false, abstract: false, final false
  inline void AddData(::UnityEngine::Rendering::LensFlareComponentSRP* newData);

  /// @brief Method CalcCropExtents, addr 0x65e9bb8, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 CalcCropExtents(float_t actualWidth, float_t actualHeight, float_t fieldOfView, float_t d);

  /// @brief Method CalcViewExtents, addr 0x65e9b74, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 CalcViewExtents(float_t actualWidth, float_t actualHeight, float_t fieldOfView);

  /// @brief Method ComputeOcclusion, addr 0x65e4ae4, size 0xfec, virtual false, abstract: false, final false
  static inline void ComputeOcclusion(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Experimental::Rendering::XRPass* xr, int32_t xrIndex, float_t actualWidth,
                                      float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS,
                                      ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Rendering::CommandBuffer* cmd, bool taaEnabled, bool hasCloudLayer,
                                      ::UnityEngine::Texture* cloudOpacityTexture, ::UnityEngine::Texture* sunOcclusionTexture);

  /// @brief Method ComputeOcclusion, addr 0x65e4850, size 0x13c, virtual false, abstract: false, final false
  static inline void ComputeOcclusion(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Experimental::Rendering::XRPass* xr, int32_t xrIndex, float_t actualWidth,
                                      float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS,
                                      ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Rendering::CommandBuffer* cmd, bool taaEnabled, bool hasCloudLayer,
                                      ::UnityEngine::Texture* cloudOpacityTexture, ::UnityEngine::Texture* sunOcclusionTexture, int32_t _FlareOcclusionTex, int32_t _FlareCloudOpacity,
                                      int32_t _FlareOcclusionIndex, int32_t _FlareTex, int32_t _FlareColorValue, int32_t _FlareSunOcclusionTex, int32_t _FlareData0, int32_t _FlareData1,
                                      int32_t _FlareData2, int32_t _FlareData3, int32_t _FlareData4);

  /// @brief Method ComputeOcclusion, addr 0x65e498c, size 0x158, virtual false, abstract: false, final false
  static inline void ComputeOcclusion(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Experimental::Rendering::XRPass* xr, int32_t xrIndex, float_t actualWidth,
                                      float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS,
                                      ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, bool taaEnabled, bool hasCloudLayer,
                                      ::UnityEngine::Texture* cloudOpacityTexture, ::UnityEngine::Texture* sunOcclusionTexture);

  /// @brief Method ComputeOcclusion, addr 0x65e46f8, size 0x158, virtual false, abstract: false, final false
  static inline void ComputeOcclusion(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Experimental::Rendering::XRPass* xr, int32_t xrIndex, float_t actualWidth,
                                      float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS,
                                      ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, bool taaEnabled, bool hasCloudLayer,
                                      ::UnityEngine::Texture* cloudOpacityTexture, ::UnityEngine::Texture* sunOcclusionTexture, int32_t _FlareOcclusionTex, int32_t _FlareCloudOpacity,
                                      int32_t _FlareOcclusionIndex, int32_t _FlareTex, int32_t _FlareColorValue, int32_t _FlareSunOcclusionTex, int32_t _FlareData0, int32_t _FlareData1,
                                      int32_t _FlareData2, int32_t _FlareData3, int32_t _FlareData4);

  /// @brief Method Dispose, addr 0x65e2c88, size 0xd0, virtual false, abstract: false, final false
  static inline void Dispose();

  /// @brief Method DoLensFlareDataDrivenCommon, addr 0x65e8b74, size 0x1b4, virtual false, abstract: false, final false
  static inline void DoLensFlareDataDrivenCommon(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Rect viewport, ::UnityEngine::Experimental::Rendering::XRPass* xr,
                                                 int32_t xrIndex, float_t actualWidth, float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative,
                                                 ::UnityEngine::Vector3 cameraPositionWS, ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Rendering::CommandBuffer* cmd, bool taaEnabled,
                                                 bool hasCloudLayer, ::UnityEngine::Texture* cloudOpacityTexture, ::UnityEngine::Texture* sunOcclusionTexture,
                                                 ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                 ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* GetLensFlareLightAttenuation,
                                                 int32_t _FlareOcclusionRemapTex, int32_t _FlareOcclusionTex, int32_t _FlareOcclusionIndex, int32_t _FlareCloudOpacity, int32_t _FlareSunOcclusionTex,
                                                 int32_t _FlareTex, int32_t _FlareColorValue, int32_t _FlareData0, int32_t _FlareData1, int32_t _FlareData2, int32_t _FlareData3, int32_t _FlareData4,
                                                 bool debugView);

  /// @brief Method DoLensFlareDataDrivenCommon, addr 0x65e7bb8, size 0xfbc, virtual false, abstract: false, final false
  static inline void DoLensFlareDataDrivenCommon(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Rect viewport, ::UnityEngine::Experimental::Rendering::XRPass* xr,
                                                 int32_t xrIndex, float_t actualWidth, float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative,
                                                 ::UnityEngine::Vector3 cameraPositionWS, ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Rendering::CommandBuffer* cmd, bool taaEnabled,
                                                 bool hasCloudLayer, ::UnityEngine::Texture* cloudOpacityTexture, ::UnityEngine::Texture* sunOcclusionTexture,
                                                 ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                 ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* GetLensFlareLightAttenuation,
                                                 bool debugView);

  /// @brief Method DoLensFlareDataDrivenCommon, addr 0x65e7830, size 0x1b4, virtual false, abstract: false, final false
  static inline void DoLensFlareDataDrivenCommon(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Rect viewport, ::UnityEngine::Experimental::Rendering::XRPass* xr,
                                                 int32_t xrIndex, float_t actualWidth, float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative,
                                                 ::UnityEngine::Vector3 cameraPositionWS, ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, bool taaEnabled,
                                                 bool hasCloudLayer, ::UnityEngine::Texture* cloudOpacityTexture, ::UnityEngine::Texture* sunOcclusionTexture,
                                                 ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                 ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* GetLensFlareLightAttenuation,
                                                 int32_t _FlareOcclusionRemapTex, int32_t _FlareOcclusionTex, int32_t _FlareOcclusionIndex, int32_t _FlareCloudOpacity, int32_t _FlareSunOcclusionTex,
                                                 int32_t _FlareTex, int32_t _FlareColorValue, int32_t _FlareData0, int32_t _FlareData1, int32_t _FlareData2, int32_t _FlareData3, int32_t _FlareData4,
                                                 bool debugView);

  /// @brief Method DoLensFlareDataDrivenCommon, addr 0x65e79e4, size 0x1d4, virtual false, abstract: false, final false
  static inline void DoLensFlareDataDrivenCommon(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Rect viewport, ::UnityEngine::Experimental::Rendering::XRPass* xr,
                                                 int32_t xrIndex, float_t actualWidth, float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative,
                                                 ::UnityEngine::Vector3 cameraPositionWS, ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, bool taaEnabled,
                                                 bool hasCloudLayer, ::UnityEngine::Texture* cloudOpacityTexture, ::UnityEngine::Texture* sunOcclusionTexture,
                                                 ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                                 ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* GetLensFlareLightAttenuation,
                                                 bool debugView);

  /// @brief Method DoLensFlareScreenSpaceCommon, addr 0x65e9908, size 0x26c, virtual false, abstract: false, final false
  static inline void DoLensFlareScreenSpaceCommon(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, float_t actualWidth, float_t actualHeight, ::UnityEngine::Color tintColor,
                                                  ::UnityEngine::Texture* originalBloomTexture, ::UnityEngine::Texture* bloomMipTexture, ::UnityEngine::Texture* spectralLut,
                                                  ::UnityEngine::Texture* streakTextureTmp, ::UnityEngine::Texture* streakTextureTmp2, ::UnityEngine::Vector4 parameters1,
                                                  ::UnityEngine::Vector4 parameters2, ::UnityEngine::Vector4 parameters3, ::UnityEngine::Vector4 parameters4, ::UnityEngine::Vector4 parameters5,
                                                  ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* result, int32_t _LensFlareScreenSpaceBloomMipTexture,
                                                  int32_t _LensFlareScreenSpaceResultTexture, int32_t _LensFlareScreenSpaceSpectralLut, int32_t _LensFlareScreenSpaceStreakTex,
                                                  int32_t _LensFlareScreenSpaceMipLevel, int32_t _LensFlareScreenSpaceTintColor, int32_t _LensFlareScreenSpaceParams1,
                                                  int32_t _LensFlareScreenSpaceParams2, int32_t _LensFlareScreenSpaceParams3, int32_t _LensFlareScreenSpaceParams4,
                                                  int32_t _LensFlareScreenSpaceParams5, bool debugView);

  /// @brief Method DoLensFlareScreenSpaceCommon, addr 0x65e8f78, size 0x990, virtual false, abstract: false, final false
  static inline void DoLensFlareScreenSpaceCommon(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, float_t actualWidth, float_t actualHeight, ::UnityEngine::Color tintColor,
                                                  ::UnityEngine::Texture* originalBloomTexture, ::UnityEngine::Texture* bloomMipTexture, ::UnityEngine::Texture* spectralLut,
                                                  ::UnityEngine::Texture* streakTextureTmp, ::UnityEngine::Texture* streakTextureTmp2, ::UnityEngine::Vector4 parameters1,
                                                  ::UnityEngine::Vector4 parameters2, ::UnityEngine::Vector4 parameters3, ::UnityEngine::Vector4 parameters4, ::UnityEngine::Vector4 parameters5,
                                                  ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* result, bool debugView);

  /// @brief Method DoLensFlareScreenSpaceCommon, addr 0x65e8d28, size 0x250, virtual false, abstract: false, final false
  static inline void DoLensFlareScreenSpaceCommon(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, float_t actualWidth, float_t actualHeight, ::UnityEngine::Color tintColor,
                                                  ::UnityEngine::Texture* originalBloomTexture, ::UnityEngine::Texture* bloomMipTexture, ::UnityEngine::Texture* spectralLut,
                                                  ::UnityEngine::Texture* streakTextureTmp, ::UnityEngine::Texture* streakTextureTmp2, ::UnityEngine::Vector4 parameters1,
                                                  ::UnityEngine::Vector4 parameters2, ::UnityEngine::Vector4 parameters3, ::UnityEngine::Vector4 parameters4, ::UnityEngine::Vector4 parameters5,
                                                  ::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* result, bool debugView);

  /// @brief Method DoPaniniProjection, addr 0x65e5b08, size 0x16c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 DoPaniniProjection(::UnityEngine::Vector2 screenPos, float_t actualWidth, float_t actualHeight, float_t fieldOfView, float_t paniniProjectionCropToFit,
                                                          float_t paniniProjectionDistance);

  /// @brief Method ForceSingleElement, addr 0x65e5ad0, size 0x38, virtual false, abstract: false, final false
  static inline bool ForceSingleElement(::UnityEngine::Rendering::LensFlareDataElementSRP* element);

  /// @brief Method GetFlareData0, addr 0x65e3ea8, size 0x218, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetFlareData0(::UnityEngine::Vector2 screenPos, ::UnityEngine::Vector2 translationScale, ::UnityEngine::Vector2 rayOff0,
                                                     ::UnityEngine::Vector2 vLocalScreenRatio, float_t angleDeg, float_t position, float_t angularOffset, ::UnityEngine::Vector2 positionOffset,
                                                     bool autoRotate);

  /// @brief Method GetLensFlareRayOffset, addr 0x65e40c0, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetLensFlareRayOffset(::UnityEngine::Vector2 screenPos, float_t position, float_t globalCos0, float_t globalSin0, ::UnityEngine::Vector2 vAspectRatio);

  /// @brief Method GetNextAvailableIndex, addr 0x65e2fcc, size 0x140, virtual false, abstract: false, final false
  inline int32_t GetNextAvailableIndex();

  /// @brief Method GetOcclusionRTFormat, addr 0x65e2a34, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetOcclusionRTFormat();

  /// @brief Method Initialize, addr 0x65e2aa0, size 0x1e8, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method IsCloudLayerOpacityNeeded, addr 0x65e4388, size 0x248, virtual false, abstract: false, final false
  static inline bool IsCloudLayerOpacityNeeded(::UnityEngine::Camera* cam);

  /// @brief Method IsEmpty, addr 0x65e2f34, size 0x98, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method IsLensFlareSRPHidden, addr 0x65e3d80, size 0x128, virtual false, abstract: false, final false
  static inline bool IsLensFlareSRPHidden(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::LensFlareComponentSRP* comp, ::UnityEngine::Rendering::LensFlareDataSRP* data);

  /// @brief Method IsOcclusionRTCompatible, addr 0x65e2910, size 0x124, virtual false, abstract: false, final false
  static inline bool IsOcclusionRTCompatible();

  static inline ::UnityEngine::Rendering::LensFlareCommonSRP* New_ctor();

  /// @brief Method Panini_Generic_Inv, addr 0x65e9c80, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Panini_Generic_Inv(::UnityEngine::Vector2 projPos, float_t d);

  /// @brief Method ProcessLensFlareSRPElements, addr 0x65e7464, size 0x1d8, virtual false, abstract: false, final false
  static inline void ProcessLensFlareSRPElements(::ByRef<::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*, ::Array<::UnityEngine::Rendering::LensFlareDataElementSRP*>*>> elements,
                                                 ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Color globalColorModulation, ::UnityEngine::Light* light, float_t compIntensity,
                                                 float_t scale, ::UnityEngine::Material* lensFlareShader, ::UnityEngine::Vector2 screenPos, bool compAllowOffScreen,
                                                 ::UnityEngine::Vector2 vScreenRatio, ::UnityEngine::Vector4 flareData1, bool preview, int32_t depth);

  /// @brief Method ProcessLensFlareSRPElementsSingle, addr 0x65e5d44, size 0x1720, virtual false, abstract: false, final false
  static inline void ProcessLensFlareSRPElementsSingle(::UnityEngine::Rendering::LensFlareDataElementSRP* element, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                       ::UnityEngine::Color globalColorModulation, ::UnityEngine::Light* light, float_t compIntensity, float_t scale,
                                                       ::UnityEngine::Material* lensFlareShader, ::UnityEngine::Vector2 screenPos, bool compAllowOffScreen, ::UnityEngine::Vector2 vScreenRatio,
                                                       ::UnityEngine::Vector4 flareData1, bool preview, int32_t depth);

  /// @brief Method RemoveData, addr 0x65e3300, size 0x244, virtual false, abstract: false, final false
  inline void RemoveData(::UnityEngine::Rendering::LensFlareComponentSRP* data);

  /// @brief Method SetOcclusionPermutation, addr 0x65e45d0, size 0x128, virtual false, abstract: false, final false
  static inline void SetOcclusionPermutation(::UnityEngine::Rendering::CommandBuffer* cmd, bool useFogOpacityOcclusion, int32_t _FlareSunOcclusionTex, ::UnityEngine::Texture* sunOcclusionTexture);

  /// @brief Method ShapeAttenuateForwardLight, addr 0x65e3c28, size 0x20, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuateForwardLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo);

  /// @brief Method ShapeAttenuationAreaDiscLight, addr 0x65e3ce4, size 0x9c, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationAreaDiscLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo);

  /// @brief Method ShapeAttenuationAreaRectangleLight, addr 0x65e3c48, size 0x9c, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationAreaRectangleLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo);

  /// @brief Method ShapeAttenuationAreaTubeLight, addr 0x65e3700, size 0x234, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationAreaTubeLight(::UnityEngine::Vector3 lightPositionWS, ::UnityEngine::Vector3 lightSide, float_t lightWidth, ::UnityEngine::Camera* cam);

  /// @brief Method ShapeAttenuationDirLight, addr 0x65e3550, size 0x20, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationDirLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo);

  /// @brief Method ShapeAttenuationPointLight, addr 0x65e3548, size 0x8, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationPointLight();

  /// @brief Method ShapeAttenuationSpotBoxLight, addr 0x65e3624, size 0x30, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationSpotBoxLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo);

  /// @brief Method ShapeAttenuationSpotConeLight, addr 0x65e3570, size 0xb4, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationSpotConeLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo, float_t spotAngle, float_t innerSpotPercent01);

  /// @brief Method ShapeAttenuationSpotPyramidLight, addr 0x65e3654, size 0xac, virtual false, abstract: false, final false
  static inline float_t ShapeAttenuationSpotPyramidLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo);

  /// @brief Method WorldToViewport, addr 0x65e40f4, size 0x158, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 WorldToViewport(::UnityEngine::Camera* camera, bool isLocalLight, bool isCameraRelative, ::UnityEngine::Matrix4x4 viewProjMatrix,
                                                       ::UnityEngine::Vector3 positionWS);

  /// @brief Method WorldToViewportDistance, addr 0x65e42c8, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 WorldToViewportDistance(::UnityEngine::Camera* cam, ::UnityEngine::Vector3 positionWS);

  /// @brief Method WorldToViewportLocal, addr 0x65e424c, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 WorldToViewportLocal(bool isCameraRelative, ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Vector3 cameraPosWS, ::UnityEngine::Vector3 positionWS);

  /// @brief Method <ProcessLensFlareSRPElementsSingle>g__ComputeLocalSize|74_0, addr 0x65e763c, size 0x1b4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2
  _ProcessLensFlareSRPElementsSingle_g__ComputeLocalSize_74_0(::UnityEngine::Vector2 rayOff, ::UnityEngine::Vector2 rayOff0, ::UnityEngine::Vector2 curSize,
                                                              ::UnityEngine::AnimationCurve* distortionCurve,
                                                              ::ByRef<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0> _cordl_fixed_empty_name_whitespace);

  /// @brief Method <ProcessLensFlareSRPElementsSingle>g__RandomRange|74_1, addr 0x65e77f0, size 0x40, virtual false, abstract: false, final false
  static inline float_t _ProcessLensFlareSRPElementsSingle_g__RandomRange_74_1(float_t min, float_t max);

  /// @brief Method <ShapeAttenuationAreaTubeLight>g__DiffLineIntegral|57_2, addr 0x65e3934, size 0x2f4, virtual false, abstract: false, final false
  static inline float_t _ShapeAttenuationAreaTubeLight_g__DiffLineIntegral_57_2(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2);

  /// @brief Method <ShapeAttenuationAreaTubeLight>g__Fpo|57_0, addr 0x65ea3d8, size 0x40, virtual false, abstract: false, final false
  static inline float_t _ShapeAttenuationAreaTubeLight_g__Fpo_57_0(float_t d, float_t l);

  /// @brief Method <ShapeAttenuationAreaTubeLight>g__Fwt|57_1, addr 0x65ea418, size 0x18, virtual false, abstract: false, final false
  static inline float_t _ShapeAttenuationAreaTubeLight_g__Fwt_57_1(float_t d, float_t l);

  /// @brief Method .ctor, addr 0x65e290c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__FlareCloudOpacity();

  static inline int32_t getStaticF__FlareColorValue();

  static inline int32_t getStaticF__FlareData0();

  static inline int32_t getStaticF__FlareData1();

  static inline int32_t getStaticF__FlareData2();

  static inline int32_t getStaticF__FlareData3();

  static inline int32_t getStaticF__FlareData4();

  static inline int32_t getStaticF__FlareData5();

  static inline int32_t getStaticF__FlareOcclusionIndex();

  static inline int32_t getStaticF__FlareOcclusionPermutation();

  static inline int32_t getStaticF__FlareOcclusionRemapTex();

  static inline int32_t getStaticF__FlareOcclusionTex();

  static inline int32_t getStaticF__FlareRadialTint();

  static inline int32_t getStaticF__FlareSunOcclusionTex();

  static inline int32_t getStaticF__FlareTex();

  static inline int32_t getStaticF__LensFlareScreenSpaceBloomMipTexture();

  static inline int32_t getStaticF__LensFlareScreenSpaceMipLevel();

  static inline int32_t getStaticF__LensFlareScreenSpaceParams1();

  static inline int32_t getStaticF__LensFlareScreenSpaceParams2();

  static inline int32_t getStaticF__LensFlareScreenSpaceParams3();

  static inline int32_t getStaticF__LensFlareScreenSpaceParams4();

  static inline int32_t getStaticF__LensFlareScreenSpaceParams5();

  static inline int32_t getStaticF__LensFlareScreenSpaceResultTexture();

  static inline int32_t getStaticF__LensFlareScreenSpaceSpectralLut();

  static inline int32_t getStaticF__LensFlareScreenSpaceStreakTex();

  static inline int32_t getStaticF__LensFlareScreenSpaceTintColor();

  static inline int32_t getStaticF__ViewId();

  static inline int32_t getStaticF_frameIdx();

  static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_m_AvailableIndicies();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>* getStaticF_m_Data();

  static inline ::UnityEngine::Rendering::LensFlareCommonSRP* getStaticF_m_Instance();

  static inline ::System::Object* getStaticF_m_Padlock();

  static inline int32_t getStaticF_maxLensFlareWithOcclusion();

  static inline int32_t getStaticF_maxLensFlareWithOcclusionTemporalSample();

  static inline int32_t getStaticF_mergeNeeded();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_occlusionRT();

  static inline bool getStaticF_s_SupportsLensFlare16bitsFormat();

  static inline bool getStaticF_s_SupportsLensFlare32bitsFormat();

  /// @brief Method get_Data, addr 0x65e2ed8, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>* get_Data();

  /// @brief Method get_Instance, addr 0x65e2d58, size 0x180, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::LensFlareCommonSRP* get_Instance();

  static inline void setStaticF__FlareCloudOpacity(int32_t value);

  static inline void setStaticF__FlareColorValue(int32_t value);

  static inline void setStaticF__FlareData0(int32_t value);

  static inline void setStaticF__FlareData1(int32_t value);

  static inline void setStaticF__FlareData2(int32_t value);

  static inline void setStaticF__FlareData3(int32_t value);

  static inline void setStaticF__FlareData4(int32_t value);

  static inline void setStaticF__FlareData5(int32_t value);

  static inline void setStaticF__FlareOcclusionIndex(int32_t value);

  static inline void setStaticF__FlareOcclusionPermutation(int32_t value);

  static inline void setStaticF__FlareOcclusionRemapTex(int32_t value);

  static inline void setStaticF__FlareOcclusionTex(int32_t value);

  static inline void setStaticF__FlareRadialTint(int32_t value);

  static inline void setStaticF__FlareSunOcclusionTex(int32_t value);

  static inline void setStaticF__FlareTex(int32_t value);

  static inline void setStaticF__LensFlareScreenSpaceBloomMipTexture(int32_t value);

  static inline void setStaticF__LensFlareScreenSpaceMipLevel(int32_t value);

  static inline void setStaticF__LensFlareScreenSpaceParams1(int32_t value);

  static inline void setStaticF__LensFlareScreenSpaceParams2(int32_t value);

  static inline void setStaticF__LensFlareScreenSpaceParams3(int32_t value);

  static inline void setStaticF__LensFlareScreenSpaceParams4(int32_t value);

  static inline void setStaticF__LensFlareScreenSpaceParams5(int32_t value);

  static inline void setStaticF__LensFlareScreenSpaceResultTexture(int32_t value);

  static inline void setStaticF__LensFlareScreenSpaceSpectralLut(int32_t value);

  static inline void setStaticF__LensFlareScreenSpaceStreakTex(int32_t value);

  static inline void setStaticF__LensFlareScreenSpaceTintColor(int32_t value);

  static inline void setStaticF__ViewId(int32_t value);

  static inline void setStaticF_frameIdx(int32_t value);

  static inline void setStaticF_m_AvailableIndicies(::System::Collections::Generic::List_1<int32_t>* value);

  static inline void setStaticF_m_Data(::System::Collections::Generic::List_1<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>* value);

  static inline void setStaticF_m_Instance(::UnityEngine::Rendering::LensFlareCommonSRP* value);

  static inline void setStaticF_m_Padlock(::System::Object* value);

  static inline void setStaticF_maxLensFlareWithOcclusion(int32_t value);

  static inline void setStaticF_maxLensFlareWithOcclusionTemporalSample(int32_t value);

  static inline void setStaticF_mergeNeeded(int32_t value);

  static inline void setStaticF_occlusionRT(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_s_SupportsLensFlare16bitsFormat(bool value);

  static inline void setStaticF_s_SupportsLensFlare32bitsFormat(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LensFlareCommonSRP();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LensFlareCommonSRP", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LensFlareCommonSRP(LensFlareCommonSRP&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LensFlareCommonSRP", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LensFlareCommonSRP(LensFlareCommonSRP const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12146 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LensFlareCommonSRP, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::LensFlareCommonSRP);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareCommonSRP*, "UnityEngine.Rendering", "LensFlareCommonSRP");
NEED_NO_BOX(::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*, "UnityEngine.Rendering", "LensFlareCommonSRP/LensFlareCompInfo");
NEED_NO_BOX(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0*, "UnityEngine.Rendering", "LensFlareCommonSRP/<>c__DisplayClass50_0");
NEED_NO_BOX(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0*, "UnityEngine.Rendering", "LensFlareCommonSRP/<>c__DisplayClass51_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0, "UnityEngine.Rendering", "LensFlareCommonSRP/<>c__DisplayClass74_0");
