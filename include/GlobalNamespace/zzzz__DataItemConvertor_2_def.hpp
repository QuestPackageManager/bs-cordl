#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DataItemConvertor_2)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TOut, typename TParam> class DataItemConvertor_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DataItemConvertor_2);
// Type: ::DataItemConvertor`2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TOut, typename TParam>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4296))
// CS Name: ::DataItemConvertor`2<TOut,TParam>*
class CORDL_TYPE DataItemConvertor_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_inputDataType))::System::Type* inputDataType;

  /// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TOut Convert(::System::Object* item, TParam param);

  /// @brief Method get_inputDataType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_inputDataType();

  static inline ::GlobalNamespace::DataItemConvertor_2<TOut, TParam>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataItemConvertor_2(DataItemConvertor_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataItemConvertor_2(DataItemConvertor_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataItemConvertor_2();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataItemConvertor_2, "", "DataItemConvertor`2");
