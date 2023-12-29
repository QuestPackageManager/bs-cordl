#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
CORDL_MODULE_EXPORT(XContainerWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml::Linq {
class XContainer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Xml::Linq {
class XObject;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XContainerWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XContainerWrapper);
// Type: Newtonsoft.Json.Converters::XContainerWrapper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11993))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11992))
// CS Name: ::Newtonsoft.Json.Converters::XContainerWrapper*
class CORDL_TYPE XContainerWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
public:
  // Declarations
  /// @brief Field _childNodes, offset 0x18, size 0x8
  __declspec(property(get = __get__childNodes, put = __set__childNodes))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _childNodes;

  __declspec(property(get = get_Container))::System::Xml::Linq::XContainer* Container;

  __declspec(property(get = get_ChildNodes))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* ChildNodes;

  __declspec(property(get = get_ParentNode))::Newtonsoft::Json::Converters::IXmlNode* ParentNode;

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*& __get__childNodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*> const& __get__childNodes() const;

  constexpr void __set__childNodes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* value);

  /// @brief Method get_Container addr 0x2558234 size 0x78 virtual false final false
  inline ::System::Xml::Linq::XContainer* get_Container();

  static inline ::Newtonsoft::Json::Converters::XContainerWrapper* New_ctor(::System::Xml::Linq::XContainer* container);

  /// @brief Method .ctor addr 0x25569d0 size 0x6c virtual false final false
  inline void _ctor(::System::Xml::Linq::XContainer* container);

  /// @brief Method get_ChildNodes addr 0x2556ba0 size 0x3b8 virtual true final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes();

  /// @brief Method get_ParentNode addr 0x25582ac size 0x44 virtual true final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();

  /// @brief Method WrapNode addr 0x2557b68 size 0x490 virtual false final false
  static inline ::Newtonsoft::Json::Converters::IXmlNode* WrapNode(::System::Xml::Linq::XObject* node);

  /// @brief Method AppendChild addr 0x2557930 size 0xd0 virtual true final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild);

  // Ctor Parameters [CppParam { name: "", ty: "XContainerWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XContainerWrapper(XContainerWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XContainerWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XContainerWrapper(XContainerWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XContainerWrapper();

public:
  /// @brief Field _childNodes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* ____childNodes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XContainerWrapper, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::XContainerWrapper, ____childNodes) == 0x18, "Offset mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XContainerWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XContainerWrapper*, "Newtonsoft.Json.Converters", "XContainerWrapper");
