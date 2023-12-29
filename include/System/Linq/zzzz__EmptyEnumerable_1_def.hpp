#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(EmptyEnumerable_1)
// Forward declare root types
namespace System::Linq {
template <typename TElement> class EmptyEnumerable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::EmptyEnumerable_1);
// Type: System.Linq::EmptyEnumerable`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq {
// cpp template
template <typename TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14616))
// CS Name: ::System.Linq::EmptyEnumerable`1<TElement>*
class CORDL_TYPE EmptyEnumerable_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::ArrayW<TElement, ::Array<TElement>*> Instance;

  static inline void setStaticF_Instance(::ArrayW<TElement, ::Array<TElement>*> value);

  static inline ::ArrayW<TElement, ::Array<TElement>*> getStaticF_Instance();

  // Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyEnumerable_1(EmptyEnumerable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyEnumerable_1(EmptyEnumerable_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyEnumerable_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::EmptyEnumerable_1, "System.Linq", "EmptyEnumerable`1");
