#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Collections/LinkedDictionaryEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinkedDictionaryEnumerator)
namespace Org::BouncyCastle::Utilities::Collections {
class LinkedDictionary;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class LinkedDictionaryEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator);
// Dependencies System.Collections.IDictionaryEnumerator, System.Collections.IEnumerator, System.Object
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Collections.LinkedDictionaryEnumerator
class CORDL_TYPE LinkedDictionaryEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  __declspec(property(get = get_CurrentKey)) ::System::Object* CurrentKey;

  __declspec(property(get = get_Entry)) ::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key)) ::System::Object* Key;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Field parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent)) ::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* parent;

  /// @brief Field pos, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_pos, put = __cordl_internal_set_pos)) int32_t pos;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x25d30c4, size 0x14c, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator* New_ctor(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* parent);

  /// @brief Method Reset, addr 0x25d3210, size 0xc, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* const& __cordl_internal_get_parent() const;

  constexpr ::Org::BouncyCastle::Utilities::Collections::LinkedDictionary*& __cordl_internal_get_parent();

  constexpr int32_t const& __cordl_internal_get_pos() const;

  constexpr int32_t& __cordl_internal_get_pos();

  constexpr void __cordl_internal_set_parent(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* value);

  constexpr void __cordl_internal_set_pos(int32_t value);

  /// @brief Method .ctor, addr 0x25d24f8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* parent);

  /// @brief Method get_Current, addr 0x25d2e00, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Object* get_Current();

  /// @brief Method get_CurrentKey, addr 0x25d2f4c, size 0x174, virtual false, abstract: false, final false
  inline ::System::Object* get_CurrentKey();

  /// @brief Method get_Entry, addr 0x25d2e6c, size 0xe0, virtual true, abstract: false, final false
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x25d30c0, size 0x4, virtual true, abstract: false, final false
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x25d321c, size 0xb8, virtual true, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedDictionaryEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinkedDictionaryEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedDictionaryEnumerator(LinkedDictionaryEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedDictionaryEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedDictionaryEnumerator(LinkedDictionaryEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1784 };

  /// @brief Field parent, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* ___parent;

  /// @brief Field pos, offset: 0x18, size: 0x4, def value: None
  int32_t ___pos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator, ___parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator, ___pos) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator*, "Org.BouncyCastle.Utilities.Collections", "LinkedDictionaryEnumerator");
