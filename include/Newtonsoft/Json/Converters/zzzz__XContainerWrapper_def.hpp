#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
CORDL_MODULE_EXPORT(XContainerWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Xml::Linq {
class XContainer;
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
// CS Name: ::Newtonsoft.Json.Converters::XContainerWrapper*
class CORDL_TYPE XContainerWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
public:
  // Declarations
  __declspec(property(get = get_ChildNodes))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* ChildNodes;

  __declspec(property(get = get_Container))::System::Xml::Linq::XContainer* Container;

  __declspec(property(get = get_ParentNode))::Newtonsoft::Json::Converters::IXmlNode* ParentNode;

  /// @brief Field _childNodes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__childNodes, put = __cordl_internal_set__childNodes))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _childNodes;

  /// @brief Method AppendChild, addr 0x27ac97c, size 0xd0, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild);

  static inline ::Newtonsoft::Json::Converters::XContainerWrapper* New_ctor(::System::Xml::Linq::XContainer* container);

  /// @brief Method WrapNode, addr 0x27acbb4, size 0x490, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Converters::IXmlNode* WrapNode(::System::Xml::Linq::XObject* node);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*& __cordl_internal_get__childNodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*> const& __cordl_internal_get__childNodes() const;

  constexpr void __cordl_internal_set__childNodes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* value);

  /// @brief Method .ctor, addr 0x27aba1c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XContainer* container);

  /// @brief Method get_ChildNodes, addr 0x27abbec, size 0x3b8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes();

  /// @brief Method get_Container, addr 0x27ad280, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XContainer* get_Container();

  /// @brief Method get_ParentNode, addr 0x27ad2f8, size 0x44, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XContainerWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XContainerWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XContainerWrapper(XContainerWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XContainerWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XContainerWrapper(XContainerWrapper const&) = delete;

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
