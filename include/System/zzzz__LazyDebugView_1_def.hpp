#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LazyDebugView_1)
// Forward declare root types
namespace System {
template <typename T> class LazyDebugView_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::LazyDebugView_1);
// Type: System::LazyDebugView`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System::LazyDebugView`1<T>*
class CORDL_TYPE LazyDebugView_1 : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyDebugView_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LazyDebugView_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyDebugView_1(LazyDebugView_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyDebugView_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyDebugView_1(LazyDebugView_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::LazyDebugView_1, "System", "LazyDebugView`1");
