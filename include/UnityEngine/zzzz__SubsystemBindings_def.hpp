#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemBindings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubsystemBindings)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class SubsystemBindings;
}
// Write type traits
MARK_REF_T(::UnityEngine::SubsystemBindings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SubsystemBindings*, "UnityEngine", "SubsystemBindings");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SubsystemBindings
class CORDL_TYPE SubsystemBindings : public ::System::Object {
public:
  // Declarations
  /// @brief Method DestroySubsystem, addr 0x6bb4c9c, size 0x3c, virtual false, abstract: false, final false
  static inline void DestroySubsystem(::System::IntPtr nativePtr);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubsystemBindings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubsystemBindings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubsystemBindings(SubsystemBindings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubsystemBindings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubsystemBindings(SubsystemBindings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22850 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SubsystemBindings) == 0x10, "Size mismatch!");

} // namespace UnityEngine
