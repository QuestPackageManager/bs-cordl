#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(EmptyArray_1)
// Forward declare root types
namespace System {
template <typename T> class EmptyArray_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::EmptyArray_1);
// Type: System::EmptyArray`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2592))
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Value, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Value, put = setStaticF_Value))::ArrayW<T, ::Array<T>*> Value;

  static inline void setStaticF_Value(::ArrayW<T, ::Array<T>*> value);

  static inline ::ArrayW<T, ::Array<T>*> getStaticF_Value();

  // Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyArray_1(EmptyArray_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyArray_1(EmptyArray_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyArray_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::EmptyArray_1, "System", "EmptyArray`1");
