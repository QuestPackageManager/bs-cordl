#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/GeometryChangedEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryChangedEvent)
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::GeometryChangedEvent);
// Type: UnityEngine.UIElements::GeometryChangedEvent
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::GeometryChangedEvent*
class CORDL_TYPE GeometryChangedEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::GeometryChangedEvent*> {
public:
  // Declarations
  /// @brief Field <layoutPass>k__BackingField, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__layoutPass_k__BackingField, put = __cordl_internal_set__layoutPass_k__BackingField)) int32_t _layoutPass_k__BackingField;

  /// @brief Field <newRect>k__BackingField, offset 0x8c, size 0x10
  __declspec(property(get = __cordl_internal_get__newRect_k__BackingField, put = __cordl_internal_set__newRect_k__BackingField))::UnityEngine::Rect _newRect_k__BackingField;

  /// @brief Field <oldRect>k__BackingField, offset 0x7c, size 0x10
  __declspec(property(get = __cordl_internal_get__oldRect_k__BackingField, put = __cordl_internal_set__oldRect_k__BackingField))::UnityEngine::Rect _oldRect_k__BackingField;

  __declspec(property(get = get_layoutPass, put = set_layoutPass)) int32_t layoutPass;

  __declspec(property(get = get_newRect, put = set_newRect))::UnityEngine::Rect newRect;

  __declspec(property(get = get_oldRect, put = set_oldRect))::UnityEngine::Rect oldRect;

  /// @brief Method GetPooled, addr 0x35e6e58, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::GeometryChangedEvent* GetPooled(::UnityEngine::Rect oldRect, ::UnityEngine::Rect newRect);

  /// @brief Method Init, addr 0x35e6f18, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x35e6f68, size 0x34, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::GeometryChangedEvent* New_ctor();

  constexpr int32_t const& __cordl_internal_get__layoutPass_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__layoutPass_k__BackingField();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get__newRect_k__BackingField() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get__newRect_k__BackingField();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get__oldRect_k__BackingField() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get__oldRect_k__BackingField();

  constexpr void __cordl_internal_set__layoutPass_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__newRect_k__BackingField(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set__oldRect_k__BackingField(::UnityEngine::Rect value);

  /// @brief Method .ctor, addr 0x35e6fdc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_layoutPass, addr 0x35e6fcc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_layoutPass();

  /// @brief Method get_newRect, addr 0x35e6fb4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_newRect();

  /// @brief Method get_oldRect, addr 0x35e6f9c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_oldRect();

  /// @brief Method set_layoutPass, addr 0x35e6fd4, size 0x8, virtual false, abstract: false, final false
  inline void set_layoutPass(int32_t value);

  /// @brief Method set_newRect, addr 0x35e6fc0, size 0xc, virtual false, abstract: false, final false
  inline void set_newRect(::UnityEngine::Rect value);

  /// @brief Method set_oldRect, addr 0x35e6fa8, size 0xc, virtual false, abstract: false, final false
  inline void set_oldRect(::UnityEngine::Rect value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryChangedEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeometryChangedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeometryChangedEvent(GeometryChangedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeometryChangedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeometryChangedEvent(GeometryChangedEvent const&) = delete;

  /// @brief Field <oldRect>k__BackingField, offset: 0x7c, size: 0x10, def value: None
  ::UnityEngine::Rect ____oldRect_k__BackingField;

  /// @brief Field <newRect>k__BackingField, offset: 0x8c, size: 0x10, def value: None
  ::UnityEngine::Rect ____newRect_k__BackingField;

  /// @brief Field <layoutPass>k__BackingField, offset: 0x9c, size: 0x4, def value: None
  int32_t ____layoutPass_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GeometryChangedEvent, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GeometryChangedEvent, ____oldRect_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GeometryChangedEvent, ____newRect_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GeometryChangedEvent, ____layoutPass_k__BackingField) == 0x9c, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::GeometryChangedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GeometryChangedEvent*, "UnityEngine.UIElements", "GeometryChangedEvent");
