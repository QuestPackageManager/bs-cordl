#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CustomStyleResolvedEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(CustomStyleResolvedEvent)
namespace UnityEngine::UIElements {
class ICustomStyle;
}
namespace UnityEngine::UIElements {
class __CustomStyleResolvedEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class __CustomStyleResolvedEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::CustomStyleResolvedEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__CustomStyleResolvedEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::CustomStyleResolvedEvent::<>c*
class CORDL_TYPE __CustomStyleResolvedEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__CustomStyleResolvedEvent____c* __9;

  static inline ::UnityEngine::UIElements::__CustomStyleResolvedEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49b95cc, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::CustomStyleResolvedEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49b95c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__CustomStyleResolvedEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__CustomStyleResolvedEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CustomStyleResolvedEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CustomStyleResolvedEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CustomStyleResolvedEvent____c(__CustomStyleResolvedEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CustomStyleResolvedEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CustomStyleResolvedEvent____c(__CustomStyleResolvedEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5898 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__CustomStyleResolvedEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::CustomStyleResolvedEvent
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::CustomStyleResolvedEvent*
class CORDL_TYPE CustomStyleResolvedEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::CustomStyleResolvedEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__CustomStyleResolvedEvent____c;

  __declspec(property(get = get_customStyle)) ::UnityEngine::UIElements::ICustomStyle* customStyle;

  static inline ::UnityEngine::UIElements::CustomStyleResolvedEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49b94fc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_customStyle, addr 0x49b9474, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ICustomStyle* get_customStyle();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomStyleResolvedEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomStyleResolvedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomStyleResolvedEvent(CustomStyleResolvedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomStyleResolvedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomStyleResolvedEvent(CustomStyleResolvedEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5899 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CustomStyleResolvedEvent, 0x88>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::CustomStyleResolvedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CustomStyleResolvedEvent*, "UnityEngine.UIElements", "CustomStyleResolvedEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__CustomStyleResolvedEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__CustomStyleResolvedEvent____c*, "UnityEngine.UIElements", "CustomStyleResolvedEvent/<>c");
