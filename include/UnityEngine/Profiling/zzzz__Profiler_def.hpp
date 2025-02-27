#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/Profiler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Profiler)
// Forward declare root types
namespace UnityEngine::Profiling {
class Profiler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Profiling::Profiler);
// Dependencies System.Object
namespace UnityEngine::Profiling {
// Is value type: false
// CS Name: UnityEngine.Profiling.Profiler
class CORDL_TYPE Profiler : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetMonoUsedSizeLong, addr 0x48ca20c, size 0x28, virtual false, abstract: false, final false
  static inline int64_t GetMonoUsedSizeLong();

  /// @brief Method GetTotalAllocatedMemoryLong, addr 0x48ca234, size 0x28, virtual false, abstract: false, final false
  static inline int64_t GetTotalAllocatedMemoryLong();

  /// @brief Method GetTotalReservedMemoryLong, addr 0x48ca25c, size 0x28, virtual false, abstract: false, final false
  static inline int64_t GetTotalReservedMemoryLong();

  /// @brief Method get_enabled, addr 0x48ca1a8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_enabled();

  /// @brief Method set_enableBinaryLog, addr 0x48ca130, size 0x3c, virtual false, abstract: false, final false
  static inline void set_enableBinaryLog(bool value);

  /// @brief Method set_enabled, addr 0x48ca1d0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_enabled(bool value);

  /// @brief Method set_logFile, addr 0x48ca0f4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_logFile(::StringW value);

  /// @brief Method set_maxUsedMemory, addr 0x48ca16c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_maxUsedMemory(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Profiler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Profiler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Profiler(Profiler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Profiler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Profiler(Profiler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10974 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::Profiler, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Profiling
NEED_NO_BOX(::UnityEngine::Profiling::Profiler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Profiler*, "UnityEngine.Profiling", "Profiler");
