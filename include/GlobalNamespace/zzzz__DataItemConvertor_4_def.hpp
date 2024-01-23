#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DataItemConvertor_2_def.hpp"
CORDL_MODULE_EXPORT(DataItemConvertor_4)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TBase, typename TIn, typename TOut, typename TParam> class DataItemConvertor_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DataItemConvertor_4);
// Type: ::DataItemConvertor`4
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TBase, typename TIn, typename TOut, typename TParam>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4296)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4296), inst: 1154 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4297))
// CS Name: ::DataItemConvertor`4<TBase,TIn,TOut,TParam>*
class CORDL_TYPE DataItemConvertor_4 : public ::GlobalNamespace::DataItemConvertor_2<TBase, TParam> {
public:
  // Declarations
  __declspec(property(get = get_inputDataType))::System::Type* inputDataType;

  /// @brief Method get_inputDataType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_inputDataType();

  /// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TBase Convert(::System::Object* item, TParam param);

  /// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TOut Convert(TIn item, TParam param);

  static inline ::GlobalNamespace::DataItemConvertor_4<TBase, TIn, TOut, TParam>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataItemConvertor_4(DataItemConvertor_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataItemConvertor_4(DataItemConvertor_4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataItemConvertor_4();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataItemConvertor_4, "", "DataItemConvertor`4");
