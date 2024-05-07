#pragma once
// IWYU pragma private; include "UnityEngine/UI/GraphicRaycaster.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_def.hpp"
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
class Graphic;
}
namespace UnityEngine::UI {
struct __GraphicRaycaster__BlockingObjects;
}
namespace UnityEngine::UI {
class __GraphicRaycaster____c;
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
struct __GraphicRaycaster__BlockingObjects;
}
namespace UnityEngine::UI {
class GraphicRaycaster;
}
namespace UnityEngine::UI {
class __GraphicRaycaster____c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__GraphicRaycaster__BlockingObjects);
MARK_REF_PTR_T(::UnityEngine::UI::GraphicRaycaster);
MARK_REF_PTR_T(::UnityEngine::UI::__GraphicRaycaster____c);
// Type: ::BlockingObjects
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::GraphicRaycaster::BlockingObjects
struct CORDL_TYPE __GraphicRaycaster__BlockingObjects {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GraphicRaycaster__BlockingObjects_Unwrapped
  enum struct ____GraphicRaycaster__BlockingObjects_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_TwoD = static_cast<int32_t>(0x1),
    __E_ThreeD = static_cast<int32_t>(0x2),
    __E_All = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GraphicRaycaster__BlockingObjects_Unwrapped() const noexcept {
    return static_cast<____GraphicRaycaster__BlockingObjects_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphicRaycaster__BlockingObjects();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphicRaycaster__BlockingObjects(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects const All;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects const None;

  /// @brief Field ThreeD value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects const ThreeD;

  /// @brief Field TwoD value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects const TwoD;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__GraphicRaycaster__BlockingObjects, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__GraphicRaycaster__BlockingObjects, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::GraphicRaycaster::<>c*
class CORDL_TYPE __GraphicRaycaster____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UI::__GraphicRaycaster____c* __9;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0))::System::Comparison_1<::UnityW<::UnityEngine::UI::Graphic>>* __9__27_0;

  static inline ::UnityEngine::UI::__GraphicRaycaster____c* New_ctor();

  /// @brief Method <Raycast>b__27_0, addr 0x34b57dc, size 0x4c, virtual false, abstract: false, final false
  inline int32_t _Raycast_b__27_0(::UnityEngine::UI::Graphic* g1, ::UnityEngine::UI::Graphic* g2);

  /// @brief Method .ctor, addr 0x34b57d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UI::__GraphicRaycaster____c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityW<::UnityEngine::UI::Graphic>>* getStaticF___9__27_0();

  static inline void setStaticF___9(::UnityEngine::UI::__GraphicRaycaster____c* value);

  static inline void setStaticF___9__27_0(::System::Comparison_1<::UnityW<::UnityEngine::UI::Graphic>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphicRaycaster____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GraphicRaycaster____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GraphicRaycaster____c(__GraphicRaycaster____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GraphicRaycaster____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GraphicRaycaster____c(__GraphicRaycaster____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__GraphicRaycaster____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::GraphicRaycaster
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::GraphicRaycaster*
class CORDL_TYPE GraphicRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  using BlockingObjects = ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects;

  using __c = ::UnityEngine::UI::__GraphicRaycaster____c;

  __declspec(property(get = get_blockingMask, put = set_blockingMask))::UnityEngine::LayerMask blockingMask;

  __declspec(property(get = get_blockingObjects, put = set_blockingObjects))::UnityEngine::UI::__GraphicRaycaster__BlockingObjects blockingObjects;

  __declspec(property(get = get_canvas))::UnityW<::UnityEngine::Canvas> canvas;

  __declspec(property(get = get_eventCamera))::UnityW<::UnityEngine::Camera> eventCamera;

  __declspec(property(get = get_ignoreReversedGraphics, put = set_ignoreReversedGraphics)) bool ignoreReversedGraphics;

  /// @brief Field m_BlockingMask, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlockingMask, put = __cordl_internal_set_m_BlockingMask))::UnityEngine::LayerMask m_BlockingMask;

  /// @brief Field m_BlockingObjects, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlockingObjects, put = __cordl_internal_set_m_BlockingObjects))::UnityEngine::UI::__GraphicRaycaster__BlockingObjects m_BlockingObjects;

  /// @brief Field m_Canvas, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Canvas, put = __cordl_internal_set_m_Canvas))::UnityW<::UnityEngine::Canvas> m_Canvas;

  /// @brief Field m_IgnoreReversedGraphics, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreReversedGraphics, put = __cordl_internal_set_m_IgnoreReversedGraphics)) bool m_IgnoreReversedGraphics;

  /// @brief Field m_RaycastResults, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RaycastResults,
                      put = __cordl_internal_set_m_RaycastResults))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* m_RaycastResults;

  __declspec(property(get = get_renderOrderPriority)) int32_t renderOrderPriority;

  /// @brief Field s_SortedGraphics, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SortedGraphics, put = setStaticF_s_SortedGraphics))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* s_SortedGraphics;

  __declspec(property(get = get_sortOrderPriority)) int32_t sortOrderPriority;

  static inline ::UnityEngine::UI::GraphicRaycaster* New_ctor();

  /// @brief Method Raycast, addr 0x34b50ac, size 0x570, virtual false, abstract: false, final false
  static inline void Raycast(::UnityEngine::Canvas* canvas, ::UnityEngine::Camera* eventCamera, ::UnityEngine::Vector2 pointerPosition,
                             ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::UI::Graphic>>* foundGraphics,
                             ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* results);

  /// @brief Method Raycast, addr 0x34b4374, size 0xc7c, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_BlockingMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_BlockingMask();

  constexpr ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects const& __cordl_internal_get_m_BlockingObjects() const;

  constexpr ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects& __cordl_internal_get_m_BlockingObjects();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_m_Canvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_m_Canvas();

  constexpr bool const& __cordl_internal_get_m_IgnoreReversedGraphics() const;

  constexpr bool& __cordl_internal_get_m_IgnoreReversedGraphics();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>*& __cordl_internal_get_m_RaycastResults();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>*> const& __cordl_internal_get_m_RaycastResults() const;

  constexpr void __cordl_internal_set_m_BlockingMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_BlockingObjects(::UnityEngine::UI::__GraphicRaycaster__BlockingObjects value);

  constexpr void __cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set_m_IgnoreReversedGraphics(bool value);

  constexpr void __cordl_internal_set_m_RaycastResults(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* value);

  /// @brief Method .ctor, addr 0x34b42e0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* getStaticF_s_SortedGraphics();

  /// @brief Method get_blockingMask, addr 0x34b42d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_blockingMask();

  /// @brief Method get_blockingObjects, addr 0x34b42c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects get_blockingObjects();

  /// @brief Method get_canvas, addr 0x34b41c4, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Canvas> get_canvas();

  /// @brief Method get_eventCamera, addr 0x34b561c, size 0xc8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_eventCamera();

  /// @brief Method get_ignoreReversedGraphics, addr 0x34b42ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreReversedGraphics();

  /// @brief Method get_renderOrderPriority, addr 0x34b4258, size 0x54, virtual true, abstract: false, final false
  inline int32_t get_renderOrderPriority();

  /// @brief Method get_sortOrderPriority, addr 0x34b417c, size 0x48, virtual true, abstract: false, final false
  inline int32_t get_sortOrderPriority();

  static inline void setStaticF_s_SortedGraphics(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* value);

  /// @brief Method set_blockingMask, addr 0x34b42d8, size 0x8, virtual false, abstract: false, final false
  inline void set_blockingMask(::UnityEngine::LayerMask value);

  /// @brief Method set_blockingObjects, addr 0x34b42c8, size 0x8, virtual false, abstract: false, final false
  inline void set_blockingObjects(::UnityEngine::UI::__GraphicRaycaster__BlockingObjects value);

  /// @brief Method set_ignoreReversedGraphics, addr 0x34b42b4, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Field m_IgnoreReversedGraphics, offset: 0x20, size: 0x1, def value: None
  bool ___m_IgnoreReversedGraphics;

  /// @brief Field m_BlockingObjects, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects ___m_BlockingObjects;

  /// @brief Field m_BlockingMask, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_BlockingMask;

  /// @brief Field m_Canvas, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ___m_Canvas;

  /// @brief Field m_RaycastResults, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* ___m_RaycastResults;

  /// @brief Field kNoEventMaskSet offset 0xffffffff size 0x4
  static constexpr int32_t kNoEventMaskSet{ static_cast<int32_t>(0xffffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::GraphicRaycaster, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::GraphicRaycaster, ___m_IgnoreReversedGraphics) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GraphicRaycaster, ___m_BlockingObjects) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GraphicRaycaster, ___m_BlockingMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GraphicRaycaster, ___m_Canvas) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GraphicRaycaster, ___m_RaycastResults) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__GraphicRaycaster__BlockingObjects, "UnityEngine.UI", "GraphicRaycaster/BlockingObjects");
NEED_NO_BOX(::UnityEngine::UI::GraphicRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GraphicRaycaster*, "UnityEngine.UI", "GraphicRaycaster");
NEED_NO_BOX(::UnityEngine::UI::__GraphicRaycaster____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__GraphicRaycaster____c*, "UnityEngine.UI", "GraphicRaycaster/<>c");
