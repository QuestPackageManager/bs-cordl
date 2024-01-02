#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CollectionConverter)
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Type;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class CollectionConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::CollectionConverter);
// Type: System.ComponentModel::CollectionConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9468))
// CS Name: ::System.ComponentModel::CollectionConverter*
class CORDL_TYPE CollectionConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Method ConvertTo, addr 0x2919b60, size 0x178, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetProperties, addr 0x2919cd8, size 0x8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value,
                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertiesSupported, addr 0x2919ce0, size 0x8, virtual true, abstract: false, final false
  inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  static inline ::System::ComponentModel::CollectionConverter* New_ctor();

  /// @brief Method .ctor, addr 0x2919ce8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CollectionConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionConverter(CollectionConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionConverter(CollectionConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::CollectionConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::CollectionConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CollectionConverter*, "System.ComponentModel", "CollectionConverter");
