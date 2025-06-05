#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRaycaster.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRRaycaster)
namespace GlobalNamespace {
struct OVRRaycaster_RaycastHit;
}
namespace GlobalNamespace {
class OVRRaycaster___c;
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
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRRaycaster;
}
namespace GlobalNamespace {
class OVRRaycaster___c;
}
namespace GlobalNamespace {
struct OVRRaycaster_RaycastHit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRRaycaster);
MARK_REF_PTR_T(::GlobalNamespace::OVRRaycaster___c);
MARK_VAL_T(::GlobalNamespace::OVRRaycaster_RaycastHit);
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRRaycaster/RaycastHit
struct CORDL_TYPE OVRRaycaster_RaycastHit {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRRaycaster_RaycastHit();

  // Ctor Parameters [CppParam { name: "graphic", ty: "::UnityW<::UnityEngine::UI::Graphic>", modifiers: "", def_value: None }, CppParam { name: "worldPos", ty: "::UnityEngine::Vector3", modifiers:
  // "", def_value: None }, CppParam { name: "fromMouse", ty: "bool", modifiers: "", def_value: None }]
  constexpr OVRRaycaster_RaycastHit(::UnityW<::UnityEngine::UI::Graphic> graphic, ::UnityEngine::Vector3 worldPos, bool fromMouse) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8472 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field graphic, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> graphic;

  /// @brief Field worldPos, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 worldPos;

  /// @brief Field fromMouse, offset: 0x14, size: 0x1, def value: None
  bool fromMouse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRRaycaster_RaycastHit, graphic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRaycaster_RaycastHit, worldPos) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRaycaster_RaycastHit, fromMouse) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRaycaster_RaycastHit, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRRaycaster/<>c
class CORDL_TYPE OVRRaycaster___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::OVRRaycaster___c* __9;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__16_0, put = setStaticF___9__16_0)) ::System::Comparison_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* __9__16_0;

  static inline ::GlobalNamespace::OVRRaycaster___c* New_ctor();

  /// @brief Method <GraphicRaycast>b__16_0, addr 0x40416c4, size 0x50, virtual false, abstract: false, final false
  inline int32_t _GraphicRaycast_b__16_0(::GlobalNamespace::OVRRaycaster_RaycastHit g1, ::GlobalNamespace::OVRRaycaster_RaycastHit g2);

  /// @brief Method .ctor, addr 0x40416bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRRaycaster___c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* getStaticF___9__16_0();

  static inline void setStaticF___9(::GlobalNamespace::OVRRaycaster___c* value);

  static inline void setStaticF___9__16_0(::System::Comparison_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRRaycaster___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRRaycaster___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRRaycaster___c(OVRRaycaster___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRRaycaster___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRRaycaster___c(OVRRaycaster___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8473 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRaycaster___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerEnterHandler, UnityEngine.UI.GraphicRaycaster
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRRaycaster
class CORDL_TYPE OVRRaycaster : public ::UnityEngine::UI::GraphicRaycaster {
public:
  // Declarations
  using RaycastHit = ::GlobalNamespace::OVRRaycaster_RaycastHit;

  using __c = ::GlobalNamespace::OVRRaycaster___c;

  __declspec(property(get = get_canvas)) ::UnityW<::UnityEngine::Canvas> canvas;

  __declspec(property(get = get_eventCamera)) ::UnityW<::UnityEngine::Camera> eventCamera;

  /// @brief Field m_Canvas, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Canvas, put = __cordl_internal_set_m_Canvas)) ::UnityW<::UnityEngine::Canvas> m_Canvas;

  /// @brief Field m_RaycastResults, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RaycastResults,
                      put = __cordl_internal_set_m_RaycastResults)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* m_RaycastResults;

  /// @brief Field pointer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_pointer, put = __cordl_internal_set_pointer)) ::UnityW<::UnityEngine::GameObject> pointer;

  /// @brief Field s_SortedGraphics, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SortedGraphics, put = setStaticF_s_SortedGraphics)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* s_SortedGraphics;

  /// @brief Field sortOrder, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_sortOrder, put = __cordl_internal_set_sortOrder)) int32_t sortOrder;

  __declspec(property(get = get_sortOrderPriority)) int32_t sortOrderPriority;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Method GetScreenPosition, addr 0x4041380, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetScreenPosition(::UnityEngine::EventSystems::RaycastResult raycastResult);

  /// @brief Method GraphicRaycast, addr 0x40406f8, size 0x688, virtual false, abstract: false, final false
  inline void GraphicRaycast(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* results);

  /// @brief Method IsFocussed, addr 0x40413b8, size 0x118, virtual false, abstract: false, final false
  inline bool IsFocussed();

  static inline ::GlobalNamespace::OVRRaycaster* New_ctor();

  /// @brief Method OnPointerEnter, addr 0x40414d0, size 0x104, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* e);

  /// @brief Method RayIntersectsRectTransform, addr 0x40410ac, size 0x2d4, virtual false, abstract: false, final false
  static inline bool RayIntersectsRectTransform(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Ray ray, ::ByRef<::UnityEngine::Vector3> worldPos);

  /// @brief Method Raycast, addr 0x4040d80, size 0x6c, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method Raycast, addr 0x4040030, size 0x6c8, virtual false, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList,
                      ::UnityEngine::Ray ray, bool checkForBlocking);

  /// @brief Method RaycastPointer, addr 0x4040dec, size 0x2c0, virtual false, abstract: false, final false
  inline void RaycastPointer(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method Start, addr 0x403fee0, size 0x150, virtual true, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_m_Canvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_m_Canvas();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* const& __cordl_internal_get_m_RaycastResults() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>*& __cordl_internal_get_m_RaycastResults();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_pointer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_pointer();

  constexpr int32_t const& __cordl_internal_get_sortOrder() const;

  constexpr int32_t& __cordl_internal_get_sortOrder();

  constexpr void __cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set_m_RaycastResults(::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* value);

  constexpr void __cordl_internal_set_pointer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_sortOrder(int32_t value);

  /// @brief Method .ctor, addr 0x403fd88, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* getStaticF_s_SortedGraphics();

  /// @brief Method get_canvas, addr 0x403fe28, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Canvas> get_canvas();

  /// @brief Method get_eventCamera, addr 0x403febc, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_eventCamera();

  /// @brief Method get_sortOrderPriority, addr 0x403fed8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_sortOrderPriority();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  static inline void setStaticF_s_SortedGraphics(::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRRaycaster(OVRRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRRaycaster(OVRRaycaster const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8474 };

  /// @brief Field pointer, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___pointer;

  /// @brief Field sortOrder, offset: 0x50, size: 0x4, def value: None
  int32_t ___sortOrder;

  /// @brief Field m_Canvas, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ___m_Canvas;

  /// @brief Field m_RaycastResults, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRRaycaster_RaycastHit>* ___m_RaycastResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRRaycaster, ___pointer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRaycaster, ___sortOrder) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRaycaster, ___m_Canvas) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRaycaster, ___m_RaycastResults) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRaycaster, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRaycaster*, "", "OVRRaycaster");
NEED_NO_BOX(::GlobalNamespace::OVRRaycaster___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRaycaster___c*, "", "OVRRaycaster/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRaycaster_RaycastHit, "", "OVRRaycaster/RaycastHit");
