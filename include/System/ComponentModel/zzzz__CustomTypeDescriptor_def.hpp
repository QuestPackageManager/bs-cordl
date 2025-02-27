#pragma once
// IWYU pragma private; include "System/ComponentModel/CustomTypeDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CustomTypeDescriptor)
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class TypeConverter;
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
class CustomTypeDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::CustomTypeDescriptor);
// Dependencies System.ComponentModel.ICustomTypeDescriptor, System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.CustomTypeDescriptor
class CORDL_TYPE CustomTypeDescriptor : public ::System::Object {
public:
  // Declarations
  /// @brief Field _parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent)) ::System::ComponentModel::ICustomTypeDescriptor* _parent;

  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept;

  /// @brief Method GetAttributes, addr 0x445d5b8, size 0xd8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::AttributeCollection* GetAttributes();

  /// @brief Method GetClassName, addr 0x445d690, size 0xb0, virtual true, abstract: false, final false
  inline ::StringW GetClassName();

  /// @brief Method GetComponentName, addr 0x445d740, size 0xb0, virtual true, abstract: false, final false
  inline ::StringW GetComponentName();

  /// @brief Method GetConverter, addr 0x445d7f0, size 0xd8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::TypeConverter* GetConverter();

  /// @brief Method GetDefaultEvent, addr 0x445d8c8, size 0xb0, virtual true, abstract: false, final false
  inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent();

  /// @brief Method GetDefaultProperty, addr 0x445d978, size 0xb0, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty();

  /// @brief Method GetEditor, addr 0x445da28, size 0xb8, virtual true, abstract: false, final false
  inline ::System::Object* GetEditor(::System::Type* editorBaseType);

  /// @brief Method GetEvents, addr 0x445dae0, size 0xdc, virtual true, abstract: false, final false
  inline ::System::ComponentModel::EventDescriptorCollection* GetEvents();

  /// @brief Method GetEvents, addr 0x445dbbc, size 0xe4, virtual true, abstract: false, final false
  inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetProperties, addr 0x445dca0, size 0xdc, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties();

  /// @brief Method GetProperties, addr 0x445dd7c, size 0xe4, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertyOwner, addr 0x445de60, size 0xb8, virtual true, abstract: false, final false
  inline ::System::Object* GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  static inline ::System::ComponentModel::CustomTypeDescriptor* New_ctor();

  constexpr ::System::ComponentModel::ICustomTypeDescriptor* const& __cordl_internal_get__parent() const;

  constexpr ::System::ComponentModel::ICustomTypeDescriptor*& __cordl_internal_get__parent();

  constexpr void __cordl_internal_set__parent(::System::ComponentModel::ICustomTypeDescriptor* value);

  /// @brief Method .ctor, addr 0x445d5b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomTypeDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomTypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomTypeDescriptor(CustomTypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomTypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomTypeDescriptor(CustomTypeDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9375 };

  /// @brief Field _parent, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::ICustomTypeDescriptor* ____parent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::CustomTypeDescriptor, ____parent) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::CustomTypeDescriptor, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::CustomTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CustomTypeDescriptor*, "System.ComponentModel", "CustomTypeDescriptor");
