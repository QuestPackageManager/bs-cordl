#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubsystemBindings)
// Forward declare root types
namespace UnityEngine {
class SubsystemBindings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SubsystemBindings);
// Type: UnityEngine::SubsystemBindings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::SubsystemBindings*
class CORDL_TYPE SubsystemBindings : public ::System::Object {
public:
  // Declarations
  /// @brief Method DestroySubsystem, addr 0x2e2777c, size 0x3c, virtual false, abstract: false, final false
  static inline void DestroySubsystem(void* nativePtr);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SubsystemBindings, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SubsystemBindings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemBindings*, "UnityEngine", "SubsystemBindings");
