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
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11842))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __JsonWriter__State(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonWriter__State();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Start value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::__JsonWriter__State const Start;

  /// @brief Field Property value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::__JsonWriter__State const Property;

  /// @brief Field ObjectStart value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::__JsonWriter__State const ObjectStart;

  /// @brief Field Object value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::__JsonWriter__State const Object;

  /// @brief Field ArrayStart value: static_cast<int32_t>(0x4)
  static ::Newtonsoft::Json::__JsonWriter__State const ArrayStart;

  /// @brief Field Array value: static_cast<int32_t>(0x5)
  static ::Newtonsoft::Json::__JsonWriter__State const Array;

  /// @brief Field ConstructorStart value: static_cast<int32_t>(0x6)
  static ::Newtonsoft::Json::__JsonWriter__State const ConstructorStart;

  /// @brief Field Constructor value: static_cast<int32_t>(0x7)
  static ::Newtonsoft::Json::__JsonWriter__State const Constructor;

  /// @brief Field Closed value: static_cast<int32_t>(0x8)
  static ::Newtonsoft::Json::__JsonWriter__State const Closed;

  /// @brief Field Error value: static_cast<int32_t>(0x9)
  static ::Newtonsoft::Json::__JsonWriter__State const Error;

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11795)), TypeDefinitionIndex(TypeDefinitionIndex(11797)),
// TypeDefinitionIndex(TypeDefinitionIndex(11798)), TypeDefinitionIndex(TypeDefinitionIndex(11800)), TypeDefinitionIndex(TypeDefinitionIndex(11807)), TypeDefinitionIndex(TypeDefinitionIndex(11810)),
// TypeDefinitionIndex(TypeDefinitionIndex(11842))] Self: TypeDefinitionIndex(TypeDefinitionIndex(11843)) CS Name: ::Newtonsoft.Json::JsonWriter*
class CORDL_TYPE JsonWriter : public ::System::Object {
public:
  // Declarations
  using State = ::Newtonsoft::Json::__JsonWriter__State;

  /// @brief Field _stack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__stack, put = __cordl_internal_set__stack))::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* _stack;

  /// @brief Field _currentPosition, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get__currentPosition, put = __cordl_internal_set__currentPosition))::Newtonsoft::Json::JsonPosition _currentPosition;

  /// @brief Field _currentState, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__currentState, put = __cordl_internal_set__currentState))::Newtonsoft::Json::__JsonWriter__State _currentState;

  /// @brief Field _formatting, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__formatting, put = __cordl_internal_set__formatting))::Newtonsoft::Json::Formatting _formatting;

  /// @brief Field <CloseOutput>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__CloseOutput_k__BackingField, put = __cordl_internal_set__CloseOutput_k__BackingField)) bool _CloseOutput_k__BackingField;

  /// @brief Field _dateFormatHandling, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__dateFormatHandling, put = __cordl_internal_set__dateFormatHandling))::Newtonsoft::Json::DateFormatHandling _dateFormatHandling;

  /// @brief Field _dateTimeZoneHandling, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__dateTimeZoneHandling, put = __cordl_internal_set__dateTimeZoneHandling))::Newtonsoft::Json::DateTimeZoneHandling _dateTimeZoneHandling;

  /// @brief Field _stringEscapeHandling, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__stringEscapeHandling, put = __cordl_internal_set__stringEscapeHandling))::Newtonsoft::Json::StringEscapeHandling _stringEscapeHandling;

  /// @brief Field _floatFormatHandling, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__floatFormatHandling, put = __cordl_internal_set__floatFormatHandling))::Newtonsoft::Json::FloatFormatHandling _floatFormatHandling;

  /// @brief Field _dateFormatString, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__dateFormatString, put = __cordl_internal_set__dateFormatString))::StringW _dateFormatString;

  /// @brief Field _culture, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__culture, put = __cordl_internal_set__culture))::System::Globalization::CultureInfo* _culture;

  /// @brief Field StateArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StateArray,
                             put = setStaticF_StateArray))::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                                                   ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*> StateArray;

  /// @brief Field StateArrayTempate, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_StateArrayTempate,
               put = setStaticF_StateArrayTempate))::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                                            ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*> StateArrayTempate;

  __declspec(property(get = get_CloseOutput, put = set_CloseOutput)) bool CloseOutput;

  __declspec(property(get = get_Top)) int32_t Top;

  __declspec(property(get = get_WriteState))::Newtonsoft::Json::WriteState WriteState;

  __declspec(property(get = get_ContainerPath))::StringW ContainerPath;

  __declspec(property(get = get_Path))::StringW Path;

  __declspec(property(get = get_Formatting, put = set_Formatting))::Newtonsoft::Json::Formatting Formatting;

  __declspec(property(get = get_DateFormatHandling, put = set_DateFormatHandling))::Newtonsoft::Json::DateFormatHandling DateFormatHandling;

  __declspec(property(get = get_DateTimeZoneHandling, put = set_DateTimeZoneHandling))::Newtonsoft::Json::DateTimeZoneHandling DateTimeZoneHandling;

  __declspec(property(get = get_StringEscapeHandling, put = set_StringEscapeHandling))::Newtonsoft::Json::StringEscapeHandling StringEscapeHandling;

  __declspec(property(get = get_FloatFormatHandling, put = set_FloatFormatHandling))::Newtonsoft::Json::FloatFormatHandling FloatFormatHandling;

  __declspec(property(get = get_DateFormatString, put = set_DateFormatString))::StringW DateFormatString;

  __declspec(property(get = get_Culture, put = set_Culture))::System::Globalization::CultureInfo* Culture;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*& __cordl_internal_get__stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*> const& __cordl_internal_get__stack() const;

  constexpr void __cordl_internal_set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* value);

  constexpr ::Newtonsoft::Json::JsonPosition& __cordl_internal_get__currentPosition();

  constexpr ::Newtonsoft::Json::JsonPosition const& __cordl_internal_get__currentPosition() const;

  constexpr void __cordl_internal_set__currentPosition(::Newtonsoft::Json::JsonPosition value);

  constexpr ::Newtonsoft::Json::__JsonWriter__State& __cordl_internal_get__currentState();

  constexpr ::Newtonsoft::Json::__JsonWriter__State const& __cordl_internal_get__currentState() const;

  constexpr void __cordl_internal_set__currentState(::Newtonsoft::Json::__JsonWriter__State value);

  constexpr ::Newtonsoft::Json::Formatting& __cordl_internal_get__formatting();

  constexpr ::Newtonsoft::Json::Formatting const& __cordl_internal_get__formatting() const;

  constexpr void __cordl_internal_set__formatting(::Newtonsoft::Json::Formatting value);

  constexpr bool& __cordl_internal_get__CloseOutput_k__BackingField();

  constexpr bool const& __cordl_internal_get__CloseOutput_k__BackingField() const;

  constexpr void __cordl_internal_set__CloseOutput_k__BackingField(bool value);

  constexpr ::Newtonsoft::Json::DateFormatHandling& __cordl_internal_get__dateFormatHandling();

  constexpr ::Newtonsoft::Json::DateFormatHandling const& __cordl_internal_get__dateFormatHandling() const;

  constexpr void __cordl_internal_set__dateFormatHandling(::Newtonsoft::Json::DateFormatHandling value);

  constexpr ::Newtonsoft::Json::DateTimeZoneHandling& __cordl_internal_get__dateTimeZoneHandling();

  constexpr ::Newtonsoft::Json::DateTimeZoneHandling const& __cordl_internal_get__dateTimeZoneHandling() const;

  constexpr void __cordl_internal_set__dateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value);

  constexpr ::Newtonsoft::Json::StringEscapeHandling& __cordl_internal_get__stringEscapeHandling();

  constexpr ::Newtonsoft::Json::StringEscapeHandling const& __cordl_internal_get__stringEscapeHandling() const;

  constexpr void __cordl_internal_set__stringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value);

  constexpr ::Newtonsoft::Json::FloatFormatHandling& __cordl_internal_get__floatFormatHandling();

  constexpr ::Newtonsoft::Json::FloatFormatHandling const& __cordl_internal_get__floatFormatHandling() const;

  constexpr void __cordl_internal_set__floatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value);

  constexpr ::StringW& __cordl_internal_get__dateFormatString();

  constexpr ::StringW const& __cordl_internal_get__dateFormatString() const;

  constexpr void __cordl_internal_set__dateFormatString(::StringW value);

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __cordl_internal_get__culture() const;

  constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo* value);

  static inline void setStaticF_StateArray(::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                                    ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
                                               value);

  static inline ::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                         ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
  getStaticF_StateArray();

  static inline void setStaticF_StateArrayTempate(::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                                           ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
                                                      value);

  static inline ::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                         ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
  getStaticF_StateArrayTempate();

  /// @brief Method BuildStateArray, addr 0x2653c74, size 0x570, virtual false, abstract: false, final false
  static inline ::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                         ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
  BuildStateArray();

  /// @brief Method get_CloseOutput, addr 0x2654dd8, size 0x8, virtual false, abstract: false, final false
  inline bool get_CloseOutput();

  /// @brief Method set_CloseOutput, addr 0x2654de0, size 0xc, virtual false, abstract: false, final false
  inline void set_CloseOutput(bool value);

  /// @brief Method get_Top, addr 0x2654dec, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_Top();

  /// @brief Method get_WriteState, addr 0x2654e44, size 0x9c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::WriteState get_WriteState();

  /// @brief Method get_ContainerPath, addr 0x2654ee0, size 0xac, virtual false, abstract: false, final false
  inline ::StringW get_ContainerPath();

  /// @brief Method get_Path, addr 0x2654f8c, size 0x124, virtual false, abstract: false, final false
  inline ::StringW get_Path();

  /// @brief Method get_Formatting, addr 0x26550b0, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Formatting get_Formatting();

  /// @brief Method set_Formatting, addr 0x26550b8, size 0x64, virtual false, abstract: false, final false
  inline void set_Formatting(::Newtonsoft::Json::Formatting value);

  /// @brief Method get_DateFormatHandling, addr 0x265511c, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::DateFormatHandling get_DateFormatHandling();

  /// @brief Method set_DateFormatHandling, addr 0x2655124, size 0x64, virtual false, abstract: false, final false
  inline void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value);

  /// @brief Method get_DateTimeZoneHandling, addr 0x2655188, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling();

  /// @brief Method set_DateTimeZoneHandling, addr 0x2655190, size 0x64, virtual false, abstract: false, final false
  inline void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value);

  /// @brief Method get_StringEscapeHandling, addr 0x26551f4, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling();

  /// @brief Method set_StringEscapeHandling, addr 0x26551fc, size 0x6c, virtual false, abstract: false, final false
  inline void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value);

  /// @brief Method OnStringEscapeHandlingChanged, addr 0x2655268, size 0x4, virtual true, abstract: false, final false
  inline void OnStringEscapeHandlingChanged();

  /// @brief Method get_FloatFormatHandling, addr 0x265526c, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling();

  /// @brief Method set_FloatFormatHandling, addr 0x2655274, size 0x64, virtual false, abstract: false, final false
  inline void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value);

  /// @brief Method get_DateFormatString, addr 0x26552d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DateFormatString();

  /// @brief Method set_DateFormatString, addr 0x26552e0, size 0x8, virtual false, abstract: false, final false
  inline void set_DateFormatString(::StringW value);

  /// @brief Method get_Culture, addr 0x26552e8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_Culture();

  /// @brief Method set_Culture, addr 0x2655350, size 0x8, virtual false, abstract: false, final false
  inline void set_Culture(::System::Globalization::CultureInfo* value);

  static inline ::Newtonsoft::Json::JsonWriter* New_ctor();

  /// @brief Method .ctor, addr 0x2655358, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method UpdateScopeWithFinishedValue, addr 0x2655384, size 0x18, virtual false, abstract: false, final false
  inline void UpdateScopeWithFinishedValue();

  /// @brief Method Push, addr 0x265539c, size 0x178, virtual false, abstract: false, final false
  inline void Push(::Newtonsoft::Json::JsonContainerType value);

  /// @brief Method Pop, addr 0x2655514, size 0xd0, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonContainerType Pop();

  /// @brief Method Peek, addr 0x2654e3c, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonContainerType Peek();

  /// @brief Method Flush, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Flush();

  /// @brief Method Close, addr 0x26555e4, size 0x4, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method WriteStartObject, addr 0x2655628, size 0xc, virtual true, abstract: false, final false
  inline void WriteStartObject();

  /// @brief Method WriteEndObject, addr 0x2655674, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndObject();

  /// @brief Method WriteStartArray, addr 0x2655680, size 0xc, virtual true, abstract: false, final false
  inline void WriteStartArray();

  /// @brief Method WriteEndArray, addr 0x265568c, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndArray();

  /// @brief Method WriteStartConstructor, addr 0x2655694, size 0xc, virtual true, abstract: false, final false
  inline void WriteStartConstructor(::StringW name);

  /// @brief Method WriteEndConstructor, addr 0x26556a0, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndConstructor();

  /// @brief Method WritePropertyName, addr 0x26556a8, size 0x10, virtual true, abstract: false, final false
  inline void WritePropertyName(::StringW name);

  /// @brief Method WritePropertyName, addr 0x26556c8, size 0x10, virtual true, abstract: false, final false
  inline void WritePropertyName(::StringW name, bool escape);

  /// @brief Method WriteEnd, addr 0x26556d8, size 0x8, virtual true, abstract: false, final false
  inline void WriteEnd();

  /// @brief Method WriteToken, addr 0x265579c, size 0x8, virtual false, abstract: false, final false
  inline void WriteToken(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method WriteToken, addr 0x26557a4, size 0x7c, virtual false, abstract: false, final false
  inline void WriteToken(::Newtonsoft::Json::JsonReader* reader, bool writeChildren);

  /// @brief Method WriteToken, addr 0x2655874, size 0x5cc, virtual false, abstract: false, final false
  inline void WriteToken(::Newtonsoft::Json::JsonToken token, ::System::Object* value);

  /// @brief Method WriteToken, addr 0x2655f40, size 0x8, virtual false, abstract: false, final false
  inline void WriteToken(::Newtonsoft::Json::JsonToken token);

  /// @brief Method WriteToken, addr 0x2655f48, size 0x1c0, virtual true, abstract: false, final false
  inline void WriteToken(::Newtonsoft::Json::JsonReader* reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments);

  /// @brief Method WriteConstructorDate, addr 0x2656118, size 0x1f0, virtual false, abstract: false, final false
  inline void WriteConstructorDate(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method WriteEnd, addr 0x26556e0, size 0xbc, virtual false, abstract: false, final false
  inline void WriteEnd(::Newtonsoft::Json::JsonContainerType type);

  /// @brief Method AutoCompleteAll, addr 0x26555e8, size 0x40, virtual false, abstract: false, final false
  inline void AutoCompleteAll();

  /// @brief Method GetCloseTokenForType, addr 0x26563a0, size 0x88, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonToken GetCloseTokenForType(::Newtonsoft::Json::JsonContainerType type);

  /// @brief Method AutoCompleteClose, addr 0x2656428, size 0x1e0, virtual false, abstract: false, final false
  inline void AutoCompleteClose(::Newtonsoft::Json::JsonContainerType type);

  /// @brief Method WriteEnd, addr 0x2656608, size 0x4, virtual true, abstract: false, final false
  inline void WriteEnd(::Newtonsoft::Json::JsonToken token);

  /// @brief Method WriteIndent, addr 0x265660c, size 0x4, virtual true, abstract: false, final false
  inline void WriteIndent();

  /// @brief Method WriteValueDelimiter, addr 0x2656610, size 0x4, virtual true, abstract: false, final false
  inline void WriteValueDelimiter();

  /// @brief Method WriteIndentSpace, addr 0x2656614, size 0x4, virtual true, abstract: false, final false
  inline void WriteIndentSpace();

  /// @brief Method AutoComplete, addr 0x2656618, size 0x204, virtual false, abstract: false, final false
  inline void AutoComplete(::Newtonsoft::Json::JsonToken tokenBeingWritten);

  /// @brief Method WriteNull, addr 0x26568f8, size 0x1c, virtual true, abstract: false, final false
  inline void WriteNull();

  /// @brief Method WriteUndefined, addr 0x265692c, size 0x1c, virtual true, abstract: false, final false
  inline void WriteUndefined();

  /// @brief Method WriteRaw, addr 0x2656948, size 0x4, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW json);

  /// @brief Method WriteRawValue, addr 0x2656950, size 0x50, virtual true, abstract: false, final false
  inline void WriteRawValue(::StringW json);

  /// @brief Method WriteValue, addr 0x26569a0, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteValue, addr 0x26569bc, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(int32_t value);

  /// @brief Method WriteValue, addr 0x26569d8, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(uint32_t value);

  /// @brief Method WriteValue, addr 0x26569f4, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(int64_t value);

  /// @brief Method WriteValue, addr 0x2656a10, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(uint64_t value);

  /// @brief Method WriteValue, addr 0x2656a2c, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(float_t value);

  /// @brief Method WriteValue, addr 0x2656a48, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(double_t value);

  /// @brief Method WriteValue, addr 0x2656a64, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(bool value);

  /// @brief Method WriteValue, addr 0x2656a80, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(int16_t value);

  /// @brief Method WriteValue, addr 0x2656a9c, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(uint16_t value);

  /// @brief Method WriteValue, addr 0x2656ab8, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(char16_t value);

  /// @brief Method WriteValue, addr 0x2656ad4, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(uint8_t value);

  /// @brief Method WriteValue, addr 0x2656af0, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(int8_t value);

  /// @brief Method WriteValue, addr 0x2656b0c, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Decimal value);

  /// @brief Method WriteValue, addr 0x2656b28, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTime value);

  /// @brief Method WriteValue, addr 0x2656b44, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTimeOffset value);

  /// @brief Method WriteValue, addr 0x2656b60, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Guid value);

  /// @brief Method WriteValue, addr 0x2656b7c, size 0x1c, virtual true, abstract: false, final false
  inline void WriteValue(::System::TimeSpan value);

  /// @brief Method WriteValue, addr 0x2656b98, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int32_t> value);

  /// @brief Method WriteValue, addr 0x2656c14, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint32_t> value);

  /// @brief Method WriteValue, addr 0x2656c90, size 0x8c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int64_t> value);

  /// @brief Method WriteValue, addr 0x2656d1c, size 0x8c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint64_t> value);

  /// @brief Method WriteValue, addr 0x2656da8, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<float_t> value);

  /// @brief Method WriteValue, addr 0x2656e28, size 0x90, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<double_t> value);

  /// @brief Method WriteValue, addr 0x2656eb8, size 0x88, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<bool> value);

  /// @brief Method WriteValue, addr 0x2656f40, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int16_t> value);

  /// @brief Method WriteValue, addr 0x2656fbc, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint16_t> value);

  /// @brief Method WriteValue, addr 0x2657038, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<char16_t> value);

  /// @brief Method WriteValue, addr 0x26570b4, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint8_t> value);

  /// @brief Method WriteValue, addr 0x2657130, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int8_t> value);

  /// @brief Method WriteValue, addr 0x26571ac, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::Decimal> value);

  /// @brief Method WriteValue, addr 0x265722c, size 0x8c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method WriteValue, addr 0x26572b8, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::DateTimeOffset> value);

  /// @brief Method WriteValue, addr 0x2657338, size 0x84, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::Guid> value);

  /// @brief Method WriteValue, addr 0x26573bc, size 0x8c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method WriteValue, addr 0x2657448, size 0x30, virtual true, abstract: false, final false
  inline void WriteValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method WriteValue, addr 0x2657478, size 0xac, virtual true, abstract: false, final false
  inline void WriteValue(::System::Uri* value);

  /// @brief Method WriteValue, addr 0x2657524, size 0xd4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Object* value);

  /// @brief Method WriteComment, addr 0x2658778, size 0x8, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteWhitespace, addr 0x2658788, size 0x4, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method System.IDisposable.Dispose, addr 0x26587e8, size 0x70, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method Dispose, addr 0x2658858, size 0x20, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method WriteValue, addr 0x2657660, size 0x1118, virtual false, abstract: false, final false
  static inline void WriteValue(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode typeCode, ::System::Object* value);

  /// @brief Method CreateUnsupportedTypeException, addr 0x2658964, size 0xb4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonWriterException* CreateUnsupportedTypeException(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value);

  /// @brief Method SetWriteState, addr 0x2658ac0, size 0x1c0, virtual false, abstract: false, final false
  inline void SetWriteState(::Newtonsoft::Json::JsonToken token, ::System::Object* value);

  /// @brief Method InternalWriteEnd, addr 0x265567c, size 0x4, virtual false, abstract: false, final false
  inline void InternalWriteEnd(::Newtonsoft::Json::JsonContainerType container);

  /// @brief Method InternalWritePropertyName, addr 0x26556b8, size 0x10, virtual false, abstract: false, final false
  inline void InternalWritePropertyName(::StringW name);

  /// @brief Method InternalWriteRaw, addr 0x265694c, size 0x4, virtual false, abstract: false, final false
  inline void InternalWriteRaw();

  /// @brief Method InternalWriteStart, addr 0x2655634, size 0x40, virtual false, abstract: false, final false
  inline void InternalWriteStart(::Newtonsoft::Json::JsonToken token, ::Newtonsoft::Json::JsonContainerType container);

  /// @brief Method InternalWriteValue, addr 0x2656914, size 0x18, virtual false, abstract: false, final false
  inline void InternalWriteValue(::Newtonsoft::Json::JsonToken token);

  /// @brief Method InternalWriteWhitespace, addr 0x265878c, size 0x5c, virtual false, abstract: false, final false
  inline void InternalWriteWhitespace(::StringW ws);

  /// @brief Method InternalWriteComment, addr 0x2658780, size 0x8, virtual false, abstract: false, final false
  inline void InternalWriteComment();

  // Ctor Parameters [CppParam { name: "", ty: "JsonWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonWriter(JsonWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonWriter(JsonWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonWriter();

public:
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
