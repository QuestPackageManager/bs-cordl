#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlDataNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__DataNode_1_def.hpp"
CORDL_MODULE_EXPORT(XmlDataNode)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlDataNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlDataNode);
// Dependencies System.Runtime.Serialization.DataNode`1<T>
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlDataNode
class CORDL_TYPE XmlDataNode : public ::System::Runtime::Serialization::DataNode_1<::System::Object*> {
public:
  // Declarations
  __declspec(property(get = get_OwnerDocument, put = set_OwnerDocument)) ::System::Xml::XmlDocument* OwnerDocument;

  __declspec(property(get = get_XmlAttributes, put = set_XmlAttributes)) ::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* XmlAttributes;

  __declspec(property(get = get_XmlChildNodes, put = set_XmlChildNodes)) ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* XmlChildNodes;

  /// @brief Field ownerDocument, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_ownerDocument, put = __cordl_internal_set_ownerDocument)) ::System::Xml::XmlDocument* ownerDocument;

  /// @brief Field xmlAttributes, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlAttributes, put = __cordl_internal_set_xmlAttributes)) ::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* xmlAttributes;

  /// @brief Field xmlChildNodes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlChildNodes, put = __cordl_internal_set_xmlChildNodes)) ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* xmlChildNodes;

  /// @brief Method Clear, addr 0x5f345ac, size 0x4c, virtual true, abstract: false, final false
  inline void Clear();

  static inline ::System::Runtime::Serialization::XmlDataNode* New_ctor();

  constexpr ::System::Xml::XmlDocument* const& __cordl_internal_get_ownerDocument() const;

  constexpr ::System::Xml::XmlDocument*& __cordl_internal_get_ownerDocument();

  constexpr ::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* const& __cordl_internal_get_xmlAttributes() const;

  constexpr ::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>*& __cordl_internal_get_xmlAttributes();

  constexpr ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* const& __cordl_internal_get_xmlChildNodes() const;

  constexpr ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>*& __cordl_internal_get_xmlChildNodes();

  constexpr void __cordl_internal_set_ownerDocument(::System::Xml::XmlDocument* value);

  constexpr void __cordl_internal_set_xmlAttributes(::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* value);

  constexpr void __cordl_internal_set_xmlChildNodes(::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* value);

  /// @brief Method .ctor, addr 0x5f34400, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_OwnerDocument, addr 0x5f3459c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_OwnerDocument();

  /// @brief Method get_XmlAttributes, addr 0x5f3457c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* get_XmlAttributes();

  /// @brief Method get_XmlChildNodes, addr 0x5f3458c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* get_XmlChildNodes();

  /// @brief Method set_OwnerDocument, addr 0x5f345a4, size 0x8, virtual false, abstract: false, final false
  inline void set_OwnerDocument(::System::Xml::XmlDocument* value);

  /// @brief Method set_XmlAttributes, addr 0x5f34584, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlAttributes(::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* value);

  /// @brief Method set_XmlChildNodes, addr 0x5f34594, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlChildNodes(::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDataNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDataNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDataNode(XmlDataNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDataNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDataNode(XmlDataNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16993 };

  /// @brief Field xmlAttributes, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* ___xmlAttributes;

  /// @brief Field xmlChildNodes, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* ___xmlChildNodes;

  /// @brief Field ownerDocument, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::XmlDocument* ___ownerDocument;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlDataNode, ___xmlAttributes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlDataNode, ___xmlChildNodes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlDataNode, ___ownerDocument) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlDataNode, 0x68>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlDataNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlDataNode*, "System.Runtime.Serialization", "XmlDataNode");
