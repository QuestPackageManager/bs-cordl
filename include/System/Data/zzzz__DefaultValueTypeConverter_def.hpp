#pragma once
// IWYU pragma private; include "System/Data/DefaultValueTypeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__StringConverter_def.hpp"
CORDL_MODULE_EXPORT(DefaultValueTypeConverter)
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
namespace System::Data {
class DefaultValueTypeConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DefaultValueTypeConverter);
// Dependencies System.ComponentModel.StringConverter
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DefaultValueTypeConverter
class CORDL_TYPE DefaultValueTypeConverter : public ::System::ComponentModel::StringConverter {
public:
  // Declarations
  /// @brief Method ConvertFrom, addr 0x4170668, size 0x1a0, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo, addr 0x41704bc, size 0x1ac, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  static inline ::System::Data::DefaultValueTypeConverter* New_ctor();

  /// @brief Method .ctor, addr 0x41704b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultValueTypeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueTypeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultValueTypeConverter(DefaultValueTypeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueTypeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultValueTypeConverter(DefaultValueTypeConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11415 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DefaultValueTypeConverter, 0x10>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DefaultValueTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DefaultValueTypeConverter*, "System.Data", "DefaultValueTypeConverter");
