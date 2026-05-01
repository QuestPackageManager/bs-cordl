#pragma once
// IWYU pragma private; include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEquatable_1)
// Forward declare root types
namespace System {
template <typename T> class IEquatable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::IEquatable_1);
// Dependencies
namespace System {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.IEquatable`1<T>
class CORDL_TYPE IEquatable_1 {
public:
  // Declarations
  /// @brief Method Equals, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(T other);

  // Ctor Parameters [CppParam { name: "", ty: "IEquatable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEquatable_1(IEquatable_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2418 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IEquatable_1, "System", "IEquatable`1");
