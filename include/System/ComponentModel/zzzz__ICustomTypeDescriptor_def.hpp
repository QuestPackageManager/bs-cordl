#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICustomTypeDescriptor)
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System {
class Attribute;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class AttributeCollection;
}
// Forward declare root types
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ICustomTypeDescriptor);
// Type: System.ComponentModel::ICustomTypeDescriptor
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9431))
// CS Name: ::System.ComponentModel::ICustomTypeDescriptor*
class CORDL_TYPE ICustomTypeDescriptor {
public:
  // Declarations
  /// @brief Method GetAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::AttributeCollection* GetAttributes();

  /// @brief Method GetClassName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetClassName();

  /// @brief Method GetComponentName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetComponentName();

  /// @brief Method GetConverter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::TypeConverter* GetConverter();

  /// @brief Method GetDefaultEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent();

  /// @brief Method GetDefaultProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty();

  /// @brief Method GetEditor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetEditor(::System::Type* editorBaseType);

  /// @brief Method GetEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::EventDescriptorCollection* GetEvents();

  /// @brief Method GetEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties();

  /// @brief Method GetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertyOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  // Ctor Parameters [CppParam { name: "", ty: "ICustomTypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICustomTypeDescriptor(ICustomTypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICustomTypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICustomTypeDescriptor(ICustomTypeDescriptor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ICustomTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ICustomTypeDescriptor*, "System.ComponentModel", "ICustomTypeDescriptor");
