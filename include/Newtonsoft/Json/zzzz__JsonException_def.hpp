#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonException;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonException);
// Type: Newtonsoft.Json::JsonException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11804))
// CS Name: ::Newtonsoft.Json::JsonException*
class CORDL_TYPE JsonException : public ::System::Exception {
public:
  // Declarations
  static inline ::Newtonsoft::Json::JsonException* New_ctor();

  /// @brief Method .ctor addr 0x263e41c size 0x58 virtual false final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::JsonException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x263e474 size 0x68 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::Newtonsoft::Json::JsonException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor addr 0x263e4dc size 0x70 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::Newtonsoft::Json::JsonException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x263e54c size 0x80 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Create addr 0x263e5cc size 0xac virtual false final false
  static inline ::Newtonsoft::Json::JsonException* Create(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::StringW path, ::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "JsonException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonException(JsonException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonException(JsonException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonException, 0x90>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonException);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonException*, "Newtonsoft.Json", "JsonException");
