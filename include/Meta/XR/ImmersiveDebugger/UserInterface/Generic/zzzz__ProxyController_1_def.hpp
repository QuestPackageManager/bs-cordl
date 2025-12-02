#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/ProxyController_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ProxyController_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
template <typename ControllerType> class ProxyController_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// cpp template
template <typename ControllerType>
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyController`1<ControllerType>
class CORDL_TYPE ProxyController_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Target, put = set_Target)) ControllerType Target;

  /// @brief Field <Target>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Target_k__BackingField, put = __cordl_internal_set__Target_k__BackingField)) ControllerType _Target_k__BackingField;

  /// @brief Method Fill, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Fill();

  /// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Fill(ControllerType target,
                   ::System::Collections::Generic::Dictionary_2<ControllerType, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>* targets);

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>* New_ctor();

  constexpr ControllerType const& __cordl_internal_get__Target_k__BackingField() const;

  constexpr ControllerType& __cordl_internal_get__Target_k__BackingField();

  constexpr void __cordl_internal_set__Target_k__BackingField(ControllerType value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Target, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ControllerType get_Target();

  /// @brief Method set_Target, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Target(ControllerType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProxyController_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProxyController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProxyController_1(ProxyController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProxyController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProxyController_1(ProxyController_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18364 };

  /// @brief Field <Target>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ControllerType ____Target_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "ProxyController`1");
