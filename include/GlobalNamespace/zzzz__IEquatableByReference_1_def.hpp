#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IEquatableByReference_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class IEquatableByReference_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IEquatableByReference_1);
// Type: ::IEquatableByReference`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12683))
// CS Name: ::IEquatableByReference`1<T>*
class CORDL_TYPE IEquatableByReference_1 {
public:
  // Declarations
  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Equals(ByRef<T> other);

  // Ctor Parameters [CppParam { name: "", ty: "IEquatableByReference_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEquatableByReference_1(IEquatableByReference_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEquatableByReference_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEquatableByReference_1(IEquatableByReference_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IEquatableByReference_1, "", "IEquatableByReference`1");
