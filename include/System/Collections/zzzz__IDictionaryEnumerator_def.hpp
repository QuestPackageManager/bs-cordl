#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDictionaryEnumerator)
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
struct DictionaryEntry;
}
// Forward declare root types
namespace System::Collections {
class IDictionaryEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::IDictionaryEnumerator);
// Type: System.Collections::IDictionaryEnumerator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3758))
// CS Name: ::System.Collections::IDictionaryEnumerator*
class CORDL_TYPE IDictionaryEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* get_Key();

  /// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* get_Value();

  /// @brief Method get_Entry addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::DictionaryEntry get_Entry();

  // Ctor Parameters [CppParam { name: "", ty: "IDictionaryEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDictionaryEnumerator(IDictionaryEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDictionaryEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDictionaryEnumerator(IDictionaryEnumerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections
NEED_NO_BOX(::System::Collections::IDictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IDictionaryEnumerator*, "System.Collections", "IDictionaryEnumerator");
