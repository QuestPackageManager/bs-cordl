#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/BinaryConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryConverter)
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
class BinaryConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::BinaryConverter);
// Dependencies Newtonsoft.Json.JsonConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.BinaryConverter
class CORDL_TYPE BinaryConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Field _reflectionObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__reflectionObject, put = setStaticF__reflectionObject)) ::Newtonsoft::Json::Utilities::ReflectionObject* _reflectionObject;

  /// @brief Method CanConvert, addr 0x3f39994, size 0x118, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  /// @brief Method EnsureReflectionObject, addr 0x3f39168, size 0x18c, virtual false, abstract: false, final false
  static inline void EnsureReflectionObject(::System::Type* t);

  /// @brief Method GetByteArray, addr 0x3f38f80, size 0x1e8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetByteArray(::System::Object* value);

  static inline ::Newtonsoft::Json::Converters::BinaryConverter* New_ctor();

  /// @brief Method ReadByteArray, addr 0x3f396f4, size 0x2a0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadByteArray(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method ReadJson, addr 0x3f392f4, size 0x400, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x3f38f2c, size 0x54, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x3f39aac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Utilities::ReflectionObject* getStaticF__reflectionObject();

  static inline void setStaticF__reflectionObject(::Newtonsoft::Json::Utilities::ReflectionObject* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryConverter(BinaryConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryConverter(BinaryConverter const&) = delete;

  /// @brief Field BinaryToArrayName offset 0xffffffff size 0x8
  static constexpr ::ConstString BinaryToArrayName{ u"ToArray" };

  /// @brief Field BinaryTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString BinaryTypeName{ u"System.Data.Linq.Binary" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10459 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::BinaryConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::BinaryConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::BinaryConverter*, "Newtonsoft.Json.Converters", "BinaryConverter");
