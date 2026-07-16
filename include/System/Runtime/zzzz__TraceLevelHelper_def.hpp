#pragma once
// IWYU pragma private; include "System/Runtime/TraceLevelHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TraceLevelHelper)
namespace System::Diagnostics {
struct TraceEventType;
}
namespace System::Runtime {
struct TraceEventLevel;
}
namespace System::Runtime {
struct TraceEventOpcode;
}
// Forward declare root types
namespace System::Runtime {
class TraceLevelHelper;
}
// Write type traits
MARK_REF_T(::System::Runtime::TraceLevelHelper*);
DEFINE_IL2CPP_CLASS(::System::Runtime::TraceLevelHelper*, "System.Runtime", "TraceLevelHelper");
// Dependencies System.Diagnostics.TraceEventType, System.Object
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.TraceLevelHelper
class CORDL_TYPE TraceLevelHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field EtwLevelToTraceEventType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EtwLevelToTraceEventType, put = setStaticF_EtwLevelToTraceEventType)) ::ArrayW<::System::Diagnostics::TraceEventType> EtwLevelToTraceEventType;

  /// @brief Method GetTraceEventType, addr 0x61821b8, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::TraceEventType GetTraceEventType(::System::Runtime::TraceEventLevel level);

  /// @brief Method LookupSeverity, addr 0x6182238, size 0x1ec, virtual false, abstract: false, final false
  static inline ::StringW LookupSeverity(::System::Runtime::TraceEventLevel level, ::System::Runtime::TraceEventOpcode opcode);

  static inline ::ArrayW<::System::Diagnostics::TraceEventType> getStaticF_EtwLevelToTraceEventType();

  static inline void setStaticF_EtwLevelToTraceEventType(::ArrayW<::System::Diagnostics::TraceEventType> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceLevelHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceLevelHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceLevelHelper(TraceLevelHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceLevelHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceLevelHelper(TraceLevelHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21262 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::TraceLevelHelper) == 0x10, "Size mismatch!");

} // namespace System::Runtime
