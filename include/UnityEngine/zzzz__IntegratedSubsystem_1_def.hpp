#pragma once
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
// Type: UnityEngine::IntegratedSubsystem`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// cpp template
template <typename TSubsystemDescriptor>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15964))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15965))
// CS Name: ::UnityEngine::IntegratedSubsystem`1<TSubsystemDescriptor>*
class CORDL_TYPE IntegratedSubsystem_1 : public ::UnityEngine::IntegratedSubsystem {
public:
  // Declarations
  __declspec(property(get = get_subsystemDescriptor)) TSubsystemDescriptor subsystemDescriptor;

  __declspec(property(get = get_SubsystemDescriptor)) TSubsystemDescriptor SubsystemDescriptor;

  /// @brief Method get_subsystemDescriptor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TSubsystemDescriptor get_subsystemDescriptor();

  /// @brief Method get_SubsystemDescriptor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TSubsystemDescriptor get_SubsystemDescriptor();

  static inline ::UnityEngine::IntegratedSubsystem_1<TSubsystemDescriptor>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegratedSubsystem_1(IntegratedSubsystem_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegratedSubsystem_1(IntegratedSubsystem_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegratedSubsystem_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::IntegratedSubsystem_1, "UnityEngine", "IntegratedSubsystem`1");
