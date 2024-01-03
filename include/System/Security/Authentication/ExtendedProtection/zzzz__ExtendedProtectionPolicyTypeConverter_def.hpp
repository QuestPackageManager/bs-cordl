#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(ExtendedProtectionPolicyTypeConverter)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
// Forward declare root types
namespace System::Security::Authentication::ExtendedProtection {
class ExtendedProtectionPolicyTypeConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter);
// Type: System.Security.Authentication.ExtendedProtection::ExtendedProtectionPolicyTypeConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Authentication::ExtendedProtection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8967))
// CS Name: ::System.Security.Authentication.ExtendedProtection::ExtendedProtectionPolicyTypeConverter*
class CORDL_TYPE ExtendedProtectionPolicyTypeConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Method CanConvertTo, addr 0x297437c, size 0x40, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertTo, addr 0x29743bc, size 0x40, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  static inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter* New_ctor();

  /// @brief Method .ctor, addr 0x29743fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ExtendedProtectionPolicyTypeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtendedProtectionPolicyTypeConverter(ExtendedProtectionPolicyTypeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtendedProtectionPolicyTypeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtendedProtectionPolicyTypeConverter(ExtendedProtectionPolicyTypeConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtendedProtectionPolicyTypeConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter, 0x10>, "Size mismatch!");

} // namespace System::Security::Authentication::ExtendedProtection
NEED_NO_BOX(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*, "System.Security.Authentication.ExtendedProtection",
                       "ExtendedProtectionPolicyTypeConverter");
