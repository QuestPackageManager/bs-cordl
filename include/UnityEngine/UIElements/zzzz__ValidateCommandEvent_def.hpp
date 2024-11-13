#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ValidateCommandEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__CommandEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ValidateCommandEvent)
namespace UnityEngine::UIElements {
class __ValidateCommandEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ValidateCommandEvent;
}
namespace UnityEngine::UIElements {
class __ValidateCommandEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ValidateCommandEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ValidateCommandEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ValidateCommandEvent::<>c*
class CORDL_TYPE __ValidateCommandEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__ValidateCommandEvent____c* __9;

  static inline ::UnityEngine::UIElements::__ValidateCommandEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49be164, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ValidateCommandEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49be15c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__ValidateCommandEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__ValidateCommandEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ValidateCommandEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ValidateCommandEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ValidateCommandEvent____c(__ValidateCommandEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ValidateCommandEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ValidateCommandEvent____c(__ValidateCommandEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5769 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ValidateCommandEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ValidateCommandEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ValidateCommandEvent*
class CORDL_TYPE ValidateCommandEvent : public ::UnityEngine::UIElements::CommandEventBase_1<::UnityEngine::UIElements::ValidateCommandEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__ValidateCommandEvent____c;

  static inline ::UnityEngine::UIElements::ValidateCommandEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49be0b8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidateCommandEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidateCommandEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidateCommandEvent(ValidateCommandEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidateCommandEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidateCommandEvent(ValidateCommandEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5770 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ValidateCommandEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ValidateCommandEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ValidateCommandEvent*, "UnityEngine.UIElements", "ValidateCommandEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__ValidateCommandEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ValidateCommandEvent____c*, "UnityEngine.UIElements", "ValidateCommandEvent/<>c");
