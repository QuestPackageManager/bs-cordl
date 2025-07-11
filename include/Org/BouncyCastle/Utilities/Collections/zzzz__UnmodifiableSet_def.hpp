#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Collections/UnmodifiableSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnmodifiableSet)
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
class UnmodifiableSet;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::UnmodifiableSet);
// Dependencies Org.BouncyCastle.Utilities.Collections.ISet, System.Collections.ICollection, System.Collections.IEnumerable, System.Object
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Collections.UnmodifiableSet
class CORDL_TYPE UnmodifiableSet : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::Collections::ISet"
  constexpr operator ::Org::BouncyCastle::Utilities::Collections::ISet*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x25d5590, size 0x38, virtual true, abstract: false, final false
  inline void Add(::System::Object* o);

  /// @brief Method AddAll, addr 0x25d55c8, size 0x38, virtual true, abstract: false, final false
  inline void AddAll(::System::Collections::IEnumerable* e);

  /// @brief Method Clear, addr 0x25d5600, size 0x38, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* o);

  /// @brief Method CopyTo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::Org::BouncyCastle::Utilities::Collections::UnmodifiableSet* New_ctor();

  /// @brief Method Remove, addr 0x25d5640, size 0x38, virtual true, abstract: false, final false
  inline void Remove(::System::Object* o);

  /// @brief Method RemoveAll, addr 0x25d5678, size 0x38, virtual true, abstract: false, final false
  inline void RemoveAll(::System::Collections::IEnumerable* e);

  /// @brief Method .ctor, addr 0x25d5588, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsEmpty, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_IsFixedSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x25d5638, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
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
  constexpr UnmodifiableSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnmodifiableSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnmodifiableSet(UnmodifiableSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnmodifiableSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnmodifiableSet(UnmodifiableSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1789 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::UnmodifiableSet, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::UnmodifiableSet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::UnmodifiableSet*, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableSet");
