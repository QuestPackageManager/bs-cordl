#pragma once
// IWYU pragma private; include "System/Collections/Concurrent/IProducerConsumerCollectionDebugView_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IProducerConsumerCollectionDebugView_1)
// Forward declare root types
namespace System::Collections::Concurrent {
template <typename T> class IProducerConsumerCollectionDebugView_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::IProducerConsumerCollectionDebugView_1);
// Dependencies System.Object
namespace System::Collections::Concurrent {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Concurrent.IProducerConsumerCollectionDebugView`1<T>
class CORDL_TYPE IProducerConsumerCollectionDebugView_1 : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IProducerConsumerCollectionDebugView_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IProducerConsumerCollectionDebugView_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IProducerConsumerCollectionDebugView_1(IProducerConsumerCollectionDebugView_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IProducerConsumerCollectionDebugView_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IProducerConsumerCollectionDebugView_1(IProducerConsumerCollectionDebugView_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3822 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::IProducerConsumerCollectionDebugView_1, "System.Collections.Concurrent", "IProducerConsumerCollectionDebugView`1");
