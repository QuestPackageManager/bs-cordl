#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonSerializationException)
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonSerializationException;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonSerializationException);
// Type: Newtonsoft.Json::JsonSerializationException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11702))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11733))
// CS Name: ::Newtonsoft.Json::JsonSerializationException*
class CORDL_TYPE JsonSerializationException : public ::Newtonsoft::Json::JsonException {
public:
  // Declarations
  static inline ::Newtonsoft::Json::JsonSerializationException* New_ctor();

  /// @brief Method .ctor, addr 0x26740d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::JsonSerializationException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x267380c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::Newtonsoft::Json::JsonSerializationException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x26740dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::Newtonsoft::Json::JsonSerializationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x26740e0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Create, addr 0x2670bd4, size 0x8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonSerializationException* Create(::Newtonsoft::Json::JsonReader* reader, ::StringW message);

  /// @brief Method Create, addr 0x26740e4, size 0x84, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonSerializationException* Create(::Newtonsoft::Json::JsonReader* reader, ::StringW message, ::System::Exception* ex);

  /// @brief Method Create, addr 0x2674168, size 0xbc, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonSerializationException* Create(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::StringW path, ::StringW message, ::System::Exception* ex);

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializationException(JsonSerializationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializationException(JsonSerializationException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializationException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonSerializationException, 0x90>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonSerializationException);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonSerializationException*, "Newtonsoft.Json", "JsonSerializationException");
