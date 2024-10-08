#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ExecuteCommandEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__CommandEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ExecuteCommandEvent)
namespace UnityEngine::UIElements {
class __ExecuteCommandEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ExecuteCommandEvent;
}
namespace UnityEngine::UIElements {
class __ExecuteCommandEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ExecuteCommandEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ExecuteCommandEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ExecuteCommandEvent::<>c*
class CORDL_TYPE __ExecuteCommandEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__ExecuteCommandEvent____c* __9;

  static inline ::UnityEngine::UIElements::__ExecuteCommandEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49a9c2c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ExecuteCommandEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49a9c24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__ExecuteCommandEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__ExecuteCommandEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExecuteCommandEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExecuteCommandEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExecuteCommandEvent____c(__ExecuteCommandEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExecuteCommandEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExecuteCommandEvent____c(__ExecuteCommandEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5766 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ExecuteCommandEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ExecuteCommandEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ExecuteCommandEvent*
class CORDL_TYPE ExecuteCommandEvent : public ::UnityEngine::UIElements::CommandEventBase_1<::UnityEngine::UIElements::ExecuteCommandEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__ExecuteCommandEvent____c;

  static inline ::UnityEngine::UIElements::ExecuteCommandEvent* New_ctor();

  /// @brief Method .ctor, addr 0x49a9b80, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecuteCommandEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecuteCommandEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecuteCommandEvent(ExecuteCommandEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecuteCommandEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecuteCommandEvent(ExecuteCommandEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5767 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ExecuteCommandEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ExecuteCommandEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ExecuteCommandEvent*, "UnityEngine.UIElements", "ExecuteCommandEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__ExecuteCommandEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ExecuteCommandEvent____c*, "UnityEngine.UIElements", "ExecuteCommandEvent/<>c");
