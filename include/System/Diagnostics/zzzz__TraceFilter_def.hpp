#pragma once
// IWYU pragma private; include "System\Diagnostics\TraceFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TraceFilter)
namespace System::Diagnostics {
class TraceEventCache;
}
namespace System::Diagnostics {
struct TraceEventType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceFilter;
}
// Write type traits
MARK_REF_T(::System::Diagnostics::TraceFilter*);
DEFINE_IL2CPP_CLASS(::System::Diagnostics::TraceFilter*, "System.Diagnostics", "TraceFilter");
// Dependencies System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.TraceFilter
class CORDL_TYPE TraceFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Method ShouldTrace, addr 0x6398848, size 0x30, virtual false, abstract: false, final false
  inline bool ShouldTrace(::System::Diagnostics::TraceEventCache* cache, ::StringW source, ::System::Diagnostics::TraceEventType eventType, int32_t id, ::StringW formatOrMessage);

  /// @brief Method ShouldTrace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ShouldTrace(::System::Diagnostics::TraceEventCache* cache, ::StringW source, ::System::Diagnostics::TraceEventType eventType, int32_t id, ::StringW formatOrMessage,
                          ::ArrayW<::System::Object*> args, ::System::Object* data1, ::ArrayW<::System::Object*> data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceFilter(TraceFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceFilter(TraceFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11137 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Diagnostics::TraceFilter) == 0x10, "Size mismatch!");

} // namespace System::Diagnostics
