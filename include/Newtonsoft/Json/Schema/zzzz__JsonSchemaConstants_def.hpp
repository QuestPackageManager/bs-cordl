#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaConstants.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonSchemaConstants)
namespace Newtonsoft::Json::Schema {
struct JsonSchemaType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Schema {
class JsonSchemaConstants;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchemaConstants);
// Type: Newtonsoft.Json.Schema::JsonSchemaConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Schema::JsonSchemaConstants*
class CORDL_TYPE JsonSchemaConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field JsonSchemaTypeMapping, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_JsonSchemaTypeMapping,
                             put = setStaticF_JsonSchemaTypeMapping))::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>* JsonSchemaTypeMapping;

  static inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>* getStaticF_JsonSchemaTypeMapping();

  static inline void setStaticF_JsonSchemaTypeMapping(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSchemaConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSchemaConstants(JsonSchemaConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSchemaConstants(JsonSchemaConstants const&) = delete;

  /// @brief Field AdditionalItemsPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString AdditionalItemsPropertyName{ u"additionalItems" };

  /// @brief Field AdditionalPropertiesPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString AdditionalPropertiesPropertyName{ u"additionalProperties" };

  /// @brief Field DefaultPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultPropertyName{ u"default" };

  /// @brief Field DescriptionPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString DescriptionPropertyName{ u"description" };

  /// @brief Field DisallowPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString DisallowPropertyName{ u"disallow" };

  /// @brief Field DivisibleByPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString DivisibleByPropertyName{ u"divisibleBy" };

  /// @brief Field EnumPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString EnumPropertyName{ u"enum" };

  /// @brief Field ExclusiveMaximumPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString ExclusiveMaximumPropertyName{ u"exclusiveMaximum" };

  /// @brief Field ExclusiveMinimumPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString ExclusiveMinimumPropertyName{ u"exclusiveMinimum" };

  /// @brief Field ExtendsPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString ExtendsPropertyName{ u"extends" };

  /// @brief Field FormatPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString FormatPropertyName{ u"format" };

  /// @brief Field HiddenPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString HiddenPropertyName{ u"hidden" };

  /// @brief Field IdPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString IdPropertyName{ u"id" };

  /// @brief Field ItemsPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString ItemsPropertyName{ u"items" };

  /// @brief Field MaximumItemsPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString MaximumItemsPropertyName{ u"maxItems" };

  /// @brief Field MaximumLengthPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString MaximumLengthPropertyName{ u"maxLength" };

  /// @brief Field MaximumPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString MaximumPropertyName{ u"maximum" };

  /// @brief Field MinimumItemsPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString MinimumItemsPropertyName{ u"minItems" };

  /// @brief Field MinimumLengthPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString MinimumLengthPropertyName{ u"minLength" };

  /// @brief Field MinimumPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString MinimumPropertyName{ u"minimum" };

  /// @brief Field OptionLabelPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionLabelPropertyName{ u"label" };

  /// @brief Field OptionValuePropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionValuePropertyName{ u"value" };

  /// @brief Field PatternPropertiesPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString PatternPropertiesPropertyName{ u"patternProperties" };

  /// @brief Field PatternPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString PatternPropertyName{ u"pattern" };

  /// @brief Field PropertiesPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString PropertiesPropertyName{ u"properties" };

  /// @brief Field ReadOnlyPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString ReadOnlyPropertyName{ u"readonly" };

  /// @brief Field RequiredPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString RequiredPropertyName{ u"required" };

  /// @brief Field RequiresPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString RequiresPropertyName{ u"requires" };

  /// @brief Field TitlePropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString TitlePropertyName{ u"title" };

  /// @brief Field TransientPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString TransientPropertyName{ u"transient" };

  /// @brief Field TypePropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString TypePropertyName{ u"type" };

  /// @brief Field UniqueItemsPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString UniqueItemsPropertyName{ u"uniqueItems" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaConstants, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchemaConstants);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaConstants*, "Newtonsoft.Json.Schema", "JsonSchemaConstants");
