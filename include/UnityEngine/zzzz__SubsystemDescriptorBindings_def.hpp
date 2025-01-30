#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemDescriptorBindings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SubsystemDescriptorBindings)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class SubsystemDescriptorBindings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SubsystemDescriptorBindings);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SubsystemDescriptorBindings
class CORDL_TYPE SubsystemDescriptorBindings : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x491ba54, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::System::IntPtr descriptorPtr);

  /// @brief Method GetId, addr 0x491ba04, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetId(::System::IntPtr descriptorPtr);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubsystemDescriptorBindings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorBindings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubsystemDescriptorBindings(SubsystemDescriptorBindings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorBindings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubsystemDescriptorBindings(SubsystemDescriptorBindings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18729 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SubsystemDescriptorBindings, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SubsystemDescriptorBindings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemDescriptorBindings*, "UnityEngine", "SubsystemDescriptorBindings");
