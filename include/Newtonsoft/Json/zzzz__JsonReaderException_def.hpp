#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonReaderException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonReaderException)
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
class JsonReaderException;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonReaderException);
// Dependencies Newtonsoft.Json.JsonException
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonReaderException
class CORDL_TYPE JsonReaderException : public ::Newtonsoft::Json::JsonException {
public:
  // Declarations
  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_Path)) ::StringW Path;

  /// @brief Field <LineNumber>k__BackingField, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__LineNumber_k__BackingField, put = __cordl_internal_set__LineNumber_k__BackingField)) int32_t _LineNumber_k__BackingField;

  /// @brief Field <LinePosition>k__BackingField, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__LinePosition_k__BackingField, put = __cordl_internal_set__LinePosition_k__BackingField)) int32_t _LinePosition_k__BackingField;

  /// @brief Field <Path>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__Path_k__BackingField, put = __cordl_internal_set__Path_k__BackingField)) ::StringW _Path_k__BackingField;

  /// @brief Method Create, addr 0x3e83080, size 0x1f8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonReaderException* Create(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::StringW path, ::StringW message, ::System::Exception* ex);

  /// @brief Method Create, addr 0x3e7e59c, size 0x8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonReaderException* Create(::Newtonsoft::Json::JsonReader* reader, ::StringW message);

  /// @brief Method Create, addr 0x3e7eb08, size 0x88, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonReaderException* Create(::Newtonsoft::Json::JsonReader* reader, ::StringW message, ::System::Exception* ex);

  static inline ::Newtonsoft::Json::JsonReaderException* New_ctor();

  static inline ::Newtonsoft::Json::JsonReaderException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::Newtonsoft::Json::JsonReaderException* New_ctor(::StringW message);

  static inline ::Newtonsoft::Json::JsonReaderException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::Newtonsoft::Json::JsonReaderException* New_ctor(::StringW message, ::StringW path, int32_t lineNumber, int32_t linePosition, ::System::Exception* innerException);

  constexpr int32_t const& __cordl_internal_get__LineNumber_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LineNumber_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__LinePosition_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LinePosition_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Path_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Path_k__BackingField();

  constexpr void __cordl_internal_set__LineNumber_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__LinePosition_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Path_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3e83034, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e83040, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3e83038, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3e8303c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x3e83044, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW path, int32_t lineNumber, int32_t linePosition, ::System::Exception* innerException);

  /// @brief Method get_LineNumber, addr 0x3e8301c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x3e83024, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LinePosition();

  /// @brief Method get_Path, addr 0x3e8302c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Path();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonReaderException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonReaderException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonReaderException(JsonReaderException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonReaderException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonReaderException(JsonReaderException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10084 };

  /// @brief Field <LineNumber>k__BackingField, offset: 0x8c, size: 0x4, def value: None
  int32_t ____LineNumber_k__BackingField;

  /// @brief Field <LinePosition>k__BackingField, offset: 0x90, size: 0x4, def value: None
  int32_t ____LinePosition_k__BackingField;

  /// @brief Field <Path>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::StringW ____Path_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonReaderException, ____LineNumber_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReaderException, ____LinePosition_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReaderException, ____Path_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonReaderException, 0xa0>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonReaderException);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonReaderException*, "Newtonsoft.Json", "JsonReaderException");
