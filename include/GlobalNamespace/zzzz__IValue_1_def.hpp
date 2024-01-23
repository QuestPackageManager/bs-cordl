#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IValue_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class IValue_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IValue_1);
// Type: ::IValue`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15867))
// CS Name: ::IValue`1<T>*
class CORDL_TYPE IValue_1 {
public:
  // Declarations
  __declspec(property(get = get_value, put = set_value)) T value;

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_value();

  /// @brief Method set_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_value(T value);

  // Ctor Parameters [CppParam { name: "", ty: "IValue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IValue_1(IValue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IValue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValue_1(IValue_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IValue_1, "", "IValue`1");
