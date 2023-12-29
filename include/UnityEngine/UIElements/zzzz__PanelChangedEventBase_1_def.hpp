#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PanelChangedEventBase_1)
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class PanelChangedEventBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::PanelChangedEventBase_1);
// Type: UnityEngine.UIElements::PanelChangedEventBase`1
// SizeInfo { instance_size: 144, native_size: 144, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7266), inst: 1649 }), TypeDefinitionIndex(TypeDefinitionIndex(7266))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7329))
// CS Name: ::UnityEngine.UIElements::PanelChangedEventBase`1<T>*
class CORDL_TYPE PanelChangedEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
  // Declarations
  /// @brief Field <originPanel>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __get__originPanel_k__BackingField, put = __set__originPanel_k__BackingField))::UnityEngine::UIElements::IPanel* _originPanel_k__BackingField;

  /// @brief Field <destinationPanel>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__destinationPanel_k__BackingField, put = __set__destinationPanel_k__BackingField))::UnityEngine::UIElements::IPanel* _destinationPanel_k__BackingField;

  __declspec(property(get = get_originPanel, put = set_originPanel))::UnityEngine::UIElements::IPanel* originPanel;

  __declspec(property(get = get_destinationPanel, put = set_destinationPanel))::UnityEngine::UIElements::IPanel* destinationPanel;

  constexpr ::UnityEngine::UIElements::IPanel*& __get__originPanel_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> const& __get__originPanel_k__BackingField() const;

  constexpr void __set__originPanel_k__BackingField(::UnityEngine::UIElements::IPanel* value);

  constexpr ::UnityEngine::UIElements::IPanel*& __get__destinationPanel_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> const& __get__destinationPanel_k__BackingField() const;

  constexpr void __set__destinationPanel_k__BackingField(::UnityEngine::UIElements::IPanel* value);

  /// @brief Method get_originPanel addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::UnityEngine::UIElements::IPanel* get_originPanel();

  /// @brief Method set_originPanel addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_originPanel(::UnityEngine::UIElements::IPanel* value);

  /// @brief Method get_destinationPanel addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::UnityEngine::UIElements::IPanel* get_destinationPanel();

  /// @brief Method set_destinationPanel addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_destinationPanel(::UnityEngine::UIElements::IPanel* value);

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init();

  /// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void LocalInit();

  /// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T GetPooled(::UnityEngine::UIElements::IPanel* originPanel, ::UnityEngine::UIElements::IPanel* destinationPanel);

  static inline ::UnityEngine::UIElements::PanelChangedEventBase_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PanelChangedEventBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelChangedEventBase_1(PanelChangedEventBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelChangedEventBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelChangedEventBase_1(PanelChangedEventBase_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelChangedEventBase_1();

public:
  /// @brief Field <originPanel>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::IPanel* ____originPanel_k__BackingField;

  /// @brief Field <destinationPanel>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::IPanel* ____destinationPanel_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::PanelChangedEventBase_1, "UnityEngine.UIElements", "PanelChangedEventBase`1");
