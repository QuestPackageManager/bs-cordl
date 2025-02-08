#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/StringEnumConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(StringEnumConverter)
namespace Newtonsoft::Json::Serialization {
class NamingStrategy;
}
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
// Dependencies Newtonsoft.Json.JsonConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.StringEnumConverter
class CORDL_TYPE StringEnumConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  __declspec(property(get = get_AllowIntegerValues, put = set_AllowIntegerValues)) bool AllowIntegerValues;

  __declspec(property(get = get_CamelCaseText, put = set_CamelCaseText)) bool CamelCaseText;

  __declspec(property(get = get_NamingStrategy, put = set_NamingStrategy)) ::Newtonsoft::Json::Serialization::NamingStrategy* NamingStrategy;

  /// @brief Field <AllowIntegerValues>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__AllowIntegerValues_k__BackingField, put = __cordl_internal_set__AllowIntegerValues_k__BackingField)) bool _AllowIntegerValues_k__BackingField;

  /// @brief Field <NamingStrategy>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__NamingStrategy_k__BackingField,
                      put = __cordl_internal_set__NamingStrategy_k__BackingField)) ::Newtonsoft::Json::Serialization::NamingStrategy* _NamingStrategy_k__BackingField;

  /// @brief Method CanConvert, addr 0x3f46db4, size 0x78, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Newtonsoft::Json::Converters::StringEnumConverter* New_ctor();

  static inline ::Newtonsoft::Json::Converters::StringEnumConverter* New_ctor(bool camelCaseText);

  static inline ::Newtonsoft::Json::Converters::StringEnumConverter* New_ctor(::Newtonsoft::Json::Serialization::NamingStrategy* namingStrategy, bool allowIntegerValues);

  static inline ::Newtonsoft::Json::Converters::StringEnumConverter* New_ctor(::System::Type* namingStrategyType);

  static inline ::Newtonsoft::Json::Converters::StringEnumConverter* New_ctor(::System::Type* namingStrategyType, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> namingStrategyParameters);

  static inline ::Newtonsoft::Json::Converters::StringEnumConverter* New_ctor(::System::Type* namingStrategyType, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> namingStrategyParameters,
                                                                              bool allowIntegerValues);

  /// @brief Method ReadJson, addr 0x3f46924, size 0x490, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x3f46734, size 0x1f0, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  constexpr bool const& __cordl_internal_get__AllowIntegerValues_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AllowIntegerValues_k__BackingField();

  constexpr ::Newtonsoft::Json::Serialization::NamingStrategy* const& __cordl_internal_get__NamingStrategy_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Serialization::NamingStrategy*& __cordl_internal_get__NamingStrategy_k__BackingField();

  constexpr void __cordl_internal_set__AllowIntegerValues_k__BackingField(bool value);

  constexpr void __cordl_internal_set__NamingStrategy_k__BackingField(::Newtonsoft::Json::Serialization::NamingStrategy* value);

  /// @brief Method .ctor, addr 0x3f46458, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3f46468, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(bool camelCaseText);

  /// @brief Method .ctor, addr 0x3f464dc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Serialization::NamingStrategy* namingStrategy, bool allowIntegerValues);

  /// @brief Method .ctor, addr 0x3f46518, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* namingStrategyType);

  /// @brief Method .ctor, addr 0x3f465c0, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* namingStrategyType, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> namingStrategyParameters);

  /// @brief Method .ctor, addr 0x3f46674, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* namingStrategyType, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> namingStrategyParameters, bool allowIntegerValues);

  /// @brief Method get_AllowIntegerValues, addr 0x3f46444, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowIntegerValues();

  /// @brief Method get_CamelCaseText, addr 0x3f46308, size 0x7c, virtual false, abstract: false, final false
  inline bool get_CamelCaseText();

  /// @brief Method get_NamingStrategy, addr 0x3f46434, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::NamingStrategy* get_NamingStrategy();

  /// @brief Method set_AllowIntegerValues, addr 0x3f4644c, size 0xc, virtual false, abstract: false, final false
  inline void set_AllowIntegerValues(bool value);

  /// @brief Method set_CamelCaseText, addr 0x3f46384, size 0xb0, virtual false, abstract: false, final false
  inline void set_CamelCaseText(bool value);

  /// @brief Method set_NamingStrategy, addr 0x3f4643c, size 0x8, virtual false, abstract: false, final false
  inline void set_NamingStrategy(::Newtonsoft::Json::Serialization::NamingStrategy* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10480 };

  /// @brief Field <NamingStrategy>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::NamingStrategy* ____NamingStrategy_k__BackingField;

  /// @brief Field <AllowIntegerValues>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____AllowIntegerValues_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Converters::StringEnumConverter, ____NamingStrategy_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::StringEnumConverter, ____AllowIntegerValues_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::StringEnumConverter, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::StringEnumConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::StringEnumConverter*, "Newtonsoft.Json.Converters", "StringEnumConverter");
