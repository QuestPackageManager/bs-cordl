#pragma once
// IWYU pragma private; include "System/Collections/Concurrent/IDictionaryDebugView_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IDictionaryDebugView_2)
// Forward declare root types
namespace System::Collections::Concurrent {
template <typename K, typename V> class IDictionaryDebugView_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::IDictionaryDebugView_2);
// Dependencies System.Object
namespace System::Collections::Concurrent {
// cpp template
template <typename K, typename V>
// Is value type: false
// CS Name: System.Collections.Concurrent.IDictionaryDebugView`2<K,V>
class CORDL_TYPE IDictionaryDebugView_2 : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IDictionaryDebugView_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IDictionaryDebugView_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDictionaryDebugView_2(IDictionaryDebugView_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDictionaryDebugView_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDictionaryDebugView_2(IDictionaryDebugView_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3820 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::IDictionaryDebugView_2, "System.Collections.Concurrent", "IDictionaryDebugView`2");
