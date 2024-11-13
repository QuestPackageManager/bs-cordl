#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/GeometryChangedEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryChangedEvent)
namespace UnityEngine::UIElements {
class __GeometryChangedEvent____c;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class __GeometryChangedEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::GeometryChangedEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__GeometryChangedEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::GeometryChangedEvent::<>c*
class CORDL_TYPE __GeometryChangedEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__GeometryChangedEvent____c* __9;

  static inline ::UnityEngine::UIElements::__GeometryChangedEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49c4744, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::GeometryChangedEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49c473c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__GeometryChangedEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__GeometryChangedEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GeometryChangedEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GeometryChangedEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GeometryChangedEvent____c(__GeometryChangedEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GeometryChangedEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GeometryChangedEvent____c(__GeometryChangedEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5820 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__GeometryChangedEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::GeometryChangedEvent
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::GeometryChangedEvent*
class CORDL_TYPE GeometryChangedEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::GeometryChangedEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__GeometryChangedEvent____c;

  /// @brief Field <layoutPass>k__BackingField, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get__layoutPass_k__BackingField, put = __cordl_internal_set__layoutPass_k__BackingField)) int32_t _layoutPass_k__BackingField;

  /// @brief Field <newRect>k__BackingField, offset 0x94, size 0x10
  __declspec(property(get = __cordl_internal_get__newRect_k__BackingField, put = __cordl_internal_set__newRect_k__BackingField)) ::UnityEngine::Rect _newRect_k__BackingField;

  /// @brief Field <oldRect>k__BackingField, offset 0x84, size 0x10
  __declspec(property(get = __cordl_internal_get__oldRect_k__BackingField, put = __cordl_internal_set__oldRect_k__BackingField)) ::UnityEngine::Rect _oldRect_k__BackingField;

  __declspec(property(get = get_layoutPass, put = set_layoutPass)) int32_t layoutPass;

  __declspec(property(get = get_newRect, put = set_newRect)) ::UnityEngine::Rect newRect;

  __declspec(property(get = get_oldRect, put = set_oldRect)) ::UnityEngine::Rect oldRect;

  /// @brief Method GetPooled, addr 0x49c44e8, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::GeometryChangedEvent* GetPooled(::UnityEngine::Rect oldRect, ::UnityEngine::Rect newRect);

  /// @brief Method Init, addr 0x49c45a8, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49c45f8, size 0x34, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x49c466c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_layoutPass, addr 0x49c465c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_layoutPass();

  /// @brief Method get_newRect, addr 0x49c4644, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_newRect();

  /// @brief Method get_oldRect, addr 0x49c462c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_oldRect();

  /// @brief Method set_layoutPass, addr 0x49c4664, size 0x8, virtual false, abstract: false, final false
  inline void set_layoutPass(int32_t value);

  /// @brief Method set_newRect, addr 0x49c4650, size 0xc, virtual false, abstract: false, final false
  inline void set_newRect(::UnityEngine::Rect value);

  /// @brief Method set_oldRect, addr 0x49c4638, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Field <oldRect>k__BackingField, offset: 0x84, size: 0x10, def value: None
  ::UnityEngine::Rect ____oldRect_k__BackingField;

  /// @brief Field <newRect>k__BackingField, offset: 0x94, size: 0x10, def value: None
  ::UnityEngine::Rect ____newRect_k__BackingField;

  /// @brief Field <layoutPass>k__BackingField, offset: 0xa4, size: 0x4, def value: None
  int32_t ____layoutPass_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5821 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GeometryChangedEvent, 0xa8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GeometryChangedEvent, ____oldRect_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GeometryChangedEvent, ____newRect_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GeometryChangedEvent, ____layoutPass_k__BackingField) == 0xa4, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::GeometryChangedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GeometryChangedEvent*, "UnityEngine.UIElements", "GeometryChangedEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__GeometryChangedEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__GeometryChangedEvent____c*, "UnityEngine.UIElements", "GeometryChangedEvent/<>c");
