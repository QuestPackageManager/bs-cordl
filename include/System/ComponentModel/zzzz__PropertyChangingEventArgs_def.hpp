#pragma once
// IWYU pragma private; include "System/ComponentModel/PropertyChangingEventArgs.hpp"
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
// Dependencies System.EventArgs
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.PropertyChangingEventArgs
class CORDL_TYPE PropertyChangingEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field _propertyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyName, put = __cordl_internal_set__propertyName)) ::StringW _propertyName;

  static inline ::System::ComponentModel::PropertyChangingEventArgs* New_ctor(::StringW propertyName);

  constexpr ::StringW const& __cordl_internal_get__propertyName() const;

  constexpr ::StringW& __cordl_internal_get__propertyName();

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  /// @brief Method .ctor, addr 0x4461478, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyChangingEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyChangingEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyChangingEventArgs(PropertyChangingEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyChangingEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyChangingEventArgs(PropertyChangingEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9436 };

  /// @brief Field _propertyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____propertyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::PropertyChangingEventArgs, ____propertyName) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::PropertyChangingEventArgs, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::PropertyChangingEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyChangingEventArgs*, "System.ComponentModel", "PropertyChangingEventArgs");
