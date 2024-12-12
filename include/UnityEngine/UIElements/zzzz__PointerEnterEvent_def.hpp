#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerEnterEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerEnterEvent)
namespace UnityEngine::UIElements {
class PointerEnterEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerEnterEvent;
}
namespace UnityEngine::UIElements {
class PointerEnterEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerEnterEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerEnterEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerEnterEvent/<>c
class CORDL_TYPE PointerEnterEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::PointerEnterEvent___c* __9;

  static inline ::UnityEngine::UIElements::PointerEnterEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a31adc, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerEnterEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a31ad4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::PointerEnterEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::PointerEnterEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEnterEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerEnterEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerEnterEvent___c(PointerEnterEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerEnterEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerEnterEvent___c(PointerEnterEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5918 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerEnterEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.PointerEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerEnterEvent
class CORDL_TYPE PointerEnterEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerEnterEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::PointerEnterEvent___c;

  /// @brief Method Init, addr 0x4a319c4, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x4a31a18, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerEnterEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a31a24, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEnterEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerEnterEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerEnterEvent(PointerEnterEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerEnterEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerEnterEvent(PointerEnterEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5919 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerEnterEvent, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerEnterEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerEnterEvent*, "UnityEngine.UIElements", "PointerEnterEvent");
NEED_NO_BOX(::UnityEngine::UIElements::PointerEnterEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerEnterEvent___c*, "UnityEngine.UIElements", "PointerEnterEvent/<>c");
