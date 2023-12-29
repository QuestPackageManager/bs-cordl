#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Profiler)
// Forward declare root types
namespace UnityEngine::Profiling {
class Profiler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Profiling::Profiler);
// Type: UnityEngine.Profiling::Profiler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Profiling {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10219))
// CS Name: ::UnityEngine.Profiling::Profiler*
class CORDL_TYPE Profiler : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetMonoUsedSizeLong addr 0x2b7f824 size 0x28 virtual false final false
  static inline int64_t GetMonoUsedSizeLong();

  /// @brief Method GetTotalAllocatedMemoryLong addr 0x2b7f84c size 0x28 virtual false final false
  static inline int64_t GetTotalAllocatedMemoryLong();

  /// @brief Method GetTotalReservedMemoryLong addr 0x2b7f874 size 0x28 virtual false final false
  static inline int64_t GetTotalReservedMemoryLong();

  // Ctor Parameters [CppParam { name: "", ty: "Profiler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Profiler(Profiler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Profiler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Profiler(Profiler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Profiler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::Profiler, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Profiling
NEED_NO_BOX(::UnityEngine::Profiling::Profiler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Profiler*, "UnityEngine.Profiling", "Profiler");
