#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerOverEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerOverEvent)
namespace UnityEngine::UIElements {
class __PointerOverEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerOverEvent;
}
namespace UnityEngine::UIElements {
class __PointerOverEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerOverEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__PointerOverEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::PointerOverEvent::<>c*
class CORDL_TYPE __PointerOverEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__PointerOverEvent____c* __9;

  static inline ::UnityEngine::UIElements::__PointerOverEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49cd5f8, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerOverEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49cd5f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__PointerOverEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__PointerOverEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerOverEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerOverEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerOverEvent____c(__PointerOverEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerOverEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerOverEvent____c(__PointerOverEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5897 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PointerOverEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::PointerOverEvent
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 262, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerOverEvent*
class CORDL_TYPE PointerOverEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerOverEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__PointerOverEvent____c;

  static inline ::UnityEngine::UIElements::PointerOverEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49cd54c, size 0x48, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5898 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerOverEvent, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerOverEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerOverEvent*, "UnityEngine.UIElements", "PointerOverEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__PointerOverEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PointerOverEvent____c*, "UnityEngine.UIElements", "PointerOverEvent/<>c");
