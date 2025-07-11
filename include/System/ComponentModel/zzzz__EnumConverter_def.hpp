#pragma once
// IWYU pragma private; include "System/ComponentModel/EnumConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(EnumConverter)
namespace System::Collections {
class IComparer;
}
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
namespace System::ComponentModel {
class EnumConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::EnumConverter);
// Dependencies System.ComponentModel.TypeConverter
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.EnumConverter
class CORDL_TYPE EnumConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  __declspec(property(get = get_Comparer)) ::System::Collections::IComparer* Comparer;

  __declspec(property(get = get_EnumType)) ::System::Type* EnumType;

  __declspec(property(get = get_Values, put = set_Values)) ::System::ComponentModel::TypeConverter_StandardValuesCollection* Values;

  /// @brief Field type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  /// @brief Field values, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values)) ::System::ComponentModel::TypeConverter_StandardValuesCollection* values;

  /// @brief Method CanConvertFrom, addr 0x445e680, size 0x110, virtual true, abstract: false, final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo, addr 0x445e790, size 0x110, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertFrom, addr 0x445e8f8, size 0x524, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo, addr 0x445ee1c, size 0xdc0, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetStandardValues, addr 0x445fbdc, size 0x3e4, virtual true, abstract: false, final false
  inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive, addr 0x445ffc0, size 0xa8, virtual true, abstract: false, final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported, addr 0x4460068, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method IsValid, addr 0x4460070, size 0x6c, virtual true, abstract: false, final false
  inline bool IsValid(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  static inline ::System::ComponentModel::EnumConverter* New_ctor(::System::Type* type);

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::System::ComponentModel::TypeConverter_StandardValuesCollection* const& __cordl_internal_get_values() const;

  constexpr ::System::ComponentModel::TypeConverter_StandardValuesCollection*& __cordl_internal_get_values();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  constexpr void __cordl_internal_set_values(::System::ComponentModel::TypeConverter_StandardValuesCollection* value);

  /// @brief Method .ctor, addr 0x445e640, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_Comparer, addr 0x445e8a0, size 0x58, virtual true, abstract: false, final false
  inline ::System::Collections::IComparer* get_Comparer();

  /// @brief Method get_EnumType, addr 0x445e668, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_EnumType();

  /// @brief Method get_Values, addr 0x445e670, size 0x8, virtual false, abstract: false, final false
  inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* get_Values();

  /// @brief Method set_Values, addr 0x445e678, size 0x8, virtual false, abstract: false, final false
  inline void set_Values(::System::ComponentModel::TypeConverter_StandardValuesCollection* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumConverter(EnumConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumConverter(EnumConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9443 };

  /// @brief Field values, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::TypeConverter_StandardValuesCollection* ___values;

  /// @brief Field type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::EnumConverter, ___values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EnumConverter, ___type) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::EnumConverter, 0x20>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::EnumConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EnumConverter*, "System.ComponentModel", "EnumConverter");
