#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/Profiler.hpp"
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
// [UsedByNativeCode]
// [MovedFrom("UnityEngine")]
// [NativeHeader("Runtime/Allocator/MemoryManager.h")]
// [NativeHeader("Runtime/Profiler/ScriptBindings/Profiler.bindings.h")]
// [NativeHeader("Runtime/Profiler/Profiler.h")]
// [NativeHeader("Runtime/ScriptingBackend/ScriptingApi.h")]
// [NativeHeader("Runtime/Utilities/MemoryUtilities.h")]
// [NativeHeader("Runtime/Profiler/MemoryProfiler.h")]
// Dependencies System.Object
namespace UnityEngine::Profiling {
// Is value type: false
// CS Name: UnityEngine.Profiling.Profiler
class CORDL_TYPE Profiler : public ::System::Object {
public:
  // Declarations
  /// [NativeMethod(Name = "scripting_gc_get_used_size", IsFreeFunction = true)]
  /// @brief Method GetMonoUsedSizeLong, addr 0x6afb56c, size 0x28, virtual false, abstract: false, final false
  static inline int64_t GetMonoUsedSizeLong();

  /// [NativeMethod(Name = "ProfilerBindings::GetRuntimeMemorySizeLong", IsFreeFunction = true)]
  /// @brief Method GetRuntimeMemorySizeLong, addr 0x6afb4a0, size 0x90, virtual false, abstract: false, final false
  static inline int64_t GetRuntimeMemorySizeLong(/* [NotNull] */ ::UnityEngine::Object* o);

  /// @brief Method GetRuntimeMemorySizeLong_Injected, addr 0x6afb530, size 0x3c, virtual false, abstract: false, final false
  static inline int64_t GetRuntimeMemorySizeLong_Injected(::System::IntPtr o);

  /// [NativeMethod(Name = "GetTotalAllocatedMemory")]
  /// [NativeConditional("ENABLE_MEMORY_MANAGER")]
  /// [StaticAccessor("GetMemoryManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
  /// @brief Method GetTotalAllocatedMemoryLong, addr 0x6afb594, size 0x28, virtual false, abstract: false, final false
  static inline int64_t GetTotalAllocatedMemoryLong();

  /// [StaticAccessor("GetMemoryManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
  /// [NativeMethod(Name = "GetTotalReservedMemory")]
  /// [NativeConditional("ENABLE_MEMORY_MANAGER")]
  /// @brief Method GetTotalReservedMemoryLong, addr 0x6afb5bc, size 0x28, virtual false, abstract: false, final false
  static inline int64_t GetTotalReservedMemoryLong();

  /// [NativeMethod(Name = "profiler_is_enabled", IsFreeFunction = true, IsThreadSafe = true)]
  /// [NativeConditional("ENABLE_PROFILER")]
  /// @brief Method get_enabled, addr 0x6afb43c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_enabled();

  /// [NativeMethod(Name = "ProfilerBindings::SetBinaryLogEnabled", IsFreeFunction = true)]
  /// @brief Method set_enableBinaryLog, addr 0x6afb3c4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_enableBinaryLog(bool value);

  /// [NativeMethod(Name = "ProfilerBindings::SetProfilerEnabled", IsFreeFunction = true)]
  /// @brief Method set_enabled, addr 0x6afb464, size 0x3c, virtual false, abstract: false, final false
  static inline void set_enabled(bool value);

  /// @brief Method set_logFile, addr 0x6afb264, size 0x124, virtual false, abstract: false, final false
  static inline void set_logFile(::StringW value);

  /// @brief Method set_logFile_Injected, addr 0x6afb388, size 0x3c, virtual false, abstract: false, final false
  static inline void set_logFile_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// [NativeMethod(Name = "ProfilerBindings::SetMaxUsedMemory", IsFreeFunction = true)]
  /// @brief Method set_maxUsedMemory, addr 0x6afb400, size 0x3c, virtual false, abstract: false, final false
  static inline void set_maxUsedMemory(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Profiler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Profiler", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Profiler(Profiler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Profiler", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Profiler(Profiler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10427 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Profiling::Profiler) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Profiling
