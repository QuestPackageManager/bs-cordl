#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Xml.Serialization::XmlSerializerFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlSerializerFactory*
class CORDL_TYPE XmlSerializerFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field serializersBySource, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_serializersBySource, put = setStaticF_serializersBySource))::System::Collections::Hashtable* serializersBySource;

  /// @brief Method CreateSerializer, addr 0x2eec1fc, size 0x14, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializer* CreateSerializer(::System::Type* type);

  /// @brief Method CreateSerializer, addr 0x2eec210, size 0x278, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializer* CreateSerializer(::System::Type* type, ::System::Xml::Serialization::XmlAttributeOverrides* overrides,
                                                                       ::ArrayW<::System::Type*, ::Array<::System::Type*>*> extraTypes, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                       ::StringW defaultNamespace);

  /// @brief Method CreateSerializer, addr 0x2eec488, size 0x14, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializer* CreateSerializer(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root);

  static inline ::System::Xml::Serialization::XmlSerializerFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2eec1f4, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializerFactory, 0x10>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializerFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializerFactory*, "System.Xml.Serialization", "XmlSerializerFactory");
