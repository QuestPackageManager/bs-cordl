#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISet)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::ISet);
// Type: Org.BouncyCastle.Utilities.Collections::ISet
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1781))
// CS Name: ::Org.BouncyCastle.Utilities.Collections::ISet*
class CORDL_TYPE ISet {
public:
  // Declarations
  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Add(::System::Object* o);

  /// @brief Method AddAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddAll(::System::Collections::IEnumerable* e);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Contains(::System::Object* o);

  /// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsEmpty();

  /// @brief Method get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsReadOnly();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Remove(::System::Object* o);

  /// @brief Method RemoveAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RemoveAll(::System::Collections::IEnumerable* e);

  // Ctor Parameters [CppParam { name: "", ty: "ISet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISet(ISet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISet(ISet const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::ISet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::ISet*, "Org.BouncyCastle.Utilities.Collections", "ISet");
