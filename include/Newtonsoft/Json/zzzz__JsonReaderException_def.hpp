#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonReaderException)
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace Newtonsoft::Json {
class JsonReader;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonReaderException;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonReaderException);
// Type: Newtonsoft.Json::JsonReaderException
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11804))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11829))
// CS Name: ::Newtonsoft.Json::JsonReaderException*
class CORDL_TYPE JsonReaderException : public ::Newtonsoft::Json::JsonException {
public:
  // Declarations
  /// @brief Field <LineNumber>k__BackingField, offset 0x8c, size 0x4
  __declspec(property(get = __get__LineNumber_k__BackingField, put = __set__LineNumber_k__BackingField)) int32_t _LineNumber_k__BackingField;

  /// @brief Field <LinePosition>k__BackingField, offset 0x90, size 0x4
  __declspec(property(get = __get__LinePosition_k__BackingField, put = __set__LinePosition_k__BackingField)) int32_t _LinePosition_k__BackingField;

  /// @brief Field <Path>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __get__Path_k__BackingField, put = __set__Path_k__BackingField))::StringW _Path_k__BackingField;

  __declspec(property(get = get_LineNumber, put = set_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition, put = set_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_Path, put = set_Path))::StringW Path;

  constexpr int32_t& __get__LineNumber_k__BackingField();

  constexpr int32_t const& __get__LineNumber_k__BackingField() const;

  constexpr void __set__LineNumber_k__BackingField(int32_t value);

  constexpr int32_t& __get__LinePosition_k__BackingField();

  constexpr int32_t const& __get__LinePosition_k__BackingField() const;

  constexpr void __set__LinePosition_k__BackingField(int32_t value);

  constexpr ::StringW& __get__Path_k__BackingField();

  constexpr ::StringW const& __get__Path_k__BackingField() const;

  constexpr void __set__Path_k__BackingField(::StringW value);

  /// @brief Method get_LineNumber addr 0x264a29c size 0x8 virtual false final false
  inline int32_t get_LineNumber();

  /// @brief Method set_LineNumber addr 0x264a2a4 size 0x8 virtual false final false
  inline void set_LineNumber(int32_t value);

  /// @brief Method get_LinePosition addr 0x264a2ac size 0x8 virtual false final false
  inline int32_t get_LinePosition();

  /// @brief Method set_LinePosition addr 0x264a2b4 size 0x8 virtual false final false
  inline void set_LinePosition(int32_t value);

  /// @brief Method get_Path addr 0x264a2bc size 0x8 virtual false final false
  inline ::StringW get_Path();

  /// @brief Method set_Path addr 0x264a2c4 size 0x8 virtual false final false
  inline void set_Path(::StringW value);

  static inline ::Newtonsoft::Json::JsonReaderException* New_ctor();

  /// @brief Method .ctor addr 0x264a2cc size 0x4 virtual false final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::JsonReaderException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x264a2d0 size 0x4 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::Newtonsoft::Json::JsonReaderException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor addr 0x264a2d4 size 0x4 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::Newtonsoft::Json::JsonReaderException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x264a2d8 size 0x4 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::Newtonsoft::Json::JsonReaderException* New_ctor(::StringW message, ::System::Exception* innerException, ::StringW path, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor addr 0x264a2dc size 0x38 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, ::StringW path, int32_t lineNumber, int32_t linePosition);

  /// @brief Method Create addr 0x2642618 size 0x8 virtual false final false
  static inline ::Newtonsoft::Json::JsonReaderException* Create(::Newtonsoft::Json::JsonReader* reader, ::StringW message);

  /// @brief Method Create addr 0x2647664 size 0x84 virtual false final false
  static inline ::Newtonsoft::Json::JsonReaderException* Create(::Newtonsoft::Json::JsonReader* reader, ::StringW message, ::System::Exception* ex);

  /// @brief Method Create addr 0x264a314 size 0x200 virtual false final false
  static inline ::Newtonsoft::Json::JsonReaderException* Create(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::StringW path, ::StringW message, ::System::Exception* ex);

  // Ctor Parameters [CppParam { name: "", ty: "JsonReaderException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonReaderException(JsonReaderException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonReaderException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonReaderException(JsonReaderException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonReaderException();

public:
  /// @brief Field <LineNumber>k__BackingField, offset: 0x8c, size: 0x4, def value: None
  int32_t ____LineNumber_k__BackingField;

  /// @brief Field <LinePosition>k__BackingField, offset: 0x90, size: 0x4, def value: None
  int32_t ____LinePosition_k__BackingField;

  /// @brief Field <Path>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::StringW ____Path_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonReaderException, 0xa0>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonReaderException);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonReaderException*, "Newtonsoft.Json", "JsonReaderException");
