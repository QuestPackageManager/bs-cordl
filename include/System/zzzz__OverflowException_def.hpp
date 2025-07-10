#pragma once
// IWYU pragma private; include "System/OverflowException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArithmeticException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OverflowException)
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
namespace System {
class OverflowException;
}
// Write type traits
MARK_REF_PTR_T(::System::OverflowException);
// Dependencies System.ArithmeticException
namespace System {
// Is value type: false
// CS Name: System.OverflowException
class CORDL_TYPE OverflowException : public ::System::ArithmeticException {
public:
  // Declarations
  static inline ::System::OverflowException* New_ctor();

  static inline ::System::OverflowException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::OverflowException* New_ctor(::StringW message);

  static inline ::System::OverflowException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x3dfa45c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3dfa500, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3dfa4b8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3dfa4dc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverflowException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverflowException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverflowException(OverflowException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverflowException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverflowException(OverflowException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2455 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::OverflowException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::OverflowException);
DEFINE_IL2CPP_ARG_TYPE(::System::OverflowException*, "System", "OverflowException");
