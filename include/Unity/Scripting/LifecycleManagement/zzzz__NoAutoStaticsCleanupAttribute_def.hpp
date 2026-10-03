#pragma once
// IWYU pragma private; include "Unity/Scripting/LifecycleManagement/NoAutoStaticsCleanupAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NoAutoStaticsCleanupAttribute)
// Forward declare root types
namespace Unity::Scripting::LifecycleManagement {
class NoAutoStaticsCleanupAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Scripting::LifecycleManagement::NoAutoStaticsCleanupAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Scripting::LifecycleManagement::NoAutoStaticsCleanupAttribute*, "Unity.Scripting.LifecycleManagement", "NoAutoStaticsCleanupAttribute");
// [VisibleToOtherModules]
// [AttributeUsage((System.AttributeTargets)908, AllowMultiple = false)]
// Dependencies System.Attribute
namespace Unity::Scripting::LifecycleManagement {
// Is value type: false
// CS Name: Unity.Scripting.LifecycleManagement.NoAutoStaticsCleanupAttribute
class CORDL_TYPE NoAutoStaticsCleanupAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Scripting::LifecycleManagement::NoAutoStaticsCleanupAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6ead42c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoAutoStaticsCleanupAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoAutoStaticsCleanupAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoAutoStaticsCleanupAttribute(NoAutoStaticsCleanupAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoAutoStaticsCleanupAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoAutoStaticsCleanupAttribute(NoAutoStaticsCleanupAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9488 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Scripting::LifecycleManagement::NoAutoStaticsCleanupAttribute) == 0x10, "Size mismatch!");

} // namespace Unity::Scripting::LifecycleManagement
