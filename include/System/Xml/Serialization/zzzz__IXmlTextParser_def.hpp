#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXmlTextParser)
// Forward declare root types
namespace System::Xml::Serialization {
class IXmlTextParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::IXmlTextParser);
// Type: System.Xml.Serialization::IXmlTextParser
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::IXmlTextParser*
class CORDL_TYPE IXmlTextParser {
public:
  // Declarations
  __declspec(property(get = get_Normalized, put = set_Normalized)) bool Normalized;

  /// @brief Method get_Normalized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_Normalized();

  /// @brief Method set_Normalized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Normalized(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IXmlTextParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXmlTextParser(IXmlTextParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXmlTextParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlTextParser(IXmlTextParser const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::IXmlTextParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::IXmlTextParser*, "System.Xml.Serialization", "IXmlTextParser");
