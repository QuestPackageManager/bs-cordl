#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/InputEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InputEvent)
namespace UnityEngine::UIElements {
class InputEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class InputEvent;
}
namespace UnityEngine::UIElements {
class InputEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::InputEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::InputEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InputEvent/<>c
class CORDL_TYPE InputEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::InputEvent___c* __9;

  static inline ::UnityEngine::UIElements::InputEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a2a3c8, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::InputEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a2a3c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::InputEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::InputEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputEvent___c(InputEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputEvent___c(InputEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5840 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::InputEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.EventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.InputEvent
class CORDL_TYPE InputEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::InputEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::InputEvent___c;

  /// @brief Field <newData>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__newData_k__BackingField, put = __cordl_internal_set__newData_k__BackingField)) ::StringW _newData_k__BackingField;

  /// @brief Field <previousData>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__previousData_k__BackingField, put = __cordl_internal_set__previousData_k__BackingField)) ::StringW _previousData_k__BackingField;

  __declspec(property(put = set_newData)) ::StringW newData;

  __declspec(property(put = set_previousData)) ::StringW previousData;

  /// @brief Method GetPooled, addr 0x4a2a264, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::InputEvent* GetPooled(::StringW previousData, ::StringW newData);

  /// @brief Method Init, addr 0x4a2a1fc, size 0x58, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x4a2a254, size 0x10, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::InputEvent* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__newData_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__newData_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__previousData_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__previousData_k__BackingField();

  constexpr void __cordl_internal_set__newData_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__previousData_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4a2a2e8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_newData, addr 0x4a2a1f4, size 0x8, virtual false, abstract: false, final false
  inline void set_newData(::StringW value);

  /// @brief Method set_previousData, addr 0x4a2a1ec, size 0x8, virtual false, abstract: false, final false
  inline void set_previousData(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputEvent(InputEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputEvent(InputEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5841 };

  /// @brief Field <previousData>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::StringW ____previousData_k__BackingField;

  /// @brief Field <newData>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::StringW ____newData_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::InputEvent, ____previousData_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InputEvent, ____newData_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::InputEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::InputEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::InputEvent*, "UnityEngine.UIElements", "InputEvent");
NEED_NO_BOX(::UnityEngine::UIElements::InputEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::InputEvent___c*, "UnityEngine.UIElements", "InputEvent/<>c");
