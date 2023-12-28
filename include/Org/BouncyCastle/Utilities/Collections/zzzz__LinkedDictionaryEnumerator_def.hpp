#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinkedDictionaryEnumerator)
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Utilities::Collections {
class LinkedDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class LinkedDictionaryEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator);
// Type: Org.BouncyCastle.Utilities.Collections::LinkedDictionaryEnumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1784))
// CS Name: ::Org.BouncyCastle.Utilities.Collections::LinkedDictionaryEnumerator*
class CORDL_TYPE LinkedDictionaryEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field parent, offset 0x10, size 0x8
  __declspec(property(get = __get_parent, put = __set_parent))::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* parent;

  /// @brief Field pos, offset 0x18, size 0x4
  __declspec(property(get = __get_pos, put = __set_pos)) int32_t pos;

  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  __declspec(property(get = get_CurrentKey))::System::Object* CurrentKey;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::Org::BouncyCastle::Utilities::Collections::LinkedDictionary*& __get_parent();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::LinkedDictionary*> const& __get_parent() const;

  constexpr void __set_parent(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* value);

  constexpr int32_t& __get_pos();

  constexpr int32_t const& __get_pos() const;

  constexpr void __set_pos(int32_t value);

  static inline ::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator* New_ctor(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* parent);

  /// @brief Method .ctor addr 0x1159368 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* parent);

  /// @brief Method get_Current addr 0x1159c70 size 0x6c virtual true final false
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry addr 0x1159cdc size 0xe0 virtual true final false
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key addr 0x1159f38 size 0x4 virtual true final false
  inline ::System::Object* get_Key();

  /// @brief Method MoveNext addr 0x1159f3c size 0x14c virtual true final false
  inline bool MoveNext();

  /// @brief Method Reset addr 0x115a088 size 0xc virtual true final false
  inline void Reset();

  /// @brief Method get_Value addr 0x115a094 size 0xb8 virtual true final false
  inline ::System::Object* get_Value();

  /// @brief Method get_CurrentKey addr 0x1159dbc size 0x17c virtual false final false
  inline ::System::Object* get_CurrentKey();

  // Ctor Parameters [CppParam { name: "", ty: "LinkedDictionaryEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedDictionaryEnumerator(LinkedDictionaryEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedDictionaryEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedDictionaryEnumerator(LinkedDictionaryEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedDictionaryEnumerator();

public:
  /// @brief Field parent, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* ___parent;

  /// @brief Field pos, offset: 0x18, size: 0x4, def value: None
  int32_t ___pos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator*, "Org.BouncyCastle.Utilities.Collections", "LinkedDictionaryEnumerator");
