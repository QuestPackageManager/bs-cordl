#pragma once
// IWYU pragma private; include "System/ComponentModel/StringConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(StringConverter)
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
class StringConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::StringConverter);
// Dependencies System.ComponentModel.TypeConverter
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.StringConverter
class CORDL_TYPE StringConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Method CanConvertFrom, addr 0x6213120, size 0x80, virtual true, abstract: false, final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method ConvertFrom, addr 0x62131a0, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  static inline ::System::ComponentModel::StringConverter* New_ctor();

  /// @brief Method .ctor, addr 0x62131d0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringConverter(StringConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringConverter(StringConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11273 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::StringConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::StringConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::StringConverter*, "System.ComponentModel", "StringConverter");
