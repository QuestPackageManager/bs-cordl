#pragma once
// IWYU pragma private; include "GlobalNamespace/LightTranslationBeatmapEventDataBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightTranslationBeatmapEventDataBox)
namespace GlobalNamespace {
struct BeatmapEventDataBox_DistributionParamType;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class IBeatToTimeConverter;
}
namespace GlobalNamespace {
class IBeatmapLightEventConverter;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
class LightTranslationBaseData;
}
namespace GlobalNamespace {
class LightTranslationBeatmapEventDataBox__Unpack_d__9;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
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
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationBeatmapEventDataBox;
}
namespace GlobalNamespace {
class LightTranslationBeatmapEventDataBox__Unpack_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightTranslationBeatmapEventDataBox);
MARK_REF_PTR_T(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightTranslationBeatmapEventDataBox/<Unpack>d__9
class CORDL_TYPE LightTranslationBeatmapEventDataBox__Unpack_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get =
                          System_Collections_Generic_IEnumerator_BeatmapEventData__get_Current)) ::GlobalNamespace::BeatmapEventData* System_Collections_Generic_IEnumerator_BeatmapEventData__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::GlobalNamespace::BeatmapEventData* __2__current;

  /// @brief Field <>3__beatToTimeConverter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get___3__beatToTimeConverter, put = __cordl_internal_set___3__beatToTimeConverter)) ::GlobalNamespace::IBeatToTimeConverter* __3__beatToTimeConverter;

  /// @brief Field <>3__distributionOrderIndex, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__distributionOrderIndex, put = __cordl_internal_set___3__distributionOrderIndex)) int32_t __3__distributionOrderIndex;

  /// @brief Field <>3__durationOrderIndex, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get___3__durationOrderIndex, put = __cordl_internal_set___3__durationOrderIndex)) int32_t __3__durationOrderIndex;

  /// @brief Field <>3__elementId, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__elementId, put = __cordl_internal_set___3__elementId)) int32_t __3__elementId;

  /// @brief Field <>3__groupBoxBeat, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get___3__groupBoxBeat, put = __cordl_internal_set___3__groupBoxBeat)) float_t __3__groupBoxBeat;

  /// @brief Field <>3__groupId, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get___3__groupId, put = __cordl_internal_set___3__groupId)) int32_t __3__groupId;

  /// @brief Field <>3__lightEventConverter, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get___3__lightEventConverter,
                      put = __cordl_internal_set___3__lightEventConverter)) ::GlobalNamespace::IBeatmapLightEventConverter* __3__lightEventConverter;

  /// @brief Field <>3__maxBeat, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__maxBeat, put = __cordl_internal_set___3__maxBeat)) float_t __3__maxBeat;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::LightTranslationBeatmapEventDataBox* __4__this;

  /// @brief Field <>7__wrap4, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap4,
                      put = __cordl_internal_set___7__wrap4)) ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::LightTranslationBaseData*>* __7__wrap4;

  /// @brief Field <>7__wrap5, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap5, put = __cordl_internal_set___7__wrap5)) ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* __7__wrap5;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <beatOffset>5__3, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__beatOffset_5__3, put = __cordl_internal_set__beatOffset_5__3)) float_t _beatOffset_5__3;

  /// @brief Field <connectCache>5__4, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__connectCache_5__4,
                      put = __cordl_internal_set__connectCache_5__4)) ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventData*>* _connectCache_5__4;

  /// @brief Field <isFirstBaseData>5__2, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__isFirstBaseData_5__2, put = __cordl_internal_set__isFirstBaseData_5__2)) bool _isFirstBaseData_5__2;

  /// @brief Field beatToTimeConverter, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_beatToTimeConverter, put = __cordl_internal_set_beatToTimeConverter)) ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter;

  /// @brief Field distributionOrderIndex, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_distributionOrderIndex, put = __cordl_internal_set_distributionOrderIndex)) int32_t distributionOrderIndex;

  /// @brief Field durationOrderIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_durationOrderIndex, put = __cordl_internal_set_durationOrderIndex)) int32_t durationOrderIndex;

  /// @brief Field elementId, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupBoxBeat, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_groupBoxBeat, put = __cordl_internal_set_groupBoxBeat)) float_t groupBoxBeat;

  /// @brief Field groupId, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  /// @brief Field lightEventConverter, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_lightEventConverter, put = __cordl_internal_set_lightEventConverter)) ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter;

  /// @brief Field maxBeat, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_maxBeat, put = __cordl_internal_set_maxBeat)) float_t maxBeat;

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

  /// @brief Method MoveNext, addr 0x361ce84, size 0x838, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<BeatmapEventData>.GetEnumerator, addr 0x361d86c, size 0xd8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* System_Collections_Generic_IEnumerable_BeatmapEventData__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<BeatmapEventData>.get_Current, addr 0x361d824, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapEventData* System_Collections_Generic_IEnumerator_BeatmapEventData__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x361d944, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x361d82c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x361d864, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x361cdd8, size 0xac, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::GlobalNamespace::BeatmapEventData* const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::BeatmapEventData*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::IBeatToTimeConverter* const& __cordl_internal_get___3__beatToTimeConverter() const;

  constexpr ::GlobalNamespace::IBeatToTimeConverter*& __cordl_internal_get___3__beatToTimeConverter();

  constexpr int32_t const& __cordl_internal_get___3__distributionOrderIndex() const;

  constexpr int32_t& __cordl_internal_get___3__distributionOrderIndex();

  constexpr int32_t const& __cordl_internal_get___3__durationOrderIndex() const;

  constexpr int32_t& __cordl_internal_get___3__durationOrderIndex();

  constexpr int32_t const& __cordl_internal_get___3__elementId() const;

  constexpr int32_t& __cordl_internal_get___3__elementId();

  constexpr float_t const& __cordl_internal_get___3__groupBoxBeat() const;

  constexpr float_t& __cordl_internal_get___3__groupBoxBeat();

  constexpr int32_t const& __cordl_internal_get___3__groupId() const;

  constexpr int32_t& __cordl_internal_get___3__groupId();

  constexpr ::GlobalNamespace::IBeatmapLightEventConverter* const& __cordl_internal_get___3__lightEventConverter() const;

  constexpr ::GlobalNamespace::IBeatmapLightEventConverter*& __cordl_internal_get___3__lightEventConverter();

  constexpr float_t const& __cordl_internal_get___3__maxBeat() const;

  constexpr float_t& __cordl_internal_get___3__maxBeat();

  constexpr ::GlobalNamespace::LightTranslationBeatmapEventDataBox* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::LightTranslationBeatmapEventDataBox*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::LightTranslationBaseData*>* const& __cordl_internal_get___7__wrap4() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::LightTranslationBaseData*>*& __cordl_internal_get___7__wrap4();

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* const& __cordl_internal_get___7__wrap5() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>*& __cordl_internal_get___7__wrap5();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr float_t const& __cordl_internal_get__beatOffset_5__3() const;

  constexpr float_t& __cordl_internal_get__beatOffset_5__3();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventData*>* const& __cordl_internal_get__connectCache_5__4() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventData*>*& __cordl_internal_get__connectCache_5__4();

  constexpr bool const& __cordl_internal_get__isFirstBaseData_5__2() const;

  constexpr bool& __cordl_internal_get__isFirstBaseData_5__2();

  constexpr ::GlobalNamespace::IBeatToTimeConverter* const& __cordl_internal_get_beatToTimeConverter() const;

  constexpr ::GlobalNamespace::IBeatToTimeConverter*& __cordl_internal_get_beatToTimeConverter();

  constexpr int32_t const& __cordl_internal_get_distributionOrderIndex() const;

  constexpr int32_t& __cordl_internal_get_distributionOrderIndex();

  constexpr int32_t const& __cordl_internal_get_durationOrderIndex() const;

  constexpr int32_t& __cordl_internal_get_durationOrderIndex();

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr float_t const& __cordl_internal_get_groupBoxBeat() const;

  constexpr float_t& __cordl_internal_get_groupBoxBeat();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr ::GlobalNamespace::IBeatmapLightEventConverter* const& __cordl_internal_get_lightEventConverter() const;

  constexpr ::GlobalNamespace::IBeatmapLightEventConverter*& __cordl_internal_get_lightEventConverter();

  constexpr float_t const& __cordl_internal_get_maxBeat() const;

  constexpr float_t& __cordl_internal_get_maxBeat();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::GlobalNamespace::BeatmapEventData* value);

  constexpr void __cordl_internal_set___3__beatToTimeConverter(::GlobalNamespace::IBeatToTimeConverter* value);

  constexpr void __cordl_internal_set___3__distributionOrderIndex(int32_t value);

  constexpr void __cordl_internal_set___3__durationOrderIndex(int32_t value);

  constexpr void __cordl_internal_set___3__elementId(int32_t value);

  constexpr void __cordl_internal_set___3__groupBoxBeat(float_t value);

  constexpr void __cordl_internal_set___3__groupId(int32_t value);

  constexpr void __cordl_internal_set___3__lightEventConverter(::GlobalNamespace::IBeatmapLightEventConverter* value);

  constexpr void __cordl_internal_set___3__maxBeat(float_t value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::LightTranslationBeatmapEventDataBox* value);

  constexpr void __cordl_internal_set___7__wrap4(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::LightTranslationBaseData*>* value);

  constexpr void __cordl_internal_set___7__wrap5(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__beatOffset_5__3(float_t value);

  constexpr void __cordl_internal_set__connectCache_5__4(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventData*>* value);

  constexpr void __cordl_internal_set__isFirstBaseData_5__2(bool value);

  constexpr void __cordl_internal_set_beatToTimeConverter(::GlobalNamespace::IBeatToTimeConverter* value);

  constexpr void __cordl_internal_set_distributionOrderIndex(int32_t value);

  constexpr void __cordl_internal_set_durationOrderIndex(int32_t value);

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupBoxBeat(float_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_lightEventConverter(::GlobalNamespace::IBeatmapLightEventConverter* value);

  constexpr void __cordl_internal_set_maxBeat(float_t value);

  /// @brief Method <>m__Finally1, addr 0x361d770, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x361d6bc, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x361cdb8, size 0x20, virtual false, abstract: false, final false
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
  constexpr LightTranslationBeatmapEventDataBox__Unpack_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventDataBox__Unpack_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationBeatmapEventDataBox__Unpack_d__9(LightTranslationBeatmapEventDataBox__Unpack_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventDataBox__Unpack_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationBeatmapEventDataBox__Unpack_d__9(LightTranslationBeatmapEventDataBox__Unpack_d__9 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14900 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventData* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LightTranslationBeatmapEventDataBox* _____4__this;

  /// @brief Field durationOrderIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ___durationOrderIndex;

  /// @brief Field <>3__durationOrderIndex, offset: 0x34, size: 0x4, def value: None
  int32_t _____3__durationOrderIndex;

  /// @brief Field distributionOrderIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ___distributionOrderIndex;

  /// @brief Field <>3__distributionOrderIndex, offset: 0x3c, size: 0x4, def value: None
  int32_t _____3__distributionOrderIndex;

  /// @brief Field groupBoxBeat, offset: 0x40, size: 0x4, def value: None
  float_t ___groupBoxBeat;

  /// @brief Field <>3__groupBoxBeat, offset: 0x44, size: 0x4, def value: None
  float_t _____3__groupBoxBeat;

  /// @brief Field maxBeat, offset: 0x48, size: 0x4, def value: None
  float_t ___maxBeat;

  /// @brief Field <>3__maxBeat, offset: 0x4c, size: 0x4, def value: None
  float_t _____3__maxBeat;

  /// @brief Field beatToTimeConverter, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IBeatToTimeConverter* ___beatToTimeConverter;

  /// @brief Field <>3__beatToTimeConverter, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IBeatToTimeConverter* _____3__beatToTimeConverter;

  /// @brief Field lightEventConverter, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLightEventConverter* ___lightEventConverter;

  /// @brief Field <>3__lightEventConverter, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLightEventConverter* _____3__lightEventConverter;

  /// @brief Field groupId, offset: 0x70, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field <>3__groupId, offset: 0x74, size: 0x4, def value: None
  int32_t _____3__groupId;

  /// @brief Field elementId, offset: 0x78, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field <>3__elementId, offset: 0x7c, size: 0x4, def value: None
  int32_t _____3__elementId;

  /// @brief Field <isFirstBaseData>5__2, offset: 0x80, size: 0x1, def value: None
  bool ____isFirstBaseData_5__2;

  /// @brief Field <beatOffset>5__3, offset: 0x84, size: 0x4, def value: None
  float_t ____beatOffset_5__3;

  /// @brief Field <connectCache>5__4, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventData*>* ____connectCache_5__4;

  /// @brief Field <>7__wrap4, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::LightTranslationBaseData*>* _____7__wrap4;

  /// @brief Field <>7__wrap5, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* _____7__wrap5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, ___durationOrderIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, _____3__durationOrderIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, ___distributionOrderIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, _____3__distributionOrderIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, ___groupBoxBeat) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, _____3__groupBoxBeat) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, ___maxBeat) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, _____3__maxBeat) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, ___beatToTimeConverter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, _____3__beatToTimeConverter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, ___lightEventConverter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, _____3__lightEventConverter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, ___groupId) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, _____3__groupId) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, ___elementId) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, _____3__elementId) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, ____isFirstBaseData_5__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, ____beatOffset_5__3) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, ____connectCache_5__4) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, _____7__wrap4) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, _____7__wrap5) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapEventDataBox, LightAxis
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightTranslationBeatmapEventDataBox
class CORDL_TYPE LightTranslationBeatmapEventDataBox : public ::GlobalNamespace::BeatmapEventDataBox {
public:
  // Declarations
  using _Unpack_d__9 = ::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9;

  /// @brief Field _axis, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__axis, put = __cordl_internal_set__axis)) ::GlobalNamespace::LightAxis _axis;

  /// @brief Field _beatStep, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__beatStep, put = __cordl_internal_set__beatStep)) float_t _beatStep;

  /// @brief Field _lightTranslationBaseDataList, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get__lightTranslationBaseDataList,
      put = __cordl_internal_set__lightTranslationBaseDataList)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>* _lightTranslationBaseDataList;

  /// @brief Field _translationDirection, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__translationDirection, put = __cordl_internal_set__translationDirection)) float_t _translationDirection;

  __declspec(property(get = get_beatStep)) float_t beatStep;

  __declspec(property(get = get_subtypeIdentifier)) int32_t subtypeIdentifier;

  static inline ::GlobalNamespace::LightTranslationBeatmapEventDataBox*
  New_ctor(::GlobalNamespace::IndexFilter* indexFilter, float_t beatDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType,
           ::GlobalNamespace::LightAxis axis, bool flipTranslation, float_t gapDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType gapDistributionParamType,
           bool gapDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType gapDistributionEaseType,
           ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>* lightTranslationBaseDataList);

  /// @brief Method Unpack, addr 0x361ccec, size 0xcc, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>* Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex,
                                                                                                     int32_t distributionOrderIndex, float_t maxBeat,
                                                                                                     ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter,
                                                                                                     ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  constexpr ::GlobalNamespace::LightAxis const& __cordl_internal_get__axis() const;

  constexpr ::GlobalNamespace::LightAxis& __cordl_internal_get__axis();

  constexpr float_t const& __cordl_internal_get__beatStep() const;

  constexpr float_t& __cordl_internal_get__beatStep();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>* const& __cordl_internal_get__lightTranslationBaseDataList() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>*& __cordl_internal_get__lightTranslationBaseDataList();

  constexpr float_t const& __cordl_internal_get__translationDirection() const;

  constexpr float_t& __cordl_internal_get__translationDirection();

  constexpr void __cordl_internal_set__axis(::GlobalNamespace::LightAxis value);

  constexpr void __cordl_internal_set__beatStep(float_t value);

  constexpr void __cordl_internal_set__lightTranslationBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>* value);

  constexpr void __cordl_internal_set__translationDirection(float_t value);

  /// @brief Method .ctor, addr 0x361ca98, size 0x254, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IndexFilter* indexFilter, float_t beatDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType,
                    ::GlobalNamespace::LightAxis axis, bool flipTranslation, float_t gapDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType gapDistributionParamType,
                    bool gapDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType gapDistributionEaseType,
                    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>* lightTranslationBaseDataList);

  /// @brief Method get_beatStep, addr 0x361ca90, size 0x8, virtual true, abstract: false, final false
  inline float_t get_beatStep();

  /// @brief Method get_subtypeIdentifier, addr 0x361ca88, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_subtypeIdentifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationBeatmapEventDataBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventDataBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationBeatmapEventDataBox(LightTranslationBeatmapEventDataBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventDataBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationBeatmapEventDataBox(LightTranslationBeatmapEventDataBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14901 };

  /// @brief Field _lightTranslationBaseDataList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightTranslationBaseData*>* ____lightTranslationBaseDataList;

  /// @brief Field _axis, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis ____axis;

  /// @brief Field _translationDirection, offset: 0x44, size: 0x4, def value: None
  float_t ____translationDirection;

  /// @brief Field _beatStep, offset: 0x48, size: 0x4, def value: None
  float_t ____beatStep;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox, ____lightTranslationBaseDataList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox, ____axis) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox, ____translationDirection) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventDataBox, ____beatStep) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightTranslationBeatmapEventDataBox, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationBeatmapEventDataBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationBeatmapEventDataBox*, "", "LightTranslationBeatmapEventDataBox");
NEED_NO_BOX(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationBeatmapEventDataBox__Unpack_d__9*, "", "LightTranslationBeatmapEventDataBox/<Unpack>d__9");
