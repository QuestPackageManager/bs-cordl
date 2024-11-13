#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerOutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerOutEvent)
namespace UnityEngine::UIElements {
class __PointerOutEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerOutEvent;
}
namespace UnityEngine::UIElements {
class __PointerOutEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerOutEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__PointerOutEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::PointerOutEvent::<>c*
class CORDL_TYPE __PointerOutEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__PointerOutEvent____c* __9;

  static inline ::UnityEngine::UIElements::__PointerOutEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49cd7d8, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerOutEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49cd7d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__PointerOutEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__PointerOutEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerOutEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerOutEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerOutEvent____c(__PointerOutEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerOutEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerOutEvent____c(__PointerOutEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5899 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PointerOutEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::PointerOutEvent
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 262, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerOutEvent*
class CORDL_TYPE PointerOutEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerOutEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__PointerOutEvent____c;

  static inline ::UnityEngine::UIElements::PointerOutEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49cd72c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerOutEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerOutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerOutEvent(PointerOutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerOutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerOutEvent(PointerOutEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5900 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerOutEvent, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerOutEvent*, "UnityEngine.UIElements", "PointerOutEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__PointerOutEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PointerOutEvent____c*, "UnityEngine.UIElements", "PointerOutEvent/<>c");
