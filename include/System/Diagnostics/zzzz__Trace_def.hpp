#pragma once
// IWYU pragma private; include "System/Diagnostics/Trace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Trace)
namespace System::Diagnostics {
class CorrelationManager;
}
namespace System::Diagnostics {
class TraceListenerCollection;
}
// Forward declare root types
namespace System::Diagnostics {
class Trace;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Trace);
// Type: System.Diagnostics::Trace
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// CS Name: ::System.Diagnostics::Trace*
class CORDL_TYPE Trace : public ::System::Object {
public:
  // Declarations
  /// @brief Field correlationManager, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_correlationManager, put = setStaticF_correlationManager)) ::System::Diagnostics::CorrelationManager* correlationManager;

  static inline ::System::Diagnostics::CorrelationManager* getStaticF_correlationManager();

  /// @brief Method get_AutoFlush, addr 0x43c90d8, size 0x4c, virtual false, abstract: false, final false
  static inline bool get_AutoFlush();

  /// @brief Method get_CorrelationManager, addr 0x43c9184, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::CorrelationManager* get_CorrelationManager();

  /// @brief Method get_Listeners, addr 0x43c8e48, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::TraceListenerCollection* get_Listeners();

  static inline void setStaticF_correlationManager(::System::Diagnostics::CorrelationManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Trace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Trace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Trace(Trace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Trace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Trace(Trace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9228 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Trace, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::Trace);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Trace*, "System.Diagnostics", "Trace");
