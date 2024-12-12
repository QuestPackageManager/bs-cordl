#pragma once
// IWYU pragma private; include "System/IComparable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IComparable_1)
// Forward declare root types
namespace System {
template <typename T> class IComparable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::IComparable_1);
// Dependencies
namespace System {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.IComparable`1<T>
class CORDL_TYPE IComparable_1 {
public:
  // Declarations
  /// @brief Method CompareTo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t CompareTo(T other);

  // Ctor Parameters [CppParam { name: "", ty: "IComparable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComparable_1(IComparable_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2414 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IComparable_1, "System", "IComparable`1");
