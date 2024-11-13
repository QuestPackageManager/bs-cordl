#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IMGUIEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(IMGUIEvent)
namespace UnityEngine::UIElements {
class __IMGUIEvent____c;
}
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IMGUIEvent;
}
namespace UnityEngine::UIElements {
class __IMGUIEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IMGUIEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__IMGUIEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::IMGUIEvent::<>c*
class CORDL_TYPE __IMGUIEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__IMGUIEvent____c* __9;

  static inline ::UnityEngine::UIElements::__IMGUIEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49ced44, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IMGUIEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49ced3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__IMGUIEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__IMGUIEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IMGUIEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IMGUIEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IMGUIEvent____c(__IMGUIEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IMGUIEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IMGUIEvent____c(__IMGUIEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5918 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__IMGUIEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::IMGUIEvent
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IMGUIEvent*
class CORDL_TYPE IMGUIEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::IMGUIEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__IMGUIEvent____c;

  /// @brief Method GetPooled, addr 0x49ceb84, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IMGUIEvent* GetPooled(::UnityEngine::Event* systemEvent);

  /// @brief Method Init, addr 0x49cec08, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49cec5c, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::IMGUIEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49cec68, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMGUIEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IMGUIEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMGUIEvent(IMGUIEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMGUIEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMGUIEvent(IMGUIEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5919 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IMGUIEvent, 0x88>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IMGUIEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIEvent*, "UnityEngine.UIElements", "IMGUIEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__IMGUIEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__IMGUIEvent____c*, "UnityEngine.UIElements", "IMGUIEvent/<>c");
