#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DataItemConvertor_1_def.hpp"
CORDL_MODULE_EXPORT(DataItemConvertor_3)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TBase, typename TIn, typename TOut> class DataItemConvertor_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DataItemConvertor_3);
// Type: ::DataItemConvertor`3
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TBase, typename TIn, typename TOut>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4291)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4291), inst: 1151 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4292))
// CS Name: ::DataItemConvertor`3<TBase,TIn,TOut>*
class CORDL_TYPE DataItemConvertor_3 : public ::GlobalNamespace::DataItemConvertor_1<TBase> {
public:
  // Declarations
  __declspec(property(get = get_inputDataType))::System::Type* inputDataType;

  /// @brief Method get_inputDataType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_inputDataType();

  /// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TBase Convert(::System::Object* item);

  /// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TOut Convert(TIn item);

  static inline ::GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataItemConvertor_3(DataItemConvertor_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataItemConvertor_3(DataItemConvertor_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataItemConvertor_3();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataItemConvertor_3, "", "DataItemConvertor`3");
