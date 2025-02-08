#pragma once
// IWYU pragma private; include "System/Data/ReadOnlyException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReadOnlyException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Data {
class ReadOnlyException;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ReadOnlyException);
// Dependencies System.Data.DataException
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ReadOnlyException
class CORDL_TYPE ReadOnlyException : public ::System::Data::DataException {
public:
  // Declarations
  static inline ::System::Data::ReadOnlyException* New_ctor();

  static inline ::System::Data::ReadOnlyException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Data::ReadOnlyException* New_ctor(::StringW s);

  /// @brief Method .ctor, addr 0x4142a44, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4142a3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x4142aa0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadOnlyException(ReadOnlyException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadOnlyException(ReadOnlyException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11348 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ReadOnlyException, 0x90>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ReadOnlyException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ReadOnlyException*, "System.Data", "ReadOnlyException");
