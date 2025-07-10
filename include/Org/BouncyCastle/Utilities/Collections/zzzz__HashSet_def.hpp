#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Collections/HashSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashSet)
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class HashSet;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::HashSet);
// Dependencies Org.BouncyCastle.Utilities.Collections.ISet, System.Collections.ICollection, System.Collections.IEnumerable, System.Object
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Collections.HashSet
class CORDL_TYPE HashSet : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field impl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_impl, put = __cordl_internal_set_impl)) ::System::Collections::IDictionary* impl;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::Collections::ISet"
  constexpr operator ::Org::BouncyCastle::Utilities::Collections::ISet*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x25d21f0, size 0xb0, virtual true, abstract: false, final false
  inline void Add(::System::Object* o);

  /// @brief Method AddAll, addr 0x25d22a0, size 0x2e8, virtual true, abstract: false, final false
  inline void AddAll(::System::Collections::IEnumerable* e);

  /// @brief Method Clear, addr 0x25d2588, size 0xa4, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x25d262c, size 0xac, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* o);

  /// @brief Method CopyTo, addr 0x25d26d8, size 0x130, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x25d28ac, size 0x118, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::Org::BouncyCastle::Utilities::Collections::HashSet* New_ctor();

  static inline ::Org::BouncyCastle::Utilities::Collections::HashSet* New_ctor(::System::Collections::IEnumerable* s);

  /// @brief Method Remove, addr 0x25d2c60, size 0xac, virtual true, abstract: false, final false
  inline void Remove(::System::Object* o);

  /// @brief Method RemoveAll, addr 0x25d2d0c, size 0x2e8, virtual true, abstract: false, final false
  inline void RemoveAll(::System::Collections::IEnumerable* e);

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_impl() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_impl();

  constexpr void __cordl_internal_set_impl(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x25d0310, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25d1000, size 0x324, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* s);

  /// @brief Method get_Count, addr 0x25d2808, size 0xa4, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsEmpty, addr 0x25d29c4, size 0xb0, virtual true, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_IsFixedSize, addr 0x25d2a74, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x25d2b18, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x25d2bbc, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x25d2ff4, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::Org::BouncyCastle::Utilities::Collections::ISet"
  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* i___Org__BouncyCastle__Utilities__Collections__ISet() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashSet(HashSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashSet(HashSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1782 };

  /// @brief Field impl, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___impl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::Collections::HashSet, ___impl) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::HashSet, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::HashSet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::HashSet*, "Org.BouncyCastle.Utilities.Collections", "HashSet");
