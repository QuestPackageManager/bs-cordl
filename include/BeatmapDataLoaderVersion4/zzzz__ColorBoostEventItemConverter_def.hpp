#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/ColorBoostEventItemConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorBoostEventItemConverter)
namespace BeatmapDataLoaderVersion4 {
class ColorBoostEventItemConverter__Convert_d__2;
}
namespace BeatmapSaveDataVersion4 {
class BeatIndex;
}
namespace BeatmapSaveDataVersion4 {
struct ColorBoostEvent;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class BpmTimeProcessor;
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
class Object;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class ColorBoostEventItemConverter;
}
namespace BeatmapDataLoaderVersion4 {
class ColorBoostEventItemConverter__Convert_d__2;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter);
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter__Convert_d__2);
// Dependencies System.Object
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.ColorBoostEventItemConverter/<Convert>d__2
class CORDL_TYPE ColorBoostEventItemConverter__Convert_d__2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get =
                          System_Collections_Generic_IEnumerator_BeatmapEventData__get_Current)) ::GlobalNamespace::BeatmapEventData* System_Collections_Generic_IEnumerator_BeatmapEventData__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::GlobalNamespace::BeatmapEventData* __2__current;

  /// @brief Field <>3__index, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___3__index, put = __cordl_internal_set___3__index)) ::BeatmapSaveDataVersion4::BeatIndex* __3__index;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field index, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) ::BeatmapSaveDataVersion4::BeatIndex* index;

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

  /// @brief Method MoveNext, addr 0x3665d48, size 0xf0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter__Convert_d__2* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<BeatmapEventData>.GetEnumerator, addr 0x3665e80, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapEventData*>* System_Collections_Generic_IEnumerable_BeatmapEventData__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<BeatmapEventData>.get_Current, addr 0x3665e38, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapEventData* System_Collections_Generic_IEnumerator_BeatmapEventData__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3665f20, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3665e40, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3665e78, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3665d44, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::GlobalNamespace::BeatmapEventData* const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::BeatmapEventData*& __cordl_internal_get___2__current();

  constexpr ::BeatmapSaveDataVersion4::BeatIndex* const& __cordl_internal_get___3__index() const;

  constexpr ::BeatmapSaveDataVersion4::BeatIndex*& __cordl_internal_get___3__index();

  constexpr ::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter* const& __cordl_internal_get___4__this() const;

  constexpr ::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::BeatmapSaveDataVersion4::BeatIndex* const& __cordl_internal_get_index() const;

  constexpr ::BeatmapSaveDataVersion4::BeatIndex*& __cordl_internal_get_index();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::GlobalNamespace::BeatmapEventData* value);

  constexpr void __cordl_internal_set___3__index(::BeatmapSaveDataVersion4::BeatIndex* value);

  constexpr void __cordl_internal_set___4__this(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_index(::BeatmapSaveDataVersion4::BeatIndex* value);

  /// @brief Method .ctor, addr 0x3665d24, size 0x20, virtual false, abstract: false, final false
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
  constexpr ColorBoostEventItemConverter__Convert_d__2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorBoostEventItemConverter__Convert_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorBoostEventItemConverter__Convert_d__2(ColorBoostEventItemConverter__Convert_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorBoostEventItemConverter__Convert_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorBoostEventItemConverter__Convert_d__2(ColorBoostEventItemConverter__Convert_d__2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15408 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventData* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter* _____4__this;

  /// @brief Field index, offset: 0x30, size: 0x8, def value: None
  ::BeatmapSaveDataVersion4::BeatIndex* ___index;

  /// @brief Field <>3__index, offset: 0x38, size: 0x8, def value: None
  ::BeatmapSaveDataVersion4::BeatIndex* _____3__index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter__Convert_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter__Convert_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter__Convert_d__2, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter__Convert_d__2, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter__Convert_d__2, ___index) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter__Convert_d__2, _____3__index) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter__Convert_d__2, 0x40>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
// Dependencies BeatToTimeConverter
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.ColorBoostEventItemConverter
class CORDL_TYPE ColorBoostEventItemConverter : public ::GlobalNamespace::BeatToTimeConverter {
public:
  // Declarations
  using _Convert_d__2 = ::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter__Convert_d__2;

  /// @brief Field _colorBoostEvents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorBoostEvents,
                      put = __cordl_internal_set__colorBoostEvents)) ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*>
      _colorBoostEvents;

  /// @brief Method Convert, addr 0x3665854, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>* Convert(::BeatmapSaveDataVersion4::BeatIndex* index);

  static inline ::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter*
  New_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> colorBoostEvents, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> const& __cordl_internal_get__colorBoostEvents() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*>& __cordl_internal_get__colorBoostEvents();

  constexpr void __cordl_internal_set__colorBoostEvents(::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> value);

  /// @brief Method .ctor, addr 0x36656a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> colorBoostEvents, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorBoostEventItemConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorBoostEventItemConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorBoostEventItemConverter(ColorBoostEventItemConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorBoostEventItemConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorBoostEventItemConverter(ColorBoostEventItemConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15409 };

  /// @brief Field _colorBoostEvents, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> ____colorBoostEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter, ____colorBoostEvents) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter*, "BeatmapDataLoaderVersion4", "ColorBoostEventItemConverter");
NEED_NO_BOX(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter__Convert_d__2);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter__Convert_d__2*, "BeatmapDataLoaderVersion4", "ColorBoostEventItemConverter/<Convert>d__2");
