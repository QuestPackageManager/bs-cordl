#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BlockingCollectionDebugView_1)
// Forward declare root types
namespace System::Collections::Concurrent {
template <typename T> class BlockingCollectionDebugView_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::BlockingCollectionDebugView_1);
// Type: System.Collections.Concurrent::BlockingCollectionDebugView`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Concurrent {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7535))
// CS Name: ::System.Collections.Concurrent::BlockingCollectionDebugView`1<T>*
class CORDL_TYPE BlockingCollectionDebugView_1 : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "BlockingCollectionDebugView_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlockingCollectionDebugView_1(BlockingCollectionDebugView_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlockingCollectionDebugView_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlockingCollectionDebugView_1(BlockingCollectionDebugView_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlockingCollectionDebugView_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::BlockingCollectionDebugView_1, "System.Collections.Concurrent", "BlockingCollectionDebugView`1");
