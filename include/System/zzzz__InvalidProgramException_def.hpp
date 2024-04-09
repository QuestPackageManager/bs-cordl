#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidProgramException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class InvalidProgramException;
}
// Write type traits
MARK_REF_PTR_T(::System::InvalidProgramException);
// Type: System::InvalidProgramException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::InvalidProgramException*
class CORDL_TYPE InvalidProgramException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::InvalidProgramException* New_ctor();

  static inline ::System::InvalidProgramException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::InvalidProgramException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x282f028, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x282f0a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x282f084, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidProgramException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidProgramException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidProgramException(InvalidProgramException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidProgramException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidProgramException(InvalidProgramException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::InvalidProgramException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::InvalidProgramException);
DEFINE_IL2CPP_ARG_TYPE(::System::InvalidProgramException*, "System", "InvalidProgramException");
