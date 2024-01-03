#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DoubleConverter)
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class DoubleConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DoubleConverter);
// Type: System.ComponentModel::DoubleConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9421))
// CS Name: ::System.ComponentModel::DoubleConverter*
class CORDL_TYPE DoubleConverter : public ::System::ComponentModel::BaseNumberConverter {
public:
  // Declarations
  __declspec(property(get = get_AllowHex)) bool AllowHex;

  __declspec(property(get = get_TargetType))::System::Type* TargetType;

  /// @brief Method get_AllowHex, addr 0x290ea88, size 0x8, virtual true, abstract: false, final false
  inline bool get_AllowHex();

  /// @brief Method get_TargetType, addr 0x290ea90, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_TargetType();

  /// @brief Method FromString, addr 0x290eafc, size 0xc0, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, int32_t radix);

  /// @brief Method FromString, addr 0x290ebbc, size 0x70, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method ToString, addr 0x290ec2c, size 0xb0, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo);

  static inline ::System::ComponentModel::DoubleConverter* New_ctor();

  /// @brief Method .ctor, addr 0x290ecdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DoubleConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoubleConverter(DoubleConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoubleConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoubleConverter(DoubleConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DoubleConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DoubleConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DoubleConverter*, "System.ComponentModel", "DoubleConverter");
