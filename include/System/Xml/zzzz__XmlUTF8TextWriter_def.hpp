#pragma once
// IWYU pragma private; include "System/Xml/XmlUTF8TextWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlBaseWriter_def.hpp"
CORDL_MODULE_EXPORT(XmlUTF8TextWriter)
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
class XmlUTF8NodeWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlUTF8TextWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlUTF8TextWriter);
// Dependencies System.Xml.XmlBaseWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlUTF8TextWriter
class CORDL_TYPE XmlUTF8TextWriter : public ::System::Xml::XmlBaseWriter {
public:
  // Declarations
  /// @brief Field writer, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer)) ::System::Xml::XmlUTF8NodeWriter* writer;

  static inline ::System::Xml::XmlUTF8TextWriter* New_ctor();

  /// @brief Method SetOutput, addr 0x5f784f8, size 0x160, virtual true, abstract: false, final true
  inline void SetOutput(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool ownsStream);

  constexpr ::System::Xml::XmlUTF8NodeWriter* const& __cordl_internal_get_writer() const;

  constexpr ::System::Xml::XmlUTF8NodeWriter*& __cordl_internal_get_writer();

  constexpr void __cordl_internal_set_writer(::System::Xml::XmlUTF8NodeWriter* value);

  /// @brief Method .ctor, addr 0x5f78754, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUTF8TextWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlUTF8TextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUTF8TextWriter(XmlUTF8TextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUTF8TextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUTF8TextWriter(XmlUTF8TextWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16962 };

  /// @brief Field writer, offset: 0x98, size: 0x8, def value: None
  ::System::Xml::XmlUTF8NodeWriter* ___writer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlUTF8TextWriter, ___writer) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlUTF8TextWriter, 0xa0>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlUTF8TextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlUTF8TextWriter*, "System.Xml", "XmlUTF8TextWriter");
