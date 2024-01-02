#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonReader)
namespace System {
struct DateTimeOffset;
}
namespace System {
class Type;
}
namespace System {
class IDisposable;
}
namespace Newtonsoft::Json {
struct DateParseHandling;
}
namespace Newtonsoft::Json {
struct __JsonReader__State;
}
namespace System {
struct Decimal;
}
namespace Newtonsoft::Json {
struct JsonContainerType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Newtonsoft::Json {
struct JsonPosition;
}
namespace Newtonsoft::Json {
class JsonReaderException;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json {
struct FloatParseHandling;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Newtonsoft::Json {
struct __JsonReader__State;
}
namespace Newtonsoft::Json {
class JsonReader;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::__JsonReader__State);
MARK_REF_PTR_T(::Newtonsoft::Json::JsonReader);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11832))
// CS Name: ::JsonReader::State
struct CORDL_TYPE __JsonReader__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____JsonReader__State_Unwrapped
  enum struct ____JsonReader__State_Unwrapped : int32_t {
    __E_Start = static_cast<int32_t>(0x0),
    __E_Complete = static_cast<int32_t>(0x1),
    __E_Property = static_cast<int32_t>(0x2),
    __E_ObjectStart = static_cast<int32_t>(0x3),
    __E_Object = static_cast<int32_t>(0x4),
    __E_ArrayStart = static_cast<int32_t>(0x5),
    __E_Array = static_cast<int32_t>(0x6),
    __E_Closed = static_cast<int32_t>(0x7),
    __E_PostValue = static_cast<int32_t>(0x8),
    __E_ConstructorStart = static_cast<int32_t>(0x9),
    __E_Constructor = static_cast<int32_t>(0xa),
    __E_Error = static_cast<int32_t>(0xb),
    __E_Finished = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____JsonReader__State_Unwrapped() const noexcept {
    return static_cast<____JsonReader__State_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __JsonReader__State(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonReader__State();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Start value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::__JsonReader__State const Start;

  /// @brief Field Complete value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::__JsonReader__State const Complete;

  /// @brief Field Property value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::__JsonReader__State const Property;

  /// @brief Field ObjectStart value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::__JsonReader__State const ObjectStart;

  /// @brief Field Object value: static_cast<int32_t>(0x4)
  static ::Newtonsoft::Json::__JsonReader__State const Object;

  /// @brief Field ArrayStart value: static_cast<int32_t>(0x5)
  static ::Newtonsoft::Json::__JsonReader__State const ArrayStart;

  /// @brief Field Array value: static_cast<int32_t>(0x6)
  static ::Newtonsoft::Json::__JsonReader__State const Array;

  /// @brief Field Closed value: static_cast<int32_t>(0x7)
  static ::Newtonsoft::Json::__JsonReader__State const Closed;

  /// @brief Field PostValue value: static_cast<int32_t>(0x8)
  static ::Newtonsoft::Json::__JsonReader__State const PostValue;

  /// @brief Field ConstructorStart value: static_cast<int32_t>(0x9)
  static ::Newtonsoft::Json::__JsonReader__State const ConstructorStart;

  /// @brief Field Constructor value: static_cast<int32_t>(0xa)
  static ::Newtonsoft::Json::__JsonReader__State const Constructor;

  /// @brief Field Error value: static_cast<int32_t>(0xb)
  static ::Newtonsoft::Json::__JsonReader__State const Error;

  /// @brief Field Finished value: static_cast<int32_t>(0xc)
  static ::Newtonsoft::Json::__JsonReader__State const Finished;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonReader__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader__State, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
// Type: Newtonsoft.Json::JsonReader
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 114, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11841)), TypeDefinitionIndex(TypeDefinitionIndex(11799)), TypeDefinitionIndex(TypeDefinitionIndex(11832)),
// TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(11797)), TypeDefinitionIndex(TypeDefinitionIndex(11807)), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(11796))} Self: TypeDefinitionIndex(TypeDefinitionIndex(11833)) CS
// Name: ::Newtonsoft.Json::JsonReader*
class CORDL_TYPE JsonReader : public ::System::Object {
public:
  // Declarations
  using State = ::Newtonsoft::Json::__JsonReader__State;

  /// @brief Field _tokenType, offset 0x10, size 0x4
  __declspec(property(get = __get__tokenType, put = __set__tokenType))::Newtonsoft::Json::JsonToken _tokenType;

  /// @brief Field _value, offset 0x18, size 0x8
  __declspec(property(get = __get__value, put = __set__value))::System::Object* _value;

  /// @brief Field _quoteChar, offset 0x20, size 0x2
  __declspec(property(get = __get__quoteChar, put = __set__quoteChar)) char16_t _quoteChar;

  /// @brief Field _currentState, offset 0x24, size 0x4
  __declspec(property(get = __get__currentState, put = __set__currentState))::Newtonsoft::Json::__JsonReader__State _currentState;

  /// @brief Field _currentPosition, offset 0x28, size 0x18
  __declspec(property(get = __get__currentPosition, put = __set__currentPosition))::Newtonsoft::Json::JsonPosition _currentPosition;

  /// @brief Field _culture, offset 0x40, size 0x8
  __declspec(property(get = __get__culture, put = __set__culture))::System::Globalization::CultureInfo* _culture;

  /// @brief Field _dateTimeZoneHandling, offset 0x48, size 0x4
  __declspec(property(get = __get__dateTimeZoneHandling, put = __set__dateTimeZoneHandling))::Newtonsoft::Json::DateTimeZoneHandling _dateTimeZoneHandling;

  /// @brief Field _maxDepth, offset 0x4c, size 0x8
  __declspec(property(get = __get__maxDepth, put = __set__maxDepth))::System::Nullable_1<int32_t> _maxDepth;

  /// @brief Field _hasExceededMaxDepth, offset 0x54, size 0x1
  __declspec(property(get = __get__hasExceededMaxDepth, put = __set__hasExceededMaxDepth)) bool _hasExceededMaxDepth;

  /// @brief Field _dateParseHandling, offset 0x58, size 0x4
  __declspec(property(get = __get__dateParseHandling, put = __set__dateParseHandling))::Newtonsoft::Json::DateParseHandling _dateParseHandling;

  /// @brief Field _floatParseHandling, offset 0x5c, size 0x4
  __declspec(property(get = __get__floatParseHandling, put = __set__floatParseHandling))::Newtonsoft::Json::FloatParseHandling _floatParseHandling;

  /// @brief Field _dateFormatString, offset 0x60, size 0x8
  __declspec(property(get = __get__dateFormatString, put = __set__dateFormatString))::StringW _dateFormatString;

  /// @brief Field _stack, offset 0x68, size 0x8
  __declspec(property(get = __get__stack, put = __set__stack))::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* _stack;

  /// @brief Field <CloseInput>k__BackingField, offset 0x70, size 0x1
  __declspec(property(get = __get__CloseInput_k__BackingField, put = __set__CloseInput_k__BackingField)) bool _CloseInput_k__BackingField;

  /// @brief Field <SupportMultipleContent>k__BackingField, offset 0x71, size 0x1
  __declspec(property(get = __get__SupportMultipleContent_k__BackingField, put = __set__SupportMultipleContent_k__BackingField)) bool _SupportMultipleContent_k__BackingField;

  __declspec(property(get = get_CurrentState))::Newtonsoft::Json::__JsonReader__State CurrentState;

  __declspec(property(get = get_CloseInput, put = set_CloseInput)) bool CloseInput;

  __declspec(property(get = get_SupportMultipleContent, put = set_SupportMultipleContent)) bool SupportMultipleContent;

  __declspec(property(get = get_QuoteChar, put = set_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_DateTimeZoneHandling, put = set_DateTimeZoneHandling))::Newtonsoft::Json::DateTimeZoneHandling DateTimeZoneHandling;

  __declspec(property(get = get_DateParseHandling, put = set_DateParseHandling))::Newtonsoft::Json::DateParseHandling DateParseHandling;

  __declspec(property(get = get_FloatParseHandling, put = set_FloatParseHandling))::Newtonsoft::Json::FloatParseHandling FloatParseHandling;

  __declspec(property(get = get_DateFormatString, put = set_DateFormatString))::StringW DateFormatString;

  __declspec(property(get = get_MaxDepth, put = set_MaxDepth))::System::Nullable_1<int32_t> MaxDepth;

  __declspec(property(get = get_TokenType))::Newtonsoft::Json::JsonToken TokenType;

  __declspec(property(get = get_Value))::System::Object* Value;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_Path))::StringW Path;

  __declspec(property(get = get_Culture, put = set_Culture))::System::Globalization::CultureInfo* Culture;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::Newtonsoft::Json::JsonToken& __get__tokenType();

  constexpr ::Newtonsoft::Json::JsonToken const& __get__tokenType() const;

  constexpr void __set__tokenType(::Newtonsoft::Json::JsonToken value);

  constexpr ::System::Object*& __get__value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__value() const;

  constexpr void __set__value(::System::Object* value);

  constexpr char16_t& __get__quoteChar();

  constexpr char16_t const& __get__quoteChar() const;

  constexpr void __set__quoteChar(char16_t value);

  constexpr ::Newtonsoft::Json::__JsonReader__State& __get__currentState();

  constexpr ::Newtonsoft::Json::__JsonReader__State const& __get__currentState() const;

  constexpr void __set__currentState(::Newtonsoft::Json::__JsonReader__State value);

  constexpr ::Newtonsoft::Json::JsonPosition& __get__currentPosition();

  constexpr ::Newtonsoft::Json::JsonPosition const& __get__currentPosition() const;

  constexpr void __set__currentPosition(::Newtonsoft::Json::JsonPosition value);

  constexpr ::System::Globalization::CultureInfo*& __get__culture();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __get__culture() const;

  constexpr void __set__culture(::System::Globalization::CultureInfo* value);

  constexpr ::Newtonsoft::Json::DateTimeZoneHandling& __get__dateTimeZoneHandling();

  constexpr ::Newtonsoft::Json::DateTimeZoneHandling const& __get__dateTimeZoneHandling() const;

  constexpr void __set__dateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value);

  constexpr ::System::Nullable_1<int32_t>& __get__maxDepth();

  constexpr ::System::Nullable_1<int32_t> const& __get__maxDepth() const;

  constexpr void __set__maxDepth(::System::Nullable_1<int32_t> value);

  constexpr bool& __get__hasExceededMaxDepth();

  constexpr bool const& __get__hasExceededMaxDepth() const;

  constexpr void __set__hasExceededMaxDepth(bool value);

  constexpr ::Newtonsoft::Json::DateParseHandling& __get__dateParseHandling();

  constexpr ::Newtonsoft::Json::DateParseHandling const& __get__dateParseHandling() const;

  constexpr void __set__dateParseHandling(::Newtonsoft::Json::DateParseHandling value);

  constexpr ::Newtonsoft::Json::FloatParseHandling& __get__floatParseHandling();

  constexpr ::Newtonsoft::Json::FloatParseHandling const& __get__floatParseHandling() const;

  constexpr void __set__floatParseHandling(::Newtonsoft::Json::FloatParseHandling value);

  constexpr ::StringW& __get__dateFormatString();

  constexpr ::StringW const& __get__dateFormatString() const;

  constexpr void __set__dateFormatString(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*& __get__stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*> const& __get__stack() const;

  constexpr void __set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* value);

  constexpr bool& __get__CloseInput_k__BackingField();

  constexpr bool const& __get__CloseInput_k__BackingField() const;

  constexpr void __set__CloseInput_k__BackingField(bool value);

  constexpr bool& __get__SupportMultipleContent_k__BackingField();

  constexpr bool const& __get__SupportMultipleContent_k__BackingField() const;

  constexpr void __set__SupportMultipleContent_k__BackingField(bool value);

  /// @brief Method get_CurrentState, addr 0x264a574, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::__JsonReader__State get_CurrentState();

  /// @brief Method get_CloseInput, addr 0x264a57c, size 0x8, virtual false, abstract: false, final false
  inline bool get_CloseInput();

  /// @brief Method set_CloseInput, addr 0x264a584, size 0xc, virtual false, abstract: false, final false
  inline void set_CloseInput(bool value);

  /// @brief Method get_SupportMultipleContent, addr 0x264a590, size 0x8, virtual false, abstract: false, final false
  inline bool get_SupportMultipleContent();

  /// @brief Method set_SupportMultipleContent, addr 0x264a598, size 0xc, virtual false, abstract: false, final false
  inline void set_SupportMultipleContent(bool value);

  /// @brief Method get_QuoteChar, addr 0x264a5a4, size 0x8, virtual true, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method set_QuoteChar, addr 0x264a5ac, size 0x8, virtual true, abstract: false, final false
  inline void set_QuoteChar(char16_t value);

  /// @brief Method get_DateTimeZoneHandling, addr 0x264a5b4, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling();

  /// @brief Method set_DateTimeZoneHandling, addr 0x264a5bc, size 0x64, virtual false, abstract: false, final false
  inline void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value);

  /// @brief Method get_DateParseHandling, addr 0x264a620, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::DateParseHandling get_DateParseHandling();

  /// @brief Method set_DateParseHandling, addr 0x264a628, size 0x64, virtual false, abstract: false, final false
  inline void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value);

  /// @brief Method get_FloatParseHandling, addr 0x264a68c, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::FloatParseHandling get_FloatParseHandling();

  /// @brief Method set_FloatParseHandling, addr 0x264a694, size 0x64, virtual false, abstract: false, final false
  inline void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value);

  /// @brief Method get_DateFormatString, addr 0x264a6f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DateFormatString();

  /// @brief Method set_DateFormatString, addr 0x264a700, size 0x8, virtual false, abstract: false, final false
  inline void set_DateFormatString(::StringW value);

  /// @brief Method get_MaxDepth, addr 0x264a708, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MaxDepth();

  /// @brief Method set_MaxDepth, addr 0x264a710, size 0xc0, virtual false, abstract: false, final false
  inline void set_MaxDepth(::System::Nullable_1<int32_t> value);

  /// @brief Method get_TokenType, addr 0x264a7d0, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::JsonToken get_TokenType();

  /// @brief Method get_Value, addr 0x264a7d8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Method get_ValueType, addr 0x264a7e0, size 0x14, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_Depth, addr 0x264a7f4, size 0x7c, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_Path, addr 0x264a870, size 0x120, virtual true, abstract: false, final false
  inline ::StringW get_Path();

  /// @brief Method get_Culture, addr 0x26414b4, size 0x68, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_Culture();

  /// @brief Method set_Culture, addr 0x264a990, size 0x8, virtual false, abstract: false, final false
  inline void set_Culture(::System::Globalization::CultureInfo* value);

  /// @brief Method GetPosition, addr 0x264a998, size 0xa4, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonPosition GetPosition(int32_t depth);

  static inline ::Newtonsoft::Json::JsonReader* New_ctor();

  /// @brief Method .ctor, addr 0x2640920, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Push, addr 0x264aa3c, size 0x288, virtual false, abstract: false, final false
  inline void Push(::Newtonsoft::Json::JsonContainerType value);

  /// @brief Method Pop, addr 0x264acdc, size 0x11c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonContainerType Pop();

  /// @brief Method Peek, addr 0x264adf8, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonContainerType Peek();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Read();

  /// @brief Method ReadAsInt32, addr 0x264ae00, size 0x2dc, virtual true, abstract: false, final false
  inline ::System::Nullable_1<int32_t> ReadAsInt32();

  /// @brief Method ReadInt32String, addr 0x264600c, size 0x1e8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> ReadInt32String(::StringW s);

  /// @brief Method ReadAsString, addr 0x264b150, size 0x368, virtual true, abstract: false, final false
  inline ::StringW ReadAsString();

  /// @brief Method ReadAsBytes, addr 0x264b4b8, size 0x3f8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAsBytes();

  /// @brief Method ReadArrayIntoByteArray, addr 0x2643a38, size 0x29c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadArrayIntoByteArray();

  /// @brief Method ReadAsDouble, addr 0x264b8b0, size 0x2cc, virtual true, abstract: false, final false
  inline ::System::Nullable_1<double_t> ReadAsDouble();

  /// @brief Method ReadDoubleString, addr 0x2646420, size 0x1dc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<double_t> ReadDoubleString(::StringW s);

  /// @brief Method ReadAsBoolean, addr 0x264bb7c, size 0x2c0, virtual true, abstract: false, final false
  inline ::System::Nullable_1<bool> ReadAsBoolean();

  /// @brief Method ReadBooleanString, addr 0x2645d34, size 0x1e8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> ReadBooleanString(::StringW s);

  /// @brief Method ReadAsDecimal, addr 0x264be3c, size 0x310, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::Decimal> ReadAsDecimal();

  /// @brief Method ReadDecimalString, addr 0x26461f4, size 0x22c, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::Decimal> ReadDecimalString(::StringW s);

  /// @brief Method ReadAsDateTime, addr 0x264c14c, size 0x2c0, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> ReadAsDateTime();

  /// @brief Method ReadDateTimeString, addr 0x26440b8, size 0x288, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> ReadDateTimeString(::StringW s);

  /// @brief Method ReadAsDateTimeOffset, addr 0x264c40c, size 0x2cc, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset();

  /// @brief Method ReadDateTimeOffsetString, addr 0x2644340, size 0x268, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTimeOffset> ReadDateTimeOffsetString(::StringW s);

  /// @brief Method ReaderReadAndAssert, addr 0x264383c, size 0x44, virtual false, abstract: false, final false
  inline void ReaderReadAndAssert();

  /// @brief Method CreateUnexpectedEndException, addr 0x26468f4, size 0x4c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonReaderException* CreateUnexpectedEndException();

  /// @brief Method ReadIntoWrappedTypeObject, addr 0x2643880, size 0x1b8, virtual false, abstract: false, final false
  inline void ReadIntoWrappedTypeObject();

  /// @brief Method Skip, addr 0x264c6d8, size 0x98, virtual false, abstract: false, final false
  inline void Skip();

  /// @brief Method SetToken, addr 0x2642380, size 0xc, virtual false, abstract: false, final false
  inline void SetToken(::Newtonsoft::Json::JsonToken newToken);

  /// @brief Method SetToken, addr 0x264558c, size 0x8, virtual false, abstract: false, final false
  inline void SetToken(::Newtonsoft::Json::JsonToken newToken, ::System::Object* value);

  /// @brief Method SetToken, addr 0x264135c, size 0x158, virtual false, abstract: false, final false
  inline void SetToken(::Newtonsoft::Json::JsonToken newToken, ::System::Object* value, bool updateIndex);

  /// @brief Method SetPostValueState, addr 0x264131c, size 0x40, virtual false, abstract: false, final false
  inline void SetPostValueState(bool updateIndex);

  /// @brief Method UpdateScopeWithFinishedValue, addr 0x264acc4, size 0x18, virtual false, abstract: false, final false
  inline void UpdateScopeWithFinishedValue();

  /// @brief Method ValidateEnd, addr 0x264c770, size 0x100, virtual false, abstract: false, final false
  inline void ValidateEnd(::Newtonsoft::Json::JsonToken endToken);

  /// @brief Method SetStateBasedOnCurrent, addr 0x2645f1c, size 0xf0, virtual false, abstract: false, final false
  inline void SetStateBasedOnCurrent();

  /// @brief Method SetFinished, addr 0x264c870, size 0x18, virtual false, abstract: false, final false
  inline void SetFinished();

  /// @brief Method GetTypeForCloseToken, addr 0x264c888, size 0xa8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonContainerType GetTypeForCloseToken(::Newtonsoft::Json::JsonToken token);

  /// @brief Method System.IDisposable.Dispose, addr 0x264c930, size 0x70, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method Dispose, addr 0x264c9a0, size 0x24, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Close, addr 0x2647a04, size 0x14, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method ReadAndAssert, addr 0x264c9c4, size 0x54, virtual false, abstract: false, final false
  inline void ReadAndAssert();

  /// @brief Method ReadAndMoveToContent, addr 0x264ca20, size 0x30, virtual false, abstract: false, final false
  inline bool ReadAndMoveToContent();

  /// @brief Method MoveToContent, addr 0x264ca50, size 0x58, virtual false, abstract: false, final false
  inline bool MoveToContent();

  /// @brief Method GetContentToken, addr 0x264b0dc, size 0x74, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonToken GetContentToken();

  // Ctor Parameters [CppParam { name: "", ty: "JsonReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonReader(JsonReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonReader(JsonReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonReader();

public:
  /// @brief Field _tokenType, offset: 0x10, size: 0x4, def value: None
  ::Newtonsoft::Json::JsonToken ____tokenType;

  /// @brief Field _value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____value;

  /// @brief Field _quoteChar, offset: 0x20, size: 0x2, def value: None
  char16_t ____quoteChar;

  /// @brief Field _currentState, offset: 0x24, size: 0x4, def value: None
  ::Newtonsoft::Json::__JsonReader__State ____currentState;

  /// @brief Field _currentPosition, offset: 0x28, size: 0x18, def value: None
  ::Newtonsoft::Json::JsonPosition ____currentPosition;

  /// @brief Field _culture, offset: 0x40, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____culture;

  /// @brief Field _dateTimeZoneHandling, offset: 0x48, size: 0x4, def value: None
  ::Newtonsoft::Json::DateTimeZoneHandling ____dateTimeZoneHandling;

  /// @brief Field _maxDepth, offset: 0x4c, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maxDepth;

  /// @brief Field _hasExceededMaxDepth, offset: 0x54, size: 0x1, def value: None
  bool ____hasExceededMaxDepth;

  /// @brief Field _dateParseHandling, offset: 0x58, size: 0x4, def value: None
  ::Newtonsoft::Json::DateParseHandling ____dateParseHandling;

  /// @brief Field _floatParseHandling, offset: 0x5c, size: 0x4, def value: None
  ::Newtonsoft::Json::FloatParseHandling ____floatParseHandling;

  /// @brief Field _dateFormatString, offset: 0x60, size: 0x8, def value: None
  ::StringW ____dateFormatString;

  /// @brief Field _stack, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* ____stack;

  /// @brief Field <CloseInput>k__BackingField, offset: 0x70, size: 0x1, def value: None
  bool ____CloseInput_k__BackingField;

  /// @brief Field <SupportMultipleContent>k__BackingField, offset: 0x71, size: 0x1, def value: None
  bool ____SupportMultipleContent_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonReader, 0x78>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____tokenType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____quoteChar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____currentState) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____currentPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____culture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____dateTimeZoneHandling) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____maxDepth) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____hasExceededMaxDepth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____dateParseHandling) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____floatParseHandling) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____dateFormatString) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____stack) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____CloseInput_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____SupportMultipleContent_k__BackingField) == 0x71, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonReader__State, "Newtonsoft.Json", "JsonReader/State");
NEED_NO_BOX(::Newtonsoft::Json::JsonReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonReader*, "Newtonsoft.Json", "JsonReader");
