#pragma once
// IWYU pragma private; include "UnityEngine\Profiling\Profiler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::UnityEngine::Profiling::Profiler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Profiling::Profiler*, "UnityEngine.Profiling", "Profiler");
// Dependencies System.Object
namespace UnityEngine::Profiling {
// Is value type: false
// CS Name: UnityEngine.Profiling.Profiler
class CORDL_TYPE Profiler : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetMonoUsedSizeLong, addr 0x6afb56c, size 0x28, virtual false, abstract: false, final false
  static inline int64_t GetMonoUsedSizeLong();

  /// @brief Method GetRuntimeMemorySizeLong, addr 0x6afb4a0, size 0x90, virtual false, abstract: false, final false
  static inline int64_t GetRuntimeMemorySizeLong(::UnityEngine::Object* o);

  /// @brief Method GetRuntimeMemorySizeLong_Injected, addr 0x6afb530, size 0x3c, virtual false, abstract: false, final false
  static inline int64_t GetRuntimeMemorySizeLong_Injected(::System::IntPtr o);

  /// @brief Method GetTotalAllocatedMemoryLong, addr 0x6afb594, size 0x28, virtual false, abstract: false, final false
  static inline int64_t GetTotalAllocatedMemoryLong();

  /// @brief Method GetTotalReservedMemoryLong, addr 0x6afb5bc, size 0x28, virtual false, abstract: false, final false
  static inline int64_t GetTotalReservedMemoryLong();

  /// @brief Method get_enabled, addr 0x6afb43c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_enabled();

  /// @brief Method set_enableBinaryLog, addr 0x6afb3c4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_enableBinaryLog(bool value);

  /// @brief Method set_enabled, addr 0x6afb464, size 0x3c, virtual false, abstract: false, final false
  static inline void set_enabled(bool value);

  /// @brief Method set_logFile, addr 0x6afb264, size 0x124, virtual false, abstract: false, final false
  static inline void set_logFile(::StringW value);

  /// @brief Method set_logFile_Injected, addr 0x6afb388, size 0x3c, virtual false, abstract: false, final false
  static inline void set_logFile_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_maxUsedMemory, addr 0x6afb400, size 0x3c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10427 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Profiling::Profiler) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Profiling
