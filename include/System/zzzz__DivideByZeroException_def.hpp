#pragma once
// IWYU pragma private; include "System/DivideByZeroException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArithmeticException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DivideByZeroException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class DivideByZeroException;
}
// Write type traits
MARK_REF_PTR_T(::System::DivideByZeroException);
// Dependencies System.ArithmeticException
namespace System {
// Is value type: false
// CS Name: System.DivideByZeroException
class CORDL_TYPE DivideByZeroException : public ::System::ArithmeticException {
public:
  // Declarations
  static inline ::System::DivideByZeroException* New_ctor();

  static inline ::System::DivideByZeroException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::DivideByZeroException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3dd557c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3dd55fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3dd55d8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DivideByZeroException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DivideByZeroException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DivideByZeroException(DivideByZeroException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DivideByZeroException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DivideByZeroException(DivideByZeroException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2374 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DivideByZeroException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::DivideByZeroException);
DEFINE_IL2CPP_ARG_TYPE(::System::DivideByZeroException*, "System", "DivideByZeroException");
