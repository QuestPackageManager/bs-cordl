#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/ConcreteListConverter_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConcreteListConverter_2)
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
template <typename I, typename T> class ConcreteListConverter_2___c;
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
template <typename I, typename T> class ConcreteListConverter_2;
}
namespace OculusStudios::GraphQL::Client {
template <typename I, typename T> class ConcreteListConverter_2___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::Client::ConcreteListConverter_2);
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename I, typename T>
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.ConcreteListConverter`2/<>c<I,T>
class CORDL_TYPE ConcreteListConverter_2___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<T, I>* __9__1_0;

  static inline ::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>* New_ctor();

  /// @brief Method <ReadJson>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline I _ReadJson_b__1_0(T x);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>* getStaticF___9();

  static inline ::System::Func_2<T, I>* getStaticF___9__1_0();

  static inline void setStaticF___9(::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>* value);

  static inline void setStaticF___9__1_0(::System::Func_2<T, I>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcreteListConverter_2___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcreteListConverter_2___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcreteListConverter_2___c(ConcreteListConverter_2___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcreteListConverter_2___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcreteListConverter_2___c(ConcreteListConverter_2___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20162 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies Newtonsoft.Json.JsonConverter
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename I, typename T>
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.ConcreteListConverter`2<I,T>
class CORDL_TYPE ConcreteListConverter_2 : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  using __c = ::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c<I, T>;

  /// @brief Method CanConvert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::OculusStudios::GraphQL::Client::ConcreteListConverter_2<I, T>* New_ctor();

  /// @brief Method ReadJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcreteListConverter_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcreteListConverter_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcreteListConverter_2(ConcreteListConverter_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcreteListConverter_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcreteListConverter_2(ConcreteListConverter_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20163 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::Client::ConcreteListConverter_2, "OculusStudios.GraphQL.Client", "ConcreteListConverter`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::Client::ConcreteListConverter_2___c, "OculusStudios.GraphQL.Client", "ConcreteListConverter`2/<>c");
