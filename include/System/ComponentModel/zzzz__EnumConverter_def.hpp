#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(EnumConverter)
namespace System::ComponentModel {
class __TypeConverter__StandardValuesCollection;
}
namespace System {
class Type;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Object;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::ComponentModel {
class EnumConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::EnumConverter);
// Type: System.ComponentModel::EnumConverter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8317))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8309))
// CS Name: ::System.ComponentModel::EnumConverter*
class CORDL_TYPE EnumConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Field values, offset 0x10, size 0x8
  __declspec(property(get = __get_values, put = __set_values))::System::ComponentModel::__TypeConverter__StandardValuesCollection* values;

  /// @brief Field type, offset 0x18, size 0x8
  __declspec(property(get = __get_type, put = __set_type))::System::Type* type;

  __declspec(property(get = get_Comparer))::System::Collections::IComparer* Comparer;

  constexpr ::System::ComponentModel::__TypeConverter__StandardValuesCollection*& __get_values();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__TypeConverter__StandardValuesCollection*> const& __get_values() const;

  constexpr void __set_values(::System::ComponentModel::__TypeConverter__StandardValuesCollection* value);

  constexpr ::System::Type*& __get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_type() const;

  constexpr void __set_type(::System::Type* value);

  static inline ::System::ComponentModel::EnumConverter* New_ctor(::System::Type* type);

  /// @brief Method .ctor addr 0x279d4e0 size 0x28 virtual false final false
  inline void _ctor(::System::Type* type);

  /// @brief Method CanConvertFrom addr 0x279d508 size 0xf0 virtual true final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo addr 0x279d5f8 size 0xf0 virtual true final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method get_Comparer addr 0x279d6e8 size 0x58 virtual true final false
  inline ::System::Collections::IComparer* get_Comparer();

  /// @brief Method ConvertFrom addr 0x279d740 size 0x4fc virtual true final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo addr 0x279dc3c size 0xd90 virtual true final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetStandardValues addr 0x279ea44 size 0x3f0 virtual true final false
  inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive addr 0x279ef28 size 0xa8 virtual true final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported addr 0x279efd0 size 0x8 virtual true final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method IsValid addr 0x279efd8 size 0x6c virtual true final false
  inline bool IsValid(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "EnumConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumConverter(EnumConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumConverter(EnumConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumConverter();

public:
  /// @brief Field values, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::__TypeConverter__StandardValuesCollection* ___values;

  /// @brief Field type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::EnumConverter, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::EnumConverter, ___values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EnumConverter, ___type) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::EnumConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EnumConverter*, "System.ComponentModel", "EnumConverter");
