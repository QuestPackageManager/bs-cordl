#pragma once
// IWYU pragma private; include "System/ComponentModel/DateTimeOffsetConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(DateTimeOffsetConverter)
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
namespace System::ComponentModel {
class DateTimeOffsetConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DateTimeOffsetConverter);
// Dependencies System.ComponentModel.TypeConverter
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.DateTimeOffsetConverter
class CORDL_TYPE DateTimeOffsetConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Method CanConvertFrom, addr 0x445f1b4, size 0xc8, virtual true, abstract: false, final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo, addr 0x445f27c, size 0xc8, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertFrom, addr 0x445f344, size 0x398, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo, addr 0x445f6dc, size 0xb80, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  static inline ::System::ComponentModel::DateTimeOffsetConverter* New_ctor();

  /// @brief Method .ctor, addr 0x446025c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeOffsetConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeOffsetConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeOffsetConverter(DateTimeOffsetConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeOffsetConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeOffsetConverter(DateTimeOffsetConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9440 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DateTimeOffsetConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DateTimeOffsetConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DateTimeOffsetConverter*, "System.ComponentModel", "DateTimeOffsetConverter");
