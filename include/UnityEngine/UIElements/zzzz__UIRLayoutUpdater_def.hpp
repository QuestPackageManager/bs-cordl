#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIRLayoutUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIRLayoutUpdater)
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
class UIRLayoutUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIRLayoutUpdater);
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.BaseVisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIRLayoutUpdater
class CORDL_TYPE UIRLayoutUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
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

  __declspec(property(get = get_profilerMarker)) ::Unity::Profiling::ProfilerMarker profilerMarker;

  /// @brief Field s_Description, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Description, put = setStaticF_s_Description)) ::StringW s_Description;

  /// @brief Field s_ProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ProfilerMarker, put = setStaticF_s_ProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_ProfilerMarker;

  /// @brief Method DispatchChangeEvents, addr 0x6b8aea4, size 0x2c0, virtual false, abstract: false, final false
  inline void DispatchChangeEvents(::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents,
                                   int32_t currentLayoutPass);

  static inline ::UnityEngine::UIElements::UIRLayoutUpdater* New_ctor();

  /// @brief Method OnVersionChanged, addr 0x6b8a4d8, size 0x50, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method Update, addr 0x6b8a528, size 0x240, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateHierarchyDisplayed, addr 0x6b8b164, size 0x2f4, virtual false, abstract: false, final false
  static inline bool
  UpdateHierarchyDisplayed(::UnityEngine::UIElements::VisualElement* ve,
                           ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents,
                           bool inheritedDisplayed);

  /// @brief Method UpdateSubTree, addr 0x6b8a768, size 0x73c, virtual false, abstract: false, final false
  inline void UpdateSubTree(::UnityEngine::UIElements::VisualElement* ve,
                            ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents);

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* const&
  __cordl_internal_get_changeEventsList() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*&
  __cordl_internal_get_changeEventsList();

  constexpr void
  __cordl_internal_set_changeEventsList(::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* value);

  /// @brief Method .ctor, addr 0x6b8b458, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ComputeLayoutMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_DispatchChangeEventsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UpdateSubTreeMarker();

  static inline ::StringW getStaticF_s_Description();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker();

  /// @brief Method get_profilerMarker, addr 0x6b8a47c, size 0x5c, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  static inline void setStaticF_k_ComputeLayoutMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_DispatchChangeEventsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_UpdateSubTreeMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_Description(::StringW value);

  static inline void setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRLayoutUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIRLayoutUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIRLayoutUpdater(UIRLayoutUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIRLayoutUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIRLayoutUpdater(UIRLayoutUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4665 };

  /// @brief Field changeEventsList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* ___changeEventsList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIRLayoutUpdater, ___changeEventsList) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIRLayoutUpdater, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIRLayoutUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRLayoutUpdater*, "UnityEngine.UIElements", "UIRLayoutUpdater");
