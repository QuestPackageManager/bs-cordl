#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerEnterEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerEnterEvent)
namespace UnityEngine::UIElements {
class __PointerEnterEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerEnterEvent;
}
namespace UnityEngine::UIElements {
class __PointerEnterEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerEnterEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__PointerEnterEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::PointerEnterEvent::<>c*
class CORDL_TYPE __PointerEnterEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__PointerEnterEvent____c* __9;

  static inline ::UnityEngine::UIElements::__PointerEnterEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49b8ab4, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerEnterEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49b8aac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__PointerEnterEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__PointerEnterEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerEnterEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerEnterEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerEnterEvent____c(__PointerEnterEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerEnterEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerEnterEvent____c(__PointerEnterEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5888 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PointerEnterEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::PointerEnterEvent
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 262, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerEnterEvent*
class CORDL_TYPE PointerEnterEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerEnterEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__PointerEnterEvent____c;

  /// @brief Method Init, addr 0x49b899c, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49b89f0, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerEnterEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49b89fc, size 0x54, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5889 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerEnterEvent, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerEnterEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerEnterEvent*, "UnityEngine.UIElements", "PointerEnterEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__PointerEnterEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PointerEnterEvent____c*, "UnityEngine.UIElements", "PointerEnterEvent/<>c");
