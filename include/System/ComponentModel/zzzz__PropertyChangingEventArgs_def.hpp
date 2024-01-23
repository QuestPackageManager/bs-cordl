#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PropertyChangingEventArgs)
// Forward declare root types
namespace System::ComponentModel {
class PropertyChangingEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::PropertyChangingEventArgs);
// Type: System.ComponentModel::PropertyChangingEventArgs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2376))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11792))
// CS Name: ::System.ComponentModel::PropertyChangingEventArgs*
class CORDL_TYPE PropertyChangingEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field <PropertyName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__PropertyName_k__BackingField, put = __cordl_internal_set__PropertyName_k__BackingField))::StringW _PropertyName_k__BackingField;

  __declspec(property(get = get_PropertyName, put = set_PropertyName))::StringW PropertyName;

  constexpr ::StringW& __cordl_internal_get__PropertyName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__PropertyName_k__BackingField() const;

  constexpr void __cordl_internal_set__PropertyName_k__BackingField(::StringW value);

  static inline ::System::ComponentModel::PropertyChangingEventArgs* New_ctor(::StringW propertyName);

  /// @brief Method .ctor, addr 0x263e1b4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName);

  /// @brief Method get_PropertyName, addr 0x263e22c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_PropertyName();

  /// @brief Method set_PropertyName, addr 0x263e234, size 0x8, virtual true, abstract: false, final false
  inline void set_PropertyName(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "PropertyChangingEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyChangingEventArgs(PropertyChangingEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyChangingEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyChangingEventArgs(PropertyChangingEventArgs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyChangingEventArgs();

public:
  /// @brief Field <PropertyName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____PropertyName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::PropertyChangingEventArgs, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyChangingEventArgs, ____PropertyName_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::PropertyChangingEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyChangingEventArgs*, "System.ComponentModel", "PropertyChangingEventArgs");
