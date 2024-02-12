#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSyntaxException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Security {
class XmlSyntaxException;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::XmlSyntaxException);
// Type: System.Security::XmlSyntaxException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2481))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2880))
// CS Name: ::System.Security::XmlSyntaxException*
class CORDL_TYPE XmlSyntaxException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Security::XmlSyntaxException* New_ctor();

  /// @brief Method .ctor, addr 0x24711bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Security::XmlSyntaxException* New_ctor(int32_t lineNumber);

  /// @brief Method .ctor, addr 0x24711c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t lineNumber);

  static inline ::System::Security::XmlSyntaxException* New_ctor(int32_t lineNumber, ::StringW message);

  /// @brief Method .ctor, addr 0x24711cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t lineNumber, ::StringW message);

  static inline ::System::Security::XmlSyntaxException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x24711d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "XmlSyntaxException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSyntaxException(XmlSyntaxException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSyntaxException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSyntaxException(XmlSyntaxException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSyntaxException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::XmlSyntaxException, 0x90>, "Size mismatch!");

} // namespace System::Security
NEED_NO_BOX(::System::Security::XmlSyntaxException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::XmlSyntaxException*, "System.Security", "XmlSyntaxException");
