#pragma once
// IWYU pragma private; include "System\Xml\XmlTextWriterBase64Encoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__Base64Encoder_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextWriterBase64Encoder)
namespace System::Xml {
class XmlTextEncoder;
}
// Forward declare root types
namespace System::Xml {
class XmlTextWriterBase64Encoder;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlTextWriterBase64Encoder*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlTextWriterBase64Encoder*, "System.Xml", "XmlTextWriterBase64Encoder");
// Dependencies System.Xml.Base64Encoder
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlTextWriterBase64Encoder
class CORDL_TYPE XmlTextWriterBase64Encoder : public ::System::Xml::Base64Encoder {
public:
  // Declarations
  /// @brief Field xmlTextEncoder, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlTextEncoder, put = __cordl_internal_set_xmlTextEncoder)) ::System::Xml::XmlTextEncoder* xmlTextEncoder;

  static inline ::System::Xml::XmlTextWriterBase64Encoder* New_ctor(::System::Xml::XmlTextEncoder* xmlTextEncoder);

  /// @brief Method WriteChars, addr 0x6192bbc, size 0x18, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t> chars, int32_t index, int32_t count);

  constexpr ::System::Xml::XmlTextEncoder* const& __cordl_internal_get_xmlTextEncoder() const;

  constexpr ::System::Xml::XmlTextEncoder*& __cordl_internal_get_xmlTextEncoder();

  constexpr void __cordl_internal_set_xmlTextEncoder(::System::Xml::XmlTextEncoder* value);

  /// @brief Method .ctor, addr 0x6192b98, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlTextEncoder* xmlTextEncoder);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTextWriterBase64Encoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTextWriterBase64Encoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTextWriterBase64Encoder(XmlTextWriterBase64Encoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTextWriterBase64Encoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTextWriterBase64Encoder(XmlTextWriterBase64Encoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9245 };

  /// @brief Field xmlTextEncoder, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlTextEncoder* ___xmlTextEncoder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlTextWriterBase64Encoder, ___xmlTextEncoder) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlTextWriterBase64Encoder) == 0x30, "Size mismatch!");

} // namespace System::Xml
