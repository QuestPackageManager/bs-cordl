#pragma once
// IWYU pragma private; include "Unity/Scripting/LifecycleManagement/AutoStaticsCleanupOnCodeReloadAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AutoStaticsCleanupOnCodeReloadAttribute)
// Forward declare root types
namespace Unity::Scripting::LifecycleManagement {
class AutoStaticsCleanupOnCodeReloadAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Scripting::LifecycleManagement::AutoStaticsCleanupOnCodeReloadAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Scripting::LifecycleManagement::AutoStaticsCleanupOnCodeReloadAttribute*, "Unity.Scripting.LifecycleManagement", "AutoStaticsCleanupOnCodeReloadAttribute");
// [VisibleToOtherModules]
// [AttributeUsage((System.AttributeTargets)908, AllowMultiple = true)]
// Dependencies System.Attribute
namespace Unity::Scripting::LifecycleManagement {
// Is value type: false
// CS Name: Unity.Scripting.LifecycleManagement.AutoStaticsCleanupOnCodeReloadAttribute
class CORDL_TYPE AutoStaticsCleanupOnCodeReloadAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Scripting::LifecycleManagement::AutoStaticsCleanupOnCodeReloadAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6ead428, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoStaticsCleanupOnCodeReloadAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoStaticsCleanupOnCodeReloadAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoStaticsCleanupOnCodeReloadAttribute(AutoStaticsCleanupOnCodeReloadAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoStaticsCleanupOnCodeReloadAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoStaticsCleanupOnCodeReloadAttribute(AutoStaticsCleanupOnCodeReloadAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9487 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Scripting::LifecycleManagement::AutoStaticsCleanupOnCodeReloadAttribute) == 0x10, "Size mismatch!");

} // namespace Unity::Scripting::LifecycleManagement
