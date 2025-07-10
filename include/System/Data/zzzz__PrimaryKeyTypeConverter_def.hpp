#pragma once
// IWYU pragma private; include "System/Data/PrimaryKeyTypeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ReferenceConverter_def.hpp"
CORDL_MODULE_EXPORT(PrimaryKeyTypeConverter)
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
class PrimaryKeyTypeConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::PrimaryKeyTypeConverter);
// Dependencies System.ComponentModel.ReferenceConverter
namespace System::Data {
// Is value type: false
// CS Name: System.Data.PrimaryKeyTypeConverter
class CORDL_TYPE PrimaryKeyTypeConverter : public ::System::ComponentModel::ReferenceConverter {
public:
  // Declarations
  /// @brief Method CanConvertTo, addr 0x4184298, size 0xc8, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertTo, addr 0x4184360, size 0x1c0, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetPropertiesSupported, addr 0x4184290, size 0x8, virtual true, abstract: false, final false
  inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  static inline ::System::Data::PrimaryKeyTypeConverter* New_ctor();

  /// @brief Method .ctor, addr 0x41841dc, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimaryKeyTypeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimaryKeyTypeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimaryKeyTypeConverter(PrimaryKeyTypeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimaryKeyTypeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimaryKeyTypeConverter(PrimaryKeyTypeConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11448 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::PrimaryKeyTypeConverter, 0x18>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::PrimaryKeyTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::PrimaryKeyTypeConverter*, "System.Data", "PrimaryKeyTypeConverter");
