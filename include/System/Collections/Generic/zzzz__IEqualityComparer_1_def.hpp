#pragma once
// IWYU pragma private; include "System\Collections\Generic\IEqualityComparer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IEqualityComparer_1)
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::Collections::Generic::IEqualityComparer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Collections::Generic::IEqualityComparer_1, "System.Collections.Generic", "IEqualityComparer`1");
// Dependencies
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.IEqualityComparer`1<T>
class CORDL_TYPE IEqualityComparer_1 {
public:
  // Declarations
  /// @brief Method Equals, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(T x, T y);

  /// @brief Method GetHashCode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode(T obj);

  // Ctor Parameters [CppParam { name: "", ty: "IEqualityComparer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEqualityComparer_1(IEqualityComparer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3773 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
