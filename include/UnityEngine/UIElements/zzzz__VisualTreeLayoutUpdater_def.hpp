#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeLayoutUpdater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeLayoutUpdater)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
class TextJobSystem;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeLayoutUpdater;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::VisualTreeLayoutUpdater*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualTreeLayoutUpdater*, "UnityEngine.UIElements", "VisualTreeLayoutUpdater");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.BaseVisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeLayoutUpdater
class CORDL_TYPE VisualTreeLayoutUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
  // Declarations
  /// @brief Field changeEventsList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_changeEventsList, put = __cordl_internal_set_changeEventsList)) ::System::Collections::Generic::List_1<
      ::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEventsList;

  /// @brief Field k_ComputeLayoutMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ComputeLayoutMarker, put = setStaticF_k_ComputeLayoutMarker)) ::Unity::Profiling::ProfilerMarker k_ComputeLayoutMarker;

  /// @brief Field k_DispatchChangeEventsMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_DispatchChangeEventsMarker, put = setStaticF_k_DispatchChangeEventsMarker)) ::Unity::Profiling::ProfilerMarker k_DispatchChangeEventsMarker;

  /// @brief Field k_UpdateSubTreeMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_UpdateSubTreeMarker, put = setStaticF_k_UpdateSubTreeMarker)) ::Unity::Profiling::ProfilerMarker k_UpdateSubTreeMarker;

  /// @brief Field m_TextJobSystem, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextJobSystem, put = __cordl_internal_set_m_TextJobSystem)) ::UnityEngine::UIElements::TextJobSystem* m_TextJobSystem;

  /// @brief Field missedHierarchyChangeEventsList, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_missedHierarchyChangeEventsList,
                      put = __cordl_internal_set_missedHierarchyChangeEventsList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* missedHierarchyChangeEventsList;

  __declspec(property(get = get_profilerMarker)) ::Unity::Profiling::ProfilerMarker profilerMarker;

  /// @brief Field s_Description, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Description, put = setStaticF_s_Description)) ::StringW s_Description;

  /// @brief Field s_ProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ProfilerMarker, put = setStaticF_s_ProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_ProfilerMarker;

  /// @brief Method DispatchChangeEvents, addr 0x715a274, size 0x2e8, virtual false, abstract: false, final false
  inline void DispatchChangeEvents(::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents,
                                   int32_t currentLayoutPass);

  /// @brief Method DispatchMissedHierarchyChangeEvents, addr 0x715a55c, size 0x378, virtual false, abstract: false, final false
  inline void DispatchMissedHierarchyChangeEvents(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* missedHierarchyChangeEvents, int32_t currentLayoutPass);

  static inline ::UnityEngine::UIElements::VisualTreeLayoutUpdater* New_ctor();

  /// @brief Method OnVersionChanged, addr 0x7159650, size 0x60, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method Update, addr 0x71596b0, size 0x3d8, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateHierarchyDisplayed, addr 0x715a8d4, size 0x37c, virtual false, abstract: false, final false
  static inline bool
  UpdateHierarchyDisplayed(::UnityEngine::UIElements::VisualElement* ve,
                           ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents,
                           bool inheritedDisplayed);

  /// @brief Method UpdateSubTree, addr 0x7159aa8, size 0x7cc, virtual false, abstract: false, final false
  inline void UpdateSubTree(::UnityEngine::UIElements::VisualElement* ve,
                            ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents);

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* const&
  __cordl_internal_get_changeEventsList() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*&
  __cordl_internal_get_changeEventsList();

  constexpr ::UnityEngine::UIElements::TextJobSystem* const& __cordl_internal_get_m_TextJobSystem() const;

  constexpr ::UnityEngine::UIElements::TextJobSystem*& __cordl_internal_get_m_TextJobSystem();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_missedHierarchyChangeEventsList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_missedHierarchyChangeEventsList();

  constexpr void
  __cordl_internal_set_changeEventsList(::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* value);

  constexpr void __cordl_internal_set_m_TextJobSystem(::UnityEngine::UIElements::TextJobSystem* value);

  constexpr void __cordl_internal_set_missedHierarchyChangeEventsList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method .ctor, addr 0x715ac50, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ComputeLayoutMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_DispatchChangeEventsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UpdateSubTreeMarker();

  static inline ::StringW getStaticF_s_Description();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker();

  /// @brief Method get_profilerMarker, addr 0x71595f4, size 0x5c, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  static inline void setStaticF_k_ComputeLayoutMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_DispatchChangeEventsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_UpdateSubTreeMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_Description(::StringW value);

  static inline void setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeLayoutUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeLayoutUpdater", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeLayoutUpdater(VisualTreeLayoutUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeLayoutUpdater", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeLayoutUpdater(VisualTreeLayoutUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5362 };

  /// @brief Field changeEventsList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* ___changeEventsList;

  /// @brief Field missedHierarchyChangeEventsList, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___missedHierarchyChangeEventsList;

  /// @brief Field m_TextJobSystem, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextJobSystem* ___m_TextJobSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeLayoutUpdater, ___changeEventsList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeLayoutUpdater, ___missedHierarchyChangeEventsList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeLayoutUpdater, ___m_TextJobSystem) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualTreeLayoutUpdater) == 0x40, "Size mismatch!");

} // namespace UnityEngine::UIElements
