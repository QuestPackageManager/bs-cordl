#pragma once
// IWYU pragma private; include "System/Security/Authentication/ExtendedProtection/ExtendedProtectionPolicyTypeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(ExtendedProtectionPolicyTypeConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::Authentication::ExtendedProtection {
class ExtendedProtectionPolicyTypeConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter);
// Dependencies System.ComponentModel.TypeConverter
namespace System::Security::Authentication::ExtendedProtection {
// Is value type: false
// CS Name: System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicyTypeConverter
class CORDL_TYPE ExtendedProtectionPolicyTypeConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Method CanConvertTo, addr 0x4434c18, size 0x38, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertTo, addr 0x4434c50, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  static inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter* New_ctor();

  /// @brief Method .ctor, addr 0x4434c88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtendedProtectionPolicyTypeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtendedProtectionPolicyTypeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtendedProtectionPolicyTypeConverter(ExtendedProtectionPolicyTypeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtendedProtectionPolicyTypeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtendedProtectionPolicyTypeConverter(ExtendedProtectionPolicyTypeConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9286 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter, 0x10>, "Size mismatch!");

} // namespace System::Security::Authentication::ExtendedProtection
NEED_NO_BOX(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*, "System.Security.Authentication.ExtendedProtection",
                       "ExtendedProtectionPolicyTypeConverter");
