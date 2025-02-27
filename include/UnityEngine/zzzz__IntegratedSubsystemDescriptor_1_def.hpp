#pragma once
// IWYU pragma private; include "UnityEngine/IntegratedSubsystemDescriptor_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_def.hpp"
CORDL_MODULE_EXPORT(IntegratedSubsystemDescriptor_1)
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
template <typename TSubsystem> class IntegratedSubsystemDescriptor_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::IntegratedSubsystemDescriptor_1);
// Dependencies UnityEngine.IntegratedSubsystemDescriptor
namespace UnityEngine {
// cpp template
template <typename TSubsystem>
// Is value type: false
// CS Name: UnityEngine.IntegratedSubsystemDescriptor`1<TSubsystem>
class CORDL_TYPE IntegratedSubsystemDescriptor_1 : public ::UnityEngine::IntegratedSubsystemDescriptor {
public:
  // Declarations
  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TSubsystem Create();

  /// @brief Method CreateImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::ISubsystem* CreateImpl();

  static inline ::UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegratedSubsystemDescriptor_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegratedSubsystemDescriptor_1(IntegratedSubsystemDescriptor_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegratedSubsystemDescriptor_1(IntegratedSubsystemDescriptor_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18733 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::IntegratedSubsystemDescriptor_1, "UnityEngine", "IntegratedSubsystemDescriptor`1");
