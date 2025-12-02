#pragma once
// IWYU pragma private; include "UnityEngine/UI/GraphicRaycaster.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicRaycaster)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::UI {
struct GraphicRaycaster_BlockingObjects;
}
namespace UnityEngine::UI {
class GraphicRaycaster___c;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
struct GraphicRaycaster_BlockingObjects;
}
namespace UnityEngine::UI {
class GraphicRaycaster;
}
namespace UnityEngine::UI {
class GraphicRaycaster___c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::GraphicRaycaster_BlockingObjects);
MARK_REF_PTR_T(::UnityEngine::UI::GraphicRaycaster);
MARK_REF_PTR_T(::UnityEngine::UI::GraphicRaycaster___c);
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.GraphicRaycaster/BlockingObjects
struct CORDL_TYPE GraphicRaycaster_BlockingObjects {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GraphicRaycaster_BlockingObjects_Unwrapped
  enum struct __GraphicRaycaster_BlockingObjects_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_TwoD = static_cast<int32_t>(0x1),
    __E_ThreeD = static_cast<int32_t>(0x2),
    __E_All = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GraphicRaycaster_BlockingObjects_Unwrapped() const noexcept {
    return static_cast<__GraphicRaycaster_BlockingObjects_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicRaycaster_BlockingObjects();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GraphicRaycaster_BlockingObjects(int32_t value__) noexcept;

  /// @brief Field All value: I32(3)
  static ::UnityEngine::UI::GraphicRaycaster_BlockingObjects const All;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UI::GraphicRaycaster_BlockingObjects const None;

  /// @brief Field ThreeD value: I32(2)
  static ::UnityEngine::UI::GraphicRaycaster_BlockingObjects const ThreeD;

  /// @brief Field TwoD value: I32(1)
  static ::UnityEngine::UI::GraphicRaycaster_BlockingObjects const TwoD;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17367 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::GraphicRaycaster_BlockingObjects, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::GraphicRaycaster_BlockingObjects, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.GraphicRaycaster/<>c
class CORDL_TYPE GraphicRaycaster___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UI::GraphicRaycaster___c* __9;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0)) ::System::Comparison_1<::UnityW<::UnityEngine::UI::Graphic>>* __9__27_0;

  static inline ::UnityEngine::UI::GraphicRaycaster___c* New_ctor();

  /// @brief Method <Raycast>b__27_0, addr 0x69f4348, size 0x44, virtual false, abstract: false, final false
  inline int32_t _Raycast_b__27_0(::UnityEngine::UI::Graphic* g1, ::UnityEngine::UI::Graphic* g2);

  /// @brief Method .ctor, addr 0x69f4344, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UI::GraphicRaycaster___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityW<::UnityEngine::UI::Graphic>>* getStaticF___9__27_0();

  static inline void setStaticF___9(::UnityEngine::UI::GraphicRaycaster___c* value);

  static inline void setStaticF___9__27_0(::System::Comparison_1<::UnityW<::UnityEngine::UI::Graphic>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicRaycaster___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicRaycaster___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicRaycaster___c(GraphicRaycaster___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicRaycaster___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicRaycaster___c(GraphicRaycaster___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17368 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::GraphicRaycaster___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies UnityEngine.EventSystems.BaseRaycaster, UnityEngine.LayerMask, UnityEngine.UI.GraphicRaycaster::BlockingObjects
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.GraphicRaycaster
class CORDL_TYPE GraphicRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  using BlockingObjects = ::UnityEngine::UI::GraphicRaycaster_BlockingObjects;

  using __c = ::UnityEngine::UI::GraphicRaycaster___c;

  __declspec(property(get = get_blockingMask, put = set_blockingMask)) ::UnityEngine::LayerMask blockingMask;

  __declspec(property(get = get_blockingObjects, put = set_blockingObjects)) ::UnityEngine::UI::GraphicRaycaster_BlockingObjects blockingObjects;

  __declspec(property(get = get_canvas)) ::UnityW<::UnityEngine::Canvas> canvas;

  __declspec(property(get = get_eventCamera)) ::UnityW<::UnityEngine::Camera> eventCamera;

  __declspec(property(get = get_ignoreReversedGraphics, put = set_ignoreReversedGraphics)) bool ignoreReversedGraphics;

  /// @brief Field m_BlockingMask, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlockingMask, put = __cordl_internal_set_m_BlockingMask)) ::UnityEngine::LayerMask m_BlockingMask;

  /// @brief Field m_BlockingObjects, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlockingObjects, put = __cordl_internal_set_m_BlockingObjects)) ::UnityEngine::UI::GraphicRaycaster_BlockingObjects m_BlockingObjects;

  /// @brief Field m_Canvas, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Canvas, put = __cordl_internal_set_m_Canvas)) ::UnityW<::UnityEngine::Canvas> m_Canvas;

  /// @brief Field m_IgnoreReversedGraphics, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreReversedGraphics, put = __cordl_internal_set_m_IgnoreReversedGraphics)) bool m_IgnoreReversedGraphics;

  /// @brief Field m_RaycastResults, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RaycastResults,
                      put = __cordl_internal_set_m_RaycastResults)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* m_RaycastResults;

  __declspec(property(get = get_renderOrderPriority)) int32_t renderOrderPriority;

  /// @brief Field s_SortedGraphics, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SortedGraphics, put = setStaticF_s_SortedGraphics)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* s_SortedGraphics;

  __declspec(property(get = get_sortOrderPriority)) int32_t sortOrderPriority;

  static inline ::UnityEngine::UI::GraphicRaycaster* New_ctor();

  /// @brief Method Raycast, addr 0x69f3bd0, size 0x5c4, virtual false, abstract: false, final false
  static inline void Raycast(::UnityEngine::Canvas* canvas, ::UnityEngine::Camera* eventCamera, ::UnityEngine::Vector2 pointerPosition,
                             ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::UI::Graphic>>* foundGraphics,
                             ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* results);

  /// @brief Method Raycast, addr 0x69f2f5c, size 0xbb0, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_BlockingMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_BlockingMask();

  constexpr ::UnityEngine::UI::GraphicRaycaster_BlockingObjects const& __cordl_internal_get_m_BlockingObjects() const;

  constexpr ::UnityEngine::UI::GraphicRaycaster_BlockingObjects& __cordl_internal_get_m_BlockingObjects();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_m_Canvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_m_Canvas();

  constexpr bool const& __cordl_internal_get_m_IgnoreReversedGraphics() const;

  constexpr bool& __cordl_internal_get_m_IgnoreReversedGraphics();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* const& __cordl_internal_get_m_RaycastResults() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>*& __cordl_internal_get_m_RaycastResults();

  constexpr void __cordl_internal_set_m_BlockingMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_BlockingObjects(::UnityEngine::UI::GraphicRaycaster_BlockingObjects value);

  constexpr void __cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set_m_IgnoreReversedGraphics(bool value);

  constexpr void __cordl_internal_set_m_RaycastResults(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* value);

  /// @brief Method .ctor, addr 0x69f2ed4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* getStaticF_s_SortedGraphics();

  /// @brief Method get_blockingMask, addr 0x69f2ec4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_blockingMask();

  /// @brief Method get_blockingObjects, addr 0x69f2eb4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::GraphicRaycaster_BlockingObjects get_blockingObjects();

  /// @brief Method get_canvas, addr 0x69f2db8, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Canvas> get_canvas();

  /// @brief Method get_eventCamera, addr 0x69f4194, size 0xcc, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_eventCamera();

  /// @brief Method get_ignoreReversedGraphics, addr 0x69f2ea4, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreReversedGraphics();

  /// @brief Method get_renderOrderPriority, addr 0x69f2e54, size 0x50, virtual true, abstract: false, final false
  inline int32_t get_renderOrderPriority();

  /// @brief Method get_sortOrderPriority, addr 0x69f2d74, size 0x44, virtual true, abstract: false, final false
  inline int32_t get_sortOrderPriority();

  static inline void setStaticF_s_SortedGraphics(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* value);

  /// @brief Method set_blockingMask, addr 0x69f2ecc, size 0x8, virtual false, abstract: false, final false
  inline void set_blockingMask(::UnityEngine::LayerMask value);

  /// @brief Method set_blockingObjects, addr 0x69f2ebc, size 0x8, virtual false, abstract: false, final false
  inline void set_blockingObjects(::UnityEngine::UI::GraphicRaycaster_BlockingObjects value);

  /// @brief Method set_ignoreReversedGraphics, addr 0x69f2eac, size 0x8, virtual false, abstract: false, final false
  inline void set_ignoreReversedGraphics(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicRaycaster(GraphicRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicRaycaster(GraphicRaycaster const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17369 };

  /// @brief Field kNoEventMaskSet offset 0xffffffff size 0x4
  static constexpr int32_t kNoEventMaskSet{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field m_IgnoreReversedGraphics, offset: 0x28, size: 0x1, def value: None
  bool ___m_IgnoreReversedGraphics;

  /// @brief Field m_BlockingObjects, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::UI::GraphicRaycaster_BlockingObjects ___m_BlockingObjects;

  /// @brief Field m_BlockingMask, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_BlockingMask;

  /// @brief Field m_Canvas, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ___m_Canvas;

  /// @brief Field m_RaycastResults, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* ___m_RaycastResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::GraphicRaycaster, ___m_IgnoreReversedGraphics) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GraphicRaycaster, ___m_BlockingObjects) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GraphicRaycaster, ___m_BlockingMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GraphicRaycaster, ___m_Canvas) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GraphicRaycaster, ___m_RaycastResults) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::GraphicRaycaster, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GraphicRaycaster_BlockingObjects, "UnityEngine.UI", "GraphicRaycaster/BlockingObjects");
NEED_NO_BOX(::UnityEngine::UI::GraphicRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GraphicRaycaster*, "UnityEngine.UI", "GraphicRaycaster");
NEED_NO_BOX(::UnityEngine::UI::GraphicRaycaster___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GraphicRaycaster___c*, "UnityEngine.UI", "GraphicRaycaster/<>c");
