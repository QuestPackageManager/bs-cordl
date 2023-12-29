#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__UnauthorizedAccessException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PrivilegeNotHeldException)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Security::AccessControl {
class PrivilegeNotHeldException;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::PrivilegeNotHeldException);
// Type: System.Security.AccessControl::PrivilegeNotHeldException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2499))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3011))
// CS Name: ::System.Security.AccessControl::PrivilegeNotHeldException*
class CORDL_TYPE PrivilegeNotHeldException : public ::System::UnauthorizedAccessException {
public:
  // Declarations
  /// @brief Field _privilegeName, offset 0x90, size 0x8
  __declspec(property(get = __get__privilegeName, put = __set__privilegeName))::StringW _privilegeName;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr ::StringW& __get__privilegeName();

  constexpr ::StringW const& __get__privilegeName() const;

  constexpr void __set__privilegeName(::StringW value);

  static inline ::System::Security::AccessControl::PrivilegeNotHeldException* New_ctor();

  /// @brief Method .ctor addr 0x2328a3c size 0x4c virtual false final false
  inline void _ctor();

  static inline ::System::Security::AccessControl::PrivilegeNotHeldException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                       ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x2328a88 size 0x88 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData addr 0x2328b10 size 0xdc virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "PrivilegeNotHeldException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivilegeNotHeldException(PrivilegeNotHeldException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivilegeNotHeldException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivilegeNotHeldException(PrivilegeNotHeldException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivilegeNotHeldException();

public:
  /// @brief Field _privilegeName, offset: 0x90, size: 0x8, def value: None
  ::StringW ____privilegeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::PrivilegeNotHeldException, 0x98>, "Size mismatch!");

static_assert(offsetof(::System::Security::AccessControl::PrivilegeNotHeldException, ____privilegeName) == 0x90, "Offset mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::PrivilegeNotHeldException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::PrivilegeNotHeldException*, "System.Security.AccessControl", "PrivilegeNotHeldException");
