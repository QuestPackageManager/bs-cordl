#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecimalConverter)
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DecimalConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DecimalConverter);
// Type: System.ComponentModel::DecimalConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8244))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8253))
// CS Name: ::System.ComponentModel::DecimalConverter*
class CORDL_TYPE DecimalConverter : public ::System::ComponentModel::BaseNumberConverter {
public:
  // Declarations
  __declspec(property(get = get_AllowHex)) bool AllowHex;

  __declspec(property(get = get_TargetType))::System::Type* TargetType;

  /// @brief Method get_AllowHex addr 0x278fd60 size 0x8 virtual true final false
  inline bool get_AllowHex();

  /// @brief Method get_TargetType addr 0x278fd68 size 0x6c virtual true final false
  inline ::System::Type* get_TargetType();

  /// @brief Method CanConvertTo addr 0x278fdd4 size 0xc4 virtual true final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertTo addr 0x278fe98 size 0x328 virtual true final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method FromString addr 0x27901c0 size 0xec virtual true final false
  inline ::System::Object* FromString(::StringW value, int32_t radix);

  /// @brief Method FromString addr 0x27902ac size 0xac virtual true final false
  inline ::System::Object* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method ToString addr 0x2790358 size 0xd8 virtual true final false
  inline ::StringW ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo);

  static inline ::System::ComponentModel::DecimalConverter* New_ctor();

  /// @brief Method .ctor addr 0x2790430 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DecimalConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecimalConverter(DecimalConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecimalConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecimalConverter(DecimalConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecimalConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DecimalConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DecimalConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DecimalConverter*, "System.ComponentModel", "DecimalConverter");
