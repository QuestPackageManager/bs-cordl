#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlTypeException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SqlTypeException)
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
namespace System::Data::SqlTypes {
class SqlTypeException;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::SqlTypes::SqlTypeException);
// Dependencies System.SystemException
namespace System::Data::SqlTypes {
// Is value type: false
// CS Name: System.Data.SqlTypes.SqlTypeException
class CORDL_TYPE SqlTypeException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Data::SqlTypes::SqlTypeException* New_ctor();

  static inline ::System::Data::SqlTypes::SqlTypeException* New_ctor(::StringW message);

  static inline ::System::Data::SqlTypes::SqlTypeException* New_ctor(::StringW message, ::System::Exception* e);

  static inline ::System::Data::SqlTypes::SqlTypeException* New_ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);

  /// @brief Method SqlTypeExceptionSerialization, addr 0x41d9b28, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::SerializationInfo* SqlTypeExceptionSerialization(::System::Runtime::Serialization::SerializationInfo* si,
                                                                                                   ::System::Runtime::Serialization::StreamingContext sc);

  /// @brief Method .ctor, addr 0x41d9a54, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x41c5cfc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x41d9ab4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* e);

  /// @brief Method .ctor, addr 0x41d9ad8, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlTypeException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SqlTypeException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SqlTypeException(SqlTypeException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SqlTypeException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SqlTypeException(SqlTypeException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11514 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlTypeException, 0x90>, "Size mismatch!");

} // namespace System::Data::SqlTypes
NEED_NO_BOX(::System::Data::SqlTypes::SqlTypeException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlTypeException*, "System.Data.SqlTypes", "SqlTypeException");
