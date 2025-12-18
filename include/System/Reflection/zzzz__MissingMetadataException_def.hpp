#pragma once
// IWYU pragma private; include "System/Reflection/MissingMetadataException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TypeAccessException_def.hpp"
CORDL_MODULE_EXPORT(MissingMetadataException)
// Forward declare root types
namespace System::Reflection {
class MissingMetadataException;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::MissingMetadataException);
// Dependencies System.TypeAccessException
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.MissingMetadataException
class CORDL_TYPE MissingMetadataException : public ::System::TypeAccessException {
public:
  // Declarations
  static inline ::System::Reflection::MissingMetadataException* New_ctor();

  /// @brief Method .ctor, addr 0x59d5b9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissingMetadataException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissingMetadataException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissingMetadataException(MissingMetadataException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissingMetadataException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissingMetadataException(MissingMetadataException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3531 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MissingMetadataException, 0xb0>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::MissingMetadataException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MissingMetadataException*, "System.Reflection", "MissingMetadataException");
