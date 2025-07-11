#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializerFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSerializerFactory)
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Serialization {
class XmlAttributeOverrides;
}
namespace System::Xml::Serialization {
class XmlRootAttribute;
}
namespace System::Xml::Serialization {
class XmlSerializer;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSerializerFactory;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializerFactory);
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializerFactory
class CORDL_TYPE XmlSerializerFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field serializersBySource, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_serializersBySource, put = setStaticF_serializersBySource)) ::System::Collections::Hashtable* serializersBySource;

  /// @brief Method CreateSerializer, addr 0x438eafc, size 0x14, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializer* CreateSerializer(::System::Type* type);

  /// @brief Method CreateSerializer, addr 0x438eb10, size 0x26c, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializer* CreateSerializer(::System::Type* type, ::System::Xml::Serialization::XmlAttributeOverrides* overrides,
                                                                       ::ArrayW<::System::Type*, ::Array<::System::Type*>*> extraTypes, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                       ::StringW defaultNamespace);

  /// @brief Method CreateSerializer, addr 0x438ed7c, size 0x14, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializer* CreateSerializer(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root);

  static inline ::System::Xml::Serialization::XmlSerializerFactory* New_ctor();

  /// @brief Method .ctor, addr 0x438eaf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Hashtable* getStaticF_serializersBySource();

  static inline void setStaticF_serializersBySource(::System::Collections::Hashtable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializerFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializerFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializerFactory(XmlSerializerFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializerFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializerFactory(XmlSerializerFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7452 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializerFactory, 0x10>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializerFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializerFactory*, "System.Xml.Serialization", "XmlSerializerFactory");
