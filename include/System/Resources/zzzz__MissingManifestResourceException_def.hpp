#pragma once
// IWYU pragma private; include "System/Resources/MissingManifestResourceException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
CORDL_MODULE_EXPORT(MissingManifestResourceException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Resources {
class MissingManifestResourceException;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::MissingManifestResourceException);
// Dependencies System.SystemException
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.MissingManifestResourceException
class CORDL_TYPE MissingManifestResourceException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Resources::MissingManifestResourceException* New_ctor();

  static inline ::System::Resources::MissingManifestResourceException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d1b24c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d1b2a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissingManifestResourceException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissingManifestResourceException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissingManifestResourceException(MissingManifestResourceException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissingManifestResourceException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissingManifestResourceException(MissingManifestResourceException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3425 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::MissingManifestResourceException, 0x90>, "Size mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::MissingManifestResourceException);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::MissingManifestResourceException*, "System.Resources", "MissingManifestResourceException");
