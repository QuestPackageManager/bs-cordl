#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonWriterException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonWriterException)
namespace Newtonsoft::Json {
class JsonWriter;
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
class JsonWriterException;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonWriterException);
// Dependencies Newtonsoft.Json.JsonException
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonWriterException
class CORDL_TYPE JsonWriterException : public ::Newtonsoft::Json::JsonException {
public:
  // Declarations
  __declspec(property(get = get_Path)) ::StringW Path;

  /// @brief Field <Path>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__Path_k__BackingField, put = __cordl_internal_set__Path_k__BackingField)) ::StringW _Path_k__BackingField;

  /// @brief Method Create, addr 0x3ebc268, size 0xb4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonWriterException* Create(::StringW path, ::StringW message, ::System::Exception* ex);

  /// @brief Method Create, addr 0x3ebb560, size 0x34, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonWriterException* Create(::Newtonsoft::Json::JsonWriter* writer, ::StringW message, ::System::Exception* ex);

  static inline ::Newtonsoft::Json::JsonWriterException* New_ctor();

  static inline ::Newtonsoft::Json::JsonWriterException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::Newtonsoft::Json::JsonWriterException* New_ctor(::StringW message);

  static inline ::Newtonsoft::Json::JsonWriterException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::Newtonsoft::Json::JsonWriterException* New_ctor(::StringW message, ::StringW path, ::System::Exception* innerException);

  constexpr ::StringW const& __cordl_internal_get__Path_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Path_k__BackingField();

  constexpr void __cordl_internal_set__Path_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3ebc21c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3ebc234, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3ebc224, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3ebc22c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x3ebc23c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW path, ::System::Exception* innerException);

  /// @brief Method get_Path, addr 0x3ebc214, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Path();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonWriterException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonWriterException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonWriterException(JsonWriterException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonWriterException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonWriterException(JsonWriterException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10162 };

  /// @brief Field <Path>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::StringW ____Path_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonWriterException, ____Path_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonWriterException, 0x98>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonWriterException);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonWriterException*, "Newtonsoft.Json", "JsonWriterException");
