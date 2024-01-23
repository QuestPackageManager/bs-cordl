#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NativeArrayDebugView_1)
// Forward declare root types
namespace Unity::Collections {
template <typename T> class NativeArrayDebugView_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Collections::NativeArrayDebugView_1);
// Type: Unity.Collections::NativeArrayDebugView`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10002))
// CS Name: ::Unity.Collections::NativeArrayDebugView`1<T>*
class CORDL_TYPE NativeArrayDebugView_1 : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "NativeArrayDebugView_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeArrayDebugView_1(NativeArrayDebugView_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeArrayDebugView_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeArrayDebugView_1(NativeArrayDebugView_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeArrayDebugView_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Collections::NativeArrayDebugView_1, "Unity.Collections", "NativeArrayDebugView`1");
