#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryConverter)
namespace Newtonsoft::Json::Utilities {
class ReflectionObject;
}
namespace System {
class Type;
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
namespace Newtonsoft::Json {
class JsonReader;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class BinaryConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::BinaryConverter);
// Type: Newtonsoft.Json.Converters::BinaryConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11758))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11957))
// CS Name: ::Newtonsoft.Json.Converters::BinaryConverter*
class CORDL_TYPE BinaryConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Field _reflectionObject, offset 0x10, size 0x8
  __declspec(property(get = __get__reflectionObject, put = __set__reflectionObject))::Newtonsoft::Json::Utilities::ReflectionObject* _reflectionObject;

  constexpr ::Newtonsoft::Json::Utilities::ReflectionObject*& __get__reflectionObject();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::ReflectionObject*> const& __get__reflectionObject() const;

  constexpr void __set__reflectionObject(::Newtonsoft::Json::Utilities::ReflectionObject* value);

  /// @brief Method WriteJson addr 0x254e6b8 size 0x54 virtual true final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method GetByteArray addr 0x254e70c size 0x178 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetByteArray(::System::Object* value);

  /// @brief Method EnsureReflectionObject addr 0x254e884 size 0x188 virtual false final false
  inline void EnsureReflectionObject(::System::Type* t);

  /// @brief Method ReadJson addr 0x254ea0c size 0x320 virtual true final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method ReadByteArray addr 0x254ed2c size 0x28c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadByteArray(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method CanConvert addr 0x254efb8 size 0x4c virtual true final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Newtonsoft::Json::Converters::BinaryConverter* New_ctor();

  /// @brief Method .ctor addr 0x254f004 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BinaryConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryConverter(BinaryConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryConverter(BinaryConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryConverter();

public:
  /// @brief Field _reflectionObject, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::ReflectionObject* ____reflectionObject;

  /// @brief Field BinaryTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString BinaryTypeName{ u"System.Data.Linq.Binary" };

  /// @brief Field BinaryToArrayName offset 0xffffffff size 0x8
  static constexpr ::ConstString BinaryToArrayName{ u"ToArray" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::BinaryConverter, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::BinaryConverter, ____reflectionObject) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::BinaryConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::BinaryConverter*, "Newtonsoft.Json.Converters", "BinaryConverter");
