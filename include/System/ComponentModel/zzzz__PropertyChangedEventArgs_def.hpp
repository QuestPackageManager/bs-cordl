#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PropertyChangedEventArgs)
// Forward declare root types
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::PropertyChangedEventArgs);
// Type: System.ComponentModel::PropertyChangedEventArgs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::PropertyChangedEventArgs*
class CORDL_TYPE PropertyChangedEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field _propertyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyName, put = __cordl_internal_set__propertyName))::StringW _propertyName;

  static inline ::System::ComponentModel::PropertyChangedEventArgs* New_ctor(::StringW propertyName);

  constexpr ::StringW const& __cordl_internal_get__propertyName() const;

  constexpr ::StringW& __cordl_internal_get__propertyName();

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  /// @brief Method .ctor, addr 0x2e4b2b0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyChangedEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyChangedEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyChangedEventArgs(PropertyChangedEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyChangedEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyChangedEventArgs(PropertyChangedEventArgs const&) = delete;

  /// @brief Field _propertyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____propertyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::PropertyChangedEventArgs, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyChangedEventArgs, ____propertyName) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::PropertyChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyChangedEventArgs*, "System.ComponentModel", "PropertyChangedEventArgs");
