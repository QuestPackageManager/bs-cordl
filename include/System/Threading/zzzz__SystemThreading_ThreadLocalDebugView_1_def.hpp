#pragma once
// IWYU pragma private; include "System/Threading/SystemThreading_ThreadLocalDebugView_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemThreading_ThreadLocalDebugView_1)
// Forward declare root types
namespace System::Threading {
template <typename T> class SystemThreading_ThreadLocalDebugView_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::SystemThreading_ThreadLocalDebugView_1);
// Dependencies System.Object
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Threading.SystemThreading_ThreadLocalDebugView`1<T>
class CORDL_TYPE SystemThreading_ThreadLocalDebugView_1 : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemThreading_ThreadLocalDebugView_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SystemThreading_ThreadLocalDebugView_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemThreading_ThreadLocalDebugView_1(SystemThreading_ThreadLocalDebugView_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemThreading_ThreadLocalDebugView_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemThreading_ThreadLocalDebugView_1(SystemThreading_ThreadLocalDebugView_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2710 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::SystemThreading_ThreadLocalDebugView_1, "System.Threading", "SystemThreading_ThreadLocalDebugView`1");
