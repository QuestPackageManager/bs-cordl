#pragma once
// IWYU pragma private; include "System/Data/ColumnTypeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(ColumnTypeConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class TypeConverter_StandardValuesCollection;
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
namespace System::Data {
class ColumnTypeConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ColumnTypeConverter);
// Dependencies System.ComponentModel.TypeConverter
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ColumnTypeConverter
class CORDL_TYPE ColumnTypeConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Field _values, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::System::ComponentModel::TypeConverter_StandardValuesCollection* _values;

  /// @brief Field s_types, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_types, put = setStaticF_s_types)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> s_types;

  /// @brief Method CanConvertFrom, addr 0x4154ebc, size 0xc8, virtual true, abstract: false, final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo, addr 0x415490c, size 0xc8, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertFrom, addr 0x4154f84, size 0x208, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo, addr 0x41549d4, size 0x4e8, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetStandardValues, addr 0x415518c, size 0x114, virtual true, abstract: false, final false
  inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive, addr 0x41552a0, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported, addr 0x41552a8, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  static inline ::System::Data::ColumnTypeConverter* New_ctor();

  constexpr ::System::ComponentModel::TypeConverter_StandardValuesCollection* const& __cordl_internal_get__values() const;

  constexpr ::System::ComponentModel::TypeConverter_StandardValuesCollection*& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::System::ComponentModel::TypeConverter_StandardValuesCollection* value);

  /// @brief Method .ctor, addr 0x4154904, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_s_types();

  static inline void setStaticF_s_types(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColumnTypeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColumnTypeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColumnTypeConverter(ColumnTypeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColumnTypeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColumnTypeConverter(ColumnTypeConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11367 };

  /// @brief Field _values, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::TypeConverter_StandardValuesCollection* ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::ColumnTypeConverter, ____values) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::ColumnTypeConverter, 0x18>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ColumnTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ColumnTypeConverter*, "System.Data", "ColumnTypeConverter");
