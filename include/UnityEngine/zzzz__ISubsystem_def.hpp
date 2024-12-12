#pragma once
// IWYU pragma private; include "UnityEngine/ISubsystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISubsystem)
// Forward declare root types
namespace UnityEngine {
class ISubsystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ISubsystem);
// Dependencies
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ISubsystem
class CORDL_TYPE ISubsystem {
public:
  // Declarations
  /// @brief Method Destroy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Destroy();

  /// @brief Method Start, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Stop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Stop();

  // Ctor Parameters [CppParam { name: "", ty: "ISubsystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISubsystem(ISubsystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18718 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ISubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ISubsystem*, "UnityEngine", "ISubsystem");
