#pragma once
// IWYU pragma private; include "System/Xml/Linq/ElementWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__NamespaceResolver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ElementWriter)
namespace System::Xml::Linq {
class XElement;
}
namespace System::Xml::Linq {
class XNamespace;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml::Linq {
struct ElementWriter;
}
// Write type traits
MARK_VAL_T(::System::Xml::Linq::ElementWriter);
// Dependencies System.Xml.Linq.NamespaceResolver
namespace System::Xml::Linq {
// Is value type: true
// CS Name: System.Xml.Linq.ElementWriter
struct CORDL_TYPE ElementWriter {
public:
  // Declarations
  /// @brief Method GetPrefixOfNamespace, addr 0x5ff5690, size 0x100, virtual false, abstract: false, final false
  inline ::StringW GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* ns, bool allowDefaultNamespace);

  /// @brief Method PushAncestors, addr 0x5ff538c, size 0x110, virtual false, abstract: false, final false
  inline void PushAncestors(::System::Xml::Linq::XElement* e);

  /// @brief Method PushElement, addr 0x5ff58f8, size 0xb0, virtual false, abstract: false, final false
  inline void PushElement(::System::Xml::Linq::XElement* e);

  /// @brief Method WriteElement, addr 0x5ff41fc, size 0x194, virtual false, abstract: false, final false
  inline void WriteElement(::System::Xml::Linq::XElement* e);

  /// @brief Method WriteEndElement, addr 0x5ff5638, size 0x2c, virtual false, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteFullEndElement, addr 0x5ff5664, size 0x2c, virtual false, abstract: false, final false
  inline void WriteFullEndElement();

  /// @brief Method WriteStartElement, addr 0x5ff549c, size 0x19c, virtual false, abstract: false, final false
  inline void WriteStartElement(::System::Xml::Linq::XElement* e);

  /// @brief Method .ctor, addr 0x5ff41f0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlWriter* writer);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ElementWriter();

  // Ctor Parameters [CppParam { name: "_writer", ty: "::System::Xml::XmlWriter*", modifiers: "", def_value: None }, CppParam { name: "_resolver", ty: "::System::Xml::Linq::NamespaceResolver",
  // modifiers: "", def_value: None }]
  constexpr ElementWriter(::System::Xml::XmlWriter* _writer, ::System::Xml::Linq::NamespaceResolver _resolver) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21792 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field _writer, offset: 0x0, size: 0x8, def value: None
  ::System::Xml::XmlWriter* _writer;

  /// @brief Field _resolver, offset: 0x8, size: 0x18, def value: None
  ::System::Xml::Linq::NamespaceResolver _resolver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::ElementWriter, _writer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::ElementWriter, _resolver) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::ElementWriter, 0x20>, "Size mismatch!");

} // namespace System::Xml::Linq
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::ElementWriter, "System.Xml.Linq", "ElementWriter");
