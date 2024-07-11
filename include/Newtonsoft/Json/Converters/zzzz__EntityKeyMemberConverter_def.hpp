#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/EntityKeyMemberConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EntityKeyMemberConverter)
namespace Newtonsoft::Json::Utilities {
class ReflectionObject;
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
class EntityKeyMemberConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::EntityKeyMemberConverter);
// Type: Newtonsoft.Json.Converters::EntityKeyMemberConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::EntityKeyMemberConverter*
class CORDL_TYPE EntityKeyMemberConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Field _reflectionObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__reflectionObject, put = setStaticF__reflectionObject))::Newtonsoft::Json::Utilities::ReflectionObject* _reflectionObject;

  /// @brief Method CanConvert, addr 0x2ab9e84, size 0x50, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  /// @brief Method EnsureReflectionObject, addr 0x2ab99ac, size 0x12c, virtual false, abstract: false, final false
  static inline void EnsureReflectionObject(::System::Type* objectType);

  static inline ::Newtonsoft::Json::Converters::EntityKeyMemberConverter* New_ctor();

  /// @brief Method ReadAndAssertProperty, addr 0x2ab9ad8, size 0xfc, virtual false, abstract: false, final false
  static inline void ReadAndAssertProperty(::Newtonsoft::Json::JsonReader* reader, ::StringW propertyName);

  /// @brief Method ReadJson, addr 0x2ab9bd4, size 0x2b0, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x2ab9650, size 0x35c, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x2ab9ed4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Utilities::ReflectionObject* getStaticF__reflectionObject();

  static inline void setStaticF__reflectionObject(::Newtonsoft::Json::Utilities::ReflectionObject* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntityKeyMemberConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EntityKeyMemberConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EntityKeyMemberConverter(EntityKeyMemberConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EntityKeyMemberConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EntityKeyMemberConverter(EntityKeyMemberConverter const&) = delete;

  /// @brief Field EntityKeyMemberFullTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString EntityKeyMemberFullTypeName{ u"System.Data.EntityKeyMember" };

  /// @brief Field KeyPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString KeyPropertyName{ u"Key" };

  /// @brief Field TypePropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString TypePropertyName{ u"Type" };

  /// @brief Field ValuePropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString ValuePropertyName{ u"Value" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::EntityKeyMemberConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::EntityKeyMemberConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::EntityKeyMemberConverter*, "Newtonsoft.Json.Converters", "EntityKeyMemberConverter");
