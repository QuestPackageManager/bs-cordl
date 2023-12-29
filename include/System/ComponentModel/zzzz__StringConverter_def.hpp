#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(StringConverter)
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class StringConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::StringConverter);
// Type: System.ComponentModel::StringConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8317))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8293))
// CS Name: ::System.ComponentModel::StringConverter*
class CORDL_TYPE StringConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Method CanConvertFrom addr 0x279a5b0 size 0xa8 virtual true final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method ConvertFrom addr 0x279a658 size 0x84 virtual true final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  static inline ::System::ComponentModel::StringConverter* New_ctor();

  /// @brief Method .ctor addr 0x279a6dc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StringConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringConverter(StringConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringConverter(StringConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::StringConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::StringConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::StringConverter*, "System.ComponentModel", "StringConverter");
