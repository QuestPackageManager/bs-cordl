#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T> class Lazy_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Rendering {
class VolumeCollection;
}
namespace UnityEngine::Rendering {
class VolumeComponent;
}
namespace UnityEngine::Rendering {
class VolumeManager___c;
}
namespace UnityEngine::Rendering {
struct VolumeManager___c__DisplayClass62_0;
}
namespace UnityEngine::Rendering {
class VolumeManager___c__DisplayClass62_1;
}
namespace UnityEngine::Rendering {
class VolumeProfile;
}
namespace UnityEngine::Rendering {
class VolumeStack;
}
namespace UnityEngine::Rendering {
class Volume;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VolumeManager;
}
namespace UnityEngine::Rendering {
class VolumeManager___c;
}
namespace UnityEngine::Rendering {
class VolumeManager___c__DisplayClass62_1;
}
namespace UnityEngine::Rendering {
struct VolumeManager___c__DisplayClass62_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::VolumeManager*);
MARK_REF_T(::UnityEngine::Rendering::VolumeManager___c*);
MARK_REF_T(::UnityEngine::Rendering::VolumeManager___c__DisplayClass62_1*);
MARK_VAL_T(::UnityEngine::Rendering::VolumeManager___c__DisplayClass62_0);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::VolumeManager*, "UnityEngine.Rendering", "VolumeManager");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::VolumeManager___c*, "UnityEngine.Rendering", "VolumeManager/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::VolumeManager___c__DisplayClass62_1*, "UnityEngine.Rendering", "VolumeManager/<>c__DisplayClass62_1");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::VolumeManager___c__DisplayClass62_0, "UnityEngine.Rendering", "VolumeManager/<>c__DisplayClass62_0");
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeManager/<>c
class CORDL_TYPE VolumeManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::VolumeManager___c* __9;

  /// @brief Field <>9__18_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_0, put = setStaticF___9__18_0)) ::System::Comparison_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* __9__18_0;

  /// @brief Field <>9__52_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__52_0, put = setStaticF___9__52_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* __9__52_0;

  /// @brief Field <>9__75_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__75_0, put = setStaticF___9__75_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>* __9__75_0;

  static inline ::UnityEngine::Rendering::VolumeManager___c* New_ctor();

  /// @brief Method <BuildVolumeComponentDisplayList>b__18_0, addr 0x6ba23a0, size 0x10, virtual false, abstract: false, final false
  inline int32_t _BuildVolumeComponentDisplayList_b__18_0(::System::ValueTuple_2<::StringW, ::System::Type*> a, ::System::ValueTuple_2<::StringW, ::System::Type*> b);

  /// @brief Method <GetVolumes>b__75_0, addr 0x6ba2410, size 0x60, virtual false, abstract: false, final false
  inline bool _GetVolumes_b__75_0(::UnityEngine::Rendering::Volume* v);

  /// @brief Method <SetCustomDefaultProfiles>b__52_0, addr 0x6ba23b0, size 0x60, virtual false, abstract: false, final false
  inline bool _SetCustomDefaultProfiles_b__52_0(::UnityEngine::Rendering::VolumeProfile* x);

  /// @brief Method <.cctor>b__78_0, addr 0x6ba2470, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeManager* __cctor_b__78_0();

  /// @brief Method .ctor, addr 0x6ba239c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::VolumeManager___c* getStaticF___9();

  static inline ::System::Comparison_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* getStaticF___9__18_0();

  static inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* getStaticF___9__52_0();

  static inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>* getStaticF___9__75_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::VolumeManager___c* value);

  static inline void setStaticF___9__18_0(::System::Comparison_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* value);

  static inline void setStaticF___9__52_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* value);

  static inline void setStaticF___9__75_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeManager___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeManager___c(VolumeManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeManager___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeManager___c(VolumeManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8933 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::VolumeManager___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.VolumeManager/<>c__DisplayClass62_0
struct CORDL_TYPE VolumeManager___c__DisplayClass62_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeManager___c__DisplayClass62_0();

  // Ctor Parameters [CppParam { name: "componentsDefaultStateList", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*", modifiers: "", def_value: None,
  // comment: None }]
  constexpr VolumeManager___c__DisplayClass62_0(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* componentsDefaultStateList) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8934 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field componentsDefaultStateList, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* componentsDefaultStateList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VolumeManager___c__DisplayClass62_0, componentsDefaultStateList) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::VolumeManager___c__DisplayClass62_0) == 0x8, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeManager/<>c__DisplayClass62_1
class CORDL_TYPE VolumeManager___c__DisplayClass62_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field profileComponent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_profileComponent, put = __cordl_internal_set_profileComponent)) ::UnityW<::UnityEngine::Rendering::VolumeComponent> profileComponent;

  static inline ::UnityEngine::Rendering::VolumeManager___c__DisplayClass62_1* New_ctor();

  /// @brief Method <EvaluateVolumeDefaultState>b__1, addr 0x6ba24c4, size 0x68, virtual false, abstract: false, final false
  inline bool _EvaluateVolumeDefaultState_b__1(::UnityEngine::Rendering::VolumeComponent* x);

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeComponent> const& __cordl_internal_get_profileComponent() const;

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeComponent>& __cordl_internal_get_profileComponent();

  constexpr void __cordl_internal_set_profileComponent(::UnityW<::UnityEngine::Rendering::VolumeComponent> value);

  /// @brief Method .ctor, addr 0x6ba2344, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeManager___c__DisplayClass62_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeManager___c__DisplayClass62_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeManager___c__DisplayClass62_1(VolumeManager___c__DisplayClass62_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeManager___c__DisplayClass62_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeManager___c__DisplayClass62_1(VolumeManager___c__DisplayClass62_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8935 };

  /// @brief Field profileComponent, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::VolumeComponent> ___profileComponent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VolumeManager___c__DisplayClass62_1, ___profileComponent) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::VolumeManager___c__DisplayClass62_1) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, System.Type, Unity.Profiling.ProfilerMarker, UnityEngine.Rendering.VolumeComponent, UnityEngine.Rendering.VolumeParameter
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeManager
class CORDL_TYPE VolumeManager : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::VolumeManager___c;

  using __c__DisplayClass62_0 = ::UnityEngine::Rendering::VolumeManager___c__DisplayClass62_0;

  using __c__DisplayClass62_1 = ::UnityEngine::Rendering::VolumeManager___c__DisplayClass62_1;

  /// @brief Field <customDefaultProfiles>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__customDefaultProfiles_k__BackingField,
                      put = __cordl_internal_set__customDefaultProfiles_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*
      _customDefaultProfiles_k__BackingField;

  /// @brief Field <globalDefaultProfile>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__globalDefaultProfile_k__BackingField,
                      put = __cordl_internal_set__globalDefaultProfile_k__BackingField)) ::UnityW<::UnityEngine::Rendering::VolumeProfile>
      _globalDefaultProfile_k__BackingField;

  /// @brief Field <isInitialized>k__BackingField, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized_k__BackingField, put = __cordl_internal_set__isInitialized_k__BackingField)) bool _isInitialized_k__BackingField;

  /// @brief Field <qualityDefaultProfile>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__qualityDefaultProfile_k__BackingField,
                      put = __cordl_internal_set__qualityDefaultProfile_k__BackingField)) ::UnityW<::UnityEngine::Rendering::VolumeProfile>
      _qualityDefaultProfile_k__BackingField;

  /// @brief Field <stack>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__stack_k__BackingField, put = __cordl_internal_set__stack_k__BackingField)) ::UnityEngine::Rendering::VolumeStack* _stack_k__BackingField;

  __declspec(property(get = get_baseComponentTypeArray, put = set_baseComponentTypeArray)) ::ArrayW<::System::Type*> baseComponentTypeArray;

  /// @brief [Obsolete("Please use baseComponentTypeArray instead. #from(2021.2)")]
  __declspec(property(get = get_baseComponentTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>* baseComponentTypes;

  __declspec(property(get = get_customDefaultProfiles,
                      put = set_customDefaultProfiles)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* customDefaultProfiles;

  __declspec(property(get = get_globalDefaultProfile, put = set_globalDefaultProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile> globalDefaultProfile;

  __declspec(property(get = get_isInitialized, put = set_isInitialized)) bool isInitialized;

  /// @brief Field k_ProfilerMarkerEvaluateVolumeDefaultState, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ProfilerMarkerEvaluateVolumeDefaultState,
                      put = setStaticF_k_ProfilerMarkerEvaluateVolumeDefaultState)) ::Unity::Profiling::ProfilerMarker k_ProfilerMarkerEvaluateVolumeDefaultState;

  /// @brief Field k_ProfilerMarkerInitialize, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ProfilerMarkerInitialize, put = setStaticF_k_ProfilerMarkerInitialize)) ::Unity::Profiling::ProfilerMarker k_ProfilerMarkerInitialize;

  /// @brief Field k_ProfilerMarkerInitializeBaseTypesArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ProfilerMarkerInitializeBaseTypesArray,
                      put = setStaticF_k_ProfilerMarkerInitializeBaseTypesArray)) ::Unity::Profiling::ProfilerMarker k_ProfilerMarkerInitializeBaseTypesArray;

  /// @brief Field k_ProfilerMarkerReplaceData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ProfilerMarkerReplaceData, put = setStaticF_k_ProfilerMarkerReplaceData)) ::Unity::Profiling::ProfilerMarker k_ProfilerMarkerReplaceData;

  /// @brief Field k_ProfilerMarkerUpdate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ProfilerMarkerUpdate, put = setStaticF_k_ProfilerMarkerUpdate)) ::Unity::Profiling::ProfilerMarker k_ProfilerMarkerUpdate;

  /// @brief Field m_BaseComponentTypeArray, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BaseComponentTypeArray, put = __cordl_internal_set_m_BaseComponentTypeArray)) ::ArrayW<::System::Type*> m_BaseComponentTypeArray;

  /// @brief Field m_ComponentsDefaultState, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ComponentsDefaultState, put = __cordl_internal_set_m_ComponentsDefaultState)) ::ArrayW<::UnityW<::UnityEngine::Rendering::VolumeComponent>>
      m_ComponentsDefaultState;

  /// @brief Field m_CreatedVolumeStacks, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CreatedVolumeStacks,
                      put = __cordl_internal_set_m_CreatedVolumeStacks)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>* m_CreatedVolumeStacks;

  /// @brief Field m_DefaultStack, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultStack, put = __cordl_internal_set_m_DefaultStack)) ::UnityEngine::Rendering::VolumeStack* m_DefaultStack;

  /// @brief Field m_ParametersDefaultState, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParametersDefaultState, put = __cordl_internal_set_m_ParametersDefaultState)) ::ArrayW<::UnityEngine::Rendering::VolumeParameter*>
      m_ParametersDefaultState;

  /// @brief Field m_VolumeCollection, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VolumeCollection, put = __cordl_internal_set_m_VolumeCollection)) ::UnityEngine::Rendering::VolumeCollection* m_VolumeCollection;

  __declspec(property(get = get_qualityDefaultProfile, put = set_qualityDefaultProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile> qualityDefaultProfile;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>* s_Instance;

  /// @brief Field s_SupportedVolumeComponentsForRenderPipeline, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SupportedVolumeComponentsForRenderPipeline, put = setStaticF_s_SupportedVolumeComponentsForRenderPipeline)) ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>* s_SupportedVolumeComponentsForRenderPipeline;

  __declspec(property(get = get_stack, put = set_stack)) ::UnityEngine::Rendering::VolumeStack* stack;

  /// @brief Method BuildVolumeComponentDisplayList, addr 0x6b9f2b8, size 0x3a0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* BuildVolumeComponentDisplayList(::ArrayW<::System::Type*> types);

  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckDefaultVolumeState, addr 0x6ba16fc, size 0x94, virtual false, abstract: false, final false
  inline void CheckDefaultVolumeState();

  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckStack, addr 0x6ba1790, size 0x1e4, virtual false, abstract: false, final false
  inline void CheckStack(::UnityEngine::Rendering::VolumeStack* stack);

  /// @brief Method CheckUpdateRequired, addr 0x6ba1974, size 0x54, virtual false, abstract: false, final false
  inline bool CheckUpdateRequired(::UnityEngine::Rendering::VolumeStack* stack);

  /// @brief Method CreateStack, addr 0x6ba0d14, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeStack* CreateStack();

  /// @brief Method CreateStackInternal, addr 0x6ba042c, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeStack* CreateStackInternal();

  /// @brief Method Deinitialize, addr 0x6ba0510, size 0x16c, virtual false, abstract: false, final false
  inline void Deinitialize();

  /// @brief Method DestroyStack, addr 0x6ba067c, size 0x78, virtual false, abstract: false, final false
  inline void DestroyStack(::UnityEngine::Rendering::VolumeStack* stack);

  /// @brief Method EvaluateVolumeDefaultState, addr 0x6b9fac0, size 0x96c, virtual false, abstract: false, final false
  inline void EvaluateVolumeDefaultState();

  /// @brief Method GetVolumeComponentDefaultState, addr 0x6b9f690, size 0x110, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> GetVolumeComponentDefaultState(::System::Type* volumeComponentType);

  /// @brief Method GetVolumeComponentsForDisplay, addr 0x6b9ee10, size 0x238, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* GetVolumeComponentsForDisplay(::System::Type* currentPipelineAssetType);

  /// @brief Method GetVolumes, addr 0x6ba1f18, size 0x148, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>> GetVolumes(::UnityEngine::LayerMask layerMask);

  /// @brief Method GrabVolumes, addr 0x6ba1efc, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* GrabVolumes(::UnityEngine::LayerMask mask);

  /// @brief Method Initialize, addr 0x6b9f854, size 0x154, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::Rendering::VolumeProfile* globalDefaultVolumeProfile, ::UnityEngine::Rendering::VolumeProfile* qualityDefaultVolumeProfile);

  /// @brief Method InitializeBaseTypesArray, addr 0x6b9f048, size 0x270, virtual false, abstract: false, final false
  inline void InitializeBaseTypesArray(::UnityEngine::Rendering::VolumeProfile* globalDefaultVolumeProfile);

  /// @brief Method InitializeInternal, addr 0x6b9f9a8, size 0x48, virtual false, abstract: false, final false
  inline void InitializeInternal(::UnityEngine::Rendering::VolumeProfile* globalDefaultVolumeProfile, ::UnityEngine::Rendering::VolumeProfile* qualityDefaultVolumeProfile);

  /// @brief Method InitializeVolumeComponents, addr 0x6b9f9f4, size 0xcc, virtual false, abstract: false, final false
  inline void InitializeVolumeComponents();

  /// @brief Method IsComponentActiveInMask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
  inline bool IsComponentActiveInMask(::UnityEngine::LayerMask layerMask);

  /// @brief Method IsVolumeRenderedByCamera, addr 0x6ba2060, size 0x8, virtual false, abstract: false, final false
  static inline bool IsVolumeRenderedByCamera(::UnityEngine::Rendering::Volume* volume, ::UnityEngine::Camera* camera);

  /// @brief Method LoadBaseTypes, addr 0x6b9f9f0, size 0x4, virtual false, abstract: false, final false
  inline void LoadBaseTypes(::System::Type* pipelineAssetType, ::UnityEngine::Rendering::VolumeProfile* globalDefaultVolumeProfile);

  /// @brief Method LoadBaseTypesByDefaultVolume, addr 0x6ba0d78, size 0x3e4, virtual false, abstract: false, final false
  inline void LoadBaseTypesByDefaultVolume(::System::Type* rpType, ::UnityEngine::Rendering::VolumeProfile* globalDefaultVolumeProfile);

  static inline ::UnityEngine::Rendering::VolumeManager* New_ctor();

  /// @brief Method OnVolumeComponentChanged, addr 0x6ba0a90, size 0x284, virtual false, abstract: false, final false
  inline void OnVolumeComponentChanged(::UnityEngine::Rendering::VolumeComponent* component);

  /// @brief Method OnVolumeProfileChanged, addr 0x6ba09a4, size 0xec, virtual false, abstract: false, final false
  inline void OnVolumeProfileChanged(::UnityEngine::Rendering::VolumeProfile* profile);

  /// @brief Method OverrideData, addr 0x6ba1384, size 0x158, virtual false, abstract: false, final false
  inline void OverrideData(::UnityEngine::Rendering::VolumeStack* stack, ::UnityEngine::Rendering::Volume* volume, float_t interpFactor);

  /// @brief Method Register, addr 0x6b9ea04, size 0x50, virtual false, abstract: false, final false
  inline void Register(::UnityEngine::Rendering::Volume* volume);

  /// [Obsolete("Please use the Register without a given layer index. #from(6000.0)")]
  /// @brief Method Register, addr 0x6b9e7b0, size 0x254, virtual false, abstract: false, final false
  inline void Register(::UnityEngine::Rendering::Volume* volume, int32_t layer);

  /// @brief Method ReplaceData, addr 0x6ba14dc, size 0x220, virtual false, abstract: false, final false
  inline void ReplaceData(::UnityEngine::Rendering::VolumeStack* stack);

  /// @brief Method ResetMainStack, addr 0x6ba0d6c, size 0xc, virtual false, abstract: false, final false
  inline void ResetMainStack();

  /// @brief Method SetCustomDefaultProfiles, addr 0x6ba077c, size 0x228, virtual false, abstract: false, final false
  inline void SetCustomDefaultProfiles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* profiles);

  /// @brief Method SetGlobalDefaultProfile, addr 0x6ba06f4, size 0x80, virtual false, abstract: false, final false
  inline void SetGlobalDefaultProfile(::UnityEngine::Rendering::VolumeProfile* profile);

  /// @brief Method SetLayerDirty, addr 0x6ba1354, size 0x18, virtual false, abstract: false, final false
  inline void SetLayerDirty(int32_t layer);

  /// @brief Method SetQualityDefaultProfile, addr 0x6ba0774, size 0x8, virtual false, abstract: false, final false
  inline void SetQualityDefaultProfile(::UnityEngine::Rendering::VolumeProfile* profile);

  /// @brief Method Unregister, addr 0x6b9eca8, size 0x50, virtual false, abstract: false, final false
  inline void Unregister(::UnityEngine::Rendering::Volume* volume);

  /// [Obsolete("Please use the Register without a given layer index. #from(6000.0)")]
  /// @brief Method Unregister, addr 0x6b9ea54, size 0x254, virtual false, abstract: false, final false
  inline void Unregister(::UnityEngine::Rendering::Volume* volume, int32_t layer);

  /// @brief Method Update, addr 0x6ba19dc, size 0x520, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Rendering::VolumeStack* stack, ::UnityEngine::Transform* trigger, ::UnityEngine::LayerMask layerMask);

  /// @brief Method Update, addr 0x6ba19c8, size 0x14, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Transform* trigger, ::UnityEngine::LayerMask layerMask);

  /// @brief Method UpdateVolumeLayer, addr 0x6ba136c, size 0x18, virtual false, abstract: false, final false
  inline void UpdateVolumeLayer(::UnityEngine::Rendering::Volume* volume, int32_t prevLayer, int32_t newLayer);

  /// [CompilerGenerated]
  /// @brief Method <EvaluateVolumeDefaultState>g__ApplyDefaultProfile|62_0, addr 0x6ba115c, size 0x1f8, virtual false, abstract: false, final false
  static inline void _EvaluateVolumeDefaultState_g__ApplyDefaultProfile_62_0(::UnityEngine::Rendering::VolumeProfile* profile,
                                                                             ::by_ref<::UnityEngine::Rendering::VolumeManager___c__DisplayClass62_0> _cordl_fixed_empty_name_whitespace);

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* const& __cordl_internal_get__customDefaultProfiles_k__BackingField() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>*& __cordl_internal_get__customDefaultProfiles_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& __cordl_internal_get__globalDefaultProfile_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& __cordl_internal_get__globalDefaultProfile_k__BackingField();

  constexpr bool const& __cordl_internal_get__isInitialized_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isInitialized_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& __cordl_internal_get__qualityDefaultProfile_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& __cordl_internal_get__qualityDefaultProfile_k__BackingField();

  constexpr ::UnityEngine::Rendering::VolumeStack* const& __cordl_internal_get__stack_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::VolumeStack*& __cordl_internal_get__stack_k__BackingField();

  constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get_m_BaseComponentTypeArray() const;

  constexpr ::ArrayW<::System::Type*>& __cordl_internal_get_m_BaseComponentTypeArray();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::VolumeComponent>> const& __cordl_internal_get_m_ComponentsDefaultState() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::VolumeComponent>>& __cordl_internal_get_m_ComponentsDefaultState();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>* const& __cordl_internal_get_m_CreatedVolumeStacks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>*& __cordl_internal_get_m_CreatedVolumeStacks();

  constexpr ::UnityEngine::Rendering::VolumeStack* const& __cordl_internal_get_m_DefaultStack() const;

  constexpr ::UnityEngine::Rendering::VolumeStack*& __cordl_internal_get_m_DefaultStack();

  constexpr ::ArrayW<::UnityEngine::Rendering::VolumeParameter*> const& __cordl_internal_get_m_ParametersDefaultState() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::VolumeParameter*>& __cordl_internal_get_m_ParametersDefaultState();

  constexpr ::UnityEngine::Rendering::VolumeCollection* const& __cordl_internal_get_m_VolumeCollection() const;

  constexpr ::UnityEngine::Rendering::VolumeCollection*& __cordl_internal_get_m_VolumeCollection();

  constexpr void __cordl_internal_set__customDefaultProfiles_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* value);

  constexpr void __cordl_internal_set__globalDefaultProfile_k__BackingField(::UnityW<::UnityEngine::Rendering::VolumeProfile> value);

  constexpr void __cordl_internal_set__isInitialized_k__BackingField(bool value);

  constexpr void __cordl_internal_set__qualityDefaultProfile_k__BackingField(::UnityW<::UnityEngine::Rendering::VolumeProfile> value);

  constexpr void __cordl_internal_set__stack_k__BackingField(::UnityEngine::Rendering::VolumeStack* value);

  constexpr void __cordl_internal_set_m_BaseComponentTypeArray(::ArrayW<::System::Type*> value);

  constexpr void __cordl_internal_set_m_ComponentsDefaultState(::ArrayW<::UnityW<::UnityEngine::Rendering::VolumeComponent>> value);

  constexpr void __cordl_internal_set_m_CreatedVolumeStacks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>* value);

  constexpr void __cordl_internal_set_m_DefaultStack(::UnityEngine::Rendering::VolumeStack* value);

  constexpr void __cordl_internal_set_m_ParametersDefaultState(::ArrayW<::UnityEngine::Rendering::VolumeParameter*> value);

  constexpr void __cordl_internal_set_m_VolumeCollection(::UnityEngine::Rendering::VolumeCollection* value);

  /// @brief Method .ctor, addr 0x6b9f7a0, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ProfilerMarkerEvaluateVolumeDefaultState();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ProfilerMarkerInitialize();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ProfilerMarkerInitializeBaseTypesArray();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ProfilerMarkerReplaceData();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ProfilerMarkerUpdate();

  static inline ::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>* getStaticF_s_Instance();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>*
  getStaticF_s_SupportedVolumeComponentsForRenderPipeline();

  /// @brief Method get_baseComponentTypeArray, addr 0x6b9edb4, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*> get_baseComponentTypeArray();

  /// @brief Method get_baseComponentTypes, addr 0x6b9edb0, size 0x4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_baseComponentTypes();

  /// [CompilerGenerated]
  /// @brief Method get_customDefaultProfiles, addr 0x6b9f680, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* get_customDefaultProfiles();

  /// [CompilerGenerated]
  /// @brief Method get_globalDefaultProfile, addr 0x6b9f660, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> get_globalDefaultProfile();

  /// @brief Method get_instance, addr 0x6b9ecf8, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::VolumeManager* get_instance();

  /// [CompilerGenerated]
  /// @brief Method get_isInitialized, addr 0x6b9f844, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// [CompilerGenerated]
  /// @brief Method get_qualityDefaultProfile, addr 0x6b9f670, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> get_qualityDefaultProfile();

  /// [CompilerGenerated]
  /// @brief Method get_stack, addr 0x6b9eda0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeStack* get_stack();

  static inline void setStaticF_k_ProfilerMarkerEvaluateVolumeDefaultState(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ProfilerMarkerInitialize(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ProfilerMarkerInitializeBaseTypesArray(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ProfilerMarkerReplaceData(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ProfilerMarkerUpdate(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_Instance(::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>* value);

  static inline void setStaticF_s_SupportedVolumeComponentsForRenderPipeline(
      ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>* value);

  /// @brief Method set_baseComponentTypeArray, addr 0x6b9f658, size 0x8, virtual false, abstract: false, final false
  inline void set_baseComponentTypeArray(::ArrayW<::System::Type*> value);

  /// [CompilerGenerated]
  /// @brief Method set_customDefaultProfiles, addr 0x6b9f688, size 0x8, virtual false, abstract: false, final false
  inline void set_customDefaultProfiles(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* value);

  /// [CompilerGenerated]
  /// @brief Method set_globalDefaultProfile, addr 0x6b9f668, size 0x8, virtual false, abstract: false, final false
  inline void set_globalDefaultProfile(::UnityEngine::Rendering::VolumeProfile* value);

  /// [CompilerGenerated]
  /// @brief Method set_isInitialized, addr 0x6b9f84c, size 0x8, virtual false, abstract: false, final false
  inline void set_isInitialized(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_qualityDefaultProfile, addr 0x6b9f678, size 0x8, virtual false, abstract: false, final false
  inline void set_qualityDefaultProfile(::UnityEngine::Rendering::VolumeProfile* value);

  /// [CompilerGenerated]
  /// @brief Method set_stack, addr 0x6b9eda8, size 0x8, virtual false, abstract: false, final false
  inline void set_stack(::UnityEngine::Rendering::VolumeStack* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeManager", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeManager(VolumeManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeManager", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeManager(VolumeManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8936 };

  /// [CompilerGenerated]
  /// @brief Field <stack>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::VolumeStack* ____stack_k__BackingField;

  /// @brief Field m_BaseComponentTypeArray, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Type*> ___m_BaseComponentTypeArray;

  /// [CompilerGenerated]
  /// @brief Field <globalDefaultProfile>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::VolumeProfile> ____globalDefaultProfile_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <qualityDefaultProfile>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::VolumeProfile> ____qualityDefaultProfile_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <customDefaultProfiles>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityW<::UnityEngine::Rendering::VolumeProfile>>* ____customDefaultProfiles_k__BackingField;

  /// @brief Field m_VolumeCollection, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::VolumeCollection* ___m_VolumeCollection;

  /// @brief Field m_ComponentsDefaultState, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Rendering::VolumeComponent>> ___m_ComponentsDefaultState;

  /// @brief Field m_ParametersDefaultState, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::VolumeParameter*> ___m_ParametersDefaultState;

  /// @brief Field m_DefaultStack, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::VolumeStack* ___m_DefaultStack;

  /// @brief Field m_CreatedVolumeStacks, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>* ___m_CreatedVolumeStacks;

  /// [CompilerGenerated]
  /// @brief Field <isInitialized>k__BackingField, offset: 0x60, size: 0x1, def value: None
  bool ____isInitialized_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ____stack_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ___m_BaseComponentTypeArray) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ____globalDefaultProfile_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ____qualityDefaultProfile_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ____customDefaultProfiles_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ___m_VolumeCollection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ___m_ComponentsDefaultState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ___m_ParametersDefaultState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ___m_DefaultStack) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ___m_CreatedVolumeStacks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ____isInitialized_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::VolumeManager) == 0x68, "Size mismatch!");

} // namespace UnityEngine::Rendering
