#pragma once
// IWYU pragma private; include "System/Collections/Generic/DictionaryDebugView_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DictionaryDebugView_2)
// Forward declare root types
namespace System::Collections::Generic {
template <typename K, typename V> class DictionaryDebugView_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::DictionaryDebugView_2);
// Type: System.Collections.Generic::DictionaryDebugView`2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename K, typename V>
// Is value type: false
// CS Name: ::System.Collections.Generic::DictionaryDebugView`2<K,V>*
class CORDL_TYPE DictionaryDebugView_2 : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryDebugView_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DictionaryDebugView_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DictionaryDebugView_2(DictionaryDebugView_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DictionaryDebugView_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DictionaryDebugView_2(DictionaryDebugView_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::DictionaryDebugView_2, "System.Collections.Generic", "DictionaryDebugView`2");
