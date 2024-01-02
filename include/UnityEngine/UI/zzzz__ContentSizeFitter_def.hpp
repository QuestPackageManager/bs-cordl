#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentSizeFitter)
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine::UI {
struct __ContentSizeFitter__FitMode;
}
namespace UnityEngine::UI {
class ILayoutSelfController;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::UI {
struct __ContentSizeFitter__FitMode;
}
namespace UnityEngine::UI {
class ContentSizeFitter;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__ContentSizeFitter__FitMode);
MARK_REF_PTR_T(::UnityEngine::UI::ContentSizeFitter);
// Type: ::FitMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13076))
// CS Name: ::ContentSizeFitter::FitMode
struct CORDL_TYPE __ContentSizeFitter__FitMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ContentSizeFitter__FitMode_Unwrapped
  enum struct ____ContentSizeFitter__FitMode_Unwrapped : int32_t {
    __E_Unconstrained = static_cast<int32_t>(0x0),
    __E_MinSize = static_cast<int32_t>(0x1),
    __E_PreferredSize = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ContentSizeFitter__FitMode_Unwrapped() const noexcept {
    return static_cast<____ContentSizeFitter__FitMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ContentSizeFitter__FitMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContentSizeFitter__FitMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unconstrained value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__ContentSizeFitter__FitMode const Unconstrained;

  /// @brief Field MinSize value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__ContentSizeFitter__FitMode const MinSize;

  /// @brief Field PreferredSize value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__ContentSizeFitter__FitMode const PreferredSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ContentSizeFitter__FitMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__ContentSizeFitter__FitMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::ContentSizeFitter
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10278)), TypeDefinitionIndex(TypeDefinitionIndex(13076)), TypeDefinitionIndex(TypeDefinitionIndex(13214))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13077))
// CS Name: ::UnityEngine.UI::ContentSizeFitter*
class CORDL_TYPE ContentSizeFitter : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using FitMode = ::UnityEngine::UI::__ContentSizeFitter__FitMode;

  /// @brief Field m_HorizontalFit, offset 0x18, size 0x4
  __declspec(property(get = __get_m_HorizontalFit, put = __set_m_HorizontalFit))::UnityEngine::UI::__ContentSizeFitter__FitMode m_HorizontalFit;

  /// @brief Field m_VerticalFit, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_VerticalFit, put = __set_m_VerticalFit))::UnityEngine::UI::__ContentSizeFitter__FitMode m_VerticalFit;

  /// @brief Field m_Rect, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Rect, put = __set_m_Rect))::UnityEngine::RectTransform* m_Rect;

  /// @brief Field m_Tracker, offset 0x28, size 0x1
  __declspec(property(get = __get_m_Tracker, put = __set_m_Tracker))::UnityEngine::DrivenRectTransformTracker m_Tracker;

  __declspec(property(get = get_horizontalFit, put = set_horizontalFit))::UnityEngine::UI::__ContentSizeFitter__FitMode horizontalFit;

  __declspec(property(get = get_verticalFit, put = set_verticalFit))::UnityEngine::UI::__ContentSizeFitter__FitMode verticalFit;

  __declspec(property(get = get_rectTransform))::UnityEngine::RectTransform* rectTransform;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
  constexpr operator ::UnityEngine::UI::ILayoutSelfController*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
  constexpr operator ::UnityEngine::UI::ILayoutController*() noexcept;

  constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode& __get_m_HorizontalFit();

  constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode const& __get_m_HorizontalFit() const;

  constexpr void __set_m_HorizontalFit(::UnityEngine::UI::__ContentSizeFitter__FitMode value);

  constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode& __get_m_VerticalFit();

  constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode const& __get_m_VerticalFit() const;

  constexpr void __set_m_VerticalFit(::UnityEngine::UI::__ContentSizeFitter__FitMode value);

  constexpr ::UnityEngine::RectTransform*& __get_m_Rect();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_Rect() const;

  constexpr void __set_m_Rect(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::DrivenRectTransformTracker& __get_m_Tracker();

  constexpr ::UnityEngine::DrivenRectTransformTracker const& __get_m_Tracker() const;

  constexpr void __set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value);

  /// @brief Method get_horizontalFit, addr 0x2d74720, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__ContentSizeFitter__FitMode get_horizontalFit();

  /// @brief Method set_horizontalFit, addr 0x2d74728, size 0x74, virtual false, abstract: false, final false
  inline void set_horizontalFit(::UnityEngine::UI::__ContentSizeFitter__FitMode value);

  /// @brief Method get_verticalFit, addr 0x2d74820, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__ContentSizeFitter__FitMode get_verticalFit();

  /// @brief Method set_verticalFit, addr 0x2d74828, size 0x74, virtual false, abstract: false, final false
  inline void set_verticalFit(::UnityEngine::UI::__ContentSizeFitter__FitMode value);

  /// @brief Method get_rectTransform, addr 0x2d7489c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::RectTransform* get_rectTransform();

  static inline ::UnityEngine::UI::ContentSizeFitter* New_ctor();

  /// @brief Method .ctor, addr 0x2d74930, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method OnEnable, addr 0x2d74938, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2d74954, size 0x7c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x2d749d0, size 0x4, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method HandleSelfFittingAlongAxis, addr 0x2d749d4, size 0xe4, virtual false, abstract: false, final false
  inline void HandleSelfFittingAlongAxis(int32_t axis);

  /// @brief Method SetLayoutHorizontal, addr 0x2d74ad0, size 0x24, virtual true, abstract: false, final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical, addr 0x2d74af4, size 0x8, virtual true, abstract: false, final false
  inline void SetLayoutVertical();

  /// @brief Method SetDirty, addr 0x2d7479c, size 0x84, virtual false, abstract: false, final false
  inline void SetDirty();

  // Ctor Parameters [CppParam { name: "", ty: "ContentSizeFitter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentSizeFitter(ContentSizeFitter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentSizeFitter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentSizeFitter(ContentSizeFitter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentSizeFitter();

public:
  /// @brief Field m_HorizontalFit, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UI::__ContentSizeFitter__FitMode ___m_HorizontalFit;

  /// @brief Field m_VerticalFit, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::UI::__ContentSizeFitter__FitMode ___m_VerticalFit;

  /// @brief Field m_Rect, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_Rect;

  /// @brief Field m_Tracker, offset: 0x28, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ___m_Tracker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ContentSizeFitter, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::ContentSizeFitter, ___m_HorizontalFit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ContentSizeFitter, ___m_VerticalFit) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ContentSizeFitter, ___m_Rect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ContentSizeFitter, ___m_Tracker) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ContentSizeFitter__FitMode, "UnityEngine.UI", "ContentSizeFitter/FitMode");
NEED_NO_BOX(::UnityEngine::UI::ContentSizeFitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ContentSizeFitter*, "UnityEngine.UI", "ContentSizeFitter");
