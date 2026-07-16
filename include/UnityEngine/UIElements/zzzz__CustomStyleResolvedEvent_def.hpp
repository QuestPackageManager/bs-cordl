#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CustomStyleResolvedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(CustomStyleResolvedEvent)
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent___c;
}
namespace UnityEngine::UIElements {
class ICustomStyle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::CustomStyleResolvedEvent*);
MARK_REF_T(::UnityEngine::UIElements::CustomStyleResolvedEvent___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::CustomStyleResolvedEvent*, "UnityEngine.UIElements", "CustomStyleResolvedEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::CustomStyleResolvedEvent___c*, "UnityEngine.UIElements", "CustomStyleResolvedEvent/<>c");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.CustomStyleResolvedEvent/<>c
class CORDL_TYPE CustomStyleResolvedEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::CustomStyleResolvedEvent___c* __9;

  static inline ::UnityEngine::UIElements::CustomStyleResolvedEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x6da2f24, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::CustomStyleResolvedEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x6da2f20, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::CustomStyleResolvedEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::CustomStyleResolvedEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomStyleResolvedEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomStyleResolvedEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomStyleResolvedEvent___c(CustomStyleResolvedEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomStyleResolvedEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomStyleResolvedEvent___c(CustomStyleResolvedEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4560 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::CustomStyleResolvedEvent___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.EventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.CustomStyleResolvedEvent
class CORDL_TYPE CustomStyleResolvedEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::CustomStyleResolvedEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::CustomStyleResolvedEvent___c;

  __declspec(property(get = get_customStyle)) ::UnityEngine::UIElements::ICustomStyle* customStyle;

  static inline ::UnityEngine::UIElements::CustomStyleResolvedEvent* New_ctor();

  /// @brief Method .ctor, addr 0x6da2e58, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_customStyle, addr 0x6da2e44, size 0x14, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4561 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::CustomStyleResolvedEvent) == 0x68, "Size mismatch!");

} // namespace UnityEngine::UIElements
