#pragma once
// IWYU pragma private; include "UnityEngine/IntegratedSubsystem_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__IntegratedSubsystem_def.hpp"
CORDL_MODULE_EXPORT(IntegratedSubsystem_1)
// Forward declare root types
namespace UnityEngine {
template <typename TSubsystemDescriptor> class IntegratedSubsystem_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::IntegratedSubsystem_1);
// Dependencies UnityEngine.IntegratedSubsystem
namespace UnityEngine {
// cpp template
template <typename TSubsystemDescriptor>
// Is value type: false
// CS Name: UnityEngine.IntegratedSubsystem`1<TSubsystemDescriptor>
class CORDL_TYPE IntegratedSubsystem_1 : public ::UnityEngine::IntegratedSubsystem {
public:
  // Declarations
  __declspec(property(get = get_SubsystemDescriptor)) TSubsystemDescriptor SubsystemDescriptor;

  __declspec(property(get = get_subsystemDescriptor)) TSubsystemDescriptor subsystemDescriptor;

  static inline ::UnityEngine::IntegratedSubsystem_1<TSubsystemDescriptor>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SubsystemDescriptor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TSubsystemDescriptor get_SubsystemDescriptor();

  /// @brief Method get_subsystemDescriptor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TSubsystemDescriptor get_subsystemDescriptor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegratedSubsystem_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegratedSubsystem_1(IntegratedSubsystem_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegratedSubsystem_1(IntegratedSubsystem_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18721 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::IntegratedSubsystem_1, "UnityEngine", "IntegratedSubsystem`1");
