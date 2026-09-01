#pragma once
// IWYU pragma private; include "System\ComponentModel\TypeListConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(TypeListConverter)
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
class TypeListConverter;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::TypeListConverter*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeListConverter*, "System.ComponentModel", "TypeListConverter");
// Dependencies System.ComponentModel.TypeConverter, System.Type
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeListConverter
class CORDL_TYPE TypeListConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Field _types, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__types, put = __cordl_internal_set__types)) ::ArrayW<::System::Type*> _types;

  /// @brief Field _values, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::System::ComponentModel::TypeConverter_StandardValuesCollection* _values;

  /// @brief Method CanConvertFrom, addr 0x63c9854, size 0x80, virtual true, abstract: false, final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo, addr 0x63c98d4, size 0xa4, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertFrom, addr 0x63c9978, size 0xec, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo, addr 0x63c9a64, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetStandardValues, addr 0x63c9be0, size 0xc4, virtual true, abstract: false, final false
  inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive, addr 0x63c9ca4, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported, addr 0x63c9cac, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  static inline ::System::ComponentModel::TypeListConverter* New_ctor(::ArrayW<::System::Type*> types);

  constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get__types() const;

  constexpr ::ArrayW<::System::Type*>& __cordl_internal_get__types();

  constexpr ::System::ComponentModel::TypeConverter_StandardValuesCollection* const& __cordl_internal_get__values() const;

  constexpr ::System::ComponentModel::TypeConverter_StandardValuesCollection*& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__types(::ArrayW<::System::Type*> value);

  constexpr void __cordl_internal_set__values(::System::ComponentModel::TypeConverter_StandardValuesCollection* value);

  /// @brief Method .ctor, addr 0x63c984c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Type*> types);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeListConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeListConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeListConverter(TypeListConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeListConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeListConverter(TypeListConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11304 };

  /// @brief Field _types, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Type*> ____types;

  /// @brief Field _values, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::TypeConverter_StandardValuesCollection* ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeListConverter, ____types) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeListConverter, ____values) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::TypeListConverter) == 0x20, "Size mismatch!");

} // namespace System::ComponentModel
