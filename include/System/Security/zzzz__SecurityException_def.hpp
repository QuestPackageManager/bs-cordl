#pragma once
// IWYU pragma private; include "System/Security/SecurityException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SecurityException)
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
namespace System::Security {
class SecurityException;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::SecurityException);
// Dependencies System.SystemException
namespace System::Security {
// Is value type: false
// CS Name: System.Security.SecurityException
class CORDL_TYPE SecurityException : public ::System::SystemException {
public:
  // Declarations
  /// @brief Field permissionState, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_permissionState, put = __cordl_internal_set_permissionState)) ::StringW permissionState;

  /// @brief Method GetObjectData, addr 0x58db9f0, size 0x114, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Security::SecurityException* New_ctor();

  static inline ::System::Security::SecurityException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Security::SecurityException* New_ctor(::StringW message);

  static inline ::System::Security::SecurityException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method ToString, addr 0x58dbb04, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_permissionState() const;

  constexpr ::StringW& __cordl_internal_get_permissionState();

  constexpr void __cordl_internal_set_permissionState(::StringW value);

  /// @brief Method .ctor, addr 0x58db830, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x58db8b4, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x58db890, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x58db9cc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecurityException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecurityException(SecurityException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecurityException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecurityException(SecurityException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2909 };

  /// @brief Field permissionState, offset: 0x90, size: 0x8, def value: None
  ::StringW ___permissionState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::SecurityException, ___permissionState) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::SecurityException, 0x98>, "Size mismatch!");

} // namespace System::Security
NEED_NO_BOX(::System::Security::SecurityException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecurityException*, "System.Security", "SecurityException");
