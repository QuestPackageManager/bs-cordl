#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/InspectedItemBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InspectedItemBase)
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class InspectedItemBase;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::InspectedItemBase);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.InspectedItemBase
class CORDL_TYPE InspectedItemBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Valid, put = set_Valid)) bool Valid;

  __declspec(property(get = get_Visible)) bool Visible;

  /// @brief Field <Valid>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__Valid_k__BackingField, put = __cordl_internal_set__Valid_k__BackingField)) bool _Valid_k__BackingField;

  /// @brief Field enabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_enabled, put = __cordl_internal_set_enabled)) bool enabled;

  /// @brief Field typeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_typeName, put = __cordl_internal_set_typeName)) ::StringW typeName;

  static inline ::Meta::XR::ImmersiveDebugger::InspectedItemBase* New_ctor();

  constexpr bool const& __cordl_internal_get__Valid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Valid_k__BackingField();

  constexpr bool const& __cordl_internal_get_enabled() const;

  constexpr bool& __cordl_internal_get_enabled();

  constexpr ::StringW const& __cordl_internal_get_typeName() const;

  constexpr ::StringW& __cordl_internal_get_typeName();

  constexpr void __cordl_internal_set__Valid_k__BackingField(bool value);

  constexpr void __cordl_internal_set_enabled(bool value);

  constexpr void __cordl_internal_set_typeName(::StringW value);

  /// @brief Method .ctor, addr 0x5891ee8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Valid, addr 0x5891ed8, size 0x8, virtual false, abstract: false, final false
  inline bool get_Valid();

  /// @brief Method get_Visible, addr 0x5891534, size 0x20, virtual false, abstract: false, final false
  inline bool get_Visible();

  /// @brief Method set_Valid, addr 0x5891ee0, size 0x8, virtual false, abstract: false, final false
  inline void set_Valid(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InspectedItemBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InspectedItemBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InspectedItemBase(InspectedItemBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InspectedItemBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InspectedItemBase(InspectedItemBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18296 };

  /// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
  bool ___enabled;

  /// @brief Field typeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___typeName;

  /// @brief Field <Valid>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____Valid_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::InspectedItemBase, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::InspectedItemBase, ___typeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::InspectedItemBase, ____Valid_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::InspectedItemBase, 0x28>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::InspectedItemBase);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::InspectedItemBase*, "Meta.XR.ImmersiveDebugger", "InspectedItemBase");
