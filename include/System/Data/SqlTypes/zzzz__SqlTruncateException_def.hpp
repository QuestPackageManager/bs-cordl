#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlTruncateException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/SqlTypes/zzzz__SqlTypeException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SqlTruncateException)
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
class SqlTruncateException;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::SqlTypes::SqlTruncateException);
// Dependencies System.Data.SqlTypes.SqlTypeException
namespace System::Data::SqlTypes {
// Is value type: false
// CS Name: System.Data.SqlTypes.SqlTruncateException
class CORDL_TYPE SqlTruncateException : public ::System::Data::SqlTypes::SqlTypeException {
public:
  // Declarations
  static inline ::System::Data::SqlTypes::SqlTruncateException* New_ctor();

  static inline ::System::Data::SqlTypes::SqlTruncateException* New_ctor(::StringW message);

  static inline ::System::Data::SqlTypes::SqlTruncateException* New_ctor(::StringW message, ::System::Exception* e);

  static inline ::System::Data::SqlTypes::SqlTruncateException* New_ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);

  /// @brief Method SqlTruncateExceptionSerialization, addr 0x41d3f6c, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::SerializationInfo* SqlTruncateExceptionSerialization(::System::Runtime::Serialization::SerializationInfo* si,
                                                                                                       ::System::Runtime::Serialization::StreamingContext sc);

  /// @brief Method .ctor, addr 0x41c7188, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x41d3ee4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x41d3ec0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* e);

  /// @brief Method .ctor, addr 0x41d3f0c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlTruncateException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SqlTruncateException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SqlTruncateException(SqlTruncateException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SqlTruncateException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SqlTruncateException(SqlTruncateException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11512 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlTruncateException, 0x90>, "Size mismatch!");

} // namespace System::Data::SqlTypes
NEED_NO_BOX(::System::Data::SqlTypes::SqlTruncateException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlTruncateException*, "System.Data.SqlTypes", "SqlTruncateException");
