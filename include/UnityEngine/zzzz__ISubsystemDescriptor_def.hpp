#pragma once
// IWYU pragma private; include "UnityEngine/ISubsystemDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ISubsystemDescriptor)
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
class ISubsystemDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ISubsystemDescriptor);
// Dependencies
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ISubsystemDescriptor
class CORDL_TYPE ISubsystemDescriptor {
public:
  // Declarations
  __declspec(property(get = get_id)) ::StringW id;

  /// @brief Method Create, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::ISubsystem* Create();

  /// @brief Method get_id, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_id();

  // Ctor Parameters [CppParam { name: "", ty: "ISubsystemDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISubsystemDescriptor(ISubsystemDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22499 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ISubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ISubsystemDescriptor*, "UnityEngine", "ISubsystemDescriptor");
