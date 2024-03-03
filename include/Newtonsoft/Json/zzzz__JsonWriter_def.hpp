#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonWriter)
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
struct JsonContainerType;
}
namespace Newtonsoft::Json {
struct JsonPosition;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace Newtonsoft::Json {
class JsonWriterException;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace Newtonsoft::Json {
struct WriteState;
}
namespace Newtonsoft::Json {
struct __JsonWriter__State;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json {
struct __JsonWriter__State;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::__JsonWriter__State);
MARK_REF_PTR_T(::Newtonsoft::Json::JsonWriter);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonWriter::State
struct CORDL_TYPE __JsonWriter__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____JsonWriter__State_Unwrapped
  enum struct ____JsonWriter__State_Unwrapped : int32_t {
    __E_Start = static_cast<int32_t>(0x0),
    __E_Property = static_cast<int32_t>(0x1),
    __E_ObjectStart = static_cast<int32_t>(0x2),
    __E_Object = static_cast<int32_t>(0x3),
    __E_ArrayStart = static_cast<int32_t>(0x4),
    __E_Array = static_cast<int32_t>(0x5),
    __E_ConstructorStart = static_cast<int32_t>(0x6),
    __E_Constructor = static_cast<int32_t>(0x7),
    __E_Closed = static_cast<int32_t>(0x8),
    __E_Error = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____JsonWriter__State_Unwrapped() const noexcept {
    return static_cast<____JsonWriter__State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonWriter__State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __JsonWriter__State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Array value: static_cast<int32_t>(0x5)
  static ::Newtonsoft::Json::__JsonWriter__State const Array;

  /// @brief Field ArrayStart value: static_cast<int32_t>(0x4)
  static ::Newtonsoft::Json::__JsonWriter__State const ArrayStart;

  /// @brief Field Closed value: static_cast<int32_t>(0x8)
  static ::Newtonsoft::Json::__JsonWriter__State const Closed;

  /// @brief Field Constructor value: static_cast<int32_t>(0x7)
  static ::Newtonsoft::Json::__JsonWriter__State const Constructor;

  /// @brief Field ConstructorStart value: static_cast<int32_t>(0x6)
  static ::Newtonsoft::Json::__JsonWriter__State const ConstructorStart;

  /// @brief Field Error value: static_cast<int32_t>(0x9)
  static ::Newtonsoft::Json::__JsonWriter__State const Error;

  /// @brief Field Object value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::__JsonWriter__State const Object;

  /// @brief Field ObjectStart value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::__JsonWriter__State const ObjectStart;

  /// @brief Field Property value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::__JsonWriter__State const Property;

  /// @brief Field Start value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::__JsonWriter__State const Start;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonWriter__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonWriter__State, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
// Type: Newtonsoft.Json::JsonWriter
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonWriter*
class CORDL_TYPE JsonWriter : public ::System::Object {
public:
  // Declarations
  using State = ::Newtonsoft::Json::__JsonWriter__State;

  __declspec(property(get = get_CloseOutput, put = set_CloseOutput)) bool CloseOutput;

  __declspec(property(get = get_ContainerPath))::StringW ContainerPath;

  __declspec(property(get = get_Culture, put = set_Culture))::System::Globalization::CultureInfo* Culture;

  __declspec(property(get = get_DateFormatHandling, put = set_DateFormatHandling))::Newtonsoft::Json::DateFormatHandling DateFormatHandling;

  __declspec(property(get = get_DateFormatString, put = set_DateFormatString))::StringW DateFormatString;

  __declspec(property(get = get_DateTimeZoneHandling, put = set_DateTimeZoneHandling))::Newtonsoft::Json::DateTimeZoneHandling DateTimeZoneHandling;

  __declspec(property(get = get_FloatFormatHandling, put = set_FloatFormatHandling))::Newtonsoft::Json::FloatFormatHandling FloatFormatHandling;

  __declspec(property(get = get_Formatting, put = set_Formatting))::Newtonsoft::Json::Formatting Formatting;

  __declspec(property(get = get_Path))::StringW Path;

  /// @brief Field StateArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StateArray,
                             put = setStaticF_StateArray))::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                                                   ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*> StateArray;

  /// @brief Field StateArrayTempate, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_StateArrayTempate,
               put = setStaticF_StateArrayTempate))::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                                            ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*> StateArrayTempate;

  __declspec(property(get = get_StringEscapeHandling, put = set_StringEscapeHandling))::Newtonsoft::Json::StringEscapeHandling StringEscapeHandling;

  __declspec(property(get = get_Top)) int32_t Top;

  __declspec(property(get = get_WriteState))::Newtonsoft::Json::WriteState WriteState;

  /// @brief Field <CloseOutput>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__CloseOutput_k__BackingField, put = __cordl_internal_set__CloseOutput_k__BackingField)) bool _CloseOutput_k__BackingField;

  /// @brief Field _culture, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__culture, put = __cordl_internal_set__culture))::System::Globalization::CultureInfo* _culture;

  /// @brief Field _currentPosition, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get__currentPosition, put = __cordl_internal_set__currentPosition))::Newtonsoft::Json::JsonPosition _currentPosition;

  /// @brief Field _currentState, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__currentState, put = __cordl_internal_set__currentState))::Newtonsoft::Json::__JsonWriter__State _currentState;

  /// @brief Field _dateFormatHandling, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__dateFormatHandling, put = __cordl_internal_set__dateFormatHandling))::Newtonsoft::Json::DateFormatHandling _dateFormatHandling;

  /// @brief Field _dateFormatString, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__dateFormatString, put = __cordl_internal_set__dateFormatString))::StringW _dateFormatString;

  /// @brief Field _dateTimeZoneHandling, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__dateTimeZoneHandling, put = __cordl_internal_set__dateTimeZoneHandling))::Newtonsoft::Json::DateTimeZoneHandling _dateTimeZoneHandling;

  /// @brief Field _floatFormatHandling, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__floatFormatHandling, put = __cordl_internal_set__floatFormatHandling))::Newtonsoft::Json::FloatFormatHandling _floatFormatHandling;

  /// @brief Field _formatting, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__formatting, put = __cordl_internal_set__formatting))::Newtonsoft::Json::Formatting _formatting;

  /// @brief Field _stack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__stack, put = __cordl_internal_set__stack))::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* _stack;

  /// @brief Field _stringEscapeHandling, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__stringEscapeHandling, put = __cordl_internal_set__stringEscapeHandling))::Newtonsoft::Json::StringEscapeHandling _stringEscapeHandling;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AutoComplete, addr 0x2748f20, size 0x204, virtual false, abstract: false, final false
  inline void AutoComplete(::Newtonsoft::Json::JsonToken tokenBeingWritten);

  /// @brief Method AutoCompleteAll, addr 0x2747ef0, size 0x40, virtual false, abstract: false, final false
  inline void AutoCompleteAll();

  /// @brief Method AutoCompleteClose, addr 0x2748d30, size 0x1e0, virtual false, abstract: false, final false
  inline void AutoCompleteClose(::Newtonsoft::Json::JsonContainerType type);

  /// @brief Method BuildStateArray, addr 0x274657c, size 0x570, virtual false, abstract: false, final false
  static inline ::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                         ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
  BuildStateArray();

  /// @brief Method Close, addr 0x2747eec, size 0x4, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method CreateUnsupportedTypeException, addr 0x274b26c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonWriterException* CreateUnsupportedTypeException(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value);

  /// @brief Method Dispose, addr 0x274b160, size 0x20, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Flush();

  /// @brief Method GetCloseTokenForType, addr 0x2748ca8, size 0x88, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonToken GetCloseTokenForType(::Newtonsoft::Json::JsonContainerType type);

  /// @brief Method InternalWriteComment, addr 0x274b088, size 0x8, virtual false, abstract: false, final false
  inline void InternalWriteComment();

  /// @brief Method InternalWriteEnd, addr 0x2747f84, size 0x4, virtual false, abstract: false, final false
  inline void InternalWriteEnd(::Newtonsoft::Json::JsonContainerType container);

  /// @brief Method InternalWritePropertyName, addr 0x2747fc0, size 0x10, virtual false, abstract: false, final false
  inline void InternalWritePropertyName(::StringW name);

  /// @brief Method InternalWriteRaw, addr 0x2749254, size 0x4, virtual false, abstract: false, final false
  inline void InternalWriteRaw();

  /// @brief Method InternalWriteStart, addr 0x2747f3c, size 0x40, virtual false, abstract: false, final false
  inline void InternalWriteStart(::Newtonsoft::Json::JsonToken token, ::Newtonsoft::Json::JsonContainerType container);

  /// @brief Method InternalWriteValue, addr 0x274921c, size 0x18, virtual false, abstract: false, final false
  inline void InternalWriteValue(::Newtonsoft::Json::JsonToken token);

  /// @brief Method InternalWriteWhitespace, addr 0x274b094, size 0x5c, virtual false, abstract: false, final false
  inline void InternalWriteWhitespace(::StringW ws);

  static inline ::Newtonsoft::Json::JsonWriter* New_ctor();

  /// @brief Method OnStringEscapeHandlingChanged, addr 0x2747b70, size 0x4, virtual true, abstract: false, final false
  inline void OnStringEscapeHandlingChanged();

  /// @brief Method Peek, addr 0x2747744, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonContainerType Peek();

  /// @brief Method Pop, addr 0x2747e1c, size 0xd0, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonContainerType Pop();

  /// @brief Method Push, addr 0x2747ca4, size 0x178, virtual false, abstract: false, final false
  inline void Push(::Newtonsoft::Json::JsonContainerType value);

  /// @brief Method SetWriteState, addr 0x274b3c8, size 0x1c0, virtual false, abstract: false, final false
  inline void SetWriteState(::Newtonsoft::Json::JsonToken token, ::System::Object* value);

  /// @brief Method System.IDisposable.Dispose, addr 0x274b0f0, size 0x70, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method UpdateScopeWithFinishedValue, addr 0x2747c8c, size 0x18, virtual false, abstract: false, final false
  inline void UpdateScopeWithFinishedValue();

  /// @brief Method WriteComment, addr 0x274b080, size 0x8, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteConstructorDate, addr 0x2748a20, size 0x1f0, virtual false, abstract: false, final false
  inline void WriteConstructorDate(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method WriteEnd, addr 0x2747fe0, size 0x8, virtual true, abstract: false, final false
  inline void WriteEnd();

  /// @brief Method WriteEnd, addr 0x2748f10, size 0x4, virtual true, abstract: false, final false
  inline void WriteEnd(::Newtonsoft::Json::JsonToken token);

  /// @brief Method WriteEnd, addr 0x2747fe8, size 0xbc, virtual false, abstract: false, final false
  inline void WriteEnd(::Newtonsoft::Json::JsonContainerType type);

  /// @brief Method WriteEndArray, addr 0x2747f94, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndArray();

  /// @brief Method WriteEndConstructor, addr 0x2747fa8, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndConstructor();

  /// @brief Method WriteEndObject, addr 0x2747f7c, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndObject();

  /// @brief Method WriteIndent, addr 0x2748f14, size 0x4, virtual true, abstract: false, final false
  inline void WriteIndent();

  /// @brief Method WriteIndentSpace, addr 0x2748f1c, size 0x4, virtual true, abstract: false, final false
  inline void WriteIndentSpace();

  /// @brief Method WriteNull, addr 0x2749200, size 0x1c, virtual true, abstract: false, final false
  inline void WriteNull();

  /// @brief Method WritePropertyName, addr 0x2747fb0, size 0x10, virtual true, abstract: false, final false
  inline void WritePropertyName(::StringW name);

  /// @brief Method WritePropertyName, addr 0x2747fd0, size 0x10, virtual true, abstract: false, final false
  inline void WritePropertyName(::StringW name, bool escape);

  /// @brief Method WriteRaw, addr 0x2749250, size 0x4, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW json);

  /// @brief Method WriteRawValue, addr 0x2749258, size 0x50, virtual true, abstract: false, final false
  inline void WriteRawValue(::StringW json);

  /// @brief Method WriteStartArray, addr 0x2747f88, size 0xc, virtual true, abstract: false, final false
  inline void WriteStartArray();

  /// @brief Method WriteStartConstructor, addr 0x2747f9c, size 0xc, virtual true, abstract: false, final false
  inline void WriteStartConstructor(::StringW name);

  /// @brief Method WriteStartObject, addr 0x2747f30, size 0xc, virtual true, abstract: false, final false
  inline void WriteStartObject();

  /// @brief Method WriteToken, addr 0x27480a4, size 0x8, virtual false, abstract: false, final false
  inline void WriteToken(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method WriteToken, addr 0x27480ac, size 0x7c, virtual false, abstract: false, final false
  inline void WriteToken(::Newtonsoft::Json::JsonReader* reader, bool writeChildren);

  /// @brief Method WriteToken, addr 0x2748850, size 0x1c0, virtual true, abstract: false, final false
  inline void WriteToken(::Newtonsoft::Json::JsonReader* reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments);

  /// @brief Method WriteToken, addr 0x2748848, size 0x8, virtual false, abstract: false, final false
  inline void WriteToken(::Newtonsoft::Json::JsonToken token);

  /// @brief Method WriteToken, addr 0x274817c, size 0x5cc, virtual false, abstract: false, final false
  inline void WriteToken(::Newtonsoft::Json::JsonToken token, ::System::Object* value);

  /// @brief Method WriteUndefined, addr 0x2749234, size 0x1c, virtual true, abstract: false, final false
  inline void WriteUndefined();

  /// @brief Method WriteValue, addr 0x2749d50, size 0x30, virtual true, abstract: false, final false
  inline void WriteValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method WriteValue, addr 0x27492a8, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteValue, addr 0x2749430, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTime value);

  /// @brief Method WriteValue, addr 0x274944c, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTimeOffset value);

  /// @brief Method WriteValue, addr 0x2749414, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Decimal value);

  /// @brief Method WriteValue, addr 0x2749468, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Guid value);

  /// @brief Method WriteValue, addr 0x2749b34, size 0x8c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method WriteValue, addr 0x2749bc0, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::DateTimeOffset> value);

  /// @brief Method WriteValue, addr 0x2749ab4, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::Decimal> value);

  /// @brief Method WriteValue, addr 0x2749c40, size 0x84, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::Guid> value);

  /// @brief Method WriteValue, addr 0x2749cc4, size 0x8c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method WriteValue, addr 0x27497c0, size 0x88, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<bool> value);

  /// @brief Method WriteValue, addr 0x2749940, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<char16_t> value);

  /// @brief Method WriteValue, addr 0x2749730, size 0x90, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<double_t> value);

  /// @brief Method WriteValue, addr 0x27496b0, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<float_t> value);

  /// @brief Method WriteValue, addr 0x2749848, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int16_t> value);

  /// @brief Method WriteValue, addr 0x27494a0, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int32_t> value);

  /// @brief Method WriteValue, addr 0x2749598, size 0x8c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int64_t> value);

  /// @brief Method WriteValue, addr 0x2749a38, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int8_t> value);

  /// @brief Method WriteValue, addr 0x27498c4, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint16_t> value);

  /// @brief Method WriteValue, addr 0x274951c, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint32_t> value);

  /// @brief Method WriteValue, addr 0x2749624, size 0x8c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint64_t> value);

  /// @brief Method WriteValue, addr 0x27499bc, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint8_t> value);

  /// @brief Method WriteValue, addr 0x2749e2c, size 0xd4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Object* value);

  /// @brief Method WriteValue, addr 0x2749484, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(::System::TimeSpan value);

  /// @brief Method WriteValue, addr 0x2749d80, size 0xac, virtual true, abstract: false, final false
  inline void WriteValue(::System::Uri* value);

  /// @brief Method WriteValue, addr 0x274936c, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(bool value);

  /// @brief Method WriteValue, addr 0x27493c0, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(char16_t value);

  /// @brief Method WriteValue, addr 0x2749350, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(double_t value);

  /// @brief Method WriteValue, addr 0x2749334, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(float_t value);

  /// @brief Method WriteValue, addr 0x2749388, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(int16_t value);

  /// @brief Method WriteValue, addr 0x27492c4, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(int32_t value);

  /// @brief Method WriteValue, addr 0x27492fc, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(int64_t value);

  /// @brief Method WriteValue, addr 0x27493f8, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(int8_t value);

  /// @brief Method WriteValue, addr 0x27493a4, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(uint16_t value);

  /// @brief Method WriteValue, addr 0x27492e0, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(uint32_t value);

  /// @brief Method WriteValue, addr 0x2749318, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(uint64_t value);

  /// @brief Method WriteValue, addr 0x27493dc, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(uint8_t value);

  /// @brief Method WriteValue, addr 0x2749f68, size 0x1118, virtual false, abstract: false, final false
  static inline void WriteValue(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode typeCode, ::System::Object* value);

  /// @brief Method WriteValueDelimiter, addr 0x2748f18, size 0x4, virtual true, abstract: false, final false
  inline void WriteValueDelimiter();

  /// @brief Method WriteWhitespace, addr 0x274b090, size 0x4, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  constexpr bool const& __cordl_internal_get__CloseOutput_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CloseOutput_k__BackingField();

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __cordl_internal_get__culture() const;

  constexpr ::Newtonsoft::Json::JsonPosition const& __cordl_internal_get__currentPosition() const;

  constexpr ::Newtonsoft::Json::JsonPosition& __cordl_internal_get__currentPosition();

  constexpr ::Newtonsoft::Json::__JsonWriter__State const& __cordl_internal_get__currentState() const;

  constexpr ::Newtonsoft::Json::__JsonWriter__State& __cordl_internal_get__currentState();

  constexpr ::Newtonsoft::Json::DateFormatHandling const& __cordl_internal_get__dateFormatHandling() const;

  constexpr ::Newtonsoft::Json::DateFormatHandling& __cordl_internal_get__dateFormatHandling();

  constexpr ::StringW const& __cordl_internal_get__dateFormatString() const;

  constexpr ::StringW& __cordl_internal_get__dateFormatString();

  constexpr ::Newtonsoft::Json::DateTimeZoneHandling const& __cordl_internal_get__dateTimeZoneHandling() const;

  constexpr ::Newtonsoft::Json::DateTimeZoneHandling& __cordl_internal_get__dateTimeZoneHandling();

  constexpr ::Newtonsoft::Json::FloatFormatHandling const& __cordl_internal_get__floatFormatHandling() const;

  constexpr ::Newtonsoft::Json::FloatFormatHandling& __cordl_internal_get__floatFormatHandling();

  constexpr ::Newtonsoft::Json::Formatting const& __cordl_internal_get__formatting() const;

  constexpr ::Newtonsoft::Json::Formatting& __cordl_internal_get__formatting();

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*& __cordl_internal_get__stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*> const& __cordl_internal_get__stack() const;

  constexpr ::Newtonsoft::Json::StringEscapeHandling const& __cordl_internal_get__stringEscapeHandling() const;

  constexpr ::Newtonsoft::Json::StringEscapeHandling& __cordl_internal_get__stringEscapeHandling();

  constexpr void __cordl_internal_set__CloseOutput_k__BackingField(bool value);

  constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set__currentPosition(::Newtonsoft::Json::JsonPosition value);

  constexpr void __cordl_internal_set__currentState(::Newtonsoft::Json::__JsonWriter__State value);

  constexpr void __cordl_internal_set__dateFormatHandling(::Newtonsoft::Json::DateFormatHandling value);

  constexpr void __cordl_internal_set__dateFormatString(::StringW value);

  constexpr void __cordl_internal_set__dateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value);

  constexpr void __cordl_internal_set__floatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value);

  constexpr void __cordl_internal_set__formatting(::Newtonsoft::Json::Formatting value);

  constexpr void __cordl_internal_set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* value);

  constexpr void __cordl_internal_set__stringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value);

  /// @brief Method .ctor, addr 0x2747c60, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                         ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
  getStaticF_StateArray();

  static inline ::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                         ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
  getStaticF_StateArrayTempate();

  /// @brief Method get_CloseOutput, addr 0x27476e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_CloseOutput();

  /// @brief Method get_ContainerPath, addr 0x27477e8, size 0xac, virtual false, abstract: false, final false
  inline ::StringW get_ContainerPath();

  /// @brief Method get_Culture, addr 0x2747bf0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_Culture();

  /// @brief Method get_DateFormatHandling, addr 0x2747a24, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::DateFormatHandling get_DateFormatHandling();

  /// @brief Method get_DateFormatString, addr 0x2747be0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DateFormatString();

  /// @brief Method get_DateTimeZoneHandling, addr 0x2747a90, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling();

  /// @brief Method get_FloatFormatHandling, addr 0x2747b74, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling();

  /// @brief Method get_Formatting, addr 0x27479b8, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Formatting get_Formatting();

  /// @brief Method get_Path, addr 0x2747894, size 0x124, virtual false, abstract: false, final false
  inline ::StringW get_Path();

  /// @brief Method get_StringEscapeHandling, addr 0x2747afc, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling();

  /// @brief Method get_Top, addr 0x27476f4, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_Top();

  /// @brief Method get_WriteState, addr 0x274774c, size 0x9c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::WriteState get_WriteState();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_StateArray(::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                                    ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
                                               value);

  static inline void setStaticF_StateArrayTempate(::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                                           ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
                                                      value);

  /// @brief Method set_CloseOutput, addr 0x27476e8, size 0xc, virtual false, abstract: false, final false
  inline void set_CloseOutput(bool value);

  /// @brief Method set_Culture, addr 0x2747c58, size 0x8, virtual false, abstract: false, final false
  inline void set_Culture(::System::Globalization::CultureInfo* value);

  /// @brief Method set_DateFormatHandling, addr 0x2747a2c, size 0x64, virtual false, abstract: false, final false
  inline void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value);

  /// @brief Method set_DateFormatString, addr 0x2747be8, size 0x8, virtual false, abstract: false, final false
  inline void set_DateFormatString(::StringW value);

  /// @brief Method set_DateTimeZoneHandling, addr 0x2747a98, size 0x64, virtual false, abstract: false, final false
  inline void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value);

  /// @brief Method set_FloatFormatHandling, addr 0x2747b7c, size 0x64, virtual false, abstract: false, final false
  inline void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value);

  /// @brief Method set_Formatting, addr 0x27479c0, size 0x64, virtual false, abstract: false, final false
  inline void set_Formatting(::Newtonsoft::Json::Formatting value);

  /// @brief Method set_StringEscapeHandling, addr 0x2747b04, size 0x6c, virtual false, abstract: false, final false
  inline void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonWriter(JsonWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonWriter(JsonWriter const&) = delete;

  /// @brief Field _stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* ____stack;

  /// @brief Field _currentPosition, offset: 0x18, size: 0x18, def value: None
  ::Newtonsoft::Json::JsonPosition ____currentPosition;

  /// @brief Field _currentState, offset: 0x30, size: 0x4, def value: None
  ::Newtonsoft::Json::__JsonWriter__State ____currentState;

  /// @brief Field _formatting, offset: 0x34, size: 0x4, def value: None
  ::Newtonsoft::Json::Formatting ____formatting;

  /// @brief Field <CloseOutput>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____CloseOutput_k__BackingField;

  /// @brief Field _dateFormatHandling, offset: 0x3c, size: 0x4, def value: None
  ::Newtonsoft::Json::DateFormatHandling ____dateFormatHandling;

  /// @brief Field _dateTimeZoneHandling, offset: 0x40, size: 0x4, def value: None
  ::Newtonsoft::Json::DateTimeZoneHandling ____dateTimeZoneHandling;

  /// @brief Field _stringEscapeHandling, offset: 0x44, size: 0x4, def value: None
  ::Newtonsoft::Json::StringEscapeHandling ____stringEscapeHandling;

  /// @brief Field _floatFormatHandling, offset: 0x48, size: 0x4, def value: None
  ::Newtonsoft::Json::FloatFormatHandling ____floatFormatHandling;

  /// @brief Field _dateFormatString, offset: 0x50, size: 0x8, def value: None
  ::StringW ____dateFormatString;

  /// @brief Field _culture, offset: 0x58, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____culture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonWriter, 0x60>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____stack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____currentPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____currentState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____formatting) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____CloseOutput_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____dateFormatHandling) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____dateTimeZoneHandling) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____stringEscapeHandling) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____floatFormatHandling) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____dateFormatString) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonWriter, ____culture) == 0x58, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonWriter__State, "Newtonsoft.Json", "JsonWriter/State");
NEED_NO_BOX(::Newtonsoft::Json::JsonWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonWriter*, "Newtonsoft.Json", "JsonWriter");
