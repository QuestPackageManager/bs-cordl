#pragma once
// IWYU pragma private; include "Unity/Collections/NativeSliceDebugView_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NativeSliceDebugView_1)
// Forward declare root types
namespace Unity::Collections {
template <typename T> class NativeSliceDebugView_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Collections::NativeSliceDebugView_1);
// Dependencies System.Object
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Collections.NativeSliceDebugView`1<T>
class CORDL_TYPE NativeSliceDebugView_1 : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeSliceDebugView_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeSliceDebugView_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeSliceDebugView_1(NativeSliceDebugView_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeSliceDebugView_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeSliceDebugView_1(NativeSliceDebugView_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10607 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Collections::NativeSliceDebugView_1, "Unity.Collections", "NativeSliceDebugView`1");
