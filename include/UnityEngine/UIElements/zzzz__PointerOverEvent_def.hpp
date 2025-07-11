#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerOverEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerOverEvent)
namespace UnityEngine::UIElements {
class PointerOverEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerOverEvent;
}
namespace UnityEngine::UIElements {
class PointerOverEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerOverEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerOverEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerOverEvent/<>c
class CORDL_TYPE PointerOverEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::PointerOverEvent___c* __9;

  static inline ::UnityEngine::UIElements::PointerOverEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a34654, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerOverEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a3464c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::PointerOverEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::PointerOverEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerOverEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerOverEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerOverEvent___c(PointerOverEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerOverEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerOverEvent___c(PointerOverEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5927 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerOverEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.PointerEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerOverEvent
class CORDL_TYPE PointerOverEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerOverEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::PointerOverEvent___c;

  static inline ::UnityEngine::UIElements::PointerOverEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a345a8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerOverEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerOverEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerOverEvent(PointerOverEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerOverEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerOverEvent(PointerOverEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5928 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerOverEvent, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerOverEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerOverEvent*, "UnityEngine.UIElements", "PointerOverEvent");
NEED_NO_BOX(::UnityEngine::UIElements::PointerOverEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerOverEvent___c*, "UnityEngine.UIElements", "PointerOverEvent/<>c");
