#pragma once
// IWYU pragma private; include "System/InvalidTimeZoneException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidTimeZoneException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class InvalidTimeZoneException;
}
// Write type traits
MARK_REF_PTR_T(::System::InvalidTimeZoneException);
// Dependencies System.Exception
namespace System {
// Is value type: false
// CS Name: System.InvalidTimeZoneException
class CORDL_TYPE InvalidTimeZoneException : public ::System::Exception {
public:
  // Declarations
  static inline ::System::InvalidTimeZoneException* New_ctor();

  static inline ::System::InvalidTimeZoneException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::InvalidTimeZoneException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3debf38, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3debff8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3debf90, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidTimeZoneException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidTimeZoneException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidTimeZoneException(InvalidTimeZoneException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidTimeZoneException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidTimeZoneException(InvalidTimeZoneException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2432 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::InvalidTimeZoneException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::InvalidTimeZoneException);
DEFINE_IL2CPP_ARG_TYPE(::System::InvalidTimeZoneException*, "System", "InvalidTimeZoneException");
