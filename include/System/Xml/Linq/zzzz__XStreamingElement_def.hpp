#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XStreamingElement)
namespace System {
class Object;
}
namespace System::Xml::Linq {
class XName;
}
// Forward declare root types
namespace System::Xml::Linq {
class XStreamingElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XStreamingElement);
// Type: System.Xml.Linq::XStreamingElement
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15442))
// CS Name: ::System.Xml.Linq::XStreamingElement*
class CORDL_TYPE XStreamingElement : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::System::Xml::Linq::XName* name;

  /// @brief Field content, offset 0x18, size 0x8
  __declspec(property(get = __get_content, put = __set_content))::System::Object* content;

  constexpr ::System::Xml::Linq::XName*& __get_name();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XName*> const& __get_name() const;

  constexpr void __set_name(::System::Xml::Linq::XName* value);

  constexpr ::System::Object*& __get_content();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_content() const;

  constexpr void __set_content(::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "XStreamingElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XStreamingElement(XStreamingElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XStreamingElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XStreamingElement(XStreamingElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XStreamingElement();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Linq::XName* ___name;

  /// @brief Field content, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XStreamingElement, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::XStreamingElement, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XStreamingElement, ___content) == 0x18, "Offset mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XStreamingElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XStreamingElement*, "System.Xml.Linq", "XStreamingElement");
