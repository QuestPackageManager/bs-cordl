#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ApplicationException)
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class ApplicationException;
}
// Write type traits
MARK_REF_PTR_T(::System::ApplicationException);
// Type: System::ApplicationException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2559))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2343))
// CS Name: ::System::ApplicationException*
class CORDL_TYPE ApplicationException : public ::System::Exception {
public:
  // Declarations
  static inline ::System::ApplicationException* New_ctor();

  /// @brief Method .ctor addr 0x23c7514 size 0x80 virtual false final false
  inline void _ctor();

  static inline ::System::ApplicationException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x23c7594 size 0x78 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::ApplicationException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor addr 0x23c760c size 0x80 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::ApplicationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x23c768c size 0x80 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApplicationException(ApplicationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApplicationException(ApplicationException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ApplicationException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ApplicationException);
DEFINE_IL2CPP_ARG_TYPE(::System::ApplicationException*, "System", "ApplicationException");
