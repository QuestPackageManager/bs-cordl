#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/IsoDateTimeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__DateTimeConverterBase_def.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IsoDateTimeConverter)
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
struct DateTimeStyles;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class IsoDateTimeConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::IsoDateTimeConverter);
// Dependencies Newtonsoft.Json.Converters.DateTimeConverterBase, System.Globalization.DateTimeStyles
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.IsoDateTimeConverter
class CORDL_TYPE IsoDateTimeConverter : public ::Newtonsoft::Json::Converters::DateTimeConverterBase {
public:
  // Declarations
  __declspec(property(get = get_Culture, put = set_Culture)) ::System::Globalization::CultureInfo* Culture;

  __declspec(property(get = get_DateTimeFormat, put = set_DateTimeFormat)) ::StringW DateTimeFormat;

  __declspec(property(get = get_DateTimeStyles, put = set_DateTimeStyles)) ::System::Globalization::DateTimeStyles DateTimeStyles;

  /// @brief Field _culture, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__culture, put = __cordl_internal_set__culture)) ::System::Globalization::CultureInfo* _culture;

  /// @brief Field _dateTimeFormat, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dateTimeFormat, put = __cordl_internal_set__dateTimeFormat)) ::StringW _dateTimeFormat;

  /// @brief Field _dateTimeStyles, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__dateTimeStyles, put = __cordl_internal_set__dateTimeStyles)) ::System::Globalization::DateTimeStyles _dateTimeStyles;

  static inline ::Newtonsoft::Json::Converters::IsoDateTimeConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x3f4171c, size 0x528, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x3f414b4, size 0x268, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__culture() const;

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture();

  constexpr ::StringW const& __cordl_internal_get__dateTimeFormat() const;

  constexpr ::StringW& __cordl_internal_get__dateTimeFormat();

  constexpr ::System::Globalization::DateTimeStyles const& __cordl_internal_get__dateTimeStyles() const;

  constexpr ::System::Globalization::DateTimeStyles& __cordl_internal_get__dateTimeStyles();

  constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set__dateTimeFormat(::StringW value);

  constexpr void __cordl_internal_set__dateTimeStyles(::System::Globalization::DateTimeStyles value);

  /// @brief Method .ctor, addr 0x3f41c44, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Culture, addr 0x3f41444, size 0x68, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_Culture();

  /// @brief Method get_DateTimeFormat, addr 0x3f413b4, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_DateTimeFormat();

  /// @brief Method get_DateTimeStyles, addr 0x3f413a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Globalization::DateTimeStyles get_DateTimeStyles();

  /// @brief Method set_Culture, addr 0x3f414ac, size 0x8, virtual false, abstract: false, final false
  inline void set_Culture(::System::Globalization::CultureInfo* value);

  /// @brief Method set_DateTimeFormat, addr 0x3f41408, size 0x3c, virtual false, abstract: false, final false
  inline void set_DateTimeFormat(::StringW value);

  /// @brief Method set_DateTimeStyles, addr 0x3f413ac, size 0x8, virtual false, abstract: false, final false
  inline void set_DateTimeStyles(::System::Globalization::DateTimeStyles value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IsoDateTimeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IsoDateTimeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IsoDateTimeConverter(IsoDateTimeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IsoDateTimeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IsoDateTimeConverter(IsoDateTimeConverter const&) = delete;

  /// @brief Field DefaultDateTimeFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultDateTimeFormat{ u"yyyy\'-\'MM\'-\'dd\'T\'HH\':\'mm\':\'ss.FFFFFFFK" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10475 };

  /// @brief Field _dateTimeStyles, offset: 0x10, size: 0x4, def value: None
  ::System::Globalization::DateTimeStyles ____dateTimeStyles;

  /// @brief Field _dateTimeFormat, offset: 0x18, size: 0x8, def value: None
  ::StringW ____dateTimeFormat;

  /// @brief Field _culture, offset: 0x20, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____culture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Converters::IsoDateTimeConverter, ____dateTimeStyles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::IsoDateTimeConverter, ____dateTimeFormat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::IsoDateTimeConverter, ____culture) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::IsoDateTimeConverter, 0x28>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::IsoDateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::IsoDateTimeConverter*, "Newtonsoft.Json.Converters", "IsoDateTimeConverter");
