#pragma once
// IWYU pragma private; include "System/Security/Authentication/ExtendedProtection/ExtendedProtectionPolicy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExtendedProtectionPolicy)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Authentication::ExtendedProtection {
struct PolicyEnforcement;
}
// Forward declare root types
namespace System::Security::Authentication::ExtendedProtection {
class ExtendedProtectionPolicy;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy);
// Dependencies System.Object, System.Runtime.Serialization.ISerializable
namespace System::Security::Authentication::ExtendedProtection {
// Is value type: false
// CS Name: System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy
class CORDL_TYPE ExtendedProtectionPolicy : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  static inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                           ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* New_ctor(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement policyEnforcement);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x4432fbc, size 0x38, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToString, addr 0x4432fb4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4432f74, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x4432f6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement policyEnforcement);

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtendedProtectionPolicy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtendedProtectionPolicy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtendedProtectionPolicy(ExtendedProtectionPolicy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtendedProtectionPolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtendedProtectionPolicy(ExtendedProtectionPolicy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9287 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy, 0x10>, "Size mismatch!");

} // namespace System::Security::Authentication::ExtendedProtection
NEED_NO_BOX(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*, "System.Security.Authentication.ExtendedProtection", "ExtendedProtectionPolicy");
