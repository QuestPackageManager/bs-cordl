#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IdentityNotMappedException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Security::Principal {
class IdentityNotMappedException;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::IdentityNotMappedException);
// Type: System.Security.Principal::IdentityNotMappedException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2999))
// CS Name: ::System.Security.Principal::IdentityNotMappedException*
class CORDL_TYPE IdentityNotMappedException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Security::Principal::IdentityNotMappedException* New_ctor();

  /// @brief Method .ctor addr 0x2476dc0 size 0x58 virtual false final false
  inline void _ctor();

  static inline ::System::Security::Principal::IdentityNotMappedException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x2476e18 size 0x8 virtual false final false
  inline void _ctor(::StringW message);

  /// @brief Method GetObjectData addr 0x2476e20 size 0x4 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  // Ctor Parameters [CppParam { name: "", ty: "IdentityNotMappedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdentityNotMappedException(IdentityNotMappedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdentityNotMappedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdentityNotMappedException(IdentityNotMappedException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdentityNotMappedException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::IdentityNotMappedException, 0x90>, "Size mismatch!");

} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::IdentityNotMappedException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::IdentityNotMappedException*, "System.Security.Principal", "IdentityNotMappedException");
