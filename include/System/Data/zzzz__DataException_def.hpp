#pragma once
// IWYU pragma private; include "System/Data/DataException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DataException)
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
namespace System::Data {
class DataException;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataException);
// Type: System.Data::DataException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataException*
class CORDL_TYPE DataException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Data::DataException* New_ctor();

  static inline ::System::Data::DataException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Data::DataException* New_ctor(::StringW s);

  static inline ::System::Data::DataException* New_ctor(::StringW s, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x40c6d9c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x40c6d94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x40c6df8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW s);

  /// @brief Method .ctor, addr 0x40c6e1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW s, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataException(DataException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataException(DataException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11299 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataException, 0x90>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataException*, "System.Data", "DataException");
