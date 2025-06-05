#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeBindingsUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeHierarchyTrackerUpdater_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeBindingsUpdater)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
class IBinding;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeBindingsUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeBindingsUpdater);
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.PropertyName, UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeBindingsUpdater
class CORDL_TYPE VisualTreeBindingsUpdater : public ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater {
public:
  // Declarations
  /// @brief Field <disableBindingsThrottling>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__disableBindingsThrottling_k__BackingField, put = setStaticF__disableBindingsThrottling_k__BackingField)) bool _disableBindingsThrottling_k__BackingField;

  /// @brief Field <temporaryObjectCache>k__BackingField, offset 0x60, size 0x8
  __declspec(property(
      get = __cordl_internal_get__temporaryObjectCache_k__BackingField,
      put = __cordl_internal_set__temporaryObjectCache_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* _temporaryObjectCache_k__BackingField;

  /// @brief Field m_ElementsToAdd, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ElementsToAdd,
                      put = __cordl_internal_set_m_ElementsToAdd)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_ElementsToAdd;

  /// @brief Field m_ElementsToBind, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ElementsToBind,
                      put = __cordl_internal_set_m_ElementsToBind)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_ElementsToBind;

  /// @brief Field m_ElementsToRemove, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ElementsToRemove,
                      put = __cordl_internal_set_m_ElementsToRemove)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_ElementsToRemove;

  /// @brief Field m_ElementsWithBindings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ElementsWithBindings,
                      put = __cordl_internal_set_m_ElementsWithBindings)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_ElementsWithBindings;

  /// @brief Field m_LastUpdateTime, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastUpdateTime, put = __cordl_internal_set_m_LastUpdateTime)) int64_t m_LastUpdateTime;

  __declspec(property(get = get_profilerMarker)) ::Unity::Profiling::ProfilerMarker profilerMarker;

  /// @brief Field s_AdditionalBindingObjectVEPropertyName, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_AdditionalBindingObjectVEPropertyName,
                      put = setStaticF_s_AdditionalBindingObjectVEPropertyName)) ::UnityEngine::PropertyName s_AdditionalBindingObjectVEPropertyName;

  /// @brief Field s_BindingRequestObjectVEPropertyName, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_BindingRequestObjectVEPropertyName, put = setStaticF_s_BindingRequestObjectVEPropertyName)) ::UnityEngine::PropertyName s_BindingRequestObjectVEPropertyName;

  /// @brief Field s_Description, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Description, put = setStaticF_s_Description)) ::StringW s_Description;

  /// @brief Field s_MarkerPoll, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerPoll, put = setStaticF_s_MarkerPoll)) ::Unity::Profiling::ProfilerMarker s_MarkerPoll;

  /// @brief Field s_MarkerUpdate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerUpdate, put = setStaticF_s_MarkerUpdate)) ::Unity::Profiling::ProfilerMarker s_MarkerUpdate;

  /// @brief Field s_ProfilerBindingRequestsMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ProfilerBindingRequestsMarker, put = setStaticF_s_ProfilerBindingRequestsMarker)) ::Unity::Profiling::ProfilerMarker s_ProfilerBindingRequestsMarker;

  /// @brief Field s_ProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ProfilerMarker, put = setStaticF_s_ProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_ProfilerMarker;

  __declspec(property(get = get_temporaryObjectCache)) ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* temporaryObjectCache;

  /// @brief Field updatedBindings, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_updatedBindings,
                      put = __cordl_internal_set_updatedBindings)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBinding*>* updatedBindings;

  /// @brief Method CurrentTime, addr 0x4971d90, size 0x50, virtual false, abstract: false, final false
  static inline int64_t CurrentTime();

  /// @brief Method GetAdditionalBinding, addr 0x49718cc, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IBinding* GetAdditionalBinding(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetBindingObjectFromElement, addr 0x4971794, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IBinding* GetBindingObjectFromElement(::UnityEngine::UIElements::VisualElement* ve);

  static inline ::UnityEngine::UIElements::VisualTreeBindingsUpdater* New_ctor();

  /// @brief Method OnHierarchyChange, addr 0x4971d78, size 0x18, virtual true, abstract: false, final false
  inline void OnHierarchyChange(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType type);

  /// @brief Method OnVersionChanged, addr 0x4971c80, size 0xf8, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method PerformTrackingOperations, addr 0x4971de0, size 0x288, virtual false, abstract: false, final false
  inline void PerformTrackingOperations();

  /// @brief Method StartTracking, addr 0x4971954, size 0x80, virtual false, abstract: false, final false
  inline void StartTracking(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method StartTrackingRecursive, addr 0x4971a5c, size 0x118, virtual false, abstract: false, final false
  inline void StartTrackingRecursive(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method StopTracking, addr 0x49719d4, size 0x80, virtual false, abstract: false, final false
  inline void StopTracking(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method StopTrackingRecursive, addr 0x4971b74, size 0x10c, virtual false, abstract: false, final false
  inline void StopTrackingRecursive(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method Update, addr 0x4972068, size 0x5b8, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateBindings, addr 0x4972620, size 0x530, virtual false, abstract: false, final false
  inline void UpdateBindings();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get__temporaryObjectCache_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*& __cordl_internal_get__temporaryObjectCache_k__BackingField();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_ElementsToAdd() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_ElementsToAdd();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_ElementsToBind() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_ElementsToBind();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_ElementsToRemove() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_ElementsToRemove();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_ElementsWithBindings() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_ElementsWithBindings();

  constexpr int64_t const& __cordl_internal_get_m_LastUpdateTime() const;

  constexpr int64_t& __cordl_internal_get_m_LastUpdateTime();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBinding*>* const& __cordl_internal_get_updatedBindings() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBinding*>*& __cordl_internal_get_updatedBindings();

  constexpr void __cordl_internal_set__temporaryObjectCache_k__BackingField(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* value);

  constexpr void __cordl_internal_set_m_ElementsToAdd(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_ElementsToBind(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_ElementsToRemove(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_ElementsWithBindings(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_LastUpdateTime(int64_t value);

  constexpr void __cordl_internal_set_updatedBindings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBinding*>* value);

  /// @brief Method .ctor, addr 0x4972b50, size 0x154, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__disableBindingsThrottling_k__BackingField();

  static inline ::UnityEngine::PropertyName getStaticF_s_AdditionalBindingObjectVEPropertyName();

  static inline ::UnityEngine::PropertyName getStaticF_s_BindingRequestObjectVEPropertyName();

  static inline ::StringW getStaticF_s_Description();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerPoll();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerUpdate();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerBindingRequestsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker();

  /// @brief Method get_disableBindingsThrottling, addr 0x497173c, size 0x58, virtual false, abstract: false, final false
  static inline bool get_disableBindingsThrottling();

  /// @brief Method get_profilerMarker, addr 0x49716e4, size 0x58, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  /// @brief Method get_temporaryObjectCache, addr 0x4971a54, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* get_temporaryObjectCache();

  static inline void setStaticF__disableBindingsThrottling_k__BackingField(bool value);

  static inline void setStaticF_s_AdditionalBindingObjectVEPropertyName(::UnityEngine::PropertyName value);

  static inline void setStaticF_s_BindingRequestObjectVEPropertyName(::UnityEngine::PropertyName value);

  static inline void setStaticF_s_Description(::StringW value);

  static inline void setStaticF_s_MarkerPoll(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerUpdate(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_ProfilerBindingRequestsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeBindingsUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeBindingsUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeBindingsUpdater(VisualTreeBindingsUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeBindingsUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeBindingsUpdater(VisualTreeBindingsUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5462 };

  /// @brief Field m_ElementsWithBindings, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ___m_ElementsWithBindings;

  /// @brief Field m_ElementsToAdd, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ___m_ElementsToAdd;

  /// @brief Field m_ElementsToRemove, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ___m_ElementsToRemove;

  /// @brief Field m_LastUpdateTime, offset: 0x50, size: 0x8, def value: None
  int64_t ___m_LastUpdateTime;

  /// @brief Field m_ElementsToBind, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ___m_ElementsToBind;

  /// @brief Field <temporaryObjectCache>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* ____temporaryObjectCache_k__BackingField;

  /// @brief Field updatedBindings, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBinding*>* ___updatedBindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeBindingsUpdater, ___m_ElementsWithBindings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeBindingsUpdater, ___m_ElementsToAdd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeBindingsUpdater, ___m_ElementsToRemove) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeBindingsUpdater, ___m_LastUpdateTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeBindingsUpdater, ___m_ElementsToBind) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeBindingsUpdater, ____temporaryObjectCache_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeBindingsUpdater, ___updatedBindings) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeBindingsUpdater, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeBindingsUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeBindingsUpdater*, "UnityEngine.UIElements", "VisualTreeBindingsUpdater");
