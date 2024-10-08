#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ClickEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClickEvent)
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class __ClickEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ClickEvent;
}
namespace UnityEngine::UIElements {
class __ClickEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ClickEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ClickEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ClickEvent::<>c*
class CORDL_TYPE __ClickEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__ClickEvent____c* __9;

  static inline ::UnityEngine::UIElements::__ClickEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49b8868, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ClickEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49b8860, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__ClickEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__ClickEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ClickEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ClickEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ClickEvent____c(__ClickEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ClickEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ClickEvent____c(__ClickEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5886 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ClickEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ClickEvent
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 262, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ClickEvent*
class CORDL_TYPE ClickEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::ClickEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__ClickEvent____c;

  /// @brief Method GetPooled, addr 0x49b8794, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::ClickEvent* GetPooled(::UnityEngine::UIElements::PointerUpEvent* pointerEvent, int32_t clickCount);

  /// @brief Method Init, addr 0x49b86e0, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49b8734, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::ClickEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49b8740, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClickEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClickEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClickEvent(ClickEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClickEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClickEvent(ClickEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5887 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ClickEvent, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ClickEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ClickEvent*, "UnityEngine.UIElements", "ClickEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__ClickEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ClickEvent____c*, "UnityEngine.UIElements", "ClickEvent/<>c");
