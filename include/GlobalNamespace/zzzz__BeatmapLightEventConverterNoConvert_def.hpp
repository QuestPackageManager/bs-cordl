#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLightEventConverterNoConvert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLightEventConverterNoConvert)
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12;
}
namespace GlobalNamespace {
class BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13;
}
namespace GlobalNamespace {
class BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14;
}
namespace GlobalNamespace {
class BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class IBeatmapLightEventConverter;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
struct LightRotationDirection;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
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
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLightEventConverterNoConvert;
}
namespace GlobalNamespace {
class BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12;
}
namespace GlobalNamespace {
class BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13;
}
namespace GlobalNamespace {
class BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14;
}
namespace GlobalNamespace {
class BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLightEventConverterNoConvert);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15);
// Dependencies BasicBeatmapEventType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLightEventConverterNoConvert/<ConvertBasicBeatmapEvent>d__12
class CORDL_TYPE BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get =
                          System_Collections_Generic_IEnumerator_BeatmapEventData__get_Current)) ::GlobalNamespace::BeatmapEventData* System_Collections_Generic_IEnumerator_BeatmapEventData__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::GlobalNamespace::BeatmapEventData* __2__current;

  /// @brief Field <>3__basicBeatmapEventType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get___3__basicBeatmapEventType,
                      put = __cordl_internal_set___3__basicBeatmapEventType)) ::GlobalNamespace::BasicBeatmapEventType __3__basicBeatmapEventType;

  /// @brief Field <>3__floatValue, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__floatValue, put = __cordl_internal_set___3__floatValue)) float_t __3__floatValue;

  /// @brief Field <>3__time, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__time, put = __cordl_internal_set___3__time)) float_t __3__time;

  /// @brief Field <>3__value, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get___3__value, put = __cordl_internal_set___3__value)) int32_t __3__value;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::BeatmapLightEventConverterNoConvert* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field basicBeatmapEventType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_basicBeatmapEventType, put = __cordl_internal_set_basicBeatmapEventType)) ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType;

  /// @brief Field floatValue, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_floatValue, put = __cordl_internal_set_floatValue)) float_t floatValue;

  /// @brief Field time, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  /// @brief Field value, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int32_t value;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x360679c, size 0xe0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<BeatmapEventData>.GetEnumerator, addr 0x36068c4, size 0xb8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* System_Collections_Generic_IEnumerable_BeatmapEventData__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<BeatmapEventData>.get_Current, addr 0x360687c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapEventData* System_Collections_Generic_IEnumerator_BeatmapEventData__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x360697c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3606884, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x36068bc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3606798, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::GlobalNamespace::BeatmapEventData* const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::BeatmapEventData*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get___3__basicBeatmapEventType() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get___3__basicBeatmapEventType();

  constexpr float_t const& __cordl_internal_get___3__floatValue() const;

  constexpr float_t& __cordl_internal_get___3__floatValue();

  constexpr float_t const& __cordl_internal_get___3__time() const;

  constexpr float_t& __cordl_internal_get___3__time();

  constexpr int32_t const& __cordl_internal_get___3__value() const;

  constexpr int32_t& __cordl_internal_get___3__value();

  constexpr ::GlobalNamespace::BeatmapLightEventConverterNoConvert* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::BeatmapLightEventConverterNoConvert*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get_basicBeatmapEventType() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get_basicBeatmapEventType();

  constexpr float_t const& __cordl_internal_get_floatValue() const;

  constexpr float_t& __cordl_internal_get_floatValue();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr int32_t const& __cordl_internal_get_value() const;

  constexpr int32_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::GlobalNamespace::BeatmapEventData* value);

  constexpr void __cordl_internal_set___3__basicBeatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set___3__floatValue(float_t value);

  constexpr void __cordl_internal_set___3__time(float_t value);

  constexpr void __cordl_internal_set___3__value(int32_t value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::BeatmapLightEventConverterNoConvert* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_basicBeatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set_floatValue(float_t value);

  constexpr void __cordl_internal_set_time(float_t value);

  constexpr void __cordl_internal_set_value(int32_t value);

  /// @brief Method .ctor, addr 0x3606478, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__BeatmapEventData__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__BeatmapEventData__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12(BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12(BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14994 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventData* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLightEventConverterNoConvert* _____4__this;

  /// @brief Field basicBeatmapEventType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ___basicBeatmapEventType;

  /// @brief Field <>3__basicBeatmapEventType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType _____3__basicBeatmapEventType;

  /// @brief Field time, offset: 0x38, size: 0x4, def value: None
  float_t ___time;

  /// @brief Field <>3__time, offset: 0x3c, size: 0x4, def value: None
  float_t _____3__time;

  /// @brief Field value, offset: 0x40, size: 0x4, def value: None
  int32_t ___value;

  /// @brief Field <>3__value, offset: 0x44, size: 0x4, def value: None
  int32_t _____3__value;

  /// @brief Field floatValue, offset: 0x48, size: 0x4, def value: None
  float_t ___floatValue;

  /// @brief Field <>3__floatValue, offset: 0x4c, size: 0x4, def value: None
  float_t _____3__floatValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12, ___basicBeatmapEventType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12, _____3__basicBeatmapEventType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12, ___time) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12, _____3__time) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12, ___value) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12, _____3__value) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12, ___floatValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12, _____3__floatValue) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EaseType, EnvironmentColorType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLightEventConverterNoConvert/<ConvertLightColorBeatmapEvent>d__13
class CORDL_TYPE BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get =
                          System_Collections_Generic_IEnumerator_BeatmapEventData__get_Current)) ::GlobalNamespace::BeatmapEventData* System_Collections_Generic_IEnumerator_BeatmapEventData__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::GlobalNamespace::BeatmapEventData* __2__current;

  /// @brief Field <>3__brightness, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get___3__brightness, put = __cordl_internal_set___3__brightness)) float_t __3__brightness;

  /// @brief Field <>3__colorType, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get___3__colorType, put = __cordl_internal_set___3__colorType)) ::GlobalNamespace::EnvironmentColorType __3__colorType;

  /// @brief Field <>3__easeType, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get___3__easeType, put = __cordl_internal_set___3__easeType)) ::GlobalNamespace::EaseType __3__easeType;

  /// @brief Field <>3__elementId, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get___3__elementId, put = __cordl_internal_set___3__elementId)) int32_t __3__elementId;

  /// @brief Field <>3__groupId, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__groupId, put = __cordl_internal_set___3__groupId)) int32_t __3__groupId;

  /// @brief Field <>3__strobeBeatFrequency, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get___3__strobeBeatFrequency, put = __cordl_internal_set___3__strobeBeatFrequency)) int32_t __3__strobeBeatFrequency;

  /// @brief Field <>3__strobeBrightness, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get___3__strobeBrightness, put = __cordl_internal_set___3__strobeBrightness)) float_t __3__strobeBrightness;

  /// @brief Field <>3__strobeFade, offset 0x75, size 0x1
  __declspec(property(get = __cordl_internal_get___3__strobeFade, put = __cordl_internal_set___3__strobeFade)) bool __3__strobeFade;

  /// @brief Field <>3__time, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get___3__time, put = __cordl_internal_set___3__time)) float_t __3__time;

  /// @brief Field <>3__usePreviousValue, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get___3__usePreviousValue, put = __cordl_internal_set___3__usePreviousValue)) bool __3__usePreviousValue;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::BeatmapLightEventConverterNoConvert* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field brightness, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_brightness, put = __cordl_internal_set_brightness)) float_t brightness;

  /// @brief Field colorType, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_colorType, put = __cordl_internal_set_colorType)) ::GlobalNamespace::EnvironmentColorType colorType;

  /// @brief Field easeType, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_easeType, put = __cordl_internal_set_easeType)) ::GlobalNamespace::EaseType easeType;

  /// @brief Field elementId, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupId, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  /// @brief Field strobeBeatFrequency, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_strobeBeatFrequency, put = __cordl_internal_set_strobeBeatFrequency)) int32_t strobeBeatFrequency;

  /// @brief Field strobeBrightness, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_strobeBrightness, put = __cordl_internal_set_strobeBrightness)) float_t strobeBrightness;

  /// @brief Field strobeFade, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_strobeFade, put = __cordl_internal_set_strobeFade)) bool strobeFade;

  /// @brief Field time, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  /// @brief Field usePreviousValue, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_usePreviousValue, put = __cordl_internal_set_usePreviousValue)) bool usePreviousValue;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3606984, size 0x128, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<BeatmapEventData>.GetEnumerator, addr 0x3606af4, size 0xe8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* System_Collections_Generic_IEnumerable_BeatmapEventData__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<BeatmapEventData>.get_Current, addr 0x3606aac, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapEventData* System_Collections_Generic_IEnumerator_BeatmapEventData__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3606bdc, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3606ab4, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3606aec, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3606980, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::GlobalNamespace::BeatmapEventData* const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::BeatmapEventData*& __cordl_internal_get___2__current();

  constexpr float_t const& __cordl_internal_get___3__brightness() const;

  constexpr float_t& __cordl_internal_get___3__brightness();

  constexpr ::GlobalNamespace::EnvironmentColorType const& __cordl_internal_get___3__colorType() const;

  constexpr ::GlobalNamespace::EnvironmentColorType& __cordl_internal_get___3__colorType();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get___3__easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get___3__easeType();

  constexpr int32_t const& __cordl_internal_get___3__elementId() const;

  constexpr int32_t& __cordl_internal_get___3__elementId();

  constexpr int32_t const& __cordl_internal_get___3__groupId() const;

  constexpr int32_t& __cordl_internal_get___3__groupId();

  constexpr int32_t const& __cordl_internal_get___3__strobeBeatFrequency() const;

  constexpr int32_t& __cordl_internal_get___3__strobeBeatFrequency();

  constexpr float_t const& __cordl_internal_get___3__strobeBrightness() const;

  constexpr float_t& __cordl_internal_get___3__strobeBrightness();

  constexpr bool const& __cordl_internal_get___3__strobeFade() const;

  constexpr bool& __cordl_internal_get___3__strobeFade();

  constexpr float_t const& __cordl_internal_get___3__time() const;

  constexpr float_t& __cordl_internal_get___3__time();

  constexpr bool const& __cordl_internal_get___3__usePreviousValue() const;

  constexpr bool& __cordl_internal_get___3__usePreviousValue();

  constexpr ::GlobalNamespace::BeatmapLightEventConverterNoConvert* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::BeatmapLightEventConverterNoConvert*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr float_t const& __cordl_internal_get_brightness() const;

  constexpr float_t& __cordl_internal_get_brightness();

  constexpr ::GlobalNamespace::EnvironmentColorType const& __cordl_internal_get_colorType() const;

  constexpr ::GlobalNamespace::EnvironmentColorType& __cordl_internal_get_colorType();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr int32_t const& __cordl_internal_get_strobeBeatFrequency() const;

  constexpr int32_t& __cordl_internal_get_strobeBeatFrequency();

  constexpr float_t const& __cordl_internal_get_strobeBrightness() const;

  constexpr float_t& __cordl_internal_get_strobeBrightness();

  constexpr bool const& __cordl_internal_get_strobeFade() const;

  constexpr bool& __cordl_internal_get_strobeFade();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr bool const& __cordl_internal_get_usePreviousValue() const;

  constexpr bool& __cordl_internal_get_usePreviousValue();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::GlobalNamespace::BeatmapEventData* value);

  constexpr void __cordl_internal_set___3__brightness(float_t value);

  constexpr void __cordl_internal_set___3__colorType(::GlobalNamespace::EnvironmentColorType value);

  constexpr void __cordl_internal_set___3__easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set___3__elementId(int32_t value);

  constexpr void __cordl_internal_set___3__groupId(int32_t value);

  constexpr void __cordl_internal_set___3__strobeBeatFrequency(int32_t value);

  constexpr void __cordl_internal_set___3__strobeBrightness(float_t value);

  constexpr void __cordl_internal_set___3__strobeFade(bool value);

  constexpr void __cordl_internal_set___3__time(float_t value);

  constexpr void __cordl_internal_set___3__usePreviousValue(bool value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::BeatmapLightEventConverterNoConvert* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_brightness(float_t value);

  constexpr void __cordl_internal_set_colorType(::GlobalNamespace::EnvironmentColorType value);

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_strobeBeatFrequency(int32_t value);

  constexpr void __cordl_internal_set_strobeBrightness(float_t value);

  constexpr void __cordl_internal_set_strobeFade(bool value);

  constexpr void __cordl_internal_set_time(float_t value);

  constexpr void __cordl_internal_set_usePreviousValue(bool value);

  /// @brief Method .ctor, addr 0x360658c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__BeatmapEventData__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__BeatmapEventData__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13(BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13(BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14995 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventData* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLightEventConverterNoConvert* _____4__this;

  /// @brief Field time, offset: 0x30, size: 0x4, def value: None
  float_t ___time;

  /// @brief Field <>3__time, offset: 0x34, size: 0x4, def value: None
  float_t _____3__time;

  /// @brief Field groupId, offset: 0x38, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field <>3__groupId, offset: 0x3c, size: 0x4, def value: None
  int32_t _____3__groupId;

  /// @brief Field elementId, offset: 0x40, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field <>3__elementId, offset: 0x44, size: 0x4, def value: None
  int32_t _____3__elementId;

  /// @brief Field usePreviousValue, offset: 0x48, size: 0x1, def value: None
  bool ___usePreviousValue;

  /// @brief Field <>3__usePreviousValue, offset: 0x49, size: 0x1, def value: None
  bool _____3__usePreviousValue;

  /// @brief Field easeType, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ___easeType;

  /// @brief Field <>3__easeType, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::EaseType _____3__easeType;

  /// @brief Field colorType, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentColorType ___colorType;

  /// @brief Field <>3__colorType, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentColorType _____3__colorType;

  /// @brief Field brightness, offset: 0x5c, size: 0x4, def value: None
  float_t ___brightness;

  /// @brief Field <>3__brightness, offset: 0x60, size: 0x4, def value: None
  float_t _____3__brightness;

  /// @brief Field strobeBeatFrequency, offset: 0x64, size: 0x4, def value: None
  int32_t ___strobeBeatFrequency;

  /// @brief Field <>3__strobeBeatFrequency, offset: 0x68, size: 0x4, def value: None
  int32_t _____3__strobeBeatFrequency;

  /// @brief Field strobeBrightness, offset: 0x6c, size: 0x4, def value: None
  float_t ___strobeBrightness;

  /// @brief Field <>3__strobeBrightness, offset: 0x70, size: 0x4, def value: None
  float_t _____3__strobeBrightness;

  /// @brief Field strobeFade, offset: 0x74, size: 0x1, def value: None
  bool ___strobeFade;

  /// @brief Field <>3__strobeFade, offset: 0x75, size: 0x1, def value: None
  bool _____3__strobeFade;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, ___time) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, _____3__time) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, ___groupId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, _____3__groupId) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, ___elementId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, _____3__elementId) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, ___usePreviousValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, _____3__usePreviousValue) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, ___easeType) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, _____3__easeType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, ___colorType) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, _____3__colorType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, ___brightness) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, _____3__brightness) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, ___strobeBeatFrequency) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, _____3__strobeBeatFrequency) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, ___strobeBrightness) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, _____3__strobeBrightness) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, ___strobeFade) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, _____3__strobeFade) == 0x75, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EaseType, LightAxis, LightRotationDirection, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLightEventConverterNoConvert/<ConvertLightRotationBeatmapEvent>d__14
class CORDL_TYPE BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get =
                          System_Collections_Generic_IEnumerator_BeatmapEventData__get_Current)) ::GlobalNamespace::BeatmapEventData* System_Collections_Generic_IEnumerator_BeatmapEventData__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::GlobalNamespace::BeatmapEventData* __2__current;

  /// @brief Field <>3__axis, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__axis, put = __cordl_internal_set___3__axis)) ::GlobalNamespace::LightAxis __3__axis;

  /// @brief Field <>3__easeType, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get___3__easeType, put = __cordl_internal_set___3__easeType)) ::GlobalNamespace::EaseType __3__easeType;

  /// @brief Field <>3__elementId, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get___3__elementId, put = __cordl_internal_set___3__elementId)) int32_t __3__elementId;

  /// @brief Field <>3__groupId, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get___3__groupId, put = __cordl_internal_set___3__groupId)) int32_t __3__groupId;

  /// @brief Field <>3__loopCount, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get___3__loopCount, put = __cordl_internal_set___3__loopCount)) int32_t __3__loopCount;

  /// @brief Field <>3__rotation, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get___3__rotation, put = __cordl_internal_set___3__rotation)) float_t __3__rotation;

  /// @brief Field <>3__rotationDirection, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__rotationDirection, put = __cordl_internal_set___3__rotationDirection)) ::GlobalNamespace::LightRotationDirection __3__rotationDirection;

  /// @brief Field <>3__time, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get___3__time, put = __cordl_internal_set___3__time)) float_t __3__time;

  /// @brief Field <>3__usePreviousEventValue, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get___3__usePreviousEventValue, put = __cordl_internal_set___3__usePreviousEventValue)) bool __3__usePreviousEventValue;

  /// @brief Field <>4__this, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::BeatmapLightEventConverterNoConvert* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field axis, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_axis, put = __cordl_internal_set_axis)) ::GlobalNamespace::LightAxis axis;

  /// @brief Field easeType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_easeType, put = __cordl_internal_set_easeType)) ::GlobalNamespace::EaseType easeType;

  /// @brief Field elementId, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupId, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  /// @brief Field loopCount, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_loopCount, put = __cordl_internal_set_loopCount)) int32_t loopCount;

  /// @brief Field rotation, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation)) float_t rotation;

  /// @brief Field rotationDirection, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationDirection, put = __cordl_internal_set_rotationDirection)) ::GlobalNamespace::LightRotationDirection rotationDirection;

  /// @brief Field time, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  /// @brief Field usePreviousEventValue, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_usePreviousEventValue, put = __cordl_internal_set_usePreviousEventValue)) bool usePreviousEventValue;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3606be4, size 0x128, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<BeatmapEventData>.GetEnumerator, addr 0x3606d54, size 0xe0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* System_Collections_Generic_IEnumerable_BeatmapEventData__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<BeatmapEventData>.get_Current, addr 0x3606d0c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapEventData* System_Collections_Generic_IEnumerator_BeatmapEventData__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3606e34, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3606d14, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3606d4c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3606be0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::GlobalNamespace::BeatmapEventData* const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::BeatmapEventData*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::LightAxis const& __cordl_internal_get___3__axis() const;

  constexpr ::GlobalNamespace::LightAxis& __cordl_internal_get___3__axis();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get___3__easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get___3__easeType();

  constexpr int32_t const& __cordl_internal_get___3__elementId() const;

  constexpr int32_t& __cordl_internal_get___3__elementId();

  constexpr int32_t const& __cordl_internal_get___3__groupId() const;

  constexpr int32_t& __cordl_internal_get___3__groupId();

  constexpr int32_t const& __cordl_internal_get___3__loopCount() const;

  constexpr int32_t& __cordl_internal_get___3__loopCount();

  constexpr float_t const& __cordl_internal_get___3__rotation() const;

  constexpr float_t& __cordl_internal_get___3__rotation();

  constexpr ::GlobalNamespace::LightRotationDirection const& __cordl_internal_get___3__rotationDirection() const;

  constexpr ::GlobalNamespace::LightRotationDirection& __cordl_internal_get___3__rotationDirection();

  constexpr float_t const& __cordl_internal_get___3__time() const;

  constexpr float_t& __cordl_internal_get___3__time();

  constexpr bool const& __cordl_internal_get___3__usePreviousEventValue() const;

  constexpr bool& __cordl_internal_get___3__usePreviousEventValue();

  constexpr ::GlobalNamespace::BeatmapLightEventConverterNoConvert* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::BeatmapLightEventConverterNoConvert*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::GlobalNamespace::LightAxis const& __cordl_internal_get_axis() const;

  constexpr ::GlobalNamespace::LightAxis& __cordl_internal_get_axis();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr int32_t const& __cordl_internal_get_loopCount() const;

  constexpr int32_t& __cordl_internal_get_loopCount();

  constexpr float_t const& __cordl_internal_get_rotation() const;

  constexpr float_t& __cordl_internal_get_rotation();

  constexpr ::GlobalNamespace::LightRotationDirection const& __cordl_internal_get_rotationDirection() const;

  constexpr ::GlobalNamespace::LightRotationDirection& __cordl_internal_get_rotationDirection();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr bool const& __cordl_internal_get_usePreviousEventValue() const;

  constexpr bool& __cordl_internal_get_usePreviousEventValue();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::GlobalNamespace::BeatmapEventData* value);

  constexpr void __cordl_internal_set___3__axis(::GlobalNamespace::LightAxis value);

  constexpr void __cordl_internal_set___3__easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set___3__elementId(int32_t value);

  constexpr void __cordl_internal_set___3__groupId(int32_t value);

  constexpr void __cordl_internal_set___3__loopCount(int32_t value);

  constexpr void __cordl_internal_set___3__rotation(float_t value);

  constexpr void __cordl_internal_set___3__rotationDirection(::GlobalNamespace::LightRotationDirection value);

  constexpr void __cordl_internal_set___3__time(float_t value);

  constexpr void __cordl_internal_set___3__usePreviousEventValue(bool value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::BeatmapLightEventConverterNoConvert* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_axis(::GlobalNamespace::LightAxis value);

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_loopCount(int32_t value);

  constexpr void __cordl_internal_set_rotation(float_t value);

  constexpr void __cordl_internal_set_rotationDirection(::GlobalNamespace::LightRotationDirection value);

  constexpr void __cordl_internal_set_time(float_t value);

  constexpr void __cordl_internal_set_usePreviousEventValue(bool value);

  /// @brief Method .ctor, addr 0x360668c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__BeatmapEventData__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__BeatmapEventData__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14(BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14(BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14996 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventData* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field time, offset: 0x24, size: 0x4, def value: None
  float_t ___time;

  /// @brief Field <>3__time, offset: 0x28, size: 0x4, def value: None
  float_t _____3__time;

  /// @brief Field groupId, offset: 0x2c, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field <>3__groupId, offset: 0x30, size: 0x4, def value: None
  int32_t _____3__groupId;

  /// @brief Field elementId, offset: 0x34, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field <>3__elementId, offset: 0x38, size: 0x4, def value: None
  int32_t _____3__elementId;

  /// @brief Field usePreviousEventValue, offset: 0x3c, size: 0x1, def value: None
  bool ___usePreviousEventValue;

  /// @brief Field <>3__usePreviousEventValue, offset: 0x3d, size: 0x1, def value: None
  bool _____3__usePreviousEventValue;

  /// @brief Field easeType, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ___easeType;

  /// @brief Field <>3__easeType, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::EaseType _____3__easeType;

  /// @brief Field axis, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis ___axis;

  /// @brief Field <>3__axis, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis _____3__axis;

  /// @brief Field rotation, offset: 0x50, size: 0x4, def value: None
  float_t ___rotation;

  /// @brief Field <>3__rotation, offset: 0x54, size: 0x4, def value: None
  float_t _____3__rotation;

  /// @brief Field <>4__this, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLightEventConverterNoConvert* _____4__this;

  /// @brief Field loopCount, offset: 0x60, size: 0x4, def value: None
  int32_t ___loopCount;

  /// @brief Field <>3__loopCount, offset: 0x64, size: 0x4, def value: None
  int32_t _____3__loopCount;

  /// @brief Field rotationDirection, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::LightRotationDirection ___rotationDirection;

  /// @brief Field <>3__rotationDirection, offset: 0x6c, size: 0x4, def value: None
  ::GlobalNamespace::LightRotationDirection _____3__rotationDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, ___time) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, _____3__time) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, ___groupId) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, _____3__groupId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, ___elementId) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, _____3__elementId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, ___usePreviousEventValue) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, _____3__usePreviousEventValue) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, ___easeType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, _____3__easeType) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, ___axis) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, _____3__axis) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, ___rotation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, _____3__rotation) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, _____4__this) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, ___loopCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, _____3__loopCount) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, ___rotationDirection) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, _____3__rotationDirection) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EaseType, LightAxis, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLightEventConverterNoConvert/<ConvertLightTranslationBeatmapEvent>d__15
class CORDL_TYPE BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get =
                          System_Collections_Generic_IEnumerator_BeatmapEventData__get_Current)) ::GlobalNamespace::BeatmapEventData* System_Collections_Generic_IEnumerator_BeatmapEventData__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::GlobalNamespace::BeatmapEventData* __2__current;

  /// @brief Field <>3__axis, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__axis, put = __cordl_internal_set___3__axis)) ::GlobalNamespace::LightAxis __3__axis;

  /// @brief Field <>3__distribution, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__distribution, put = __cordl_internal_set___3__distribution)) float_t __3__distribution;

  /// @brief Field <>3__easeType, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get___3__easeType, put = __cordl_internal_set___3__easeType)) ::GlobalNamespace::EaseType __3__easeType;

  /// @brief Field <>3__elementId, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get___3__elementId, put = __cordl_internal_set___3__elementId)) int32_t __3__elementId;

  /// @brief Field <>3__groupId, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get___3__groupId, put = __cordl_internal_set___3__groupId)) int32_t __3__groupId;

  /// @brief Field <>3__time, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get___3__time, put = __cordl_internal_set___3__time)) float_t __3__time;

  /// @brief Field <>3__translation, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get___3__translation, put = __cordl_internal_set___3__translation)) float_t __3__translation;

  /// @brief Field <>3__usePreviousEventValue, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get___3__usePreviousEventValue, put = __cordl_internal_set___3__usePreviousEventValue)) bool __3__usePreviousEventValue;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field axis, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_axis, put = __cordl_internal_set_axis)) ::GlobalNamespace::LightAxis axis;

  /// @brief Field distribution, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_distribution, put = __cordl_internal_set_distribution)) float_t distribution;

  /// @brief Field easeType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_easeType, put = __cordl_internal_set_easeType)) ::GlobalNamespace::EaseType easeType;

  /// @brief Field elementId, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupId, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  /// @brief Field time, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  /// @brief Field translation, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_translation, put = __cordl_internal_set_translation)) float_t translation;

  /// @brief Field usePreviousEventValue, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_usePreviousEventValue, put = __cordl_internal_set_usePreviousEventValue)) bool usePreviousEventValue;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3606e3c, size 0xf4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<BeatmapEventData>.GetEnumerator, addr 0x3606f78, size 0xd0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* System_Collections_Generic_IEnumerable_BeatmapEventData__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<BeatmapEventData>.get_Current, addr 0x3606f30, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapEventData* System_Collections_Generic_IEnumerator_BeatmapEventData__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3607048, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3606f38, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3606f70, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3606e38, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::GlobalNamespace::BeatmapEventData* const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::BeatmapEventData*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::LightAxis const& __cordl_internal_get___3__axis() const;

  constexpr ::GlobalNamespace::LightAxis& __cordl_internal_get___3__axis();

  constexpr float_t const& __cordl_internal_get___3__distribution() const;

  constexpr float_t& __cordl_internal_get___3__distribution();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get___3__easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get___3__easeType();

  constexpr int32_t const& __cordl_internal_get___3__elementId() const;

  constexpr int32_t& __cordl_internal_get___3__elementId();

  constexpr int32_t const& __cordl_internal_get___3__groupId() const;

  constexpr int32_t& __cordl_internal_get___3__groupId();

  constexpr float_t const& __cordl_internal_get___3__time() const;

  constexpr float_t& __cordl_internal_get___3__time();

  constexpr float_t const& __cordl_internal_get___3__translation() const;

  constexpr float_t& __cordl_internal_get___3__translation();

  constexpr bool const& __cordl_internal_get___3__usePreviousEventValue() const;

  constexpr bool& __cordl_internal_get___3__usePreviousEventValue();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::GlobalNamespace::LightAxis const& __cordl_internal_get_axis() const;

  constexpr ::GlobalNamespace::LightAxis& __cordl_internal_get_axis();

  constexpr float_t const& __cordl_internal_get_distribution() const;

  constexpr float_t& __cordl_internal_get_distribution();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr float_t const& __cordl_internal_get_translation() const;

  constexpr float_t& __cordl_internal_get_translation();

  constexpr bool const& __cordl_internal_get_usePreviousEventValue() const;

  constexpr bool& __cordl_internal_get_usePreviousEventValue();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::GlobalNamespace::BeatmapEventData* value);

  constexpr void __cordl_internal_set___3__axis(::GlobalNamespace::LightAxis value);

  constexpr void __cordl_internal_set___3__distribution(float_t value);

  constexpr void __cordl_internal_set___3__easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set___3__elementId(int32_t value);

  constexpr void __cordl_internal_set___3__groupId(int32_t value);

  constexpr void __cordl_internal_set___3__time(float_t value);

  constexpr void __cordl_internal_set___3__translation(float_t value);

  constexpr void __cordl_internal_set___3__usePreviousEventValue(bool value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_axis(::GlobalNamespace::LightAxis value);

  constexpr void __cordl_internal_set_distribution(float_t value);

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_time(float_t value);

  constexpr void __cordl_internal_set_translation(float_t value);

  constexpr void __cordl_internal_set_usePreviousEventValue(bool value);

  /// @brief Method .ctor, addr 0x3606774, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__BeatmapEventData__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__BeatmapEventData__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15(BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15(BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14997 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventData* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field time, offset: 0x24, size: 0x4, def value: None
  float_t ___time;

  /// @brief Field <>3__time, offset: 0x28, size: 0x4, def value: None
  float_t _____3__time;

  /// @brief Field groupId, offset: 0x2c, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field <>3__groupId, offset: 0x30, size: 0x4, def value: None
  int32_t _____3__groupId;

  /// @brief Field elementId, offset: 0x34, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field <>3__elementId, offset: 0x38, size: 0x4, def value: None
  int32_t _____3__elementId;

  /// @brief Field usePreviousEventValue, offset: 0x3c, size: 0x1, def value: None
  bool ___usePreviousEventValue;

  /// @brief Field <>3__usePreviousEventValue, offset: 0x3d, size: 0x1, def value: None
  bool _____3__usePreviousEventValue;

  /// @brief Field easeType, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ___easeType;

  /// @brief Field <>3__easeType, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::EaseType _____3__easeType;

  /// @brief Field axis, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis ___axis;

  /// @brief Field <>3__axis, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis _____3__axis;

  /// @brief Field translation, offset: 0x50, size: 0x4, def value: None
  float_t ___translation;

  /// @brief Field <>3__translation, offset: 0x54, size: 0x4, def value: None
  float_t _____3__translation;

  /// @brief Field distribution, offset: 0x58, size: 0x4, def value: None
  float_t ___distribution;

  /// @brief Field <>3__distribution, offset: 0x5c, size: 0x4, def value: None
  float_t _____3__distribution;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, ___time) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, _____3__time) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, ___groupId) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, _____3__groupId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, ___elementId) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, _____3__elementId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, ___usePreviousEventValue) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, _____3__usePreviousEventValue) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, ___easeType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, _____3__easeType) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, ___axis) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, _____3__axis) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, ___translation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, _____3__translation) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, ___distribution) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, _____3__distribution) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLightEventConverterNoConvert
class CORDL_TYPE BeatmapLightEventConverterNoConvert : public ::System::Object {
public:
  // Declarations
  using _ConvertBasicBeatmapEvent_d__12 = ::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12;

  using _ConvertLightColorBeatmapEvent_d__13 = ::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13;

  using _ConvertLightRotationBeatmapEvent_d__14 = ::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14;

  using _ConvertLightTranslationBeatmapEvent_d__15 = ::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15;

  /// @brief Field _ignoreColorEvents, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreColorEvents, put = __cordl_internal_set__ignoreColorEvents)) bool _ignoreColorEvents;

  /// @brief Field _ignoreRotationLoopCount, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreRotationLoopCount, put = __cordl_internal_set__ignoreRotationLoopCount)) bool _ignoreRotationLoopCount;

  /// @brief Field _useRotationDirection, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get__useRotationDirection, put = __cordl_internal_set__useRotationDirection)) bool _useRotationDirection;

  __declspec(property(get = get_convertBoxGroups)) bool convertBoxGroups;

  __declspec(property(get = get_convertBoxGroupsEvents)) bool convertBoxGroupsEvents;

  __declspec(property(get = get_hasConversions)) bool hasConversions;

  __declspec(property(get = get_useRotationDirection)) bool useRotationDirection;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLightEventConverter"
  constexpr operator ::GlobalNamespace::IBeatmapLightEventConverter*() noexcept;

  /// @brief Method ConvertBasicBeatmapEvent, addr 0x36063dc, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>*
  ConvertBasicBeatmapEvent(int32_t subtypeIdentifier, float_t time, ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType, int32_t value, float_t floatValue);

  /// @brief Method ConvertLightColorBeatmapEvent, addr 0x3606498, size 0xf4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>* ConvertLightColorBeatmapEvent(int32_t subtypeIdentifier, float_t time, int32_t groupId, int32_t elementId,
                                                                                                                            bool usePreviousValue, ::GlobalNamespace::EaseType easeType,
                                                                                                                            ::GlobalNamespace::EnvironmentColorType colorType, float_t brightness,
                                                                                                                            int32_t strobeBeatFrequency, float_t strobeBrightness, bool strobeFade,
                                                                                                                            ::System::Nullable_1<float_t> nextEventBrightness);

  /// @brief Method ConvertLightRotationBeatmapEvent, addr 0x36065ac, size 0xe0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>*
  ConvertLightRotationBeatmapEvent(int32_t subtypeIdentifier, float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType,
                                   ::GlobalNamespace::LightAxis axis, float_t rotation, int32_t loopCount, ::GlobalNamespace::LightRotationDirection rotationDirection);

  /// @brief Method ConvertLightTranslationBeatmapEvent, addr 0x36066ac, size 0xc8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>*
  ConvertLightTranslationBeatmapEvent(int32_t subtypeIdentifier, float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType,
                                      ::GlobalNamespace::LightAxis axis, float_t translation, float_t distribution);

  /// @brief Method InsertActivateOnStartEvents, addr 0x3606794, size 0x4, virtual true, abstract: false, final true
  inline void InsertActivateOnStartEvents(::GlobalNamespace::BeatmapData* beatmapData);

  static inline ::GlobalNamespace::BeatmapLightEventConverterNoConvert* New_ctor(bool ignoreColorEvents, bool ignoreRotationLoopCount, bool useRotationDirection);

  constexpr bool const& __cordl_internal_get__ignoreColorEvents() const;

  constexpr bool& __cordl_internal_get__ignoreColorEvents();

  constexpr bool const& __cordl_internal_get__ignoreRotationLoopCount() const;

  constexpr bool& __cordl_internal_get__ignoreRotationLoopCount();

  constexpr bool const& __cordl_internal_get__useRotationDirection() const;

  constexpr bool& __cordl_internal_get__useRotationDirection();

  constexpr void __cordl_internal_set__ignoreColorEvents(bool value);

  constexpr void __cordl_internal_set__ignoreRotationLoopCount(bool value);

  constexpr void __cordl_internal_set__useRotationDirection(bool value);

  /// @brief Method .ctor, addr 0x36063cc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool ignoreColorEvents, bool ignoreRotationLoopCount, bool useRotationDirection);

  /// @brief Method get_convertBoxGroups, addr 0x36063bc, size 0x8, virtual true, abstract: false, final true
  inline bool get_convertBoxGroups();

  /// @brief Method get_convertBoxGroupsEvents, addr 0x36063b4, size 0x8, virtual true, abstract: false, final true
  inline bool get_convertBoxGroupsEvents();

  /// @brief Method get_hasConversions, addr 0x36063ac, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasConversions();

  /// @brief Method get_useRotationDirection, addr 0x36063c4, size 0x8, virtual true, abstract: false, final true
  inline bool get_useRotationDirection();

  /// @brief Convert to "::GlobalNamespace::IBeatmapLightEventConverter"
  constexpr ::GlobalNamespace::IBeatmapLightEventConverter* i___GlobalNamespace__IBeatmapLightEventConverter() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLightEventConverterNoConvert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLightEventConverterNoConvert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLightEventConverterNoConvert(BeatmapLightEventConverterNoConvert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLightEventConverterNoConvert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLightEventConverterNoConvert(BeatmapLightEventConverterNoConvert const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14998 };

  /// @brief Field _ignoreColorEvents, offset: 0x10, size: 0x1, def value: None
  bool ____ignoreColorEvents;

  /// @brief Field _ignoreRotationLoopCount, offset: 0x11, size: 0x1, def value: None
  bool ____ignoreRotationLoopCount;

  /// @brief Field _useRotationDirection, offset: 0x12, size: 0x1, def value: None
  bool ____useRotationDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert, ____ignoreColorEvents) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert, ____ignoreRotationLoopCount) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLightEventConverterNoConvert, ____useRotationDirection) == 0x12, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLightEventConverterNoConvert, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLightEventConverterNoConvert);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLightEventConverterNoConvert*, "", "BeatmapLightEventConverterNoConvert");
NEED_NO_BOX(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertBasicBeatmapEvent_d__12*, "", "BeatmapLightEventConverterNoConvert/<ConvertBasicBeatmapEvent>d__12");
NEED_NO_BOX(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightColorBeatmapEvent_d__13*, "", "BeatmapLightEventConverterNoConvert/<ConvertLightColorBeatmapEvent>d__13");
NEED_NO_BOX(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightRotationBeatmapEvent_d__14*, "",
                       "BeatmapLightEventConverterNoConvert/<ConvertLightRotationBeatmapEvent>d__14");
NEED_NO_BOX(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLightEventConverterNoConvert__ConvertLightTranslationBeatmapEvent_d__15*, "",
                       "BeatmapLightEventConverterNoConvert/<ConvertLightTranslationBeatmapEvent>d__15");
