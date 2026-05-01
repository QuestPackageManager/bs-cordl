#pragma once
// IWYU pragma private; include "UnityEngine/LightProbes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
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
class Renderer;
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
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LightProbes);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LightProbes
class CORDL_TYPE LightProbes : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_bakedProbes, put = set_bakedProbes)) ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*> bakedProbes;

  __declspec(property(get = get_cellCount)) int32_t cellCount;

  __declspec(property(get = get_cellCountSelf)) int32_t cellCountSelf;

  __declspec(property(get = get_coefficients, put = set_coefficients)) ::ArrayW<float_t, ::Array<float_t>*> coefficients;

  __declspec(property(get = get_count)) int32_t count;

  __declspec(property(get = get_countSelf)) int32_t countSelf;

  /// @brief Field lightProbesUpdated, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_lightProbesUpdated, put = setStaticF_lightProbesUpdated)) ::System::Action* lightProbesUpdated;

  /// @brief Field needsRetetrahedralization, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_needsRetetrahedralization, put = setStaticF_needsRetetrahedralization)) ::System::Action* needsRetetrahedralization;

  __declspec(property(get = get_positions)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions;

  /// @brief Field tetrahedralizationCompleted, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tetrahedralizationCompleted, put = setStaticF_tetrahedralizationCompleted)) ::System::Action* tetrahedralizationCompleted;

  /// @brief Method AreLightProbesAllowed, addr 0x692fd54, size 0x80, virtual false, abstract: false, final false
  static inline bool AreLightProbesAllowed(::UnityEngine::Renderer* renderer);

  /// @brief Method AreLightProbesAllowed_Injected, addr 0x692fdd4, size 0x3c, virtual false, abstract: false, final false
  static inline bool AreLightProbesAllowed_Injected(::System::IntPtr renderer);

  /// @brief Method CalculateInterpolatedLightAndOcclusionProbes, addr 0x692fe10, size 0x148, virtual false, abstract: false, final false
  static inline void CalculateInterpolatedLightAndOcclusionProbes(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions,
                                                                  ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*> lightProbes,
                                                                  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> occlusionProbes);

  /// @brief Method CalculateInterpolatedLightAndOcclusionProbes, addr 0x6930114, size 0x1d8, virtual false, abstract: false, final false
  static inline void CalculateInterpolatedLightAndOcclusionProbes(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                                                  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>* lightProbes,
                                                                  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* occlusionProbes);

  /// @brief Method CalculateInterpolatedLightAndOcclusionProbes_Internal, addr 0x692ff58, size 0x1bc, virtual false, abstract: false, final false
  static inline void
  CalculateInterpolatedLightAndOcclusionProbes_Internal(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, int32_t positionsCount,
                                                        ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*> lightProbes,
                                                        ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> occlusionProbes);

  /// @brief Method CalculateInterpolatedLightAndOcclusionProbes_Internal_Injected, addr 0x69302ec, size 0x5c, virtual false, abstract: false, final false
  static inline void CalculateInterpolatedLightAndOcclusionProbes_Internal_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> positions, int32_t positionsCount,
                                                                                    ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> lightProbes,
                                                                                    ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> occlusionProbes);

  /// @brief Method GetCount, addr 0x6931088, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetCount();

  /// @brief Method GetInstantiatedLightProbesForScene, addr 0x69304a4, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::LightProbes> GetInstantiatedLightProbesForScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method GetInstantiatedLightProbesForScene_Injected, addr 0x69305c4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetInstantiatedLightProbesForScene_Injected(::ByRef<::UnityEngine::SceneManagement::Scene> scene);

  /// @brief Method GetInterpolatedLightProbe, addr 0x69310b0, size 0x4, virtual false, abstract: false, final false
  inline void GetInterpolatedLightProbe(::UnityEngine::Vector3 position, ::UnityEngine::Renderer* renderer, ::ArrayW<float_t, ::Array<float_t>*> coefficients);

  /// @brief Method GetInterpolatedProbe, addr 0x692fc58, size 0xa8, virtual false, abstract: false, final false
  static inline void GetInterpolatedProbe(::UnityEngine::Vector3 position, ::UnityEngine::Renderer* renderer, ::ByRef<::UnityEngine::Rendering::SphericalHarmonicsL2> probe);

  /// @brief Method GetInterpolatedProbe_Injected, addr 0x692fd00, size 0x54, virtual false, abstract: false, final false
  static inline void GetInterpolatedProbe_Injected(::ByRef<::UnityEngine::Vector3> position, ::System::IntPtr renderer, ::ByRef<::UnityEngine::Rendering::SphericalHarmonicsL2> probe);

  /// @brief Method GetPositionsSelf, addr 0x69307a4, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetPositionsSelf();

  /// @brief Method GetPositionsSelf_Injected, addr 0x6930904, size 0x44, virtual false, abstract: false, final false
  static inline void GetPositionsSelf_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetSharedLightProbesForScene, addr 0x6930348, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::LightProbes> GetSharedLightProbesForScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method GetSharedLightProbesForScene_Injected, addr 0x6930468, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetSharedLightProbesForScene_Injected(::ByRef<::UnityEngine::SceneManagement::Scene> scene);

  /// @brief Method Internal_CallLightProbesUpdatedFunction, addr 0x692f790, size 0x68, virtual false, abstract: false, final false
  static inline void Internal_CallLightProbesUpdatedFunction();

  /// @brief Method Internal_CallNeedsRetetrahedralizationFunction, addr 0x692fba0, size 0x68, virtual false, abstract: false, final false
  static inline void Internal_CallNeedsRetetrahedralizationFunction();

  /// @brief Method Internal_CallTetrahedralizationCompletedFunction, addr 0x692f998, size 0x68, virtual false, abstract: false, final false
  static inline void Internal_CallTetrahedralizationCompletedFunction();

  static inline ::UnityEngine::LightProbes* New_ctor();

  /// @brief Method SetPositionsSelf, addr 0x6930948, size 0x110, virtual false, abstract: false, final false
  inline bool SetPositionsSelf(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, bool checkForDuplicatePositions);

  /// @brief Method SetPositionsSelf_Injected, addr 0x6930a58, size 0x54, virtual false, abstract: false, final false
  static inline bool SetPositionsSelf_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> positions, bool checkForDuplicatePositions);

  /// @brief Method Tetrahedralize, addr 0x692fc08, size 0x28, virtual false, abstract: false, final false
  static inline void Tetrahedralize();

  /// @brief Method TetrahedralizeAsync, addr 0x692fc30, size 0x28, virtual false, abstract: false, final false
  static inline void TetrahedralizeAsync();

  /// @brief Method .ctor, addr 0x692f5a0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_lightProbesUpdated, addr 0x692f5f8, size 0xcc, virtual false, abstract: false, final false
  static inline void add_lightProbesUpdated(::System::Action* value);

  /// @brief Method add_needsRetetrahedralization, addr 0x692fa00, size 0xd0, virtual false, abstract: false, final false
  static inline void add_needsRetetrahedralization(::System::Action* value);

  /// @brief Method add_tetrahedralizationCompleted, addr 0x692f7f8, size 0xd0, virtual false, abstract: false, final false
  static inline void add_tetrahedralizationCompleted(::System::Action* value);

  static inline ::System::Action* getStaticF_lightProbesUpdated();

  static inline ::System::Action* getStaticF_needsRetetrahedralization();

  static inline ::System::Action* getStaticF_tetrahedralizationCompleted();

  /// @brief Method get_bakedProbes, addr 0x6930aac, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*> get_bakedProbes();

  /// @brief Method get_bakedProbes_Injected, addr 0x6930c0c, size 0x44, virtual false, abstract: false, final false
  static inline void get_bakedProbes_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method get_cellCount, addr 0x6930f10, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_cellCount();

  /// @brief Method get_cellCountSelf, addr 0x6930fcc, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_cellCountSelf();

  /// @brief Method get_cellCountSelf_Injected, addr 0x693104c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_cellCountSelf_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cellCount_Injected, addr 0x6930f90, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_cellCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_coefficients, addr 0x69310b4, size 0x48, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_coefficients();

  /// @brief Method get_count, addr 0x6930d98, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method get_countSelf, addr 0x6930e54, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_countSelf();

  /// @brief Method get_countSelf_Injected, addr 0x6930ed4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_countSelf_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_count_Injected, addr 0x6930e18, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_count_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_positions, addr 0x6930600, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_positions();

  /// @brief Method get_positions_Injected, addr 0x6930760, size 0x44, virtual false, abstract: false, final false
  static inline void get_positions_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method remove_lightProbesUpdated, addr 0x692f6c4, size 0xcc, virtual false, abstract: false, final false
  static inline void remove_lightProbesUpdated(::System::Action* value);

  /// @brief Method remove_needsRetetrahedralization, addr 0x692fad0, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_needsRetetrahedralization(::System::Action* value);

  /// @brief Method remove_tetrahedralizationCompleted, addr 0x692f8c8, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_tetrahedralizationCompleted(::System::Action* value);

  static inline void setStaticF_lightProbesUpdated(::System::Action* value);

  static inline void setStaticF_needsRetetrahedralization(::System::Action* value);

  static inline void setStaticF_tetrahedralizationCompleted(::System::Action* value);

  /// @brief Method set_bakedProbes, addr 0x6930c50, size 0x104, virtual false, abstract: false, final false
  inline void set_bakedProbes(::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2, ::Array<::UnityEngine::Rendering::SphericalHarmonicsL2>*> value);

  /// @brief Method set_bakedProbes_Injected, addr 0x6930d54, size 0x44, virtual false, abstract: false, final false
  static inline void set_bakedProbes_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_coefficients, addr 0x69310fc, size 0x4, virtual false, abstract: false, final false
  inline void set_coefficients(::ArrayW<float_t, ::Array<float_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightProbes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightProbes(LightProbes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightProbes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightProbes(LightProbes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10134 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LightProbes, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LightProbes);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightProbes*, "UnityEngine", "LightProbes");
