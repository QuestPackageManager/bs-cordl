#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionMapAnimationController)
namespace GlobalNamespace {
class MenuShockwave;
}
namespace GlobalNamespace {
class MissionNodeConnection;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class MissionNodesManager;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateMissionMapCoroutine_d__12;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateStageCoroutine_d__14;
}
namespace GlobalNamespace {
class __MissionMapAnimationController____c;
}
namespace HMUI {
class ScrollView;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionMapAnimationController;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateMissionMapCoroutine_d__12;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateStageCoroutine_d__14;
}
namespace GlobalNamespace {
class __MissionMapAnimationController____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionMapAnimationController);
MARK_REF_PTR_T(::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13);
MARK_REF_PTR_T(::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12);
MARK_REF_PTR_T(::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15);
MARK_REF_PTR_T(::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14);
MARK_REF_PTR_T(::GlobalNamespace::__MissionMapAnimationController____c);
// Type: ::<UpdateMissionMapCoroutine>d__12
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionMapAnimationController::<UpdateMissionMapCoroutine>d__12*
class CORDL_TYPE __MissionMapAnimationController___UpdateMissionMapCoroutine_d__12 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MissionMapAnimationController> __4__this;

  /// @brief Field finishCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback))::System::Action* finishCallback;

  /// @brief Field lastClearedMissionNode, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_lastClearedMissionNode, put = __cordl_internal_set_lastClearedMissionNode))::UnityW<::GlobalNamespace::MissionNode> lastClearedMissionNode;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2627560, size 0x1f8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2627758, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2627760, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26277a0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x262755c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController>& __cordl_internal_get___4__this();

  constexpr ::System::Action*& __cordl_internal_get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_finishCallback() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNode> const& __cordl_internal_get_lastClearedMissionNode() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNode>& __cordl_internal_get_lastClearedMissionNode();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionMapAnimationController> value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action* value);

  constexpr void __cordl_internal_set_lastClearedMissionNode(::UnityW<::GlobalNamespace::MissionNode> value);

  /// @brief Method .ctor, addr 0x2627364, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionMapAnimationController___UpdateMissionMapCoroutine_d__12();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionMapAnimationController___UpdateMissionMapCoroutine_d__12(__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionMapAnimationController___UpdateMissionMapCoroutine_d__12(__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionMapAnimationController> _____4__this;

  /// @brief Field lastClearedMissionNode, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNode> ___lastClearedMissionNode;

  /// @brief Field finishCallback, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___finishCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12, ___lastClearedMissionNode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12, ___finishCallback) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdateClearedNodeStateCoroutine>d__13
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionMapAnimationController::<UpdateClearedNodeStateCoroutine>d__13*
class CORDL_TYPE __MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MissionMapAnimationController> __4__this;

  /// @brief Field lastClearedMissionNode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lastClearedMissionNode, put = __cordl_internal_set_lastClearedMissionNode))::UnityW<::GlobalNamespace::MissionNode> lastClearedMissionNode;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x26277ac, size 0xf0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x26278a8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26278b0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26278f0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x26277a8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::MissionNode> const& __cordl_internal_get_lastClearedMissionNode() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNode>& __cordl_internal_get_lastClearedMissionNode();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionMapAnimationController> value);

  constexpr void __cordl_internal_set_lastClearedMissionNode(::UnityW<::GlobalNamespace::MissionNode> value);

  /// @brief Method .ctor, addr 0x2627400, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13(__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13(__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field lastClearedMissionNode, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNode> ___lastClearedMissionNode;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionMapAnimationController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13, ___lastClearedMissionNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13, _____4__this) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdateStageCoroutine>d__14
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionMapAnimationController::<UpdateStageCoroutine>d__14*
class CORDL_TYPE __MissionMapAnimationController___UpdateStageCoroutine_d__14 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MissionMapAnimationController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x26278fc, size 0x9c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2627b58, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2627b60, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2627ba0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x26278f8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionMapAnimationController> value);

  /// @brief Method .ctor, addr 0x2627490, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionMapAnimationController___UpdateStageCoroutine_d__14();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateStageCoroutine_d__14", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionMapAnimationController___UpdateStageCoroutine_d__14(__MissionMapAnimationController___UpdateStageCoroutine_d__14&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateStageCoroutine_d__14", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionMapAnimationController___UpdateStageCoroutine_d__14(__MissionMapAnimationController___UpdateStageCoroutine_d__14 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionMapAnimationController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionMapAnimationController::<>c*
class CORDL_TYPE __MissionMapAnimationController____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MissionMapAnimationController____c* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0))::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* __9__15_0;

  /// @brief Field <>9__15_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_1, put = setStaticF___9__15_1))::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* __9__15_1;

  static inline ::GlobalNamespace::__MissionMapAnimationController____c* New_ctor();

  /// @brief Method <UpdateNodesAndConnectionCoroutine>b__15_0, addr 0x2627c14, size 0x24, virtual false, abstract: false, final false
  inline float_t _UpdateNodesAndConnectionCoroutine_b__15_0(::GlobalNamespace::MissionNodeConnection* connection);

  /// @brief Method <UpdateNodesAndConnectionCoroutine>b__15_1, addr 0x2627c54, size 0x24, virtual false, abstract: false, final false
  inline float_t _UpdateNodesAndConnectionCoroutine_b__15_1(::GlobalNamespace::MissionNodeConnection* connection);

  /// @brief Method .ctor, addr 0x2627c0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__MissionMapAnimationController____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* getStaticF___9__15_0();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* getStaticF___9__15_1();

  static inline void setStaticF___9(::GlobalNamespace::__MissionMapAnimationController____c* value);

  static inline void setStaticF___9__15_0(::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* value);

  static inline void setStaticF___9__15_1(::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionMapAnimationController____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionMapAnimationController____c(__MissionMapAnimationController____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionMapAnimationController____c(__MissionMapAnimationController____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionMapAnimationController____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdateNodesAndConnectionCoroutine>d__15
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionMapAnimationController::<UpdateNodesAndConnectionCoroutine>d__15*
class CORDL_TYPE __MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MissionMapAnimationController> __4__this;

  /// @brief Field <>7__wrap2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2,
                      put = __cordl_internal_set___7__wrap2))::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*> __7__wrap2;

  /// @brief Field <>7__wrap3, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3)) int32_t __7__wrap3;

  /// @brief Field <newEnabledConnection>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__newEnabledConnection_5__2,
                      put = __cordl_internal_set__newEnabledConnection_5__2))::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>,
                                                                                      ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*> _newEnabledConnection_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2627c7c, size 0x310, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x26281d8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26281e0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2628220, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2627c78, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController>& __cordl_internal_get___4__this();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*> const& __cordl_internal_get___7__wrap2() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*>& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___7__wrap3() const;

  constexpr int32_t& __cordl_internal_get___7__wrap3();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*> const& __cordl_internal_get__newEnabledConnection_5__2() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*>& __cordl_internal_get__newEnabledConnection_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionMapAnimationController> value);

  constexpr void __cordl_internal_set___7__wrap2(::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*> value);

  constexpr void __cordl_internal_set___7__wrap3(int32_t value);

  constexpr void __cordl_internal_set__newEnabledConnection_5__2(::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*> value);

  /// @brief Method .ctor, addr 0x2627520, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15(__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15(__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionMapAnimationController> _____4__this;

  /// @brief Field <newEnabledConnection>5__2, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*> ____newEnabledConnection_5__2;

  /// @brief Field <>7__wrap2, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*> _____7__wrap2;

  /// @brief Field <>7__wrap3, offset: 0x38, size: 0x4, def value: None
  int32_t _____7__wrap3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15, ____newEnabledConnection_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15, _____7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15, _____7__wrap3) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionMapAnimationController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionMapAnimationController*
class CORDL_TYPE MissionMapAnimationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _UpdateClearedNodeStateCoroutine_d__13 = ::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13;

  using _UpdateMissionMapCoroutine_d__12 = ::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12;

  using _UpdateNodesAndConnectionCoroutine_d__15 = ::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15;

  using _UpdateStageCoroutine_d__14 = ::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14;

  using __c = ::GlobalNamespace::__MissionMapAnimationController____c;

  /// @brief Field _mapScrollView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mapScrollView, put = __cordl_internal_set__mapScrollView))::UnityW<::HMUI::ScrollView> _mapScrollView;

  /// @brief Field _missionConnectionAnimationSeparationTime, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__missionConnectionAnimationSeparationTime,
                      put = __cordl_internal_set__missionConnectionAnimationSeparationTime)) float_t _missionConnectionAnimationSeparationTime;

  /// @brief Field _missionConnectionAnimationStartDelay, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__missionConnectionAnimationStartDelay,
                      put = __cordl_internal_set__missionConnectionAnimationStartDelay)) float_t _missionConnectionAnimationStartDelay;

  /// @brief Field _missionNodesManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodesManager, put = __cordl_internal_set__missionNodesManager))::UnityW<::GlobalNamespace::MissionNodesManager> _missionNodesManager;

  /// @brief Field _shockwaveEffect, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__shockwaveEffect, put = __cordl_internal_set__shockwaveEffect))::UnityW<::GlobalNamespace::MenuShockwave> _shockwaveEffect;

  /// @brief Field _stageAnimationDuration, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__stageAnimationDuration, put = __cordl_internal_set__stageAnimationDuration)) float_t _stageAnimationDuration;

  /// @brief Field _stageAnimationStartDelay, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__stageAnimationStartDelay, put = __cordl_internal_set__stageAnimationStartDelay)) float_t _stageAnimationStartDelay;

  /// @brief Field _startDelay, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__startDelay, put = __cordl_internal_set__startDelay)) float_t _startDelay;

  __declspec(property(get = get_animatedUpdateIsRequired)) bool animatedUpdateIsRequired;

  static inline ::GlobalNamespace::MissionMapAnimationController* New_ctor();

  /// @brief Method ScrollToTopMostNotClearedMission, addr 0x2626fac, size 0xcc, virtual false, abstract: false, final false
  inline void ScrollToTopMostNotClearedMission();

  /// @brief Method UpdateClearedNodeStateCoroutine, addr 0x262738c, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateClearedNodeStateCoroutine(::GlobalNamespace::MissionNode* lastClearedMissionNode);

  /// @brief Method UpdateMissionMapAfterMissionWasCleared, addr 0x26271c4, size 0xe8, virtual false, abstract: false, final false
  inline void UpdateMissionMapAfterMissionWasCleared(bool animated, ::System::Action* finishCallback);

  /// @brief Method UpdateMissionMapCoroutine, addr 0x26272e8, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateMissionMapCoroutine(::GlobalNamespace::MissionNode* lastClearedMissionNode, ::System::Action* finishCallback);

  /// @brief Method UpdateNodesAndConnectionCoroutine, addr 0x26274b8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateNodesAndConnectionCoroutine();

  /// @brief Method UpdateStageCoroutine, addr 0x2627428, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateStageCoroutine();

  constexpr ::UnityW<::HMUI::ScrollView> const& __cordl_internal_get__mapScrollView() const;

  constexpr ::UnityW<::HMUI::ScrollView>& __cordl_internal_get__mapScrollView();

  constexpr float_t const& __cordl_internal_get__missionConnectionAnimationSeparationTime() const;

  constexpr float_t& __cordl_internal_get__missionConnectionAnimationSeparationTime();

  constexpr float_t const& __cordl_internal_get__missionConnectionAnimationStartDelay() const;

  constexpr float_t& __cordl_internal_get__missionConnectionAnimationStartDelay();

  constexpr ::UnityW<::GlobalNamespace::MissionNodesManager> const& __cordl_internal_get__missionNodesManager() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNodesManager>& __cordl_internal_get__missionNodesManager();

  constexpr ::UnityW<::GlobalNamespace::MenuShockwave> const& __cordl_internal_get__shockwaveEffect() const;

  constexpr ::UnityW<::GlobalNamespace::MenuShockwave>& __cordl_internal_get__shockwaveEffect();

  constexpr float_t const& __cordl_internal_get__stageAnimationDuration() const;

  constexpr float_t& __cordl_internal_get__stageAnimationDuration();

  constexpr float_t const& __cordl_internal_get__stageAnimationStartDelay() const;

  constexpr float_t& __cordl_internal_get__stageAnimationStartDelay();

  constexpr float_t const& __cordl_internal_get__startDelay() const;

  constexpr float_t& __cordl_internal_get__startDelay();

  constexpr void __cordl_internal_set__mapScrollView(::UnityW<::HMUI::ScrollView> value);

  constexpr void __cordl_internal_set__missionConnectionAnimationSeparationTime(float_t value);

  constexpr void __cordl_internal_set__missionConnectionAnimationStartDelay(float_t value);

  constexpr void __cordl_internal_set__missionNodesManager(::UnityW<::GlobalNamespace::MissionNodesManager> value);

  constexpr void __cordl_internal_set__shockwaveEffect(::UnityW<::GlobalNamespace::MenuShockwave> value);

  constexpr void __cordl_internal_set__stageAnimationDuration(float_t value);

  constexpr void __cordl_internal_set__stageAnimationStartDelay(float_t value);

  constexpr void __cordl_internal_set__startDelay(float_t value);

  /// @brief Method .ctor, addr 0x2627548, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animatedUpdateIsRequired, addr 0x2626e88, size 0x74, virtual false, abstract: false, final false
  inline bool get_animatedUpdateIsRequired();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionMapAnimationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionMapAnimationController(MissionMapAnimationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionMapAnimationController(MissionMapAnimationController const&) = delete;

  /// @brief Field _missionNodesManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodesManager> ____missionNodesManager;

  /// @brief Field _mapScrollView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ScrollView> ____mapScrollView;

  /// @brief Field _startDelay, offset: 0x28, size: 0x4, def value: None
  float_t ____startDelay;

  /// @brief Field _stageAnimationStartDelay, offset: 0x2c, size: 0x4, def value: None
  float_t ____stageAnimationStartDelay;

  /// @brief Field _missionConnectionAnimationStartDelay, offset: 0x30, size: 0x4, def value: None
  float_t ____missionConnectionAnimationStartDelay;

  /// @brief Field _missionConnectionAnimationSeparationTime, offset: 0x34, size: 0x4, def value: None
  float_t ____missionConnectionAnimationSeparationTime;

  /// @brief Field _stageAnimationDuration, offset: 0x38, size: 0x4, def value: None
  float_t ____stageAnimationDuration;

  /// @brief Field _shockwaveEffect, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuShockwave> ____shockwaveEffect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionMapAnimationController, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____missionNodesManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____mapScrollView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____startDelay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____stageAnimationStartDelay) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____missionConnectionAnimationStartDelay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____missionConnectionAnimationSeparationTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____stageAnimationDuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____shockwaveEffect) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionMapAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionMapAnimationController*, "", "MissionMapAnimationController");
NEED_NO_BOX(::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13*, "", "MissionMapAnimationController/<UpdateClearedNodeStateCoroutine>d__13");
NEED_NO_BOX(::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12*, "", "MissionMapAnimationController/<UpdateMissionMapCoroutine>d__12");
NEED_NO_BOX(::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15*, "", "MissionMapAnimationController/<UpdateNodesAndConnectionCoroutine>d__15");
NEED_NO_BOX(::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14*, "", "MissionMapAnimationController/<UpdateStageCoroutine>d__14");
NEED_NO_BOX(::GlobalNamespace::__MissionMapAnimationController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionMapAnimationController____c*, "", "MissionMapAnimationController/<>c");
