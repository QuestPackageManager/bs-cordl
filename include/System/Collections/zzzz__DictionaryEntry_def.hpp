#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DictionaryEntry)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
struct DictionaryEntry;
}
// Write type traits
MARK_VAL_T(::System::Collections::DictionaryEntry);
// Type: System.Collections::DictionaryEntry
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: true
// CS Name: ::System.Collections::DictionaryEntry
struct CORDL_TYPE DictionaryEntry {
public:
  // Declarations
  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Method .ctor, addr 0x2801214, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* key, ::System::Object* value);

  /// @brief Method get_Key, addr 0x280121c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x2801224, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryEntry();

  // Ctor Parameters [CppParam { name: "_key", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr DictionaryEntry(::System::Object* _key, ::System::Object* _value) noexcept;

  /// @brief Field _key, offset: 0x0, size: 0x8, def value: None
  ::System::Object* _key;

  /// @brief Field _value, offset: 0x8, size: 0x8, def value: None
  ::System::Object* _value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::DictionaryEntry, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Collections::DictionaryEntry, _key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Collections::DictionaryEntry, _value) == 0x8, "Offset mismatch!");

} // namespace System::Collections
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::DictionaryEntry, "System.Collections", "DictionaryEntry");
