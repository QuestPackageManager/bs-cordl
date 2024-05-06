#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlSerializationGeneratedCode)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSerializationGeneratedCode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationGeneratedCode);
// Type: System.Xml.Serialization::XmlSerializationGeneratedCode
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlSerializationGeneratedCode*
class CORDL_TYPE XmlSerializationGeneratedCode : public ::System::Object {
public:
  // Declarations
  static inline ::System::Xml::Serialization::XmlSerializationGeneratedCode* New_ctor();

  /// @brief Method .ctor, addr 0x2ed72f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializationGeneratedCode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationGeneratedCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializationGeneratedCode(XmlSerializationGeneratedCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationGeneratedCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializationGeneratedCode(XmlSerializationGeneratedCode const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationGeneratedCode, 0x10>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationGeneratedCode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationGeneratedCode*, "System.Xml.Serialization", "XmlSerializationGeneratedCode");
