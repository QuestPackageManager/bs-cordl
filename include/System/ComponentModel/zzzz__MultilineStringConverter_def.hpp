#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MultilineStringConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class MultilineStringConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::MultilineStringConverter);
// Type: System.ComponentModel::MultilineStringConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::MultilineStringConverter*
class CORDL_TYPE MultilineStringConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Method ConvertTo, addr 0x2e401b8, size 0x184, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetProperties, addr 0x2e4033c, size 0x8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value,
                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertiesSupported, addr 0x2e40344, size 0x8, virtual true, abstract: false, final false
  inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  static inline ::System::ComponentModel::MultilineStringConverter* New_ctor();

  /// @brief Method .ctor, addr 0x2e4034c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultilineStringConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultilineStringConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultilineStringConverter(MultilineStringConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultilineStringConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultilineStringConverter(MultilineStringConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::MultilineStringConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::MultilineStringConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::MultilineStringConverter*, "System.ComponentModel", "MultilineStringConverter");
