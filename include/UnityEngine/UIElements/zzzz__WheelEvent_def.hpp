#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(WheelEvent)
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class WheelEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::WheelEvent);
// Type: UnityEngine.UIElements::WheelEvent
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 188, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::WheelEvent*
class CORDL_TYPE WheelEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::WheelEvent*> {
public:
  // Declarations
  /// @brief Field <delta>k__BackingField, offset 0xb0, size 0xc
  __declspec(property(get = __cordl_internal_get__delta_k__BackingField, put = __cordl_internal_set__delta_k__BackingField))::UnityEngine::Vector3 _delta_k__BackingField;

  __declspec(property(get = get_delta, put = set_delta))::UnityEngine::Vector3 delta;

  /// @brief Method GetPooled, addr 0x2fb878c, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::WheelEvent* GetPooled(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::IPointerEvent* pointerEvent);

  /// @brief Method GetPooled, addr 0x2fb8710, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::WheelEvent* GetPooled(::UnityEngine::Event* systemEvent);

  /// @brief Method Init, addr 0x2fb8804, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x2fb8854, size 0x60, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::WheelEvent* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__delta_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__delta_k__BackingField();

  constexpr void __cordl_internal_set__delta_k__BackingField(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x2fb88b4, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_delta, addr 0x2fb86f8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_delta();

  /// @brief Method set_delta, addr 0x2fb8704, size 0xc, virtual false, abstract: false, final false
  inline void set_delta(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WheelEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WheelEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WheelEvent(WheelEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WheelEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WheelEvent(WheelEvent const&) = delete;

  /// @brief Field <delta>k__BackingField, offset: 0xb0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____delta_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::WheelEvent, 0xc0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::WheelEvent, ____delta_k__BackingField) == 0xb0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::WheelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::WheelEvent*, "UnityEngine.UIElements", "WheelEvent");
