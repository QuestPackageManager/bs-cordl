#pragma once
// IWYU pragma private; include "System/FieldAccessException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MemberAccessException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FieldAccessException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class FieldAccessException;
}
// Write type traits
MARK_REF_PTR_T(::System::FieldAccessException);
// Dependencies System.MemberAccessException
namespace System {
// Is value type: false
// CS Name: System.FieldAccessException
class CORDL_TYPE FieldAccessException : public ::System::MemberAccessException {
public:
  // Declarations
  static inline ::System::FieldAccessException* New_ctor();

  static inline ::System::FieldAccessException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::FieldAccessException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3de26b0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3de2730, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3de270c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldAccessException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FieldAccessException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FieldAccessException(FieldAccessException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FieldAccessException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FieldAccessException(FieldAccessException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2382 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::FieldAccessException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::FieldAccessException);
DEFINE_IL2CPP_ARG_TYPE(::System::FieldAccessException*, "System", "FieldAccessException");
