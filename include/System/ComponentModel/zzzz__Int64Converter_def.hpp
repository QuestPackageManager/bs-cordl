#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Int64Converter)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Globalization {
class NumberFormatInfo;
}
// Forward declare root types
namespace System::ComponentModel {
class Int64Converter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Int64Converter);
// Type: System.ComponentModel::Int64Converter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9438))
// CS Name: ::System.ComponentModel::Int64Converter*
class CORDL_TYPE Int64Converter : public ::System::ComponentModel::BaseNumberConverter {
public:
  // Declarations
  __declspec(property(get = get_TargetType))::System::Type* TargetType;

  /// @brief Method get_TargetType, addr 0x29112a0, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_TargetType();

  /// @brief Method FromString, addr 0x291130c, size 0x94, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, int32_t radix);

  /// @brief Method FromString, addr 0x29113a0, size 0x74, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method ToString, addr 0x2911414, size 0xb0, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo);

  static inline ::System::ComponentModel::Int64Converter* New_ctor();

  /// @brief Method .ctor, addr 0x29114c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Int64Converter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Int64Converter(Int64Converter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Int64Converter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Int64Converter(Int64Converter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Int64Converter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Int64Converter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::Int64Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Int64Converter*, "System.ComponentModel", "Int64Converter");
