#pragma once
// IWYU pragma private; include "System/Collections/Generic/ISet_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISet_1)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class ISet_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::ISet_1);
// Dependencies
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.ISet`1<T>
class CORDL_TYPE ISet_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
  constexpr operator ::System::Collections::Generic::ICollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Add(T item);

  /// @brief Method ExceptWith, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IntersectWith, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsProperSubsetOf, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsProperSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsProperSupersetOf, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsProperSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsSubsetOf, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsSupersetOf, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method Overlaps, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Overlaps(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method SetEquals, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method SymmetricExceptWith, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SymmetricExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method UnionWith, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnionWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
  constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ISet_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISet_1(ISet_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11406 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::ISet_1, "System.Collections.Generic", "ISet`1");
