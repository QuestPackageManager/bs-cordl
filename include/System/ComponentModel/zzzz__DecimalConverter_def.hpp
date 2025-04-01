#pragma once
// IWYU pragma private; include "System/ComponentModel/DecimalConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecimalConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::Globalization {
class CultureInfo;
}
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
class DecimalConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DecimalConverter);
// Dependencies System.ComponentModel.BaseNumberConverter
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.DecimalConverter
class CORDL_TYPE DecimalConverter : public ::System::ComponentModel::BaseNumberConverter {
public:
  // Declarations
  __declspec(property(get = get_AllowHex)) bool AllowHex;

  __declspec(property(get = get_TargetType)) ::System::Type* TargetType;

  /// @brief Method CanConvertTo, addr 0x444c3a4, size 0xc4, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertTo, addr 0x444c468, size 0x320, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method FromString, addr 0x444c874, size 0xac, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method FromString, addr 0x444c788, size 0xec, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, int32_t radix);

  static inline ::System::ComponentModel::DecimalConverter* New_ctor();

  /// @brief Method ToString, addr 0x444c920, size 0xe8, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method .ctor, addr 0x444ca08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AllowHex, addr 0x444c330, size 0x8, virtual true, abstract: false, final false
  inline bool get_AllowHex();

  /// @brief Method get_TargetType, addr 0x444c338, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_TargetType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecimalConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecimalConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecimalConverter(DecimalConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecimalConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecimalConverter(DecimalConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9377 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DecimalConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DecimalConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DecimalConverter*, "System.ComponentModel", "DecimalConverter");
