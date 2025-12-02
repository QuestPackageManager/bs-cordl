#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeDataBindingsUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeDataBindingsUpdater)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace Unity::Properties {
struct PropertyPath;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct BindingResult;
}
namespace UnityEngine::UIElements {
class BindingUpdater;
}
namespace UnityEngine::UIElements {
class Binding;
}
namespace UnityEngine::UIElements {
class DataBindingManager_BindingData;
}
namespace UnityEngine::UIElements {
class DataBindingManager;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct VisualTreeDataBindingsUpdater_VersionInfo;
}
namespace UnityEngine::UIElements {
class VisualTreeDataBindingsUpdater___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeDataBindingsUpdater;
}
namespace UnityEngine::UIElements {
class VisualTreeDataBindingsUpdater___c;
}
namespace UnityEngine::UIElements {
struct VisualTreeDataBindingsUpdater_VersionInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c);
MARK_VAL_T(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeDataBindingsUpdater/VersionInfo
struct CORDL_TYPE VisualTreeDataBindingsUpdater_VersionInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6a145bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* source, int64_t version);

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeDataBindingsUpdater_VersionInfo();

  // Ctor Parameters [CppParam { name: "source", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr VisualTreeDataBindingsUpdater_VersionInfo(::System::Object* source, int64_t version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4064 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field source, offset: 0x0, size: 0x8, def value: None
  ::System::Object* source;

  /// @brief Field version, offset: 0x8, size: 0x8, def value: None
  int64_t version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo, version) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeDataBindingsUpdater/<>c
class CORDL_TYPE VisualTreeDataBindingsUpdater___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c* __9;

  /// @brief Field <>9__29_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__29_0, put = setStaticF___9__29_0)) ::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* __9__29_0;

  static inline ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c* New_ctor();

  /// @brief Method <ProcessDataSourceChangedRequests>b__29_0, addr 0x6a14a6c, size 0x1c, virtual false, abstract: false, final false
  inline bool _ProcessDataSourceChangedRequests_b__29_0(::UnityEngine::UIElements::VisualElement* e);

  /// @brief Method .ctor, addr 0x6a14a68, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* getStaticF___9__29_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c* value);

  static inline void setStaticF___9__29_0(::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeDataBindingsUpdater___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeDataBindingsUpdater___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeDataBindingsUpdater___c(VisualTreeDataBindingsUpdater___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeDataBindingsUpdater___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeDataBindingsUpdater___c(VisualTreeDataBindingsUpdater___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4065 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.BaseVisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeDataBindingsUpdater
class CORDL_TYPE VisualTreeDataBindingsUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
  // Declarations
  using VersionInfo = ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo;

  using __c = ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c;

  __declspec(property(get = get_bindingManager)) ::UnityEngine::UIElements::DataBindingManager* bindingManager;

  /// @brief Field m_AttachedPanel, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AttachedPanel, put = __cordl_internal_set_m_AttachedPanel)) ::UnityEngine::UIElements::BaseVisualElementPanel* m_AttachedPanel;

  /// @brief Field m_BindingRegistrationRequests, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindingRegistrationRequests,
                      put = __cordl_internal_set_m_BindingRegistrationRequests)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* m_BindingRegistrationRequests;

  /// @brief Field m_BoundsElement, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BoundsElement,
                      put = __cordl_internal_set_m_BoundsElement)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* m_BoundsElement;

  /// @brief Field m_DataSourceChangedRequests, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DataSourceChangedRequests,
                      put = __cordl_internal_set_m_DataSourceChangedRequests)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_DataSourceChangedRequests;

  /// @brief Field m_DirtyBindings, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DirtyBindings,
                      put = __cordl_internal_set_m_DirtyBindings)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* m_DirtyBindings;

  /// @brief Field m_KnownSources, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KnownSources, put = __cordl_internal_set_m_KnownSources)) ::System::Collections::Generic::HashSet_1<::System::Object*>* m_KnownSources;

  /// @brief Field m_RanUpdate, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RanUpdate, put = __cordl_internal_set_m_RanUpdate)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* m_RanUpdate;

  /// @brief Field m_RemovedElements, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RemovedElements,
                      put = __cordl_internal_set_m_RemovedElements)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_RemovedElements;

  /// @brief Field m_TrackedObjects, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TrackedObjects, put = __cordl_internal_set_m_TrackedObjects)) ::System::Collections::Generic::HashSet_1<::System::Object*>* m_TrackedObjects;

  /// @brief Field m_Updater, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Updater, put = __cordl_internal_set_m_Updater)) ::UnityEngine::UIElements::BindingUpdater* m_Updater;

  /// @brief Field m_VersionChanges, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VersionChanges,
                      put = __cordl_internal_set_m_VersionChanges)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo>* m_VersionChanges;

  __declspec(property(get = get_profilerMarker)) ::Unity::Profiling::ProfilerMarker profilerMarker;

  /// @brief Field s_ProcessBindingRequestsProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ProcessBindingRequestsProfilerMarker,
                      put = setStaticF_s_ProcessBindingRequestsProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_ProcessBindingRequestsProfilerMarker;

  /// @brief Field s_ProcessDataSourcesProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ProcessDataSourcesProfilerMarker, put = setStaticF_s_ProcessDataSourcesProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_ProcessDataSourcesProfilerMarker;

  /// @brief Field s_ShouldUpdateBindingProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ShouldUpdateBindingProfilerMarker,
                      put = setStaticF_s_ShouldUpdateBindingProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_ShouldUpdateBindingProfilerMarker;

  /// @brief Field s_UpdateBindingProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UpdateBindingProfilerMarker, put = setStaticF_s_UpdateBindingProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_UpdateBindingProfilerMarker;

  /// @brief Field s_UpdateProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UpdateProfilerMarker, put = setStaticF_s_UpdateProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_UpdateProfilerMarker;

  /// @brief Method CacheAndLogBindingResult, addr 0x6a12c0c, size 0x130, virtual false, abstract: false, final false
  inline void CacheAndLogBindingResult(bool appliedOnUiCache, ::ByRef<::UnityEngine::UIElements::DataBindingManager_BindingData*> bindingData,
                                       ::ByRef<::UnityEngine::UIElements::BindingResult> result);

  /// @brief Method Dispose, addr 0x6a14820, size 0x40, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetDataSourceVersion, addr 0x6a14410, size 0x1ac, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<bool, int64_t> GetDataSourceVersion(::System::Object* source);

  /// @brief Method IsPrefix, addr 0x6a145c4, size 0x16c, virtual false, abstract: false, final false
  inline bool IsPrefix(::ByRef<::Unity::Properties::PropertyPath> prefix, ::ByRef<::Unity::Properties::PropertyPath> path);

  /// @brief Method LogResult, addr 0x6a12d3c, size 0x144, virtual false, abstract: false, final false
  inline void LogResult(::ByRef<::UnityEngine::UIElements::BindingResult> result);

  static inline ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater* New_ctor();

  /// @brief Method OnHierarchyChange, addr 0x6a12730, size 0x3e0, virtual false, abstract: false, final false
  inline void OnHierarchyChange(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType type,
                                ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>* additionalContext);

  /// @brief Method OnPanelChanged, addr 0x6a14730, size 0xf0, virtual false, abstract: false, final false
  inline void OnPanelChanged(::UnityEngine::UIElements::BaseVisualElementPanel* p);

  /// @brief Method OnVersionChanged, addr 0x6a12b10, size 0xfc, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method ProcessAllBindingRequests, addr 0x6a13c28, size 0x1f0, virtual false, abstract: false, final false
  inline void ProcessAllBindingRequests();

  /// @brief Method ProcessBindingRequests, addr 0x6a14860, size 0x38, virtual false, abstract: false, final false
  inline void ProcessBindingRequests(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method ProcessDataSourceChangedRequests, addr 0x6a13e18, size 0x2d0, virtual false, abstract: false, final false
  inline void ProcessDataSourceChangedRequests();

  /// @brief Method ProcessPropertyChangedEvents, addr 0x6a140e8, size 0x328, virtual false, abstract: false, final false
  inline void ProcessPropertyChangedEvents(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* ranUpdate);

  /// @brief Method Update, addr 0x6a12e80, size 0xda8, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& __cordl_internal_get_m_AttachedPanel() const;

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get_m_AttachedPanel();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_BindingRegistrationRequests() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_BindingRegistrationRequests();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_BoundsElement() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_BoundsElement();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_DataSourceChangedRequests() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_DataSourceChangedRequests();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* const& __cordl_internal_get_m_DirtyBindings() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>*& __cordl_internal_get_m_DirtyBindings();

  constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>* const& __cordl_internal_get_m_KnownSources() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& __cordl_internal_get_m_KnownSources();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* const& __cordl_internal_get_m_RanUpdate() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>*& __cordl_internal_get_m_RanUpdate();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_RemovedElements() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_RemovedElements();

  constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>* const& __cordl_internal_get_m_TrackedObjects() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& __cordl_internal_get_m_TrackedObjects();

  constexpr ::UnityEngine::UIElements::BindingUpdater* const& __cordl_internal_get_m_Updater() const;

  constexpr ::UnityEngine::UIElements::BindingUpdater*& __cordl_internal_get_m_Updater();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo>* const& __cordl_internal_get_m_VersionChanges() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo>*& __cordl_internal_get_m_VersionChanges();

  constexpr void __cordl_internal_set_m_AttachedPanel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr void __cordl_internal_set_m_BindingRegistrationRequests(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_BoundsElement(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_DataSourceChangedRequests(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_DirtyBindings(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* value);

  constexpr void __cordl_internal_set_m_KnownSources(::System::Collections::Generic::HashSet_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_m_RanUpdate(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* value);

  constexpr void __cordl_internal_set_m_RemovedElements(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_TrackedObjects(::System::Collections::Generic::HashSet_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_m_Updater(::UnityEngine::UIElements::BindingUpdater* value);

  constexpr void __cordl_internal_set_m_VersionChanges(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo>* value);

  /// @brief Method .ctor, addr 0x6a124ac, size 0x284, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessBindingRequestsProfilerMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessDataSourcesProfilerMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ShouldUpdateBindingProfilerMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_UpdateBindingProfilerMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_UpdateProfilerMarker();

  /// @brief Method get_bindingManager, addr 0x6a12430, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DataBindingManager* get_bindingManager();

  /// @brief Method get_profilerMarker, addr 0x6a12450, size 0x5c, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  static inline void setStaticF_s_ProcessBindingRequestsProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_ProcessDataSourcesProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_ShouldUpdateBindingProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_UpdateBindingProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_UpdateProfilerMarker(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeDataBindingsUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeDataBindingsUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeDataBindingsUpdater(VisualTreeDataBindingsUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeDataBindingsUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeDataBindingsUpdater(VisualTreeDataBindingsUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4066 };

  /// @brief Field m_Updater, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::BindingUpdater* ___m_Updater;

  /// @brief Field m_BindingRegistrationRequests, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___m_BindingRegistrationRequests;

  /// @brief Field m_DataSourceChangedRequests, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ___m_DataSourceChangedRequests;

  /// @brief Field m_RemovedElements, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ___m_RemovedElements;

  /// @brief Field m_BoundsElement, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___m_BoundsElement;

  /// @brief Field m_VersionChanges, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo>* ___m_VersionChanges;

  /// @brief Field m_TrackedObjects, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Object*>* ___m_TrackedObjects;

  /// @brief Field m_RanUpdate, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* ___m_RanUpdate;

  /// @brief Field m_KnownSources, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Object*>* ___m_KnownSources;

  /// @brief Field m_DirtyBindings, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* ___m_DirtyBindings;

  /// @brief Field m_AttachedPanel, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ___m_AttachedPanel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater, ___m_Updater) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater, ___m_BindingRegistrationRequests) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater, ___m_DataSourceChangedRequests) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater, ___m_RemovedElements) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater, ___m_BoundsElement) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater, ___m_VersionChanges) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater, ___m_TrackedObjects) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater, ___m_RanUpdate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater, ___m_KnownSources) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater, ___m_DirtyBindings) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater, ___m_AttachedPanel) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*, "UnityEngine.UIElements", "VisualTreeDataBindingsUpdater");
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*, "UnityEngine.UIElements", "VisualTreeDataBindingsUpdater/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo, "UnityEngine.UIElements", "VisualTreeDataBindingsUpdater/VersionInfo");
