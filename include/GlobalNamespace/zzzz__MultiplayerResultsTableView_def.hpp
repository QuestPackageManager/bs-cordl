#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerResultsTableView)
namespace UnityEngine {
class RectTransform;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class MultiplayerOffsetPositionByLocalPlayerPosition;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace HMUI {
class TableView;
}
namespace GlobalNamespace {
class __MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace HMUI {
class TableCell;
}
namespace GlobalNamespace {
class __MultiplayerResultsTableView____c__DisplayClass30_0;
}
namespace Zenject {
class DiContainer;
}
namespace UnityEngine {
class AudioSource;
}
namespace GlobalNamespace {
class __MultiplayerResultsTableView____c__DisplayClass30_1;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace GlobalNamespace {
class MultiplayerResultsTableCell;
}
namespace GlobalNamespace {
class __MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsTableView;
}
namespace GlobalNamespace {
class __MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32;
}
namespace GlobalNamespace {
class __MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31;
}
namespace GlobalNamespace {
class __MultiplayerResultsTableView____c__DisplayClass30_0;
}
namespace GlobalNamespace {
class __MultiplayerResultsTableView____c__DisplayClass30_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerResultsTableView);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1);
// Type: ::<>c__DisplayClass30_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5890))
// CS Name: ::MultiplayerResultsTableView::<>c__DisplayClass30_0*
class CORDL_TYPE __MultiplayerResultsTableView____c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field rectTransform, offset 0x10, size 0x8
  __declspec(property(get = __get_rectTransform, put = __set_rectTransform))::UnityEngine::RectTransform* rectTransform;

  /// @brief Field cell, offset 0x18, size 0x8
  __declspec(property(get = __get_cell, put = __set_cell))::GlobalNamespace::MultiplayerResultsTableCell* cell;

  constexpr ::UnityEngine::RectTransform*& __get_rectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_rectTransform() const;

  constexpr void __set_rectTransform(::UnityEngine::RectTransform* value);

  constexpr ::GlobalNamespace::MultiplayerResultsTableCell*& __get_cell();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsTableCell*> const& __get_cell() const;

  constexpr void __set_cell(::GlobalNamespace::MultiplayerResultsTableCell* value);

  static inline ::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0* New_ctor();

  /// @brief Method .ctor addr 0x21a31f8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <StartAnimation>b__0 addr 0x21a33cc size 0x1c virtual false final false
  inline void _StartAnimation_b__0(::UnityEngine::Vector2 val);

  /// @brief Method <StartAnimation>b__2 addr 0x21a33e8 size 0x18 virtual false final false
  inline void _StartAnimation_b__2(float_t val);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerResultsTableView____c__DisplayClass30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerResultsTableView____c__DisplayClass30_0(__MultiplayerResultsTableView____c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerResultsTableView____c__DisplayClass30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerResultsTableView____c__DisplayClass30_0(__MultiplayerResultsTableView____c__DisplayClass30_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerResultsTableView____c__DisplayClass30_0();

public:
  /// @brief Field rectTransform, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___rectTransform;

  /// @brief Field cell, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsTableCell* ___cell;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0, ___rectTransform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0, ___cell) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass30_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5891))
// CS Name: ::MultiplayerResultsTableView::<>c__DisplayClass30_1*
class CORDL_TYPE __MultiplayerResultsTableView____c__DisplayClass30_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field winnerRectTransform, offset 0x10, size 0x8
  __declspec(property(get = __get_winnerRectTransform, put = __set_winnerRectTransform))::UnityEngine::RectTransform* winnerRectTransform;

  constexpr ::UnityEngine::RectTransform*& __get_winnerRectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_winnerRectTransform() const;

  constexpr void __set_winnerRectTransform(::UnityEngine::RectTransform* value);

  static inline ::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1* New_ctor();

  /// @brief Method .ctor addr 0x21a3200 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <StartAnimation>b__3 addr 0x21a3400 size 0x1c virtual false final false
  inline void _StartAnimation_b__3(::UnityEngine::Vector2 val);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerResultsTableView____c__DisplayClass30_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerResultsTableView____c__DisplayClass30_1(__MultiplayerResultsTableView____c__DisplayClass30_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerResultsTableView____c__DisplayClass30_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerResultsTableView____c__DisplayClass30_1(__MultiplayerResultsTableView____c__DisplayClass30_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerResultsTableView____c__DisplayClass30_1();

public:
  /// @brief Field winnerRectTransform, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___winnerRectTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1, ___winnerRectTransform) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<PlayRandomRowSlideInSound>d__31
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5892))
// CS Name: ::MultiplayerResultsTableView::<PlayRandomRowSlideInSound>d__31*
class CORDL_TYPE __MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __get_delay, put = __set_delay)) float_t delay;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerResultsTableView* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr float_t& __get_delay();

  constexpr float_t const& __get_delay() const;

  constexpr void __set_delay(float_t value);

  constexpr ::GlobalNamespace::MultiplayerResultsTableView*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsTableView*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerResultsTableView* value);

  static inline ::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x21a3280 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x21a341c size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x21a3420 size 0xf4 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x21a3514 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x21a351c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x21a355c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31(__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31(__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsTableView* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31, _____4__this) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<PlayAvatarSlideInSound>d__32
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5893))
// CS Name: ::MultiplayerResultsTableView::<PlayAvatarSlideInSound>d__32*
class CORDL_TYPE __MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __get_delay, put = __set_delay)) float_t delay;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerResultsTableView* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr float_t& __get_delay();

  constexpr float_t const& __get_delay() const;

  constexpr void __set_delay(float_t value);

  constexpr ::GlobalNamespace::MultiplayerResultsTableView*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsTableView*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerResultsTableView* value);

  static inline ::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x21a3320 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x21a3564 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x21a3568 size 0xc4 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x21a362c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x21a3634 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x21a3674 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32(__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32(__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsTableView* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32, _____4__this) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerResultsTableView
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(10179)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5894))
// CS Name: ::MultiplayerResultsTableView*
class CORDL_TYPE MultiplayerResultsTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _PlayAvatarSlideInSound_d__32 = ::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32;

  using _PlayRandomRowSlideInSound_d__31 = ::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31;

  using __c__DisplayClass30_1 = ::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1;

  using __c__DisplayClass30_0 = ::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0;

  /// @brief Field _tableView, offset 0x18, size 0x8
  __declspec(property(get = __get__tableView, put = __set__tableView))::HMUI::TableView* _tableView;

  /// @brief Field _tableViewRectTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__tableViewRectTransform, put = __set__tableViewRectTransform))::UnityEngine::RectTransform* _tableViewRectTransform;

  /// @brief Field _winnerTableCell, offset 0x28, size 0x8
  __declspec(property(get = __get__winnerTableCell, put = __set__winnerTableCell))::GlobalNamespace::MultiplayerResultsTableCell* _winnerTableCell;

  /// @brief Field _cellPrefab, offset 0x30, size 0x8
  __declspec(property(get = __get__cellPrefab, put = __set__cellPrefab))::GlobalNamespace::MultiplayerResultsTableCell* _cellPrefab;

  /// @brief Field _startRowXPosition, offset 0x38, size 0x4
  __declspec(property(get = __get__startRowXPosition, put = __set__startRowXPosition)) float_t _startRowXPosition;

  /// @brief Field _rowHeight, offset 0x3c, size 0x4
  __declspec(property(get = __get__rowHeight, put = __set__rowHeight)) float_t _rowHeight;

  /// @brief Field _rowXOffset, offset 0x40, size 0x4
  __declspec(property(get = __get__rowXOffset, put = __set__rowXOffset)) float_t _rowXOffset;

  /// @brief Field _animationDuration, offset 0x44, size 0x4
  __declspec(property(get = __get__animationDuration, put = __set__animationDuration)) float_t _animationDuration;

  /// @brief Field _animationSeparationTime, offset 0x48, size 0x4
  __declspec(property(get = __get__animationSeparationTime, put = __set__animationSeparationTime)) float_t _animationSeparationTime;

  /// @brief Field _winnerAnimationDuration, offset 0x4c, size 0x4
  __declspec(property(get = __get__winnerAnimationDuration, put = __set__winnerAnimationDuration)) float_t _winnerAnimationDuration;

  /// @brief Field _duelTablePosXOffset, offset 0x50, size 0x4
  __declspec(property(get = __get__duelTablePosXOffset, put = __set__duelTablePosXOffset)) float_t _duelTablePosXOffset;

  /// @brief Field _multiplayerOffsetByLocalPlayerPosition, offset 0x58, size 0x8
  __declspec(property(get = __get__multiplayerOffsetByLocalPlayerPosition,
                      put = __set__multiplayerOffsetByLocalPlayerPosition))::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* _multiplayerOffsetByLocalPlayerPosition;

  /// @brief Field _outroSfxAudioSource, offset 0x60, size 0x8
  __declspec(property(get = __get__outroSfxAudioSource, put = __set__outroSfxAudioSource))::UnityEngine::AudioSource* _outroSfxAudioSource;

  /// @brief Field _rowSlideAudioClips, offset 0x68, size 0x8
  __declspec(property(get = __get__rowSlideAudioClips, put = __set__rowSlideAudioClips))::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> _rowSlideAudioClips;

  /// @brief Field _avatarSlideAudioClip, offset 0x70, size 0x8
  __declspec(property(get = __get__avatarSlideAudioClip, put = __set__avatarSlideAudioClip))::UnityEngine::AudioClip* _avatarSlideAudioClip;

  /// @brief Field _tweeningManager, offset 0x78, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::TimeTweeningManager* _tweeningManager;

  /// @brief Field _layoutProvider, offset 0x80, size 0x8
  __declspec(property(get = __get__layoutProvider, put = __set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _container, offset 0x88, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _dataList, offset 0x90, size 0x8
  __declspec(property(get = __get__dataList, put = __set__dataList))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* _dataList;

  /// @brief Field _positionOffset, offset 0x98, size 0xc
  __declspec(property(get = __get__positionOffset, put = __set__positionOffset))::UnityEngine::Vector3 _positionOffset;

  /// @brief Field _rotationOffset, offset 0xa4, size 0x10
  __declspec(property(get = __get__rotationOffset, put = __set__rotationOffset))::UnityEngine::Quaternion _rotationOffset;

  /// @brief Field _lastParentPosition, offset 0xb4, size 0xc
  __declspec(property(get = __get__lastParentPosition, put = __set__lastParentPosition))::UnityEngine::Vector3 _lastParentPosition;

  /// @brief Field _lastParentRotation, offset 0xc0, size 0x10
  __declspec(property(get = __get__lastParentRotation, put = __set__lastParentRotation))::UnityEngine::Quaternion _lastParentRotation;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  constexpr ::HMUI::TableView*& __get__tableView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> const& __get__tableView() const;

  constexpr void __set__tableView(::HMUI::TableView* value);

  constexpr ::UnityEngine::RectTransform*& __get__tableViewRectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__tableViewRectTransform() const;

  constexpr void __set__tableViewRectTransform(::UnityEngine::RectTransform* value);

  constexpr ::GlobalNamespace::MultiplayerResultsTableCell*& __get__winnerTableCell();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsTableCell*> const& __get__winnerTableCell() const;

  constexpr void __set__winnerTableCell(::GlobalNamespace::MultiplayerResultsTableCell* value);

  constexpr ::GlobalNamespace::MultiplayerResultsTableCell*& __get__cellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsTableCell*> const& __get__cellPrefab() const;

  constexpr void __set__cellPrefab(::GlobalNamespace::MultiplayerResultsTableCell* value);

  constexpr float_t& __get__startRowXPosition();

  constexpr float_t const& __get__startRowXPosition() const;

  constexpr void __set__startRowXPosition(float_t value);

  constexpr float_t& __get__rowHeight();

  constexpr float_t const& __get__rowHeight() const;

  constexpr void __set__rowHeight(float_t value);

  constexpr float_t& __get__rowXOffset();

  constexpr float_t const& __get__rowXOffset() const;

  constexpr void __set__rowXOffset(float_t value);

  constexpr float_t& __get__animationDuration();

  constexpr float_t const& __get__animationDuration() const;

  constexpr void __set__animationDuration(float_t value);

  constexpr float_t& __get__animationSeparationTime();

  constexpr float_t const& __get__animationSeparationTime() const;

  constexpr void __set__animationSeparationTime(float_t value);

  constexpr float_t& __get__winnerAnimationDuration();

  constexpr float_t const& __get__winnerAnimationDuration() const;

  constexpr void __set__winnerAnimationDuration(float_t value);

  constexpr float_t& __get__duelTablePosXOffset();

  constexpr float_t const& __get__duelTablePosXOffset() const;

  constexpr void __set__duelTablePosXOffset(float_t value);

  constexpr ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*& __get__multiplayerOffsetByLocalPlayerPosition();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*> const& __get__multiplayerOffsetByLocalPlayerPosition() const;

  constexpr void __set__multiplayerOffsetByLocalPlayerPosition(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* value);

  constexpr ::UnityEngine::AudioSource*& __get__outroSfxAudioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__outroSfxAudioSource() const;

  constexpr void __set__outroSfxAudioSource(::UnityEngine::AudioSource* value);

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& __get__rowSlideAudioClips();

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& __get__rowSlideAudioClips() const;

  constexpr void __set__rowSlideAudioClips(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value);

  constexpr ::UnityEngine::AudioClip*& __get__avatarSlideAudioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__avatarSlideAudioClip() const;

  constexpr void __set__avatarSlideAudioClip(::UnityEngine::AudioClip* value);

  constexpr ::Tweening::TimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager* value);

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __get__layoutProvider() const;

  constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*& __get__dataList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*> const& __get__dataList() const;

  constexpr void __set__dataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* value);

  constexpr ::UnityEngine::Vector3& __get__positionOffset();

  constexpr ::UnityEngine::Vector3 const& __get__positionOffset() const;

  constexpr void __set__positionOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get__rotationOffset();

  constexpr ::UnityEngine::Quaternion const& __get__rotationOffset() const;

  constexpr void __set__rotationOffset(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get__lastParentPosition();

  constexpr ::UnityEngine::Vector3 const& __get__lastParentPosition() const;

  constexpr void __set__lastParentPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get__lastParentRotation();

  constexpr ::UnityEngine::Quaternion const& __get__lastParentRotation() const;

  constexpr void __set__lastParentRotation(::UnityEngine::Quaternion value);

  /// @brief Method CellSize addr 0x21a1f9c size 0x8 virtual true final true
  inline float_t CellSize();

  /// @brief Method NumberOfCells addr 0x21a1fa4 size 0x68 virtual true final true
  inline int32_t NumberOfCells();

  /// @brief Method Awake addr 0x21a200c size 0x5c virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x21a2068 size 0x88 virtual false final false
  inline void OnDestroy();

  /// @brief Method CellForIdx addr 0x21a20f0 size 0x458 virtual true final true
  inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method SetData addr 0x21a2548 size 0x2a0 virtual false final false
  inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* dataList);

  /// @brief Method StartAnimation addr 0x21a27e8 size 0xa10 virtual false final false
  inline float_t StartAnimation();

  /// @brief Method PlayRandomRowSlideInSound addr 0x21a3208 size 0x78 virtual false final false
  inline ::System::Collections::IEnumerator* PlayRandomRowSlideInSound(float_t delay);

  /// @brief Method PlayAvatarSlideInSound addr 0x21a32a8 size 0x78 virtual false final false
  inline ::System::Collections::IEnumerator* PlayAvatarSlideInSound(float_t delay);

  static inline ::GlobalNamespace::MultiplayerResultsTableView* New_ctor();

  /// @brief Method .ctor addr 0x21a3348 size 0x1c virtual false final false
  inline void _ctor();

  /// @brief Method <StartAnimation>b__30_1 addr 0x21a3364 size 0x28 virtual false final false
  inline void _StartAnimation_b__30_1();

  /// @brief Method <StartAnimation>b__30_4 addr 0x21a338c size 0x28 virtual false final false
  inline void _StartAnimation_b__30_4();

  /// @brief Method <StartAnimation>b__30_5 addr 0x21a33b4 size 0x18 virtual false final false
  inline void _StartAnimation_b__30_5(float_t val);

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerResultsTableView(MultiplayerResultsTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerResultsTableView(MultiplayerResultsTableView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerResultsTableView();

public:
  /// @brief Field _tableView, offset: 0x18, size: 0x8, def value: None
  ::HMUI::TableView* ____tableView;

  /// @brief Field _tableViewRectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____tableViewRectTransform;

  /// @brief Field _winnerTableCell, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsTableCell* ____winnerTableCell;

  /// @brief Field _cellPrefab, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsTableCell* ____cellPrefab;

  /// @brief Field _startRowXPosition, offset: 0x38, size: 0x4, def value: None
  float_t ____startRowXPosition;

  /// @brief Field _rowHeight, offset: 0x3c, size: 0x4, def value: None
  float_t ____rowHeight;

  /// @brief Field _rowXOffset, offset: 0x40, size: 0x4, def value: None
  float_t ____rowXOffset;

  /// @brief Field _animationDuration, offset: 0x44, size: 0x4, def value: None
  float_t ____animationDuration;

  /// @brief Field _animationSeparationTime, offset: 0x48, size: 0x4, def value: None
  float_t ____animationSeparationTime;

  /// @brief Field _winnerAnimationDuration, offset: 0x4c, size: 0x4, def value: None
  float_t ____winnerAnimationDuration;

  /// @brief Field _duelTablePosXOffset, offset: 0x50, size: 0x4, def value: None
  float_t ____duelTablePosXOffset;

  /// @brief Field _multiplayerOffsetByLocalPlayerPosition, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* ____multiplayerOffsetByLocalPlayerPosition;

  /// @brief Field _outroSfxAudioSource, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____outroSfxAudioSource;

  /// @brief Field _rowSlideAudioClips, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> ____rowSlideAudioClips;

  /// @brief Field _avatarSlideAudioClip, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____avatarSlideAudioClip;

  /// @brief Field _tweeningManager, offset: 0x78, size: 0x8, def value: None
  ::Tweening::TimeTweeningManager* ____tweeningManager;

  /// @brief Field _layoutProvider, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _container, offset: 0x88, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _dataList, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* ____dataList;

  /// @brief Field _positionOffset, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____positionOffset;

  /// @brief Field _rotationOffset, offset: 0xa4, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rotationOffset;

  /// @brief Field _lastParentPosition, offset: 0xb4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____lastParentPosition;

  /// @brief Field _lastParentRotation, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____lastParentRotation;

  /// @brief Field kCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCellIdentifier{ u"Cell" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerResultsTableView, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____tableView) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____tableViewRectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____winnerTableCell) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____cellPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____startRowXPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____rowHeight) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____rowXOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____animationDuration) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____animationSeparationTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____winnerAnimationDuration) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____duelTablePosXOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____multiplayerOffsetByLocalPlayerPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____outroSfxAudioSource) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____rowSlideAudioClips) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____avatarSlideAudioClip) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____tweeningManager) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____layoutProvider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____container) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____dataList) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____positionOffset) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____rotationOffset) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____lastParentPosition) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableView, ____lastParentRotation) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsTableView*, "", "MultiplayerResultsTableView");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32*, "", "MultiplayerResultsTableView/<PlayAvatarSlideInSound>d__32");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*, "", "MultiplayerResultsTableView/<PlayRandomRowSlideInSound>d__31");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0*, "", "MultiplayerResultsTableView/<>c__DisplayClass30_0");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1*, "", "MultiplayerResultsTableView/<>c__DisplayClass30_1");
