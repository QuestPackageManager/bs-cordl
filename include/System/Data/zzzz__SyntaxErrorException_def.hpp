#pragma once
// IWYU pragma private; include "System/Data/SyntaxErrorException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__InvalidExpressionException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SyntaxErrorException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Data {
class SyntaxErrorException;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::SyntaxErrorException);
// Dependencies System.Data.InvalidExpressionException
namespace System::Data {
// Is value type: false
// CS Name: System.Data.SyntaxErrorException
class CORDL_TYPE SyntaxErrorException : public ::System::Data::InvalidExpressionException {
public:
  // Declarations
  static inline ::System::Data::SyntaxErrorException* New_ctor();

  static inline ::System::Data::SyntaxErrorException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Data::SyntaxErrorException* New_ctor(::StringW s);

  /// @brief Method .ctor, addr 0x41771fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x41771f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x4177204, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SyntaxErrorException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SyntaxErrorException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SyntaxErrorException(SyntaxErrorException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SyntaxErrorException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SyntaxErrorException(SyntaxErrorException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11434 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SyntaxErrorException, 0x90>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::SyntaxErrorException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SyntaxErrorException*, "System.Data", "SyntaxErrorException");
