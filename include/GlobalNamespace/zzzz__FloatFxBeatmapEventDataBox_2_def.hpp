#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxBeatmapEventDataBox_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFxBeatmapEventDataBox_2)
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
template <typename TIn, typename TOut> class FloatFxBeatmapEventDataBox_2__Unpack_d__3;
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
template <typename TIn, typename TOut> class FloatFxBeatmapEventDataBox_2;
}
namespace GlobalNamespace {
template <typename TIn, typename TOut> class FloatFxBeatmapEventDataBox_2__Unpack_d__3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::FloatFxBeatmapEventDataBox_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::FloatFxBeatmapEventDataBox_2__Unpack_d__3);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TIn, typename TOut>
// Is value type: false
// CS Name: FloatFxBeatmapEventDataBox`2/<Unpack>d__3<TIn,TOut>
class CORDL_TYPE FloatFxBeatmapEventDataBox_2__Unpack_d__3 : public ::System::Object {
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

  /// @brief Field <>3__durationOrderIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get___3__durationOrderIndex, put = __cordl_internal_set___3__durationOrderIndex)) int32_t __3__durationOrderIndex;

  /// @brief Field <>3__elementId, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__elementId, put = __cordl_internal_set___3__elementId)) int32_t __3__elementId;

  /// @brief Field <>3__groupBoxBeat, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get___3__groupBoxBeat, put = __cordl_internal_set___3__groupBoxBeat)) float_t __3__groupBoxBeat;

  /// @brief Field <>3__groupId, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get___3__groupId, put = __cordl_internal_set___3__groupId)) int32_t __3__groupId;

  /// @brief Field <>3__maxBeat, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__maxBeat, put = __cordl_internal_set___3__maxBeat)) float_t __3__maxBeat;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::FloatFxBeatmapEventDataBox_2<TIn, TOut>* __4__this;

  /// @brief Field <>7__wrap3, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3)) ::System::Collections::Generic::IEnumerator_1<TIn>* __7__wrap3;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <beatOffset>5__3, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__beatOffset_5__3, put = __cordl_internal_set__beatOffset_5__3)) float_t _beatOffset_5__3;

  /// @brief Field <isFirstBaseData>5__2, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__isFirstBaseData_5__2, put = __cordl_internal_set__isFirstBaseData_5__2)) bool _isFirstBaseData_5__2;

  /// @brief Field beatToTimeConverter, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_beatToTimeConverter, put = __cordl_internal_set_beatToTimeConverter)) ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter;

  /// @brief Field distributionOrderIndex, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_distributionOrderIndex, put = __cordl_internal_set_distributionOrderIndex)) int32_t distributionOrderIndex;

  /// @brief Field durationOrderIndex, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_durationOrderIndex, put = __cordl_internal_set_durationOrderIndex)) int32_t durationOrderIndex;

  /// @brief Field elementId, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupBoxBeat, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_groupBoxBeat, put = __cordl_internal_set_groupBoxBeat)) float_t groupBoxBeat;

  /// @brief Field groupId, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

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

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::FloatFxBeatmapEventDataBox_2__Unpack_d__3<TIn, TOut>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<BeatmapEventData>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* System_Collections_Generic_IEnumerable_BeatmapEventData__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<BeatmapEventData>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapEventData* System_Collections_Generic_IEnumerator_BeatmapEventData__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
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

  constexpr float_t const& __cordl_internal_get___3__maxBeat() const;

  constexpr float_t& __cordl_internal_get___3__maxBeat();

  constexpr ::GlobalNamespace::FloatFxBeatmapEventDataBox_2<TIn, TOut>* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::FloatFxBeatmapEventDataBox_2<TIn, TOut>*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<TIn>* const& __cordl_internal_get___7__wrap3() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TIn>*& __cordl_internal_get___7__wrap3();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr float_t const& __cordl_internal_get__beatOffset_5__3() const;

  constexpr float_t& __cordl_internal_get__beatOffset_5__3();

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

  constexpr void __cordl_internal_set___3__maxBeat(float_t value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::FloatFxBeatmapEventDataBox_2<TIn, TOut>* value);

  constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::IEnumerator_1<TIn>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__beatOffset_5__3(float_t value);

  constexpr void __cordl_internal_set__isFirstBaseData_5__2(bool value);

  constexpr void __cordl_internal_set_beatToTimeConverter(::GlobalNamespace::IBeatToTimeConverter* value);

  constexpr void __cordl_internal_set_distributionOrderIndex(int32_t value);

  constexpr void __cordl_internal_set_durationOrderIndex(int32_t value);

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupBoxBeat(float_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_maxBeat(float_t value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
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
  constexpr FloatFxBeatmapEventDataBox_2__Unpack_d__3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventDataBox_2__Unpack_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxBeatmapEventDataBox_2__Unpack_d__3(FloatFxBeatmapEventDataBox_2__Unpack_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventDataBox_2__Unpack_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxBeatmapEventDataBox_2__Unpack_d__3(FloatFxBeatmapEventDataBox_2__Unpack_d__3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14882 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventData* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field durationOrderIndex, offset: 0x24, size: 0x4, def value: None
  int32_t ___durationOrderIndex;

  /// @brief Field <>3__durationOrderIndex, offset: 0x28, size: 0x4, def value: None
  int32_t _____3__durationOrderIndex;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::FloatFxBeatmapEventDataBox_2<TIn, TOut>* _____4__this;

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

  /// @brief Field groupId, offset: 0x60, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field <>3__groupId, offset: 0x64, size: 0x4, def value: None
  int32_t _____3__groupId;

  /// @brief Field elementId, offset: 0x68, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field <>3__elementId, offset: 0x6c, size: 0x4, def value: None
  int32_t _____3__elementId;

  /// @brief Field <isFirstBaseData>5__2, offset: 0x70, size: 0x1, def value: None
  bool ____isFirstBaseData_5__2;

  /// @brief Field <beatOffset>5__3, offset: 0x74, size: 0x4, def value: None
  float_t ____beatOffset_5__3;

  /// @brief Field <>7__wrap3, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TIn>* _____7__wrap3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies BeatmapEventDataBox
namespace GlobalNamespace {
// cpp template
template <typename TIn, typename TOut>
// Is value type: false
// CS Name: FloatFxBeatmapEventDataBox`2<TIn,TOut>
class CORDL_TYPE FloatFxBeatmapEventDataBox_2 : public ::GlobalNamespace::BeatmapEventDataBox {
public:
  // Declarations
  using _Unpack_d__3 = ::GlobalNamespace::FloatFxBeatmapEventDataBox_2__Unpack_d__3<TIn, TOut>;

  /// @brief Field _beatStep, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__beatStep, put = __cordl_internal_set__beatStep)) float_t _beatStep;

  /// @brief Field _fxBaseDataList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__fxBaseDataList, put = __cordl_internal_set__fxBaseDataList)) ::System::Collections::Generic::IReadOnlyList_1<TIn>* _fxBaseDataList;

  /// @brief Method CreateVfxBeatmapEventData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TOut CreateVfxBeatmapEventData(TIn data, float_t time, int32_t groupId, int32_t elementId, float_t distributionOffset);

  static inline ::GlobalNamespace::FloatFxBeatmapEventDataBox_2<TIn, TOut>*
  New_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType, float_t beatDistributionParam,
           ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType eventDistributionParamType, float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent,
           ::GlobalNamespace::EaseType eventDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<TIn>* fxBaseDataList);

  /// @brief Method Unpack, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>* Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex,
                                                                                                     int32_t distributionOrderIndex, float_t maxBeat,
                                                                                                     ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter,
                                                                                                     ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  constexpr float_t const& __cordl_internal_get__beatStep() const;

  constexpr float_t& __cordl_internal_get__beatStep();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<TIn>* const& __cordl_internal_get__fxBaseDataList() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<TIn>*& __cordl_internal_get__fxBaseDataList();

  constexpr void __cordl_internal_set__beatStep(float_t value);

  constexpr void __cordl_internal_set__fxBaseDataList(::System::Collections::Generic::IReadOnlyList_1<TIn>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType, float_t beatDistributionParam,
                    ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType eventDistributionParamType, float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent,
                    ::GlobalNamespace::EaseType eventDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<TIn>* fxBaseDataList);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxBeatmapEventDataBox_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventDataBox_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxBeatmapEventDataBox_2(FloatFxBeatmapEventDataBox_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventDataBox_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxBeatmapEventDataBox_2(FloatFxBeatmapEventDataBox_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14883 };

  /// @brief Field _beatStep, offset: 0x34, size: 0x4, def value: None
  float_t ____beatStep;

  /// @brief Field _fxBaseDataList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<TIn>* ____fxBaseDataList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::FloatFxBeatmapEventDataBox_2, "", "FloatFxBeatmapEventDataBox`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::FloatFxBeatmapEventDataBox_2__Unpack_d__3, "", "FloatFxBeatmapEventDataBox`2/<Unpack>d__3");
