#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/PointerOutLinkTagEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PointerOutLinkTagEvent)
namespace UnityEngine::UIElements::Experimental {
class __PointerOutLinkTagEvent____c;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class PointerOutLinkTagEvent;
}
namespace UnityEngine::UIElements::Experimental {
class __PointerOutLinkTagEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::PointerOutLinkTagEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::__PointerOutLinkTagEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: ::PointerOutLinkTagEvent::<>c*
class CORDL_TYPE __PointerOutLinkTagEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::Experimental::__PointerOutLinkTagEvent____c* __9;

  static inline ::UnityEngine::UIElements::Experimental::__PointerOutLinkTagEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x497a830, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::PointerOutLinkTagEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x497a828, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Experimental::__PointerOutLinkTagEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::Experimental::__PointerOutLinkTagEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerOutLinkTagEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerOutLinkTagEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerOutLinkTagEvent____c(__PointerOutLinkTagEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerOutLinkTagEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerOutLinkTagEvent____c(__PointerOutLinkTagEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6457 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::__PointerOutLinkTagEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Experimental
// Type: UnityEngine.UIElements.Experimental::PointerOutLinkTagEvent
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 262, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.Experimental::PointerOutLinkTagEvent*
class CORDL_TYPE PointerOutLinkTagEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::Experimental::PointerOutLinkTagEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::Experimental::__PointerOutLinkTagEvent____c;

  /// @brief Method GetPooled, addr 0x497a730, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Experimental::PointerOutLinkTagEvent* GetPooled(::UnityEngine::UIElements::IPointerEvent* evt, ::StringW linkID);

  /// @brief Method Init, addr 0x497a6d0, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x497a724, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::Experimental::PointerOutLinkTagEvent* New_ctor();

  /// @brief Method .ctor, addr 0x497a778, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerOutLinkTagEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerOutLinkTagEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerOutLinkTagEvent(PointerOutLinkTagEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerOutLinkTagEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerOutLinkTagEvent(PointerOutLinkTagEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::PointerOutLinkTagEvent, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Experimental
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::PointerOutLinkTagEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::PointerOutLinkTagEvent*, "UnityEngine.UIElements.Experimental", "PointerOutLinkTagEvent");
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::__PointerOutLinkTagEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::__PointerOutLinkTagEvent____c*, "UnityEngine.UIElements.Experimental", "PointerOutLinkTagEvent/<>c");
