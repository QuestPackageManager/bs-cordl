#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(BooleanConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class __TypeConverter__StandardValuesCollection;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class BooleanConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::BooleanConverter);
// Type: System.ComponentModel::BooleanConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7490))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7418))
// CS Name: ::System.ComponentModel::BooleanConverter*
class CORDL_TYPE BooleanConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Field s_values, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_values, put = setStaticF_s_values))::System::ComponentModel::__TypeConverter__StandardValuesCollection* s_values;

  static inline void setStaticF_s_values(::System::ComponentModel::__TypeConverter__StandardValuesCollection* value);

  static inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* getStaticF_s_values();

  /// @brief Method CanConvertFrom, addr 0x290b3dc, size 0xc8, virtual true, abstract: false, final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method ConvertFrom, addr 0x290b4a4, size 0x200, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method GetStandardValues, addr 0x290b6a4, size 0x164, virtual true, abstract: false, final false
  inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive, addr 0x290b808, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported, addr 0x290b810, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  static inline ::System::ComponentModel::BooleanConverter* New_ctor();

  /// @brief Method .ctor, addr 0x290b818, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BooleanConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BooleanConverter(BooleanConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BooleanConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BooleanConverter(BooleanConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BooleanConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::BooleanConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::BooleanConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::BooleanConverter*, "System.ComponentModel", "BooleanConverter");
