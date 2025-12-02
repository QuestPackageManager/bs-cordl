#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlSerializableServices.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSerializableServices)
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlReader;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlSerializableServices;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlSerializableServices);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlSerializableServices
class CORDL_TYPE XmlSerializableServices : public ::System::Object {
public:
  // Declarations
  /// @brief Field AddDefaultSchemaMethodName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AddDefaultSchemaMethodName, put = setStaticF_AddDefaultSchemaMethodName)) ::StringW AddDefaultSchemaMethodName;

  /// @brief Field ReadNodesMethodName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ReadNodesMethodName, put = setStaticF_ReadNodesMethodName)) ::StringW ReadNodesMethodName;

  /// @brief Field WriteNodesMethodName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_WriteNodesMethodName, put = setStaticF_WriteNodesMethodName)) ::StringW WriteNodesMethodName;

  /// @brief Method IsValidAttribute, addr 0x5f5c044, size 0xf8, virtual false, abstract: false, final false
  static inline bool IsValidAttribute(::System::Xml::XmlReader* xmlReader);

  /// @brief Method ReadNodes, addr 0x5f5bcc0, size 0x324, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> ReadNodes(::System::Xml::XmlReader* xmlReader);

  static inline ::StringW getStaticF_AddDefaultSchemaMethodName();

  static inline ::StringW getStaticF_ReadNodesMethodName();

  static inline ::StringW getStaticF_WriteNodesMethodName();

  static inline void setStaticF_AddDefaultSchemaMethodName(::StringW value);

  static inline void setStaticF_ReadNodesMethodName(::StringW value);

  static inline void setStaticF_WriteNodesMethodName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializableServices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializableServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializableServices(XmlSerializableServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializableServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializableServices(XmlSerializableServices const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17101 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlSerializableServices, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlSerializableServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlSerializableServices*, "System.Runtime.Serialization", "XmlSerializableServices");
