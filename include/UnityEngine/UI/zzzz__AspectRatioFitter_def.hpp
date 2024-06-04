#pragma once
// IWYU pragma private; include "UnityEngine/UI/AspectRatioFitter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/UI/zzzz__AspectRatioFitter_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AspectRatioFitter)
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine::UI {
class ILayoutSelfController;
}
namespace UnityEngine::UI {
struct __AspectRatioFitter__AspectMode;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
struct __AspectRatioFitter__AspectMode;
}
namespace UnityEngine::UI {
class AspectRatioFitter;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__AspectRatioFitter__AspectMode);
MARK_REF_PTR_T(::UnityEngine::UI::AspectRatioFitter);
// Type: ::AspectMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::AspectRatioFitter::AspectMode
struct CORDL_TYPE __AspectRatioFitter__AspectMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AspectRatioFitter__AspectMode_Unwrapped
  enum struct ____AspectRatioFitter__AspectMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_WidthControlsHeight = static_cast<int32_t>(0x1),
    __E_HeightControlsWidth = static_cast<int32_t>(0x2),
    __E_FitInParent = static_cast<int32_t>(0x3),
    __E_EnvelopeParent = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AspectRatioFitter__AspectMode_Unwrapped() const noexcept {
    return static_cast<____AspectRatioFitter__AspectMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AspectRatioFitter__AspectMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AspectRatioFitter__AspectMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field EnvelopeParent value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UI::__AspectRatioFitter__AspectMode const EnvelopeParent;

  /// @brief Field FitInParent value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__AspectRatioFitter__AspectMode const FitInParent;

  /// @brief Field HeightControlsWidth value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__AspectRatioFitter__AspectMode const HeightControlsWidth;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__AspectRatioFitter__AspectMode const None;

  /// @brief Field WidthControlsHeight value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__AspectRatioFitter__AspectMode const WidthControlsHeight;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__AspectRatioFitter__AspectMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__AspectRatioFitter__AspectMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::AspectRatioFitter
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 43, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::AspectRatioFitter*
class CORDL_TYPE AspectRatioFitter : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using AspectMode = ::UnityEngine::UI::__AspectRatioFitter__AspectMode;

  __declspec(property(get = get_aspectMode, put = set_aspectMode))::UnityEngine::UI::__AspectRatioFitter__AspectMode aspectMode;

  __declspec(property(get = get_aspectRatio, put = set_aspectRatio)) float_t aspectRatio;

  /// @brief Field m_AspectMode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AspectMode, put = __cordl_internal_set_m_AspectMode))::UnityEngine::UI::__AspectRatioFitter__AspectMode m_AspectMode;

  /// @brief Field m_AspectRatio, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AspectRatio, put = __cordl_internal_set_m_AspectRatio)) float_t m_AspectRatio;

  /// @brief Field m_DelayedSetDirty, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DelayedSetDirty, put = __cordl_internal_set_m_DelayedSetDirty)) bool m_DelayedSetDirty;

  /// @brief Field m_DoesParentExist, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DoesParentExist, put = __cordl_internal_set_m_DoesParentExist)) bool m_DoesParentExist;

  /// @brief Field m_Rect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Rect, put = __cordl_internal_set_m_Rect))::UnityW<::UnityEngine::RectTransform> m_Rect;

  /// @brief Field m_Tracker, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Tracker, put = __cordl_internal_set_m_Tracker))::UnityEngine::DrivenRectTransformTracker m_Tracker;

  __declspec(property(get = get_rectTransform))::UnityW<::UnityEngine::RectTransform> rectTransform;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
  constexpr operator ::UnityEngine::UI::ILayoutController*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
  constexpr operator ::UnityEngine::UI::ILayoutSelfController*() noexcept;

  /// @brief Method DoesParentExists, addr 0x34f2378, size 0x8, virtual false, abstract: false, final false
  inline bool DoesParentExists();

  /// @brief Method GetParentSize, addr 0x34f2168, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetParentSize();

  /// @brief Method GetSizeDeltaToProduceSize, addr 0x34f2278, size 0xf8, virtual false, abstract: false, final false
  inline float_t GetSizeDeltaToProduceSize(float_t size, int32_t axis);

  /// @brief Method IsAspectModeValid, addr 0x34f1924, size 0x28, virtual false, abstract: false, final false
  inline bool IsAspectModeValid();

  /// @brief Method IsComponentValidOnObject, addr 0x34f1858, size 0xcc, virtual false, abstract: false, final false
  inline bool IsComponentValidOnObject();

  static inline ::UnityEngine::UI::AspectRatioFitter* New_ctor();

  /// @brief Method OnDisable, addr 0x34f194c, size 0x7c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x34f1770, size 0x98, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x34f1e60, size 0x4, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method OnTransformParentChanged, addr 0x34f1db4, size 0x98, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method SetDirty, addr 0x34f164c, size 0x4, virtual false, abstract: false, final false
  inline void SetDirty();

  /// @brief Method SetLayoutHorizontal, addr 0x34f2370, size 0x4, virtual true, abstract: false, final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical, addr 0x34f2374, size 0x4, virtual true, abstract: false, final false
  inline void SetLayoutVertical();

  /// @brief Method Start, addr 0x34f1808, size 0x50, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x34f1e4c, size 0x14, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateRect, addr 0x34f1e64, size 0x304, virtual false, abstract: false, final false
  inline void UpdateRect();

  constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode const& __cordl_internal_get_m_AspectMode() const;

  constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode& __cordl_internal_get_m_AspectMode();

  constexpr float_t const& __cordl_internal_get_m_AspectRatio() const;

  constexpr float_t& __cordl_internal_get_m_AspectRatio();

  constexpr bool const& __cordl_internal_get_m_DelayedSetDirty() const;

  constexpr bool& __cordl_internal_get_m_DelayedSetDirty();

  constexpr bool const& __cordl_internal_get_m_DoesParentExist() const;

  constexpr bool& __cordl_internal_get_m_DoesParentExist();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_Rect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_Rect();

  constexpr ::UnityEngine::DrivenRectTransformTracker const& __cordl_internal_get_m_Tracker() const;

  constexpr ::UnityEngine::DrivenRectTransformTracker& __cordl_internal_get_m_Tracker();

  constexpr void __cordl_internal_set_m_AspectMode(::UnityEngine::UI::__AspectRatioFitter__AspectMode value);

  constexpr void __cordl_internal_set_m_AspectRatio(float_t value);

  constexpr void __cordl_internal_set_m_DelayedSetDirty(bool value);

  constexpr void __cordl_internal_set_m_DoesParentExist(bool value);

  constexpr void __cordl_internal_set_m_Rect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value);

  /// @brief Method .ctor, addr 0x34f1760, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_aspectMode, addr 0x34f15d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__AspectRatioFitter__AspectMode get_aspectMode();

  /// @brief Method get_aspectRatio, addr 0x34f1650, size 0x8, virtual false, abstract: false, final false
  inline float_t get_aspectRatio();

  /// @brief Method get_rectTransform, addr 0x34f16cc, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Convert to "::UnityEngine::UI::ILayoutController"
  constexpr ::UnityEngine::UI::ILayoutController* i___UnityEngine__UI__ILayoutController() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutSelfController"
  constexpr ::UnityEngine::UI::ILayoutSelfController* i___UnityEngine__UI__ILayoutSelfController() noexcept;

  /// @brief Method set_aspectMode, addr 0x34f15d8, size 0x74, virtual false, abstract: false, final false
  inline void set_aspectMode(::UnityEngine::UI::__AspectRatioFitter__AspectMode value);

  /// @brief Method set_aspectRatio, addr 0x34f1658, size 0x74, virtual false, abstract: false, final false
  inline void set_aspectRatio(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspectRatioFitter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspectRatioFitter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspectRatioFitter(AspectRatioFitter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspectRatioFitter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspectRatioFitter(AspectRatioFitter const&) = delete;

  /// @brief Field m_AspectMode, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UI::__AspectRatioFitter__AspectMode ___m_AspectMode;

  /// @brief Field m_AspectRatio, offset: 0x1c, size: 0x4, def value: None
  float_t ___m_AspectRatio;

  /// @brief Field m_Rect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_Rect;

  /// @brief Field m_DelayedSetDirty, offset: 0x28, size: 0x1, def value: None
  bool ___m_DelayedSetDirty;

  /// @brief Field m_DoesParentExist, offset: 0x29, size: 0x1, def value: None
  bool ___m_DoesParentExist;

  /// @brief Field m_Tracker, offset: 0x2a, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ___m_Tracker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::AspectRatioFitter, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_AspectMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_AspectRatio) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_Rect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_DelayedSetDirty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_DoesParentExist) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_Tracker) == 0x2a, "Offset mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__AspectRatioFitter__AspectMode, "UnityEngine.UI", "AspectRatioFitter/AspectMode");
NEED_NO_BOX(::UnityEngine::UI::AspectRatioFitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::AspectRatioFitter*, "UnityEngine.UI", "AspectRatioFitter");
