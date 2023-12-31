#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TupleElementNamesAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class TupleElementNamesAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::TupleElementNamesAttribute);
// Type: System.Runtime.CompilerServices::TupleElementNamesAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3386))
// CS Name: ::System.Runtime.CompilerServices::TupleElementNamesAttribute*
class CORDL_TYPE TupleElementNamesAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _transformNames, offset 0x10, size 0x8
  __declspec(property(get = __get__transformNames, put = __set__transformNames))::ArrayW<::StringW, ::Array<::StringW>*> _transformNames;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__transformNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__transformNames() const;

  constexpr void __set__transformNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::System::Runtime::CompilerServices::TupleElementNamesAttribute* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> transformNames);

  /// @brief Method .ctor, addr 0x24db510, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> transformNames);

  // Ctor Parameters [CppParam { name: "", ty: "TupleElementNamesAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TupleElementNamesAttribute(TupleElementNamesAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TupleElementNamesAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TupleElementNamesAttribute(TupleElementNamesAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TupleElementNamesAttribute();

public:
  /// @brief Field _transformNames, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____transformNames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::TupleElementNamesAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::TupleElementNamesAttribute, ____transformNames) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::TupleElementNamesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::TupleElementNamesAttribute*, "System.Runtime.CompilerServices", "TupleElementNamesAttribute");
