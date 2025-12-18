#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/NestedFragmentListConverter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(NestedFragmentListConverter_1)
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
namespace OculusStudios::GraphQL::Client {
template <typename T> class NestedFragmentListConverter_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::Client::NestedFragmentListConverter_1);
// Dependencies Newtonsoft.Json.JsonConverter
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.NestedFragmentListConverter`1<T>
class CORDL_TYPE NestedFragmentListConverter_1 : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Method CanConvert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::OculusStudios::GraphQL::Client::NestedFragmentListConverter_1<T>* New_ctor();

  /// @brief Method ReadJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NestedFragmentListConverter_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NestedFragmentListConverter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NestedFragmentListConverter_1(NestedFragmentListConverter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NestedFragmentListConverter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NestedFragmentListConverter_1(NestedFragmentListConverter_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20173 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::Client::NestedFragmentListConverter_1, "OculusStudios.GraphQL.Client", "NestedFragmentListConverter`1");
