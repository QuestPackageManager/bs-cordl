#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerDownEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerDownEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class __PointerDownEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class __PointerDownEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerDownEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__PointerDownEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::PointerDownEvent::<>c*
class CORDL_TYPE __PointerDownEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__PointerDownEvent____c* __9;

  static inline ::UnityEngine::UIElements::__PointerDownEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49cb284, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerDownEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49cb27c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__PointerDownEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__PointerDownEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerDownEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerDownEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerDownEvent____c(__PointerDownEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerDownEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerDownEvent____c(__PointerDownEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5881 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PointerDownEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::PointerDownEvent
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 262, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerDownEvent*
class CORDL_TYPE PointerDownEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerDownEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__PointerDownEvent____c;

  /// @brief Method Init, addr 0x49cadf8, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49cae48, size 0x104, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerDownEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x49caf9c, size 0x284, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method .ctor, addr 0x49caf4c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerDownEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerDownEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerDownEvent(PointerDownEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerDownEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerDownEvent(PointerDownEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5882 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerDownEvent, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerDownEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDownEvent*, "UnityEngine.UIElements", "PointerDownEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__PointerDownEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PointerDownEvent____c*, "UnityEngine.UIElements", "PointerDownEvent/<>c");
