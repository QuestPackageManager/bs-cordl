#pragma once
// IWYU pragma private; include "System/Collections/Generic/ICollectionDebugView_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ICollectionDebugView_1)
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class ICollectionDebugView_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::ICollectionDebugView_1);
// Dependencies System.Object
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.ICollectionDebugView`1<T>
class CORDL_TYPE ICollectionDebugView_1 : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ICollectionDebugView_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ICollectionDebugView_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICollectionDebugView_1(ICollectionDebugView_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICollectionDebugView_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICollectionDebugView_1(ICollectionDebugView_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16658 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::ICollectionDebugView_1, "System.Collections.Generic", "ICollectionDebugView`1");
