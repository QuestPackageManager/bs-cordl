#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaInferenceException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaInferenceException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaInferenceException;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaInferenceException);
// Dependencies System.Xml.Schema.XmlSchemaException
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaInferenceException
class CORDL_TYPE XmlSchemaInferenceException : public ::System::Xml::Schema::XmlSchemaException {
public:
  // Declarations
  /// @brief Method GetObjectData, addr 0x426b980, size 0x8, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Xml::Schema::XmlSchemaInferenceException* New_ctor();

  static inline ::System::Xml::Schema::XmlSchemaInferenceException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Xml::Schema::XmlSchemaInferenceException* New_ctor(::StringW res, ::StringW arg);

  static inline ::System::Xml::Schema::XmlSchemaInferenceException* New_ctor(::StringW res, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor, addr 0x426b988, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x426b978, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x42697a0, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::StringW arg);

  /// @brief Method .ctor, addr 0x4262d14, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, int32_t lineNumber, int32_t linePosition);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaInferenceException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInferenceException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaInferenceException(XmlSchemaInferenceException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInferenceException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaInferenceException(XmlSchemaInferenceException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7604 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaInferenceException, 0xc0>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaInferenceException);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaInferenceException*, "System.Xml.Schema", "XmlSchemaInferenceException");
