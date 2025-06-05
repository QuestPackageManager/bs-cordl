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
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
  /// @brief Field changeEventsList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_changeEventsList, put = __cordl_internal_set_changeEventsList)) ::System::Collections::Generic::List_1<
      ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEventsList;

  __declspec(property(get = get_profilerMarker)) ::Unity::Profiling::ProfilerMarker profilerMarker;

  /// @brief Field s_Description, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Description, put = setStaticF_s_Description)) ::StringW s_Description;

  /// @brief Field s_ProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ProfilerMarker, put = setStaticF_s_ProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_ProfilerMarker;

  /// @brief Method DispatchChangeEvents, addr 0x4a4a7dc, size 0x354, virtual false, abstract: false, final false
  inline void DispatchChangeEvents(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents,
                                   int32_t currentLayoutPass);

  static inline ::UnityEngine::UIElements::UIRLayoutUpdater* New_ctor();

  /// @brief Method OnVersionChanged, addr 0x4a49e78, size 0x48, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method Update, addr 0x4a49ec0, size 0x1f8, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateSubTree, addr 0x4a4a0b8, size 0x724, virtual false, abstract: false, final false
  inline void UpdateSubTree(::UnityEngine::UIElements::VisualElement* ve, bool isDisplayed,
                            ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents);

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* const&
  __cordl_internal_get_changeEventsList() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*&
  __cordl_internal_get_changeEventsList();

  constexpr void
  __cordl_internal_set_changeEventsList(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* value);

  /// @brief Method .ctor, addr 0x4a4ab30, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_s_Description();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker();

  /// @brief Method get_profilerMarker, addr 0x4a49e20, size 0x58, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6031 };

  /// @brief Field changeEventsList, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* ___changeEventsList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIRLayoutUpdater, ___changeEventsList) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIRLayoutUpdater, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIRLayoutUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRLayoutUpdater*, "UnityEngine.UIElements", "UIRLayoutUpdater");
