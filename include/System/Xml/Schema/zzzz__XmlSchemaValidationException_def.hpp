#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaValidationException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaValidationException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaValidationException;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaValidationException);
// Dependencies System.Xml.Schema.XmlSchemaException
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaValidationException
class CORDL_TYPE XmlSchemaValidationException : public ::System::Xml::Schema::XmlSchemaException {
public:
  // Declarations
  /// @brief Method GetObjectData, addr 0x42c915c, size 0x8, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Xml::Schema::XmlSchemaValidationException* New_ctor();

  static inline ::System::Xml::Schema::XmlSchemaValidationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Xml::Schema::XmlSchemaValidationException* New_ctor(::StringW res, ::StringW arg, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition);

  static inline ::System::Xml::Schema::XmlSchemaValidationException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException, ::StringW sourceUri,
                                                                              int32_t lineNumber, int32_t linePosition);

  static inline ::System::Xml::Schema::XmlSchemaValidationException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::StringW sourceUri, int32_t lineNumber,
                                                                              int32_t linePosition);

  /// @brief Method .ctor, addr 0x42c9164, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x42c9154, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x42c9170, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::StringW arg, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor, addr 0x42c9260, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor, addr 0x42c9230, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaValidationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaValidationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaValidationException(XmlSchemaValidationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaValidationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaValidationException(XmlSchemaValidationException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7728 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaValidationException, 0xc0>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaValidationException);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaValidationException*, "System.Xml.Schema", "XmlSchemaValidationException");
