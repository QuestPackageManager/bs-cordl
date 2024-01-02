#pragma once
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
// Type: UnityEngine::ISubsystem
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15967))
// CS Name: ::UnityEngine::ISubsystem*
class CORDL_TYPE ISubsystem {
public:
  // Declarations
  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Start();

  /// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Stop();

  /// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Destroy();

  // Ctor Parameters [CppParam { name: "", ty: "ISubsystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISubsystem(ISubsystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISubsystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISubsystem(ISubsystem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ISubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ISubsystem*, "UnityEngine", "ISubsystem");
