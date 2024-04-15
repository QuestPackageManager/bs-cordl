#pragma once
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
// Type: System.Data.SqlTypes::SqlTruncateException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data::SqlTypes {
// Is value type: false
// CS Name: ::System.Data.SqlTypes::SqlTruncateException*
class CORDL_TYPE SqlTruncateException : public ::System::Data::SqlTypes::SqlTypeException {
public:
  // Declarations
  static inline ::System::Data::SqlTypes::SqlTruncateException* New_ctor();

  static inline ::System::Data::SqlTypes::SqlTruncateException* New_ctor(::StringW message);

  static inline ::System::Data::SqlTypes::SqlTruncateException* New_ctor(::StringW message, ::System::Exception* e);

  static inline ::System::Data::SqlTypes::SqlTruncateException* New_ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);

  /// @brief Method SqlTruncateExceptionSerialization, addr 0x2c2bf2c, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::SerializationInfo* SqlTruncateExceptionSerialization(::System::Runtime::Serialization::SerializationInfo* si,
                                                                                                       ::System::Runtime::Serialization::StreamingContext sc);

  /// @brief Method .ctor, addr 0x2c20bf4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2c2bea4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2c2be80, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* e);

  /// @brief Method .ctor, addr 0x2c2becc, size 0x60, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlTruncateException, 0x90>, "Size mismatch!");

} // namespace System::Data::SqlTypes
NEED_NO_BOX(::System::Data::SqlTypes::SqlTruncateException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlTruncateException*, "System.Data.SqlTypes", "SqlTruncateException");
