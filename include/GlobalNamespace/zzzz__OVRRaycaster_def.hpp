#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRRaycaster)
namespace GlobalNamespace {
struct __OVRRaycaster__RaycastHit;
}
namespace GlobalNamespace {
class __OVRRaycaster____c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
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
class __OVRRaycaster____c;
}
namespace GlobalNamespace {
struct __OVRRaycaster__RaycastHit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRRaycaster);
MARK_REF_PTR_T(::GlobalNamespace::__OVRRaycaster____c);
MARK_VAL_T(::GlobalNamespace::__OVRRaycaster__RaycastHit);
// Type: ::RaycastHit
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8156))
// CS Name: ::OVRRaycaster::RaycastHit
struct CORDL_TYPE __OVRRaycaster__RaycastHit {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "graphic", ty: "::UnityEngine::UI::Graphic*", modifiers: "", def_value: None }, CppParam { name: "worldPos", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "fromMouse", ty: "bool", modifiers: "", def_value: None }]
  constexpr __OVRRaycaster__RaycastHit(::UnityEngine::UI::Graphic* graphic, ::UnityEngine::Vector3 worldPos, bool fromMouse) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRRaycaster__RaycastHit();

  /// @brief Field graphic, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UI::Graphic* graphic;

  /// @brief Field worldPos, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 worldPos;

  /// @brief Field fromMouse, offset: 0x14, size: 0x1, def value: None
  bool fromMouse;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRRaycaster__RaycastHit, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRRaycaster__RaycastHit, graphic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRRaycaster__RaycastHit, worldPos) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRRaycaster__RaycastHit, fromMouse) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8157))
// CS Name: ::OVRRaycaster::<>c*
class CORDL_TYPE __OVRRaycaster____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__OVRRaycaster____c* __9;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_0, put = setStaticF___9__16_0))::System::Comparison_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* __9__16_0;

  static inline void setStaticF___9(::GlobalNamespace::__OVRRaycaster____c* value);

  static inline ::GlobalNamespace::__OVRRaycaster____c* getStaticF___9();

  static inline void setStaticF___9__16_0(::System::Comparison_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* value);

  static inline ::System::Comparison_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* getStaticF___9__16_0();

  static inline ::GlobalNamespace::__OVRRaycaster____c* New_ctor();

  /// @brief Method .ctor, addr 0x27ba9e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GraphicRaycast>b__16_0, addr 0x27ba9e8, size 0x54, virtual false, abstract: false, final false
  inline int32_t _GraphicRaycast_b__16_0(::GlobalNamespace::__OVRRaycaster__RaycastHit g1, ::GlobalNamespace::__OVRRaycaster__RaycastHit g2);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRRaycaster____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRRaycaster____c(__OVRRaycaster____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRRaycaster____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRRaycaster____c(__OVRRaycaster____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRRaycaster____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRRaycaster____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRRaycaster
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13045))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8158))
// CS Name: ::OVRRaycaster*
class CORDL_TYPE OVRRaycaster : public ::UnityEngine::UI::GraphicRaycaster {
public:
  // Declarations
  using __c = ::GlobalNamespace::__OVRRaycaster____c;

  using RaycastHit = ::GlobalNamespace::__OVRRaycaster__RaycastHit;

  /// @brief Field pointer, offset 0x40, size 0x8
  __declspec(property(get = __get_pointer, put = __set_pointer))::UnityEngine::GameObject* pointer;

  /// @brief Field sortOrder, offset 0x48, size 0x4
  __declspec(property(get = __get_sortOrder, put = __set_sortOrder)) int32_t sortOrder;

  /// @brief Field m_Canvas, offset 0x50, size 0x8
  __declspec(property(get = __get_m_Canvas, put = __set_m_Canvas))::UnityEngine::Canvas* m_Canvas;

  /// @brief Field m_RaycastResults, offset 0x58, size 0x8
  __declspec(property(get = __get_m_RaycastResults, put = __set_m_RaycastResults))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* m_RaycastResults;

  /// @brief Field s_SortedGraphics, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SortedGraphics,
                             put = setStaticF_s_SortedGraphics))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* s_SortedGraphics;

  __declspec(property(get = get_canvas))::UnityEngine::Canvas* canvas;

  __declspec(property(get = get_eventCamera))::UnityEngine::Camera* eventCamera;

  __declspec(property(get = get_sortOrderPriority)) int32_t sortOrderPriority;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  constexpr ::UnityEngine::GameObject*& __get_pointer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_pointer() const;

  constexpr void __set_pointer(::UnityEngine::GameObject* value);

  constexpr int32_t& __get_sortOrder();

  constexpr int32_t const& __get_sortOrder() const;

  constexpr void __set_sortOrder(int32_t value);

  constexpr ::UnityEngine::Canvas*& __get_m_Canvas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& __get_m_Canvas() const;

  constexpr void __set_m_Canvas(::UnityEngine::Canvas* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*& __get_m_RaycastResults();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*> const& __get_m_RaycastResults() const;

  constexpr void __set_m_RaycastResults(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* value);

  static inline void setStaticF_s_SortedGraphics(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* value);

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* getStaticF_s_SortedGraphics();

  static inline ::GlobalNamespace::OVRRaycaster* New_ctor();

  /// @brief Method .ctor, addr 0x27b9194, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canvas, addr 0x27b9234, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Canvas* get_canvas();

  /// @brief Method get_eventCamera, addr 0x27b92c8, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityEngine::Camera* get_eventCamera();

  /// @brief Method get_sortOrderPriority, addr 0x27b92e4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_sortOrderPriority();

  /// @brief Method Start, addr 0x27b92ec, size 0x150, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Raycast, addr 0x27b943c, size 0x6cc, virtual false, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList,
                      ::UnityEngine::Ray ray, bool checkForBlocking);

  /// @brief Method Raycast, addr 0x27ba1a4, size 0x6c, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method RaycastPointer, addr 0x27ba210, size 0x250, virtual false, abstract: false, final false
  inline void RaycastPointer(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method GraphicRaycast, addr 0x27b9b08, size 0x69c, virtual false, abstract: false, final false
  inline void GraphicRaycast(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray, ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* results);

  /// @brief Method GetScreenPosition, addr 0x27ba69c, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetScreenPosition(::UnityEngine::EventSystems::RaycastResult raycastResult);

  /// @brief Method RayIntersectsRectTransform, addr 0x27ba460, size 0x23c, virtual false, abstract: false, final false
  static inline bool RayIntersectsRectTransform(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Ray ray, ByRef<::UnityEngine::Vector3> worldPos);

  /// @brief Method IsFocussed, addr 0x27ba6d4, size 0x118, virtual false, abstract: false, final false
  inline bool IsFocussed();

  /// @brief Method OnPointerEnter, addr 0x27ba7ec, size 0x104, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* e);

  // Ctor Parameters [CppParam { name: "", ty: "OVRRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRRaycaster(OVRRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRRaycaster(OVRRaycaster const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRRaycaster();

public:
  /// @brief Field pointer, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___pointer;

  /// @brief Field sortOrder, offset: 0x48, size: 0x4, def value: None
  int32_t ___sortOrder;

  /// @brief Field m_Canvas, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Canvas* ___m_Canvas;

  /// @brief Field m_RaycastResults, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* ___m_RaycastResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRaycaster, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRaycaster, ___pointer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRaycaster, ___sortOrder) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRaycaster, ___m_Canvas) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRaycaster, ___m_RaycastResults) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRaycaster*, "", "OVRRaycaster");
NEED_NO_BOX(::GlobalNamespace::__OVRRaycaster____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRRaycaster____c*, "", "OVRRaycaster/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRRaycaster__RaycastHit, "", "OVRRaycaster/RaycastHit");
