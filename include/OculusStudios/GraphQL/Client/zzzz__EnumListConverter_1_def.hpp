#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/EnumListConverter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnumListConverter_1)
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace OculusStudios::GraphQL::Client {
template <typename T> class EnumListConverter_1___c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
template <typename T> class EnumListConverter_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename T> class EnumListConverter_1___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::Client::EnumListConverter_1);
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::Client::EnumListConverter_1___c);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.EnumListConverter`1/<>c<T>
class CORDL_TYPE EnumListConverter_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Func_2<T, bool>* __9__2_0;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_1, put = setStaticF___9__2_1)) ::System::Func_2<T, ::StringW>* __9__2_1;

  static inline ::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>* New_ctor();

  /// @brief Method <WriteJson>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _WriteJson_b__2_0(T x);

  /// @brief Method <WriteJson>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW _WriteJson_b__2_1(T x);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>* getStaticF___9();

  static inline ::System::Func_2<T, bool>* getStaticF___9__2_0();

  static inline ::System::Func_2<T, ::StringW>* getStaticF___9__2_1();

  static inline void setStaticF___9(::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>* value);

  static inline void setStaticF___9__2_0(::System::Func_2<T, bool>* value);

  static inline void setStaticF___9__2_1(::System::Func_2<T, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumListConverter_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumListConverter_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumListConverter_1___c(EnumListConverter_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumListConverter_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumListConverter_1___c(EnumListConverter_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20254 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies Newtonsoft.Json.JsonConverter
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.EnumListConverter`1<T>
class CORDL_TYPE EnumListConverter_1 : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  using __c = ::OculusStudios::GraphQL::Client::EnumListConverter_1___c<T>;

  /// @brief Method CanConvert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::OculusStudios::GraphQL::Client::EnumListConverter_1<T>* New_ctor();

  /// @brief Method ReadJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumListConverter_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumListConverter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumListConverter_1(EnumListConverter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumListConverter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumListConverter_1(EnumListConverter_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20255 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::Client::EnumListConverter_1, "OculusStudios.GraphQL.Client", "EnumListConverter`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::Client::EnumListConverter_1___c, "OculusStudios.GraphQL.Client", "EnumListConverter`1/<>c");
