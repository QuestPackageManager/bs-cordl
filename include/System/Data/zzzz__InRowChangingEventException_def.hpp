#pragma once
// IWYU pragma private; include "System/Data/InRowChangingEventException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InRowChangingEventException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Data {
class InRowChangingEventException;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::InRowChangingEventException);
// Dependencies System.Data.DataException
namespace System::Data {
// Is value type: false
// CS Name: System.Data.InRowChangingEventException
class CORDL_TYPE InRowChangingEventException : public ::System::Data::DataException {
public:
  // Declarations
  static inline ::System::Data::InRowChangingEventException* New_ctor();

  static inline ::System::Data::InRowChangingEventException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Data::InRowChangingEventException* New_ctor(::StringW s);

  /// @brief Method .ctor, addr 0x413e030, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x413e028, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x413e08c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InRowChangingEventException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InRowChangingEventException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InRowChangingEventException(InRowChangingEventException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InRowChangingEventException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InRowChangingEventException(InRowChangingEventException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11346 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::InRowChangingEventException, 0x90>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::InRowChangingEventException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::InRowChangingEventException*, "System.Data", "InRowChangingEventException");
