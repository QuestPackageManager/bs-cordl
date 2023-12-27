#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DataItemConvertor_3_def.hpp"
CORDL_MODULE_EXPORT(DefaultDataConvertor_3)
// Forward declare root types
namespace GlobalNamespace {
template <typename TBase, typename TIn, typename TOut> class DefaultDataConvertor_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DefaultDataConvertor_3);
// Type: ::DefaultDataConvertor`3
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TBase, typename TIn, typename TOut>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4292)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4292), inst: 1155 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4293))
// CS Name: ::DefaultDataConvertor`3<TBase,TIn,TOut>*
class CORDL_TYPE DefaultDataConvertor_3 : public ::GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut> {
public:
  // Declarations
  /// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TOut Convert(TIn item);

  static inline ::GlobalNamespace::DefaultDataConvertor_3<TBase, TIn, TOut>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultDataConvertor_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultDataConvertor_3(DefaultDataConvertor_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultDataConvertor_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultDataConvertor_3(DefaultDataConvertor_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultDataConvertor_3();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DefaultDataConvertor_3, "", "DefaultDataConvertor`3");
