#pragma once
// IWYU pragma private; include "System/SpanDebugView_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SpanDebugView_1)
// Forward declare root types
namespace System {
template <typename T> class SpanDebugView_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::SpanDebugView_1);
// Type: System::SpanDebugView`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System::SpanDebugView`1<T>*
class CORDL_TYPE SpanDebugView_1 : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpanDebugView_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpanDebugView_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpanDebugView_1(SpanDebugView_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpanDebugView_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpanDebugView_1(SpanDebugView_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2470 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::SpanDebugView_1, "System", "SpanDebugView`1");
