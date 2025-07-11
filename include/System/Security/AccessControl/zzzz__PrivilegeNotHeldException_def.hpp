#pragma once
// IWYU pragma private; include "System/Security/AccessControl/PrivilegeNotHeldException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__UnauthorizedAccessException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PrivilegeNotHeldException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Security::AccessControl {
class PrivilegeNotHeldException;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::PrivilegeNotHeldException);
// Dependencies System.Runtime.Serialization.ISerializable, System.UnauthorizedAccessException
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.PrivilegeNotHeldException
class CORDL_TYPE PrivilegeNotHeldException : public ::System::UnauthorizedAccessException {
public:
  // Declarations
  /// @brief Field _privilegeName, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__privilegeName, put = __cordl_internal_set__privilegeName)) ::StringW _privilegeName;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetObjectData, addr 0x3cc2770, size 0xdc, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Security::AccessControl::PrivilegeNotHeldException* New_ctor();

  static inline ::System::Security::AccessControl::PrivilegeNotHeldException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                       ::System::Runtime::Serialization::StreamingContext context);

  constexpr ::StringW const& __cordl_internal_get__privilegeName() const;

  constexpr ::StringW& __cordl_internal_get__privilegeName();

  constexpr void __cordl_internal_set__privilegeName(::StringW value);

  /// @brief Method .ctor, addr 0x3cc269c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3cc26e8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivilegeNotHeldException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrivilegeNotHeldException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivilegeNotHeldException(PrivilegeNotHeldException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivilegeNotHeldException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivilegeNotHeldException(PrivilegeNotHeldException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3011 };

  /// @brief Field _privilegeName, offset: 0x90, size: 0x8, def value: None
  ::StringW ____privilegeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::AccessControl::PrivilegeNotHeldException, ____privilegeName) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::PrivilegeNotHeldException, 0x98>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::PrivilegeNotHeldException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::PrivilegeNotHeldException*, "System.Security.AccessControl", "PrivilegeNotHeldException");
