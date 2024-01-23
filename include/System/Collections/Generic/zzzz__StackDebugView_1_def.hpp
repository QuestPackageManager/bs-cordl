#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StackDebugView_1)
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class StackDebugView_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::StackDebugView_1);
// Type: System.Collections.Generic::StackDebugView`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3857))
// CS Name: ::System.Collections.Generic::StackDebugView`1<T>*
class CORDL_TYPE StackDebugView_1 : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "StackDebugView_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackDebugView_1(StackDebugView_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackDebugView_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackDebugView_1(StackDebugView_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackDebugView_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::StackDebugView_1, "System.Collections.Generic", "StackDebugView`1");
