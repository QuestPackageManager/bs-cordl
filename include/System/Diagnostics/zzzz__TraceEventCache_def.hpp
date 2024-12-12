#pragma once
// IWYU pragma private; include "System/Diagnostics/TraceEventCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TraceEventCache)
namespace System::Collections {
class Stack;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceEventCache;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::TraceEventCache);
// Dependencies System.DateTime, System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.TraceEventCache
class CORDL_TYPE TraceEventCache : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Callstack)) ::StringW Callstack;

  __declspec(property(get = get_DateTime)) ::System::DateTime DateTime;

  __declspec(property(get = get_LogicalOperationStack)) ::System::Collections::Stack* LogicalOperationStack;

  __declspec(property(get = get_ProcessId)) int32_t ProcessId;

  __declspec(property(get = get_ThreadId)) ::StringW ThreadId;

  __declspec(property(get = get_Timestamp)) int64_t Timestamp;

  /// @brief Field dateTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dateTime, put = __cordl_internal_set_dateTime)) ::System::DateTime dateTime;

  /// @brief Field processId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_processId, put = setStaticF_processId)) int32_t processId;

  /// @brief Field processName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_processName, put = setStaticF_processName)) ::StringW processName;

  /// @brief Field stackTrace, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_stackTrace, put = __cordl_internal_set_stackTrace)) ::StringW stackTrace;

  /// @brief Field timeStamp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_timeStamp, put = __cordl_internal_set_timeStamp)) int64_t timeStamp;

  /// @brief Method GetProcessId, addr 0x442a604, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetProcessId();

  /// @brief Method GetThreadId, addr 0x442a6c8, size 0x20, virtual false, abstract: false, final false
  static inline int32_t GetThreadId();

  /// @brief Method InitProcessInfo, addr 0x442a750, size 0x12c, virtual false, abstract: false, final false
  static inline void InitProcessInfo();

  static inline ::System::Diagnostics::TraceEventCache* New_ctor();

  constexpr ::System::DateTime const& __cordl_internal_get_dateTime() const;

  constexpr ::System::DateTime& __cordl_internal_get_dateTime();

  constexpr ::StringW const& __cordl_internal_get_stackTrace() const;

  constexpr ::StringW& __cordl_internal_get_stackTrace();

  constexpr int64_t const& __cordl_internal_get_timeStamp() const;

  constexpr int64_t& __cordl_internal_get_timeStamp();

  constexpr void __cordl_internal_set_dateTime(::System::DateTime value);

  constexpr void __cordl_internal_set_stackTrace(::StringW value);

  constexpr void __cordl_internal_set_timeStamp(int64_t value);

  /// @brief Method .ctor, addr 0x442ab38, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_processId();

  static inline ::StringW getStaticF_processName();

  /// @brief Method get_Callstack, addr 0x442a534, size 0x20, virtual false, abstract: false, final false
  inline ::StringW get_Callstack();

  /// @brief Method get_DateTime, addr 0x442a56c, size 0x94, virtual false, abstract: false, final false
  inline ::System::DateTime get_DateTime();

  /// @brief Method get_LogicalOperationStack, addr 0x442a554, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Stack* get_LogicalOperationStack();

  /// @brief Method get_ProcessId, addr 0x442a600, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_ProcessId();

  /// @brief Method get_ThreadId, addr 0x442a658, size 0x70, virtual false, abstract: false, final false
  inline ::StringW get_ThreadId();

  /// @brief Method get_Timestamp, addr 0x442a6e8, size 0x64, virtual false, abstract: false, final false
  inline int64_t get_Timestamp();

  static inline void setStaticF_processId(int32_t value);

  static inline void setStaticF_processName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceEventCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceEventCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceEventCache(TraceEventCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceEventCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceEventCache(TraceEventCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9254 };

  /// @brief Field timeStamp, offset: 0x10, size: 0x8, def value: None
  int64_t ___timeStamp;

  /// @brief Field dateTime, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ___dateTime;

  /// @brief Field stackTrace, offset: 0x20, size: 0x8, def value: None
  ::StringW ___stackTrace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::TraceEventCache, ___timeStamp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceEventCache, ___dateTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceEventCache, ___stackTrace) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceEventCache, 0x28>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::TraceEventCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceEventCache*, "System.Diagnostics", "TraceEventCache");
