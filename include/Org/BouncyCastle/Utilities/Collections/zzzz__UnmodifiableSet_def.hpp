#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnmodifiableSet)
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableSet;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::UnmodifiableSet);
// Type: Org.BouncyCastle.Utilities.Collections::UnmodifiableSet
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1789))
// CS Name: ::Org.BouncyCastle.Utilities.Collections::UnmodifiableSet*
class CORDL_TYPE UnmodifiableSet : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::Collections::ISet"
  constexpr operator ::Org::BouncyCastle::Utilities::Collections::ISet*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  static inline ::Org::BouncyCastle::Utilities::Collections::UnmodifiableSet* New_ctor();

  /// @brief Method .ctor addr 0x115b08c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Add addr 0x115b094 size 0x40 virtual true final false
  inline void Add(::System::Object* o);

  /// @brief Method AddAll addr 0x115b0d4 size 0x40 virtual true final false
  inline void AddAll(::System::Collections::IEnumerable* e);

  /// @brief Method Clear addr 0x115b114 size 0x40 virtual true final false
  inline void Clear();

  /// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Contains(::System::Object* o);

  /// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_Count();

  /// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method get_IsEmpty addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsEmpty();

  /// @brief Method get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly addr 0x115b154 size 0x8 virtual true final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method Remove addr 0x115b15c size 0x40 virtual true final false
  inline void Remove(::System::Object* o);

  /// @brief Method RemoveAll addr 0x115b19c size 0x40 virtual true final false
  inline void RemoveAll(::System::Collections::IEnumerable* e);

  // Ctor Parameters [CppParam { name: "", ty: "UnmodifiableSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnmodifiableSet(UnmodifiableSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnmodifiableSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnmodifiableSet(UnmodifiableSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnmodifiableSet();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::UnmodifiableSet, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::UnmodifiableSet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::UnmodifiableSet*, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableSet");
