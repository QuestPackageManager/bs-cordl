#pragma once
// IWYU pragma private; include "Internal/Runtime/Augments/ReflectionExecutionDomainCallbacks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReflectionExecutionDomainCallbacks)
namespace System {
class Exception;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Internal::Runtime::Augments {
class ReflectionExecutionDomainCallbacks;
}
// Write type traits
MARK_REF_PTR_T(::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks);
// Dependencies System.Object
namespace Internal::Runtime::Augments {
// Is value type: false
// CS Name: Internal.Runtime.Augments.ReflectionExecutionDomainCallbacks
class CORDL_TYPE ReflectionExecutionDomainCallbacks : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateMissingMetadataException, addr 0x58b2380, size 0x58, virtual false, abstract: false, final false
  inline ::System::Exception* CreateMissingMetadataException(::System::Type* attributeType);

  static inline ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* New_ctor();

  /// @brief Method .ctor, addr 0x58b237c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionExecutionDomainCallbacks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionExecutionDomainCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionExecutionDomainCallbacks(ReflectionExecutionDomainCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionExecutionDomainCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionExecutionDomainCallbacks(ReflectionExecutionDomainCallbacks const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2307 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks, 0x10>, "Size mismatch!");

} // namespace Internal::Runtime::Augments
NEED_NO_BOX(::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*, "Internal.Runtime.Augments", "ReflectionExecutionDomainCallbacks");
