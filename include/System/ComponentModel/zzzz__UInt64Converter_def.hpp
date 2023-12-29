#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UInt64Converter)
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class UInt64Converter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::UInt64Converter);
// Type: System.ComponentModel::UInt64Converter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8244))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8301))
// CS Name: ::System.ComponentModel::UInt64Converter*
class CORDL_TYPE UInt64Converter : public ::System::ComponentModel::BaseNumberConverter {
public:
  // Declarations
  __declspec(property(get = get_TargetType))::System::Type* TargetType;

  /// @brief Method get_TargetType addr 0x279b764 size 0x6c virtual true final false
  inline ::System::Type* get_TargetType();

  /// @brief Method FromString addr 0x279b7d0 size 0x94 virtual true final false
  inline ::System::Object* FromString(::StringW value, int32_t radix);

  /// @brief Method FromString addr 0x279b864 size 0x74 virtual true final false
  inline ::System::Object* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method ToString addr 0x279b8d8 size 0xb0 virtual true final false
  inline ::StringW ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo);

  // Ctor Parameters [CppParam { name: "", ty: "UInt64Converter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UInt64Converter(UInt64Converter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UInt64Converter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UInt64Converter(UInt64Converter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UInt64Converter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::UInt64Converter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::UInt64Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::UInt64Converter*, "System.ComponentModel", "UInt64Converter");
