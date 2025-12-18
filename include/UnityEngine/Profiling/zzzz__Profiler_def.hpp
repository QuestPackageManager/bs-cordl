#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/Profiler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Profiler)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Object;
}
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
  /// @brief Method GetMonoUsedSizeLong, addr 0x693073c, size 0x28, virtual false, abstract: false, final false
  static inline int64_t GetMonoUsedSizeLong();

  /// @brief Method GetRuntimeMemorySizeLong, addr 0x6930670, size 0x90, virtual false, abstract: false, final false
  static inline int64_t GetRuntimeMemorySizeLong(::UnityEngine::Object* o);

  /// @brief Method GetRuntimeMemorySizeLong_Injected, addr 0x6930700, size 0x3c, virtual false, abstract: false, final false
  static inline int64_t GetRuntimeMemorySizeLong_Injected(::System::IntPtr o);

  /// @brief Method GetTotalAllocatedMemoryLong, addr 0x6930764, size 0x28, virtual false, abstract: false, final false
  static inline int64_t GetTotalAllocatedMemoryLong();

  /// @brief Method GetTotalReservedMemoryLong, addr 0x693078c, size 0x28, virtual false, abstract: false, final false
  static inline int64_t GetTotalReservedMemoryLong();

  /// @brief Method get_enabled, addr 0x693060c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_enabled();

  /// @brief Method set_enableBinaryLog, addr 0x6930594, size 0x3c, virtual false, abstract: false, final false
  static inline void set_enableBinaryLog(bool value);

  /// @brief Method set_enabled, addr 0x6930634, size 0x3c, virtual false, abstract: false, final false
  static inline void set_enabled(bool value);

  /// @brief Method set_logFile, addr 0x6930434, size 0x124, virtual false, abstract: false, final false
  static inline void set_logFile(::StringW value);

  /// @brief Method set_logFile_Injected, addr 0x6930558, size 0x3c, virtual false, abstract: false, final false
  static inline void set_logFile_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_maxUsedMemory, addr 0x69305d0, size 0x3c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10405 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::Profiler, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Profiling
NEED_NO_BOX(::UnityEngine::Profiling::Profiler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Profiler*, "UnityEngine.Profiling", "Profiler");
