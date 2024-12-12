#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionMapAnimationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionMapAnimationController)
namespace GlobalNamespace {
class MenuShockwave;
}
namespace GlobalNamespace {
class MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13;
}
namespace GlobalNamespace {
class MissionMapAnimationController__UpdateMissionMapCoroutine_d__12;
}
namespace GlobalNamespace {
class MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15;
}
namespace GlobalNamespace {
class MissionMapAnimationController__UpdateStageCoroutine_d__14;
}
namespace GlobalNamespace {
class MissionMapAnimationController___c;
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
namespace HMUI {
class ScrollView;
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
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionMapAnimationController;
}
namespace GlobalNamespace {
class MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13;
}
namespace GlobalNamespace {
class MissionMapAnimationController__UpdateMissionMapCoroutine_d__12;
}
namespace GlobalNamespace {
class MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15;
}
namespace GlobalNamespace {
class MissionMapAnimationController__UpdateStageCoroutine_d__14;
}
namespace GlobalNamespace {
class MissionMapAnimationController___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionMapAnimationController);
MARK_REF_PTR_T(::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13);
MARK_REF_PTR_T(::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12);
MARK_REF_PTR_T(::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15);
MARK_REF_PTR_T(::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14);
MARK_REF_PTR_T(::GlobalNamespace::MissionMapAnimationController___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionMapAnimationController/<>c
class CORDL_TYPE MissionMapAnimationController___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MissionMapAnimationController___c* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0)) ::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* __9__15_0;

  /// @brief Field <>9__15_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_1, put = setStaticF___9__15_1)) ::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* __9__15_1;

  static inline ::GlobalNamespace::MissionMapAnimationController___c* New_ctor();

  /// @brief Method <UpdateNodesAndConnectionCoroutine>b__15_0, addr 0x3c06d6c, size 0x24, virtual false, abstract: false, final false
  inline float_t _UpdateNodesAndConnectionCoroutine_b__15_0(::GlobalNamespace::MissionNodeConnection* connection);

  /// @brief Method <UpdateNodesAndConnectionCoroutine>b__15_1, addr 0x3c06dac, size 0x24, virtual false, abstract: false, final false
  inline float_t _UpdateNodesAndConnectionCoroutine_b__15_1(::GlobalNamespace::MissionNodeConnection* connection);

  /// @brief Method .ctor, addr 0x3c06d64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MissionMapAnimationController___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* getStaticF___9__15_0();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* getStaticF___9__15_1();

  static inline void setStaticF___9(::GlobalNamespace::MissionMapAnimationController___c* value);

  static inline void setStaticF___9__15_0(::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* value);

  static inline void setStaticF___9__15_1(::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionMapAnimationController___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionMapAnimationController___c(MissionMapAnimationController___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionMapAnimationController___c(MissionMapAnimationController___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4811 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionMapAnimationController___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionMapAnimationController/<UpdateClearedNodeStateCoroutine>d__13
class CORDL_TYPE MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MissionMapAnimationController> __4__this;

  /// @brief Field lastClearedMissionNode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lastClearedMissionNode, put = __cordl_internal_set_lastClearedMissionNode)) ::UnityW<::GlobalNamespace::MissionNode> lastClearedMissionNode;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3c06dd4, size 0xec, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3c06ecc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3c06ed4, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3c06f0c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3c06dd0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::MissionNode> const& __cordl_internal_get_lastClearedMissionNode() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNode>& __cordl_internal_get_lastClearedMissionNode();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionMapAnimationController> value);

  constexpr void __cordl_internal_set_lastClearedMissionNode(::UnityW<::GlobalNamespace::MissionNode> value);

  /// @brief Method .ctor, addr 0x3c06bbc, size 0x28, virtual false, abstract: false, final false
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
  constexpr MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13(MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13(MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4812 };

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
static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13, ___lastClearedMissionNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13, _____4__this) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionMapAnimationController/<UpdateMissionMapCoroutine>d__12
class CORDL_TYPE MissionMapAnimationController__UpdateMissionMapCoroutine_d__12 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MissionMapAnimationController> __4__this;

  /// @brief Field finishCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback)) ::System::Action* finishCallback;

  /// @brief Field lastClearedMissionNode, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_lastClearedMissionNode, put = __cordl_internal_set_lastClearedMissionNode)) ::UnityW<::GlobalNamespace::MissionNode> lastClearedMissionNode;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3c06f18, size 0x1fc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3c07114, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3c0711c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3c07154, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3c06f14, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController>& __cordl_internal_get___4__this();

  constexpr ::System::Action* const& __cordl_internal_get_finishCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishCallback();

  constexpr ::UnityW<::GlobalNamespace::MissionNode> const& __cordl_internal_get_lastClearedMissionNode() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNode>& __cordl_internal_get_lastClearedMissionNode();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionMapAnimationController> value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action* value);

  constexpr void __cordl_internal_set_lastClearedMissionNode(::UnityW<::GlobalNamespace::MissionNode> value);

  /// @brief Method .ctor, addr 0x3c06b28, size 0x28, virtual false, abstract: false, final false
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
  constexpr MissionMapAnimationController__UpdateMissionMapCoroutine_d__12();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController__UpdateMissionMapCoroutine_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionMapAnimationController__UpdateMissionMapCoroutine_d__12(MissionMapAnimationController__UpdateMissionMapCoroutine_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController__UpdateMissionMapCoroutine_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionMapAnimationController__UpdateMissionMapCoroutine_d__12(MissionMapAnimationController__UpdateMissionMapCoroutine_d__12 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4813 };

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
static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12, ___lastClearedMissionNode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12, ___finishCallback) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionMapAnimationController/<UpdateNodesAndConnectionCoroutine>d__15
class CORDL_TYPE MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MissionMapAnimationController> __4__this;

  /// @brief Field <>7__wrap2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2,
                      put = __cordl_internal_set___7__wrap2)) ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*>
      __7__wrap2;

  /// @brief Field <>7__wrap3, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3)) int32_t __7__wrap3;

  /// @brief Field <newEnabledConnection>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__newEnabledConnection_5__2,
                      put = __cordl_internal_set__newEnabledConnection_5__2)) ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>, ::Array<::UnityW<::GlobalNamespace::MissionNodeConnection>>*>
      _newEnabledConnection_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3c07160, size 0x310, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3c0747c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3c07484, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3c074bc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3c0715c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

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

  /// @brief Method .ctor, addr 0x3c06ccc, size 0x28, virtual false, abstract: false, final false
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
  constexpr MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15(MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15(MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4814 };

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
static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15, ____newEnabledConnection_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15, _____7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15, _____7__wrap3) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionMapAnimationController/<UpdateStageCoroutine>d__14
class CORDL_TYPE MissionMapAnimationController__UpdateStageCoroutine_d__14 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MissionMapAnimationController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3c074c8, size 0xa8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3c07660, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3c07668, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3c076a0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3c074c4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionMapAnimationController> value);

  /// @brief Method .ctor, addr 0x3c06c44, size 0x28, virtual false, abstract: false, final false
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
  constexpr MissionMapAnimationController__UpdateStageCoroutine_d__14();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController__UpdateStageCoroutine_d__14", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionMapAnimationController__UpdateStageCoroutine_d__14(MissionMapAnimationController__UpdateStageCoroutine_d__14&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController__UpdateStageCoroutine_d__14", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionMapAnimationController__UpdateStageCoroutine_d__14(MissionMapAnimationController__UpdateStageCoroutine_d__14 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4815 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionMapAnimationController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionMapAnimationController
class CORDL_TYPE MissionMapAnimationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _UpdateClearedNodeStateCoroutine_d__13 = ::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13;

  using _UpdateMissionMapCoroutine_d__12 = ::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12;

  using _UpdateNodesAndConnectionCoroutine_d__15 = ::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15;

  using _UpdateStageCoroutine_d__14 = ::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14;

  using __c = ::GlobalNamespace::MissionMapAnimationController___c;

  /// @brief Field _mapScrollView, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mapScrollView, put = __cordl_internal_set__mapScrollView)) ::UnityW<::HMUI::ScrollView> _mapScrollView;

  /// @brief Field _missionConnectionAnimationSeparationTime, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__missionConnectionAnimationSeparationTime,
                      put = __cordl_internal_set__missionConnectionAnimationSeparationTime)) float_t _missionConnectionAnimationSeparationTime;

  /// @brief Field _missionConnectionAnimationStartDelay, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__missionConnectionAnimationStartDelay,
                      put = __cordl_internal_set__missionConnectionAnimationStartDelay)) float_t _missionConnectionAnimationStartDelay;

  /// @brief Field _missionNodesManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodesManager, put = __cordl_internal_set__missionNodesManager)) ::UnityW<::GlobalNamespace::MissionNodesManager> _missionNodesManager;

  /// @brief Field _shockwaveEffect, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__shockwaveEffect, put = __cordl_internal_set__shockwaveEffect)) ::UnityW<::GlobalNamespace::MenuShockwave> _shockwaveEffect;

  /// @brief Field _stageAnimationDuration, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__stageAnimationDuration, put = __cordl_internal_set__stageAnimationDuration)) float_t _stageAnimationDuration;

  /// @brief Field _stageAnimationStartDelay, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__stageAnimationStartDelay, put = __cordl_internal_set__stageAnimationStartDelay)) float_t _stageAnimationStartDelay;

  /// @brief Field _startDelay, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__startDelay, put = __cordl_internal_set__startDelay)) float_t _startDelay;

  __declspec(property(get = get_animatedUpdateIsRequired)) bool animatedUpdateIsRequired;

  static inline ::GlobalNamespace::MissionMapAnimationController* New_ctor();

  /// @brief Method ScrollToTopMostNotClearedMission, addr 0x3c068f4, size 0xd0, virtual false, abstract: false, final false
  inline void ScrollToTopMostNotClearedMission();

  /// @brief Method UpdateClearedNodeStateCoroutine, addr 0x3c06b50, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateClearedNodeStateCoroutine(::GlobalNamespace::MissionNode* lastClearedMissionNode);

  /// @brief Method UpdateMissionMapAfterMissionWasCleared, addr 0x3c069c4, size 0xf0, virtual false, abstract: false, final false
  inline void UpdateMissionMapAfterMissionWasCleared(bool animated, ::System::Action* finishCallback);

  /// @brief Method UpdateMissionMapCoroutine, addr 0x3c06ab4, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateMissionMapCoroutine(::GlobalNamespace::MissionNode* lastClearedMissionNode, ::System::Action* finishCallback);

  /// @brief Method UpdateNodesAndConnectionCoroutine, addr 0x3c06c6c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateNodesAndConnectionCoroutine();

  /// @brief Method UpdateStageCoroutine, addr 0x3c06be4, size 0x60, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x3c06cf4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animatedUpdateIsRequired, addr 0x3c0687c, size 0x78, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4816 };

  /// @brief Field _missionNodesManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodesManager> ____missionNodesManager;

  /// @brief Field _mapScrollView, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ScrollView> ____mapScrollView;

  /// @brief Field _startDelay, offset: 0x30, size: 0x4, def value: None
  float_t ____startDelay;

  /// @brief Field _stageAnimationStartDelay, offset: 0x34, size: 0x4, def value: None
  float_t ____stageAnimationStartDelay;

  /// @brief Field _missionConnectionAnimationStartDelay, offset: 0x38, size: 0x4, def value: None
  float_t ____missionConnectionAnimationStartDelay;

  /// @brief Field _missionConnectionAnimationSeparationTime, offset: 0x3c, size: 0x4, def value: None
  float_t ____missionConnectionAnimationSeparationTime;

  /// @brief Field _stageAnimationDuration, offset: 0x40, size: 0x4, def value: None
  float_t ____stageAnimationDuration;

  /// @brief Field _shockwaveEffect, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuShockwave> ____shockwaveEffect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____missionNodesManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____mapScrollView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____startDelay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____stageAnimationStartDelay) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____missionConnectionAnimationStartDelay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____missionConnectionAnimationSeparationTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____stageAnimationDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionMapAnimationController, ____shockwaveEffect) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionMapAnimationController, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionMapAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionMapAnimationController*, "", "MissionMapAnimationController");
NEED_NO_BOX(::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*, "", "MissionMapAnimationController/<UpdateClearedNodeStateCoroutine>d__13");
NEED_NO_BOX(::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*, "", "MissionMapAnimationController/<UpdateMissionMapCoroutine>d__12");
NEED_NO_BOX(::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*, "", "MissionMapAnimationController/<UpdateNodesAndConnectionCoroutine>d__15");
NEED_NO_BOX(::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14*, "", "MissionMapAnimationController/<UpdateStageCoroutine>d__14");
NEED_NO_BOX(::GlobalNamespace::MissionMapAnimationController___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionMapAnimationController___c*, "", "MissionMapAnimationController/<>c");
