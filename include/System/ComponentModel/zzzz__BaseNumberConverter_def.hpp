#pragma once
// IWYU pragma private; include "System/ComponentModel/BaseNumberConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseNumberConverter)
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
class BaseNumberConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::BaseNumberConverter);
// Dependencies System.ComponentModel.TypeConverter
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.BaseNumberConverter
class CORDL_TYPE BaseNumberConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  __declspec(property(get = get_AllowHex)) bool AllowHex;

  __declspec(property(get = get_TargetType)) ::System::Type* TargetType;

  /// @brief Method CanConvertFrom, addr 0x4449518, size 0xc8, virtual true, abstract: false, final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo, addr 0x4449c78, size 0x38, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertFrom, addr 0x44495e0, size 0x3f8, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo, addr 0x44499d8, size 0x2a0, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method FromString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method FromString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* FromString(::StringW value, int32_t radix);

  static inline ::System::ComponentModel::BaseNumberConverter* New_ctor();

  /// @brief Method ToString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method .ctor, addr 0x4449508, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AllowHex, addr 0x4449510, size 0x8, virtual true, abstract: false, final false
  inline bool get_AllowHex();

  /// @brief Method get_TargetType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_TargetType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseNumberConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseNumberConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseNumberConverter(BaseNumberConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseNumberConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseNumberConverter(BaseNumberConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9365 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::BaseNumberConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::BaseNumberConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::BaseNumberConverter*, "System.ComponentModel", "BaseNumberConverter");
