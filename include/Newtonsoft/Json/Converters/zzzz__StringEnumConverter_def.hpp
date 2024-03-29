#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(StringEnumConverter)
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class StringEnumConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::StringEnumConverter);
// Type: Newtonsoft.Json.Converters::StringEnumConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::StringEnumConverter*
class CORDL_TYPE StringEnumConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  __declspec(property(get = get_AllowIntegerValues, put = set_AllowIntegerValues)) bool AllowIntegerValues;

  __declspec(property(get = get_CamelCaseText, put = set_CamelCaseText)) bool CamelCaseText;

  /// @brief Field <AllowIntegerValues>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__AllowIntegerValues_k__BackingField, put = __cordl_internal_set__AllowIntegerValues_k__BackingField)) bool _AllowIntegerValues_k__BackingField;

  /// @brief Field <CamelCaseText>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__CamelCaseText_k__BackingField, put = __cordl_internal_set__CamelCaseText_k__BackingField)) bool _CamelCaseText_k__BackingField;

  /// @brief Method CanConvert, addr 0x280927c, size 0x78, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Newtonsoft::Json::Converters::StringEnumConverter* New_ctor();

  static inline ::Newtonsoft::Json::Converters::StringEnumConverter* New_ctor(bool camelCaseText);

  /// @brief Method ReadJson, addr 0x2808e38, size 0x444, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x2808c70, size 0x1c8, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  constexpr bool const& __cordl_internal_get__AllowIntegerValues_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AllowIntegerValues_k__BackingField();

  constexpr bool const& __cordl_internal_get__CamelCaseText_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CamelCaseText_k__BackingField();

  constexpr void __cordl_internal_set__AllowIntegerValues_k__BackingField(bool value);

  constexpr void __cordl_internal_set__CamelCaseText_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x2808c1c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2808c3c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(bool camelCaseText);

  /// @brief Method get_AllowIntegerValues, addr 0x2808c08, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowIntegerValues();

  /// @brief Method get_CamelCaseText, addr 0x2808bf4, size 0x8, virtual false, abstract: false, final false
  inline bool get_CamelCaseText();

  /// @brief Method set_AllowIntegerValues, addr 0x2808c10, size 0xc, virtual false, abstract: false, final false
  inline void set_AllowIntegerValues(bool value);

  /// @brief Method set_CamelCaseText, addr 0x2808bfc, size 0xc, virtual false, abstract: false, final false
  inline void set_CamelCaseText(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringEnumConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringEnumConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringEnumConverter(StringEnumConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringEnumConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringEnumConverter(StringEnumConverter const&) = delete;

  /// @brief Field <CamelCaseText>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____CamelCaseText_k__BackingField;

  /// @brief Field <AllowIntegerValues>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____AllowIntegerValues_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::StringEnumConverter, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::StringEnumConverter, ____CamelCaseText_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::StringEnumConverter, ____AllowIntegerValues_k__BackingField) == 0x11, "Offset mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::StringEnumConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::StringEnumConverter*, "Newtonsoft.Json.Converters", "StringEnumConverter");
