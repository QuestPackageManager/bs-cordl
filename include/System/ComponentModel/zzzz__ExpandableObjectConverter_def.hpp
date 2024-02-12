#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ExpandableObjectConverter)
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
class ExpandableObjectConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ExpandableObjectConverter);
// Type: System.ComponentModel::ExpandableObjectConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7490))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7436))
// CS Name: ::System.ComponentModel::ExpandableObjectConverter*
class CORDL_TYPE ExpandableObjectConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  static inline ::System::ComponentModel::ExpandableObjectConverter* New_ctor();

  /// @brief Method .ctor, addr 0x291466c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method GetProperties, addr 0x2914674, size 0x68, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value,
                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertiesSupported, addr 0x29146dc, size 0x8, virtual true, abstract: false, final false
  inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "ExpandableObjectConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpandableObjectConverter(ExpandableObjectConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpandableObjectConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpandableObjectConverter(ExpandableObjectConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpandableObjectConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ExpandableObjectConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ExpandableObjectConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ExpandableObjectConverter*, "System.ComponentModel", "ExpandableObjectConverter");
