#pragma once
// IWYU pragma private; include "Unity\Properties\Internal\ReflectionUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ReflectionUtilities)
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class ReflectionUtilities;
}
// Write type traits
MARK_REF_T(::Unity::Properties::Internal::ReflectionUtilities*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::ReflectionUtilities*, "Unity.Properties.Internal", "ReflectionUtilities");
// Dependencies System.Object
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.ReflectionUtilities
class CORDL_TYPE ReflectionUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method SanitizeMemberName, addr 0x6ba1b48, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW SanitizeMemberName(::System::Reflection::MemberInfo* info);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionUtilities(ReflectionUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionUtilities(ReflectionUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19766 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::ReflectionUtilities) == 0x10, "Size mismatch!");

} // namespace Unity::Properties::Internal
