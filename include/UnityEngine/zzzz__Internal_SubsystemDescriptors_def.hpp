#pragma once
// IWYU pragma private; include "UnityEngine/Internal_SubsystemDescriptors.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Internal_SubsystemDescriptors)
namespace UnityEngine {
class SubsystemDescriptor;
}
// Forward declare root types
namespace UnityEngine {
class Internal_SubsystemDescriptors;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Internal_SubsystemDescriptors);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Internal_SubsystemDescriptors
class CORDL_TYPE Internal_SubsystemDescriptors : public ::System::Object {
public:
  // Declarations
  /// @brief Method Internal_AddDescriptor, addr 0x491b090, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_AddDescriptor(::UnityEngine::SubsystemDescriptor* descriptor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Internal_SubsystemDescriptors();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Internal_SubsystemDescriptors", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Internal_SubsystemDescriptors(Internal_SubsystemDescriptors&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Internal_SubsystemDescriptors", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Internal_SubsystemDescriptors(Internal_SubsystemDescriptors const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18740 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Internal_SubsystemDescriptors, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Internal_SubsystemDescriptors);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Internal_SubsystemDescriptors*, "UnityEngine", "Internal_SubsystemDescriptors");
