#pragma once
// IWYU pragma private; include "System/Security/Principal/IdentityNotMappedException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IdentityNotMappedException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Security::Principal {
class IdentityNotMappedException;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::IdentityNotMappedException);
// Dependencies System.SystemException
namespace System::Security::Principal {
// Is value type: false
// CS Name: System.Security.Principal.IdentityNotMappedException
class CORDL_TYPE IdentityNotMappedException : public ::System::SystemException {
public:
  // Declarations
  /// @brief Method GetObjectData, addr 0x3cb9584, size 0x4, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  static inline ::System::Security::Principal::IdentityNotMappedException* New_ctor();

  static inline ::System::Security::Principal::IdentityNotMappedException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3cb9524, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3cb957c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdentityNotMappedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IdentityNotMappedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdentityNotMappedException(IdentityNotMappedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdentityNotMappedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdentityNotMappedException(IdentityNotMappedException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2998 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::IdentityNotMappedException, 0x90>, "Size mismatch!");

} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::IdentityNotMappedException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::IdentityNotMappedException*, "System.Security.Principal", "IdentityNotMappedException");
