#pragma once
// IWYU pragma private; include "System/InvalidCastException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidCastException)
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
class InvalidCastException;
}
// Write type traits
MARK_REF_PTR_T(::System::InvalidCastException);
// Type: System::InvalidCastException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::InvalidCastException*
class CORDL_TYPE InvalidCastException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::InvalidCastException* New_ctor();

  static inline ::System::InvalidCastException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::InvalidCastException* New_ctor(::StringW message);

  static inline ::System::InvalidCastException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x3d8a7b8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d8a838, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d87eb8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3d8a814, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidCastException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidCastException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidCastException(InvalidCastException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidCastException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidCastException(InvalidCastException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2429 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::InvalidCastException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::InvalidCastException);
DEFINE_IL2CPP_ARG_TYPE(::System::InvalidCastException*, "System", "InvalidCastException");
