#pragma once
// IWYU pragma private; include "UnityEngine/UI/ContentSizeFitter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutSelfController_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentSizeFitter)
namespace UnityEngine::UI {
struct ContentSizeFitter_FitMode;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::UI {
struct ContentSizeFitter_FitMode;
}
namespace UnityEngine::UI {
class ContentSizeFitter;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::ContentSizeFitter_FitMode);
MARK_REF_PTR_T(::UnityEngine::UI::ContentSizeFitter);
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.ContentSizeFitter/FitMode
struct CORDL_TYPE ContentSizeFitter_FitMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ContentSizeFitter_FitMode_Unwrapped
  enum struct __ContentSizeFitter_FitMode_Unwrapped : int32_t {
    __E_Unconstrained = static_cast<int32_t>(0x0),
    __E_MinSize = static_cast<int32_t>(0x1),
    __E_PreferredSize = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ContentSizeFitter_FitMode_Unwrapped() const noexcept {
    return static_cast<__ContentSizeFitter_FitMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentSizeFitter_FitMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ContentSizeFitter_FitMode(int32_t value__) noexcept;

  /// @brief Field MinSize value: I32(1)
  static ::UnityEngine::UI::ContentSizeFitter_FitMode const MinSize;

  /// @brief Field PreferredSize value: I32(2)
  static ::UnityEngine::UI::ContentSizeFitter_FitMode const PreferredSize;

  /// @brief Field Unconstrained value: I32(0)
  static ::UnityEngine::UI::ContentSizeFitter_FitMode const Unconstrained;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15092 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::ContentSizeFitter_FitMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ContentSizeFitter_FitMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies UnityEngine.DrivenRectTransformTracker, UnityEngine.EventSystems.UIBehaviour, UnityEngine.UI.ContentSizeFitter::FitMode, UnityEngine.UI.ILayoutController,
// UnityEngine.UI.ILayoutSelfController
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.ContentSizeFitter
class CORDL_TYPE ContentSizeFitter : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using FitMode = ::UnityEngine::UI::ContentSizeFitter_FitMode;

  __declspec(property(get = get_horizontalFit, put = set_horizontalFit)) ::UnityEngine::UI::ContentSizeFitter_FitMode horizontalFit;

  /// @brief Field m_HorizontalFit, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HorizontalFit, put = __cordl_internal_set_m_HorizontalFit)) ::UnityEngine::UI::ContentSizeFitter_FitMode m_HorizontalFit;

  /// @brief Field m_Rect, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Rect, put = __cordl_internal_set_m_Rect)) ::UnityW<::UnityEngine::RectTransform> m_Rect;

  /// @brief Field m_Tracker, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Tracker, put = __cordl_internal_set_m_Tracker)) ::UnityEngine::DrivenRectTransformTracker m_Tracker;

  /// @brief Field m_VerticalFit, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VerticalFit, put = __cordl_internal_set_m_VerticalFit)) ::UnityEngine::UI::ContentSizeFitter_FitMode m_VerticalFit;

  __declspec(property(get = get_rectTransform)) ::UnityW<::UnityEngine::RectTransform> rectTransform;

  __declspec(property(get = get_verticalFit, put = set_verticalFit)) ::UnityEngine::UI::ContentSizeFitter_FitMode verticalFit;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
  constexpr operator ::UnityEngine::UI::ILayoutController*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
  constexpr operator ::UnityEngine::UI::ILayoutSelfController*() noexcept;

  /// @brief Method HandleSelfFittingAlongAxis, addr 0x4ab8e38, size 0xe4, virtual false, abstract: false, final false
  inline void HandleSelfFittingAlongAxis(int32_t axis);

  static inline ::UnityEngine::UI::ContentSizeFitter* New_ctor();

  /// @brief Method OnDisable, addr 0x4ab8db8, size 0x7c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4ab8d9c, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x4ab8e34, size 0x4, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method SetDirty, addr 0x4ab8c00, size 0x84, virtual false, abstract: false, final false
  inline void SetDirty();

  /// @brief Method SetLayoutHorizontal, addr 0x4ab8f34, size 0x24, virtual true, abstract: false, final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical, addr 0x4ab8f58, size 0x8, virtual true, abstract: false, final false
  inline void SetLayoutVertical();

  constexpr ::UnityEngine::UI::ContentSizeFitter_FitMode const& __cordl_internal_get_m_HorizontalFit() const;

  constexpr ::UnityEngine::UI::ContentSizeFitter_FitMode& __cordl_internal_get_m_HorizontalFit();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_Rect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_Rect();

  constexpr ::UnityEngine::DrivenRectTransformTracker const& __cordl_internal_get_m_Tracker() const;

  constexpr ::UnityEngine::DrivenRectTransformTracker& __cordl_internal_get_m_Tracker();

  constexpr ::UnityEngine::UI::ContentSizeFitter_FitMode const& __cordl_internal_get_m_VerticalFit() const;

  constexpr ::UnityEngine::UI::ContentSizeFitter_FitMode& __cordl_internal_get_m_VerticalFit();

  constexpr void __cordl_internal_set_m_HorizontalFit(::UnityEngine::UI::ContentSizeFitter_FitMode value);

  constexpr void __cordl_internal_set_m_Rect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value);

  constexpr void __cordl_internal_set_m_VerticalFit(::UnityEngine::UI::ContentSizeFitter_FitMode value);

  /// @brief Method .ctor, addr 0x4ab8d94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_horizontalFit, addr 0x4ab8b84, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::ContentSizeFitter_FitMode get_horizontalFit();

  /// @brief Method get_rectTransform, addr 0x4ab8d00, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Method get_verticalFit, addr 0x4ab8c84, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::ContentSizeFitter_FitMode get_verticalFit();

  /// @brief Convert to "::UnityEngine::UI::ILayoutController"
  constexpr ::UnityEngine::UI::ILayoutController* i___UnityEngine__UI__ILayoutController() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutSelfController"
  constexpr ::UnityEngine::UI::ILayoutSelfController* i___UnityEngine__UI__ILayoutSelfController() noexcept;

  /// @brief Method set_horizontalFit, addr 0x4ab8b8c, size 0x74, virtual false, abstract: false, final false
  inline void set_horizontalFit(::UnityEngine::UI::ContentSizeFitter_FitMode value);

  /// @brief Method set_verticalFit, addr 0x4ab8c8c, size 0x74, virtual false, abstract: false, final false
  inline void set_verticalFit(::UnityEngine::UI::ContentSizeFitter_FitMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentSizeFitter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentSizeFitter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentSizeFitter(ContentSizeFitter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentSizeFitter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentSizeFitter(ContentSizeFitter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15093 };

  /// @brief Field m_HorizontalFit, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::UI::ContentSizeFitter_FitMode ___m_HorizontalFit;

  /// @brief Field m_VerticalFit, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::UI::ContentSizeFitter_FitMode ___m_VerticalFit;

  /// @brief Field m_Rect, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_Rect;

  /// @brief Field m_Tracker, offset: 0x30, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ___m_Tracker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::ContentSizeFitter, ___m_HorizontalFit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ContentSizeFitter, ___m_VerticalFit) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ContentSizeFitter, ___m_Rect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ContentSizeFitter, ___m_Tracker) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ContentSizeFitter, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ContentSizeFitter_FitMode, "UnityEngine.UI", "ContentSizeFitter/FitMode");
NEED_NO_BOX(::UnityEngine::UI::ContentSizeFitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ContentSizeFitter*, "UnityEngine.UI", "ContentSizeFitter");
