#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDictionary)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class IDictionary;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::IDictionary);
// Type: System.Collections::IDictionary
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3756))
// CS Name: ::System.Collections::IDictionary*
class CORDL_TYPE IDictionary {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Contains(::System::Object* key);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsFixedSize();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Remove(::System::Object* key);

  // Ctor Parameters [CppParam { name: "", ty: "IDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDictionary(IDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDictionary(IDictionary const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections
NEED_NO_BOX(::System::Collections::IDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IDictionary*, "System.Collections", "IDictionary");
