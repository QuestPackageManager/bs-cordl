#pragma once
// IWYU pragma private; include "System/Xml/Linq/XStreamingElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XStreamingElement)
namespace System::Xml::Linq {
class XName;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Linq {
class XStreamingElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XStreamingElement);
// Dependencies System.Object
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XStreamingElement
class CORDL_TYPE XStreamingElement : public ::System::Object {
public:
  // Declarations
  /// @brief Field content, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::System::Object* content;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::System::Xml::Linq::XName* name;

  constexpr ::System::Object* const& __cordl_internal_get_content() const;

  constexpr ::System::Object*& __cordl_internal_get_content();

  constexpr ::System::Xml::Linq::XName* const& __cordl_internal_get_name() const;

  constexpr ::System::Xml::Linq::XName*& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_content(::System::Object* value);

  constexpr void __cordl_internal_set_name(::System::Xml::Linq::XName* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XStreamingElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XStreamingElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XStreamingElement(XStreamingElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XStreamingElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XStreamingElement(XStreamingElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17975 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Linq::XName* ___name;

  /// @brief Field content, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XStreamingElement, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XStreamingElement, ___content) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XStreamingElement, 0x20>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XStreamingElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XStreamingElement*, "System.Xml.Linq", "XStreamingElement");
