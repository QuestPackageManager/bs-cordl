#pragma once
// IWYU pragma private; include "UnityEngine/UI/AspectRatioFitter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AspectRatioFitter)
namespace UnityEngine::UI {
struct AspectRatioFitter_AspectMode;
}
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine::UI {
class ILayoutSelfController;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
struct AspectRatioFitter_AspectMode;
}
namespace UnityEngine::UI {
class AspectRatioFitter;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::AspectRatioFitter_AspectMode);
MARK_REF_PTR_T(::UnityEngine::UI::AspectRatioFitter);
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.AspectRatioFitter/AspectMode
struct CORDL_TYPE AspectRatioFitter_AspectMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AspectRatioFitter_AspectMode_Unwrapped
  enum struct __AspectRatioFitter_AspectMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_WidthControlsHeight = static_cast<int32_t>(0x1),
    __E_HeightControlsWidth = static_cast<int32_t>(0x2),
    __E_FitInParent = static_cast<int32_t>(0x3),
    __E_EnvelopeParent = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AspectRatioFitter_AspectMode_Unwrapped() const noexcept {
    return static_cast<__AspectRatioFitter_AspectMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AspectRatioFitter_AspectMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AspectRatioFitter_AspectMode(int32_t value__) noexcept;

  /// @brief Field EnvelopeParent value: I32(4)
  static ::UnityEngine::UI::AspectRatioFitter_AspectMode const EnvelopeParent;

  /// @brief Field FitInParent value: I32(3)
  static ::UnityEngine::UI::AspectRatioFitter_AspectMode const FitInParent;

  /// @brief Field HeightControlsWidth value: I32(2)
  static ::UnityEngine::UI::AspectRatioFitter_AspectMode const HeightControlsWidth;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UI::AspectRatioFitter_AspectMode const None;

  /// @brief Field WidthControlsHeight value: I32(1)
  static ::UnityEngine::UI::AspectRatioFitter_AspectMode const WidthControlsHeight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17394 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter_AspectMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::AspectRatioFitter_AspectMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies UnityEngine.DrivenRectTransformTracker, UnityEngine.EventSystems.UIBehaviour, UnityEngine.UI.AspectRatioFitter::AspectMode
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.AspectRatioFitter
class CORDL_TYPE AspectRatioFitter : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using AspectMode = ::UnityEngine::UI::AspectRatioFitter_AspectMode;

  __declspec(property(get = get_aspectMode, put = set_aspectMode)) ::UnityEngine::UI::AspectRatioFitter_AspectMode aspectMode;

  __declspec(property(get = get_aspectRatio, put = set_aspectRatio)) float_t aspectRatio;

  /// @brief Field m_AspectMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AspectMode, put = __cordl_internal_set_m_AspectMode)) ::UnityEngine::UI::AspectRatioFitter_AspectMode m_AspectMode;

  /// @brief Field m_AspectRatio, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AspectRatio, put = __cordl_internal_set_m_AspectRatio)) float_t m_AspectRatio;

  /// @brief Field m_DelayedSetDirty, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DelayedSetDirty, put = __cordl_internal_set_m_DelayedSetDirty)) bool m_DelayedSetDirty;

  /// @brief Field m_DoesParentExist, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DoesParentExist, put = __cordl_internal_set_m_DoesParentExist)) bool m_DoesParentExist;

  /// @brief Field m_Rect, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Rect, put = __cordl_internal_set_m_Rect)) ::UnityW<::UnityEngine::RectTransform> m_Rect;

  /// @brief Field m_Tracker, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Tracker, put = __cordl_internal_set_m_Tracker)) ::UnityEngine::DrivenRectTransformTracker m_Tracker;

  __declspec(property(get = get_rectTransform)) ::UnityW<::UnityEngine::RectTransform> rectTransform;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
  constexpr operator ::UnityEngine::UI::ILayoutController*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
  constexpr operator ::UnityEngine::UI::ILayoutSelfController*() noexcept;

  /// @brief Method DoesParentExists, addr 0x6bc438c, size 0x8, virtual false, abstract: false, final false
  inline bool DoesParentExists();

  /// @brief Method GetParentSize, addr 0x6bc4190, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetParentSize();

  /// @brief Method GetSizeDeltaToProduceSize, addr 0x6bc4290, size 0xf4, virtual false, abstract: false, final false
  inline float_t GetSizeDeltaToProduceSize(float_t size, int32_t axis);

  /// @brief Method IsAspectModeValid, addr 0x6bc39a4, size 0x28, virtual false, abstract: false, final false
  inline bool IsAspectModeValid();

  /// @brief Method IsComponentValidOnObject, addr 0x6bc38d0, size 0xd4, virtual false, abstract: false, final false
  inline bool IsComponentValidOnObject();

  static inline ::UnityEngine::UI::AspectRatioFitter* New_ctor();

  /// @brief Method OnDisable, addr 0x6bc39cc, size 0x68, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x6bc3800, size 0x8c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x6bc3ecc, size 0x4, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method OnTransformParentChanged, addr 0x6bc3e2c, size 0x8c, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method SetDirty, addr 0x6bc36d4, size 0x4, virtual false, abstract: false, final false
  inline void SetDirty();

  /// @brief Method SetLayoutHorizontal, addr 0x6bc4384, size 0x4, virtual true, abstract: false, final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical, addr 0x6bc4388, size 0x4, virtual true, abstract: false, final false
  inline void SetLayoutVertical();

  /// @brief Method Start, addr 0x6bc388c, size 0x44, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x6bc3eb8, size 0x14, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateRect, addr 0x6bc3ed0, size 0x2c0, virtual false, abstract: false, final false
  inline void UpdateRect();

  constexpr ::UnityEngine::UI::AspectRatioFitter_AspectMode const& __cordl_internal_get_m_AspectMode() const;

  constexpr ::UnityEngine::UI::AspectRatioFitter_AspectMode& __cordl_internal_get_m_AspectMode();

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

  constexpr void __cordl_internal_set_m_AspectMode(::UnityEngine::UI::AspectRatioFitter_AspectMode value);

  constexpr void __cordl_internal_set_m_AspectRatio(float_t value);

  constexpr void __cordl_internal_set_m_DelayedSetDirty(bool value);

  constexpr void __cordl_internal_set_m_DoesParentExist(bool value);

  constexpr void __cordl_internal_set_m_Rect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value);

  /// @brief Method .ctor, addr 0x6bc37f4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_aspectMode, addr 0x6bc3654, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::AspectRatioFitter_AspectMode get_aspectMode();

  /// @brief Method get_aspectRatio, addr 0x6bc36d8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_aspectRatio();

  /// @brief Method get_rectTransform, addr 0x6bc3758, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Convert to "::UnityEngine::UI::ILayoutController"
  constexpr ::UnityEngine::UI::ILayoutController* i___UnityEngine__UI__ILayoutController() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutSelfController"
  constexpr ::UnityEngine::UI::ILayoutSelfController* i___UnityEngine__UI__ILayoutSelfController() noexcept;

  /// @brief Method set_aspectMode, addr 0x6bc365c, size 0x78, virtual false, abstract: false, final false
  inline void set_aspectMode(::UnityEngine::UI::AspectRatioFitter_AspectMode value);

  /// @brief Method set_aspectRatio, addr 0x6bc36e0, size 0x78, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17395 };

  /// @brief Field m_AspectMode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::UI::AspectRatioFitter_AspectMode ___m_AspectMode;

  /// @brief Field m_AspectRatio, offset: 0x24, size: 0x4, def value: None
  float_t ___m_AspectRatio;

  /// @brief Field m_Rect, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_Rect;

  /// @brief Field m_DelayedSetDirty, offset: 0x30, size: 0x1, def value: None
  bool ___m_DelayedSetDirty;

  /// @brief Field m_DoesParentExist, offset: 0x31, size: 0x1, def value: None
  bool ___m_DoesParentExist;

  /// @brief Field m_Tracker, offset: 0x32, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ___m_Tracker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_AspectMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_AspectRatio) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_Rect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_DelayedSetDirty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_DoesParentExist) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_Tracker) == 0x32, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::AspectRatioFitter, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::AspectRatioFitter_AspectMode, "UnityEngine.UI", "AspectRatioFitter/AspectMode");
NEED_NO_BOX(::UnityEngine::UI::AspectRatioFitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::AspectRatioFitter*, "UnityEngine.UI", "AspectRatioFitter");
