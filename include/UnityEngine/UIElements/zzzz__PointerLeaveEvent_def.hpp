#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerLeaveEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerLeaveEvent)
namespace UnityEngine::UIElements {
class __PointerLeaveEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerLeaveEvent;
}
namespace UnityEngine::UIElements {
class __PointerLeaveEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerLeaveEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__PointerLeaveEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::PointerLeaveEvent::<>c*
class CORDL_TYPE __PointerLeaveEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__PointerLeaveEvent____c* __9;

  static inline ::UnityEngine::UIElements::__PointerLeaveEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49b8d00, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerLeaveEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49b8cf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__PointerLeaveEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__PointerLeaveEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerLeaveEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerLeaveEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerLeaveEvent____c(__PointerLeaveEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerLeaveEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerLeaveEvent____c(__PointerLeaveEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5890 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PointerLeaveEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::PointerLeaveEvent
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 262, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerLeaveEvent*
class CORDL_TYPE PointerLeaveEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerLeaveEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__PointerLeaveEvent____c;

  /// @brief Method Init, addr 0x49b8be8, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49b8c3c, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerLeaveEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49b8c48, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerLeaveEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerLeaveEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerLeaveEvent(PointerLeaveEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerLeaveEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerLeaveEvent(PointerLeaveEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5891 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerLeaveEvent, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerLeaveEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerLeaveEvent*, "UnityEngine.UIElements", "PointerLeaveEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__PointerLeaveEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PointerLeaveEvent____c*, "UnityEngine.UIElements", "PointerLeaveEvent/<>c");
