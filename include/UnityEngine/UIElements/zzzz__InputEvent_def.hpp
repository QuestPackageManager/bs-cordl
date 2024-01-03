#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InputEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class InputEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::InputEvent);
// Type: UnityEngine.UIElements::InputEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1724 }), TypeDefinitionIndex(TypeDefinitionIndex(7180))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7246))
// CS Name: ::UnityEngine.UIElements::InputEvent*
class CORDL_TYPE InputEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::InputEvent*> {
public:
  // Declarations
  /// @brief Field <previousData>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __get__previousData_k__BackingField, put = __set__previousData_k__BackingField))::StringW _previousData_k__BackingField;

  /// @brief Field <newData>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__newData_k__BackingField, put = __set__newData_k__BackingField))::StringW _newData_k__BackingField;

  __declspec(property(put = set_previousData))::StringW previousData;

  __declspec(property(put = set_newData))::StringW newData;

  constexpr ::StringW& __get__previousData_k__BackingField();

  constexpr ::StringW const& __get__previousData_k__BackingField() const;

  constexpr void __set__previousData_k__BackingField(::StringW value);

  constexpr ::StringW& __get__newData_k__BackingField();

  constexpr ::StringW const& __get__newData_k__BackingField() const;

  constexpr void __set__newData_k__BackingField(::StringW value);

  /// @brief Method set_previousData, addr 0x2e52d3c, size 0x8, virtual false, abstract: false, final false
  inline void set_previousData(::StringW value);

  /// @brief Method set_newData, addr 0x2e52d44, size 0x8, virtual false, abstract: false, final false
  inline void set_newData(::StringW value);

  /// @brief Method Init, addr 0x2e52d4c, size 0x58, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x2e52da4, size 0x10, virtual false, abstract: false, final false
  inline void LocalInit();

  /// @brief Method GetPooled, addr 0x2e52db4, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::InputEvent* GetPooled(::StringW previousData, ::StringW newData);

  static inline ::UnityEngine::UIElements::InputEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2e52e38, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InputEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputEvent(InputEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputEvent(InputEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEvent();

public:
  /// @brief Field <previousData>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::StringW ____previousData_k__BackingField;

  /// @brief Field <newData>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::StringW ____newData_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::InputEvent, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InputEvent, ____previousData_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InputEvent, ____newData_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::InputEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::InputEvent*, "UnityEngine.UIElements", "InputEvent");
