#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SchemaExporter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SchemaExporter)
namespace System::Xml::Schema {
class XmlSchemaAnnotation;
}
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlElement;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SchemaExporter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SchemaExporter);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SchemaExporter
class CORDL_TYPE SchemaExporter : public ::System::Object {
public:
  // Declarations
  /// @brief Field actualTypeAnnotationName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_actualTypeAnnotationName, put = setStaticF_actualTypeAnnotationName)) ::System::Xml::XmlQualifiedName* actualTypeAnnotationName;

  /// @brief Method CreateAnyElementType, addr 0x5fab8a4, size 0x17c, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaComplexType* CreateAnyElementType();

  /// @brief Method CreateAnyType, addr 0x5fabb00, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaComplexType* CreateAnyType();

  /// @brief Method ExportActualType, addr 0x5faa6e4, size 0x144, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlElement* ExportActualType(::System::Xml::XmlQualifiedName* typeName, ::System::Xml::XmlDocument* xmlDoc);

  /// @brief Method GetSchemaAnnotation, addr 0x5faba20, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaAnnotation* GetSchemaAnnotation(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> nodes);

  /// @brief Method GetXmlTypeInfo, addr 0x5faa90c, size 0x174, virtual false, abstract: false, final false
  static inline void GetXmlTypeInfo(::System::Type* type, ::ByRef<::System::Xml::XmlQualifiedName*> stableName, ::ByRef<::System::Xml::Schema::XmlSchemaType*> xsdType, ::ByRef<bool> hasRoot);

  /// @brief Method InvokeSchemaProviderMethod, addr 0x5faac4c, size 0xc58, virtual false, abstract: false, final false
  static inline bool InvokeSchemaProviderMethod(::System::Type* clrType, ::System::Xml::Schema::XmlSchemaSet* schemas, ::ByRef<::System::Xml::XmlQualifiedName*> stableName,
                                                ::ByRef<::System::Xml::Schema::XmlSchemaType*> xsdType, ::ByRef<bool> hasRoot);

  /// @brief Method IsSpecialXmlType, addr 0x5faaa80, size 0x1cc, virtual false, abstract: false, final false
  static inline bool IsSpecialXmlType(::System::Type* type, ::ByRef<::System::Xml::XmlQualifiedName*> typeName, ::ByRef<::System::Xml::Schema::XmlSchemaType*> xsdType, ::ByRef<bool> hasRoot);

  static inline ::System::Xml::XmlQualifiedName* getStaticF_actualTypeAnnotationName();

  /// @brief Method get_ActualTypeAnnotationName, addr 0x5faa828, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* get_ActualTypeAnnotationName();

  static inline void setStaticF_actualTypeAnnotationName(::System::Xml::XmlQualifiedName* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaExporter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SchemaExporter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaExporter(SchemaExporter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaExporter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaExporter(SchemaExporter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17078 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SchemaExporter, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SchemaExporter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SchemaExporter*, "System.Runtime.Serialization", "SchemaExporter");
