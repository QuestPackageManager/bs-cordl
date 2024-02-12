#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(EnumerableVectorConverter_1)
namespace Newtonsoft::Json::Converters {
class VectorConverter;
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
template <typename T> class EnumerableVectorConverter_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Converters::EnumerableVectorConverter_1);
// Type: Newtonsoft.Json.Converters::EnumerableVectorConverter`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11728))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11931))
// CS Name: ::Newtonsoft.Json.Converters::EnumerableVectorConverter`1<T>*
class CORDL_TYPE EnumerableVectorConverter_1 : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Field VectorConverter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VectorConverter, put = setStaticF_VectorConverter))::Newtonsoft::Json::Converters::VectorConverter* VectorConverter;

  __declspec(property(get = get_CanRead)) bool CanRead;

  static inline void setStaticF_VectorConverter(::Newtonsoft::Json::Converters::VectorConverter* value);

  static inline ::Newtonsoft::Json::Converters::VectorConverter* getStaticF_VectorConverter();

  /// @brief Method WriteJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method CanConvert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  /// @brief Method ReadJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method get_CanRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_CanRead();

  static inline ::Newtonsoft::Json::Converters::EnumerableVectorConverter_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnumerableVectorConverter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumerableVectorConverter_1(EnumerableVectorConverter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumerableVectorConverter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumerableVectorConverter_1(EnumerableVectorConverter_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumerableVectorConverter_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Converters
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Converters::EnumerableVectorConverter_1, "Newtonsoft.Json.Converters", "EnumerableVectorConverter`1");
