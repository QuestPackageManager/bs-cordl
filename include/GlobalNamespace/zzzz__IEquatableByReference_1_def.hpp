#pragma once
// IWYU pragma private; include "GlobalNamespace/IEquatableByReference_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEquatableByReference_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class IEquatableByReference_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IEquatableByReference_1);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: IEquatableByReference`1<T>
class CORDL_TYPE IEquatableByReference_1 {
public:
  // Declarations
  /// @brief Method Equals, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::ByRef<T> other);

  // Ctor Parameters [CppParam { name: "", ty: "IEquatableByReference_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEquatableByReference_1(IEquatableByReference_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18128 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IEquatableByReference_1, "", "IEquatableByReference`1");
