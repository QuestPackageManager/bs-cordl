#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Collections/LinkedDictionaryEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinkedDictionaryEnumerator)
namespace Org::BouncyCastle::Utilities::Collections {
class LinkedDictionary;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerator;
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
// Type: Org.BouncyCastle.Utilities.Collections::LinkedDictionaryEnumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Collections::LinkedDictionaryEnumerator*
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

  /// @brief Method MoveNext, addr 0x259edbc, size 0x14c, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator* New_ctor(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* parent);

  /// @brief Method Reset, addr 0x259ef08, size 0xc, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::Org::BouncyCastle::Utilities::Collections::LinkedDictionary*& __cordl_internal_get_parent();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::LinkedDictionary*> const& __cordl_internal_get_parent() const;

  constexpr int32_t const& __cordl_internal_get_pos() const;

  constexpr int32_t& __cordl_internal_get_pos();

  constexpr void __cordl_internal_set_parent(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* value);

  constexpr void __cordl_internal_set_pos(int32_t value);

  /// @brief Method .ctor, addr 0x259e1f0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* parent);

  /// @brief Method get_Current, addr 0x259eaf8, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Object* get_Current();

  /// @brief Method get_CurrentKey, addr 0x259ec44, size 0x174, virtual false, abstract: false, final false
  inline ::System::Object* get_CurrentKey();

  /// @brief Method get_Entry, addr 0x259eb64, size 0xe0, virtual true, abstract: false, final false
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x259edb8, size 0x4, virtual true, abstract: false, final false
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x259ef14, size 0xb8, virtual true, abstract: false, final false
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

  /// @brief Field parent, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* ___parent;

  /// @brief Field pos, offset: 0x18, size: 0x4, def value: None
  int32_t ___pos;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1784 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator, ___parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator, ___pos) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator*, "Org.BouncyCastle.Utilities.Collections", "LinkedDictionaryEnumerator");
