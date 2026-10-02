#pragma once
// IWYU pragma private; include "UnityEngine/LightProbes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightProbes)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct LightProbeOcclusion;
}
namespace UnityEngine {
struct LightProbes_Hash128IntPair;
}
namespace UnityEngine {
struct ProbeSetIndex;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Tetrahedron;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class LightProbes;
}
namespace UnityEngine {
struct LightProbes_Hash128IntPair;
}
// Write type traits
MARK_REF_T(::UnityEngine::LightProbes*);
MARK_VAL_T(::UnityEngine::LightProbes_Hash128IntPair);
DEFINE_IL2CPP_CLASS(::UnityEngine::LightProbes*, "UnityEngine", "LightProbes");
DEFINE_IL2CPP_CLASS(::UnityEngine::LightProbes_Hash128IntPair, "UnityEngine", "LightProbes/Hash128IntPair");
// Dependencies UnityEngine.Hash128
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LightProbes/Hash128IntPair
struct CORDL_TYPE LightProbes_Hash128IntPair {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbes_Hash128IntPair();

  // Ctor Parameters [CppParam { name: "Hash", ty: "::UnityEngine::Hash128", modifiers: "", def_value: None, comment: None }, CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr LightProbes_Hash128IntPair(::UnityEngine::Hash128 Hash, int32_t Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9727 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Hash, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Hash128 Hash;

  /// @brief Field Value, offset: 0x10, size: 0x4, def value: None
  int32_t Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LightProbes_Hash128IntPair, Hash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightProbes_Hash128IntPair, Value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LightProbes_Hash128IntPair) == 0x18, "Size mismatch!");

} // namespace UnityEngine
// [NativeHeader("Runtime/Export/Graphics/Graphics.bindings.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LightProbes
class CORDL_TYPE LightProbes : public ::UnityEngine::Object {
public:
  // Declarations
  using Hash128IntPair = ::UnityEngine::LightProbes_Hash128IntPair;

  __declspec(property(get = get_bakedLightOcclusion, put = set_bakedLightOcclusion)) ::ArrayW<::UnityEngine::LightProbeOcclusion> bakedLightOcclusion;

  __declspec(property(get = get_bakedProbes, put = set_bakedProbes)) ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2> bakedProbes;

  __declspec(property(get = get_boundingBox, put = set_boundingBox)) ::UnityEngine::Bounds boundingBox;

  __declspec(property(get = get_cellCount)) int32_t cellCount;

  __declspec(property(get = get_cellCountSelf)) int32_t cellCountSelf;

  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// @brief [Obsolete("Use bakedProbes instead.", true)]
  __declspec(property(get = get_coefficients, put = set_coefficients)) ::ArrayW<float_t> coefficients;

  __declspec(property(get = get_count)) int32_t count;

  __declspec(property(get = get_countSelf)) int32_t countSelf;

  __declspec(property(get = get_hullRays, put = set_hullRays)) ::ArrayW<::UnityEngine::Vector3> hullRays;

  /// @brief Field lightProbesUpdated, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_lightProbesUpdated, put = setStaticF_lightProbesUpdated)) ::System::Action* lightProbesUpdated;

  /// @brief Field needsRetetrahedralization, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_needsRetetrahedralization, put = setStaticF_needsRetetrahedralization)) ::System::Action* needsRetetrahedralization;

  __declspec(property(get = get_nonTetrahedralizedProbeSetIndexMap, put = set_nonTetrahedralizedProbeSetIndexMap)) ::ArrayW<::UnityEngine::LightProbes_Hash128IntPair>
      nonTetrahedralizedProbeSetIndexMap;

  __declspec(property(get = get_positions, put = set_positions)) ::ArrayW<::UnityEngine::Vector3> positions;

  __declspec(property(get = get_probeSets, put = set_probeSets)) ::ArrayW<::UnityEngine::ProbeSetIndex> probeSets;

  __declspec(property(get = get_tetrahedra, put = set_tetrahedra)) ::ArrayW<::UnityEngine::Tetrahedron> tetrahedra;

  /// @brief Field tetrahedralizationCompleted, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tetrahedralizationCompleted, put = setStaticF_tetrahedralizationCompleted)) ::System::Action* tetrahedralizationCompleted;

  /// [FreeFunction]
  /// @brief Method AreLightProbesAllowed, addr 0x6edd490, size 0x80, virtual false, abstract: false, final false
  static inline bool AreLightProbesAllowed(::UnityEngine::Renderer* renderer);

  /// @brief Method AreLightProbesAllowed_Injected, addr 0x6edd510, size 0x3c, virtual false, abstract: false, final false
  static inline bool AreLightProbesAllowed_Injected(::System::IntPtr renderer);

  /// @brief Method CalculateInterpolatedLightAndOcclusionProbes, addr 0x6edd54c, size 0x148, virtual false, abstract: false, final false
  static inline void CalculateInterpolatedLightAndOcclusionProbes(::ArrayW<::UnityEngine::Vector3> positions, ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2> lightProbes,
                                                                  ::ArrayW<::UnityEngine::Vector4> occlusionProbes);

  /// @brief Method CalculateInterpolatedLightAndOcclusionProbes, addr 0x6edd850, size 0x1d8, virtual false, abstract: false, final false
  static inline void CalculateInterpolatedLightAndOcclusionProbes(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                                                  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>* lightProbes,
                                                                  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* occlusionProbes);

  /// [NativeName("CalculateInterpolatedLightAndOcclusionProbes")]
  /// [FreeFunction]
  /// @brief Method CalculateInterpolatedLightAndOcclusionProbes_Internal, addr 0x6edd694, size 0x1bc, virtual false, abstract: false, final false
  static inline void CalculateInterpolatedLightAndOcclusionProbes_Internal(::ArrayW<::UnityEngine::Vector3> positions, int32_t positionsCount,
                                                                           ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2> lightProbes, ::ArrayW<::UnityEngine::Vector4> occlusionProbes);

  /// @brief Method CalculateInterpolatedLightAndOcclusionProbes_Internal_Injected, addr 0x6edda28, size 0x5c, virtual false, abstract: false, final false
  static inline void CalculateInterpolatedLightAndOcclusionProbes_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> positions, int32_t positionsCount,
                                                                                    ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> lightProbes,
                                                                                    ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> occlusionProbes);

  /// [FreeFunction]
  /// [NativeName("GetLightProbeCount")]
  /// @brief Method GetCount, addr 0x6edfab8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetCount();

  /// [FreeFunction]
  /// [NativeName("GetInstantiatedLightProbesForScene")]
  /// @brief Method GetInstantiatedLightProbesForScene, addr 0x6eddbe0, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::LightProbes> GetInstantiatedLightProbesForScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method GetInstantiatedLightProbesForScene_Injected, addr 0x6eddd00, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetInstantiatedLightProbesForScene_Injected(::by_ref<::UnityEngine::SceneManagement::Scene> scene);

  /// [Obsolete("Use GetInterpolatedProbe instead.", true)]
  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// @brief Method GetInterpolatedLightProbe, addr 0x6edfae0, size 0x4, virtual false, abstract: false, final false
  inline void GetInterpolatedLightProbe(::UnityEngine::Vector3 position, ::UnityEngine::Renderer* renderer, ::ArrayW<float_t> coefficients);

  /// [FreeFunction]
  /// @brief Method GetInterpolatedProbe, addr 0x6edd394, size 0xa8, virtual false, abstract: false, final false
  static inline void GetInterpolatedProbe(::UnityEngine::Vector3 position, ::UnityEngine::Renderer* renderer, ::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> probe);

  /// @brief Method GetInterpolatedProbe_Injected, addr 0x6edd43c, size 0x54, virtual false, abstract: false, final false
  static inline void GetInterpolatedProbe_Injected(::by_ref<::UnityEngine::Vector3> position, ::System::IntPtr renderer, ::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> probe);

  /// [NativeName("GetLightProbePositionsSelf")]
  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method GetPositionsSelf, addr 0x6ede028, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3> GetPositionsSelf();

  /// @brief Method GetPositionsSelf_Injected, addr 0x6ede188, size 0x44, virtual false, abstract: false, final false
  static inline void GetPositionsSelf_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction]
  /// [NativeName("GetSharedLightProbesForScene")]
  /// @brief Method GetSharedLightProbesForScene, addr 0x6edda84, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::LightProbes> GetSharedLightProbesForScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method GetSharedLightProbesForScene_Injected, addr 0x6eddba4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetSharedLightProbesForScene_Injected(::by_ref<::UnityEngine::SceneManagement::Scene> scene);

  /// [RequiredByNativeCode]
  /// @brief Method Internal_CallLightProbesUpdatedFunction, addr 0x6edcecc, size 0x68, virtual false, abstract: false, final false
  static inline void Internal_CallLightProbesUpdatedFunction();

  /// [RequiredByNativeCode]
  /// @brief Method Internal_CallNeedsRetetrahedralizationFunction, addr 0x6edd2dc, size 0x68, virtual false, abstract: false, final false
  static inline void Internal_CallNeedsRetetrahedralizationFunction();

  /// [RequiredByNativeCode]
  /// @brief Method Internal_CallTetrahedralizationCompletedFunction, addr 0x6edd0d4, size 0x68, virtual false, abstract: false, final false
  static inline void Internal_CallTetrahedralizationCompletedFunction();

  /// @brief Method Internal_Create, addr 0x6edccf8, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(/* [Writable] */ ::UnityEngine::LightProbes* self);

  static inline ::UnityEngine::LightProbes* New_ctor();

  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method SetBakedCoefficients_Internal, addr 0x6ede61c, size 0x104, virtual false, abstract: false, final false
  inline void SetBakedCoefficients_Internal(::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2> coefficients);

  /// @brief Method SetBakedCoefficients_Internal_Injected, addr 0x6ede720, size 0x44, virtual false, abstract: false, final false
  static inline void SetBakedCoefficients_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> coefficients);

  /// [NativeName("SetLightProbePositionsSelf")]
  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method SetPositionsSelf, addr 0x6ede1cc, size 0x110, virtual false, abstract: false, final false
  inline bool SetPositionsSelf(::ArrayW<::UnityEngine::Vector3> positions, bool checkForDuplicatePositions);

  /// @brief Method SetPositionsSelf_Injected, addr 0x6ede2dc, size 0x54, virtual false, abstract: false, final false
  static inline bool SetPositionsSelf_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> positions, bool checkForDuplicatePositions);

  /// [FreeFunction]
  /// @brief Method Tetrahedralize, addr 0x6edd344, size 0x28, virtual false, abstract: false, final false
  static inline void Tetrahedralize();

  /// [FreeFunction]
  /// @brief Method TetrahedralizeAsync, addr 0x6edd36c, size 0x28, virtual false, abstract: false, final false
  static inline void TetrahedralizeAsync();

  /// @brief Method .ctor, addr 0x6edcc80, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method add_lightProbesUpdated, addr 0x6edcd34, size 0xcc, virtual false, abstract: false, final false
  static inline void add_lightProbesUpdated(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method add_needsRetetrahedralization, addr 0x6edd13c, size 0xd0, virtual false, abstract: false, final false
  static inline void add_needsRetetrahedralization(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method add_tetrahedralizationCompleted, addr 0x6edcf34, size 0xd0, virtual false, abstract: false, final false
  static inline void add_tetrahedralizationCompleted(::System::Action* value);

  static inline ::System::Action* getStaticF_lightProbesUpdated();

  static inline ::System::Action* getStaticF_needsRetetrahedralization();

  static inline ::System::Action* getStaticF_tetrahedralizationCompleted();

  /// [NativeName("GetBakedLightOcclusion")]
  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method get_bakedLightOcclusion, addr 0x6eded40, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::LightProbeOcclusion> get_bakedLightOcclusion();

  /// @brief Method get_bakedLightOcclusion_Injected, addr 0x6edeea0, size 0x44, virtual false, abstract: false, final false
  static inline void get_bakedLightOcclusion_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction(HasExplicitThis = true)]
  /// [NativeName("GetBakedCoefficients")]
  /// @brief Method get_bakedProbes, addr 0x6ede330, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2> get_bakedProbes();

  /// @brief Method get_bakedProbes_Injected, addr 0x6ede490, size 0x44, virtual false, abstract: false, final false
  static inline void get_bakedProbes_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [NativeName("GetBoundingBox")]
  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method get_boundingBox, addr 0x6edf02c, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_boundingBox();

  /// @brief Method get_boundingBox_Injected, addr 0x6edf0dc, size 0x44, virtual false, abstract: false, final false
  static inline void get_boundingBox_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret);

  /// [NativeName("GetTetrahedraSize")]
  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method get_cellCount, addr 0x6ede8dc, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_cellCount();

  /// [NativeName("GetTetrahedraSizeSelf")]
  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method get_cellCountSelf, addr 0x6ede998, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_cellCountSelf();

  /// @brief Method get_cellCountSelf_Injected, addr 0x6edea18, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_cellCountSelf_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cellCount_Injected, addr 0x6ede95c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_cellCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_coefficients, addr 0x6edfae4, size 0x48, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> get_coefficients();

  /// [FreeFunction(HasExplicitThis = true)]
  /// [NativeName("GetLightProbeCount")]
  /// @brief Method get_count, addr 0x6ede764, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// [NativeName("GetLightProbeCountSelf")]
  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method get_countSelf, addr 0x6ede820, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_countSelf();

  /// @brief Method get_countSelf_Injected, addr 0x6ede8a0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_countSelf_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_count_Injected, addr 0x6ede7e4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_count_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(HasExplicitThis = true)]
  /// [NativeName("GetHullRays")]
  /// @brief Method get_hullRays, addr 0x6edf7cc, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3> get_hullRays();

  /// @brief Method get_hullRays_Injected, addr 0x6edf92c, size 0x44, virtual false, abstract: false, final false
  static inline void get_hullRays_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction(HasExplicitThis = true)]
  /// [NativeName("GetNonTetrahedralizedProbeSetIndexMap")]
  /// @brief Method get_nonTetrahedralizedProbeSetIndexMap, addr 0x6edea54, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::LightProbes_Hash128IntPair> get_nonTetrahedralizedProbeSetIndexMap();

  /// @brief Method get_nonTetrahedralizedProbeSetIndexMap_Injected, addr 0x6edebb4, size 0x44, virtual false, abstract: false, final false
  static inline void get_nonTetrahedralizedProbeSetIndexMap_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [NativeName("GetLightProbePositions")]
  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method get_positions, addr 0x6eddd3c, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3> get_positions();

  /// @brief Method get_positions_Injected, addr 0x6edde9c, size 0x44, virtual false, abstract: false, final false
  static inline void get_positions_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction(HasExplicitThis = true)]
  /// [NativeName("GetProbeSets")]
  /// @brief Method get_probeSets, addr 0x6edf1f4, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ProbeSetIndex> get_probeSets();

  /// @brief Method get_probeSets_Injected, addr 0x6edf354, size 0x44, virtual false, abstract: false, final false
  static inline void get_probeSets_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [NativeName("GetTetrahedra")]
  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method get_tetrahedra, addr 0x6edf4e0, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Tetrahedron> get_tetrahedra();

  /// @brief Method get_tetrahedra_Injected, addr 0x6edf640, size 0x44, virtual false, abstract: false, final false
  static inline void get_tetrahedra_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [CompilerGenerated]
  /// @brief Method remove_lightProbesUpdated, addr 0x6edce00, size 0xcc, virtual false, abstract: false, final false
  static inline void remove_lightProbesUpdated(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method remove_needsRetetrahedralization, addr 0x6edd20c, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_needsRetetrahedralization(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method remove_tetrahedralizationCompleted, addr 0x6edd004, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_tetrahedralizationCompleted(::System::Action* value);

  static inline void setStaticF_lightProbesUpdated(::System::Action* value);

  static inline void setStaticF_needsRetetrahedralization(::System::Action* value);

  static inline void setStaticF_tetrahedralizationCompleted(::System::Action* value);

  /// [NativeName("SetBakedLightOcclusion")]
  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method set_bakedLightOcclusion, addr 0x6edeee4, size 0x104, virtual false, abstract: false, final false
  inline void set_bakedLightOcclusion(::ArrayW<::UnityEngine::LightProbeOcclusion> value);

  /// @brief Method set_bakedLightOcclusion_Injected, addr 0x6edefe8, size 0x44, virtual false, abstract: false, final false
  static inline void set_bakedLightOcclusion_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// [NativeName("SetBakedCoefficients")]
  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method set_bakedProbes, addr 0x6ede4d4, size 0x104, virtual false, abstract: false, final false
  inline void set_bakedProbes(::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2> value);

  /// @brief Method set_bakedProbes_Injected, addr 0x6ede5d8, size 0x44, virtual false, abstract: false, final false
  static inline void set_bakedProbes_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// [FreeFunction(HasExplicitThis = true)]
  /// [NativeName("SetBoundingBox")]
  /// @brief Method set_boundingBox, addr 0x6edf120, size 0x90, virtual false, abstract: false, final false
  inline void set_boundingBox(::UnityEngine::Bounds value);

  /// @brief Method set_boundingBox_Injected, addr 0x6edf1b0, size 0x44, virtual false, abstract: false, final false
  static inline void set_boundingBox_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> value);

  /// @brief Method set_coefficients, addr 0x6edfb2c, size 0x4, virtual false, abstract: false, final false
  inline void set_coefficients(::ArrayW<float_t> value);

  /// [FreeFunction(HasExplicitThis = true)]
  /// [NativeName("SetHullRays")]
  /// @brief Method set_hullRays, addr 0x6edf970, size 0x104, virtual false, abstract: false, final false
  inline void set_hullRays(::ArrayW<::UnityEngine::Vector3> value);

  /// @brief Method set_hullRays_Injected, addr 0x6edfa74, size 0x44, virtual false, abstract: false, final false
  static inline void set_hullRays_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// [NativeName("SetNonTetrahedralizedProbeSetIndexMap")]
  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method set_nonTetrahedralizedProbeSetIndexMap, addr 0x6edebf8, size 0x104, virtual false, abstract: false, final false
  inline void set_nonTetrahedralizedProbeSetIndexMap(::ArrayW<::UnityEngine::LightProbes_Hash128IntPair> value);

  /// @brief Method set_nonTetrahedralizedProbeSetIndexMap_Injected, addr 0x6edecfc, size 0x44, virtual false, abstract: false, final false
  static inline void set_nonTetrahedralizedProbeSetIndexMap_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// [FreeFunction(HasExplicitThis = true)]
  /// [NativeName("SetLightProbePositions")]
  /// @brief Method set_positions, addr 0x6eddee0, size 0x104, virtual false, abstract: false, final false
  inline void set_positions(::ArrayW<::UnityEngine::Vector3> value);

  /// @brief Method set_positions_Injected, addr 0x6eddfe4, size 0x44, virtual false, abstract: false, final false
  static inline void set_positions_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// [FreeFunction(HasExplicitThis = true)]
  /// [NativeName("SetProbeSets")]
  /// @brief Method set_probeSets, addr 0x6edf398, size 0x104, virtual false, abstract: false, final false
  inline void set_probeSets(::ArrayW<::UnityEngine::ProbeSetIndex> value);

  /// @brief Method set_probeSets_Injected, addr 0x6edf49c, size 0x44, virtual false, abstract: false, final false
  static inline void set_probeSets_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// [NativeName("SetTetrahedra")]
  /// [FreeFunction(HasExplicitThis = true)]
  /// @brief Method set_tetrahedra, addr 0x6edf684, size 0x104, virtual false, abstract: false, final false
  inline void set_tetrahedra(::ArrayW<::UnityEngine::Tetrahedron> value);

  /// @brief Method set_tetrahedra_Injected, addr 0x6edf788, size 0x44, virtual false, abstract: false, final false
  static inline void set_tetrahedra_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightProbes", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightProbes(LightProbes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightProbes", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightProbes(LightProbes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9728 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LightProbes) == 0x18, "Size mismatch!");

} // namespace UnityEngine
