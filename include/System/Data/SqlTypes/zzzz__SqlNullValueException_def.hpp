#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlNullValueException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/SqlTypes/zzzz__SqlTypeException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SqlNullValueException)
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
class SqlNullValueException;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::SqlTypes::SqlNullValueException);
// Type: System.Data.SqlTypes::SqlNullValueException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::SqlTypes {
// Is value type: false
// CS Name: ::System.Data.SqlTypes::SqlNullValueException*
class CORDL_TYPE SqlNullValueException : public ::System::Data::SqlTypes::SqlTypeException {
public:
  // Declarations
  static inline ::System::Data::SqlTypes::SqlNullValueException* New_ctor();

  static inline ::System::Data::SqlTypes::SqlNullValueException* New_ctor(::StringW message);

  static inline ::System::Data::SqlTypes::SqlNullValueException* New_ctor(::StringW message, ::System::Exception* e);

  static inline ::System::Data::SqlTypes::SqlNullValueException* New_ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);

  /// @brief Method SqlNullValueExceptionSerialization, addr 0x415e3c0, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::SerializationInfo* SqlNullValueExceptionSerialization(::System::Runtime::Serialization::SerializationInfo* si,
                                                                                                        ::System::Runtime::Serialization::StreamingContext sc);

  /// @brief Method .ctor, addr 0x414a1fc, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x415e338, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x415e314, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* e);

  /// @brief Method .ctor, addr 0x415e360, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlNullValueException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SqlNullValueException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SqlNullValueException(SqlNullValueException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SqlNullValueException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SqlNullValueException(SqlNullValueException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11473 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlNullValueException, 0x90>, "Size mismatch!");

} // namespace System::Data::SqlTypes
NEED_NO_BOX(::System::Data::SqlTypes::SqlNullValueException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlNullValueException*, "System.Data.SqlTypes", "SqlNullValueException");
