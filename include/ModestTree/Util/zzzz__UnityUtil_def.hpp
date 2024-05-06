#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityUtil)
namespace ModestTree::Util {
class __UnityUtil___GetDirectChildrenAndSelf_d__20;
}
namespace ModestTree::Util {
class __UnityUtil___GetDirectChildren_d__21;
}
namespace ModestTree::Util {
class __UnityUtil___GetParentsAndSelf_d__17;
}
namespace ModestTree::Util {
class __UnityUtil___GetParents_d__16;
}
namespace ModestTree::Util {
class __UnityUtil____c;
}
namespace ModestTree::Util {
class __UnityUtil___get_AllScenes_d__1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
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
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace ModestTree::Util {
class UnityUtil;
}
namespace ModestTree::Util {
class __UnityUtil___GetDirectChildrenAndSelf_d__20;
}
namespace ModestTree::Util {
class __UnityUtil___GetDirectChildren_d__21;
}
namespace ModestTree::Util {
class __UnityUtil___GetParentsAndSelf_d__17;
}
namespace ModestTree::Util {
class __UnityUtil___GetParents_d__16;
}
namespace ModestTree::Util {
class __UnityUtil____c;
}
namespace ModestTree::Util {
class __UnityUtil___get_AllScenes_d__1;
}
// Write type traits
MARK_REF_PTR_T(::ModestTree::Util::UnityUtil);
MARK_REF_PTR_T(::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20);
MARK_REF_PTR_T(::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21);
MARK_REF_PTR_T(::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17);
MARK_REF_PTR_T(::ModestTree::Util::__UnityUtil___GetParents_d__16);
MARK_REF_PTR_T(::ModestTree::Util::__UnityUtil____c);
MARK_REF_PTR_T(::ModestTree::Util::__UnityUtil___get_AllScenes_d__1);
// Type: ::<get_AllScenes>d__1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// CS Name: ::UnityUtil::<get_AllScenes>d__1*
class CORDL_TYPE __UnityUtil___get_AllScenes_d__1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_SceneManagement_Scene__get_Current))::UnityEngine::SceneManagement::Scene
      System_Collections_Generic_IEnumerator_UnityEngine_SceneManagement_Scene__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::UnityEngine::SceneManagement::Scene __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <i>5__2, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3614678, size 0xcc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::ModestTree::Util::__UnityUtil___get_AllScenes_d__1* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.SceneManagement.Scene>.GetEnumerator, addr 0x36147e8, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* System_Collections_Generic_IEnumerable_UnityEngine_SceneManagement_Scene__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.SceneManagement.Scene>.get_Current, addr 0x3614744, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::SceneManagement::Scene System_Collections_Generic_IEnumerator_UnityEngine_SceneManagement_Scene__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3614880, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x361474c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x361478c, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3614674, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::SceneManagement::Scene const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::SceneManagement::Scene& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::SceneManagement::Scene value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  /// @brief Method .ctor, addr 0x3613b18, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__SceneManagement__Scene_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__SceneManagement__Scene_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityUtil___get_AllScenes_d__1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___get_AllScenes_d__1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityUtil___get_AllScenes_d__1(__UnityUtil___get_AllScenes_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___get_AllScenes_d__1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityUtil___get_AllScenes_d__1(__UnityUtil___get_AllScenes_d__1 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::Scene _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <i>5__2, offset: 0x1c, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::__UnityUtil___get_AllScenes_d__1, 0x20>, "Size mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___get_AllScenes_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___get_AllScenes_d__1, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___get_AllScenes_d__1, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___get_AllScenes_d__1, ____i_5__2) == 0x1c, "Offset mismatch!");

} // namespace ModestTree::Util
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// CS Name: ::UnityUtil::<>c*
class CORDL_TYPE __UnityUtil____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::ModestTree::Util::__UnityUtil____c* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0))::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>* __9__15_0;

  /// @brief Field <>9__18_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_0, put = setStaticF___9__18_0))::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>* __9__18_0;

  /// @brief Field <>9__19_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__19_0, put = setStaticF___9__19_0))::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>* __9__19_0;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__22_0, put = setStaticF___9__22_0))::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>* __9__22_0;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0))::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>* __9__23_0;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::UnityEngine::SceneManagement::Scene, bool>* __9__3_0;

  static inline ::ModestTree::Util::__UnityUtil____c* New_ctor();

  /// @brief Method <GetAllGameObjects>b__22_0, addr 0x3614a38, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> _GetAllGameObjects_b__22_0(::UnityEngine::Transform* x);

  /// @brief Method <GetAllRootGameObjects>b__23_0, addr 0x3614a50, size 0x84, virtual false, abstract: false, final false
  inline bool _GetAllRootGameObjects_b__23_0(::UnityEngine::GameObject* x);

  /// @brief Method <GetComponentsInChildrenBottomUp>b__19_0, addr 0x36149b0, size 0x88, virtual false, abstract: false, final false
  inline int32_t _GetComponentsInChildrenBottomUp_b__19_0(::UnityEngine::Component* x);

  /// @brief Method <GetComponentsInChildrenTopDown>b__18_0, addr 0x3614928, size 0x88, virtual false, abstract: false, final false
  inline int32_t _GetComponentsInChildrenTopDown_b__18_0(::UnityEngine::Component* x);

  /// @brief Method <GetRootParentOrSelf>b__15_0, addr 0x3614910, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> _GetRootParentOrSelf_b__15_0(::UnityEngine::Transform* x);

  /// @brief Method .ctor, addr 0x36148e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_AllLoadedScenes>b__3_0, addr 0x36148f0, size 0x20, virtual false, abstract: false, final false
  inline bool _get_AllLoadedScenes_b__3_0(::UnityEngine::SceneManagement::Scene scene);

  static inline ::ModestTree::Util::__UnityUtil____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>* getStaticF___9__15_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>* getStaticF___9__18_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>* getStaticF___9__19_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>* getStaticF___9__22_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>* getStaticF___9__23_0();

  static inline ::System::Func_2<::UnityEngine::SceneManagement::Scene, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9(::ModestTree::Util::__UnityUtil____c* value);

  static inline void setStaticF___9__15_0(::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>* value);

  static inline void setStaticF___9__18_0(::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>* value);

  static inline void setStaticF___9__19_0(::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>* value);

  static inline void setStaticF___9__22_0(::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>* value);

  static inline void setStaticF___9__23_0(::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityEngine::SceneManagement::Scene, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityUtil____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityUtil____c(__UnityUtil____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityUtil____c(__UnityUtil____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::__UnityUtil____c, 0x10>, "Size mismatch!");

} // namespace ModestTree::Util
// Type: ::<GetParents>d__16
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// CS Name: ::UnityUtil::<GetParents>d__16*
class CORDL_TYPE __UnityUtil___GetParents_d__16 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get = System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current))::UnityW<::UnityEngine::Transform> System_Collections_Generic_IEnumerator_UnityEngine_Transform__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::UnityW<::UnityEngine::Transform> __2__current;

  /// @brief Field <>3__transform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__transform, put = __cordl_internal_set___3__transform))::UnityW<::UnityEngine::Transform> __3__transform;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field transform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform))::UnityW<::UnityEngine::Transform> transform;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3614af0, size 0x2f8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::ModestTree::Util::__UnityUtil___GetParents_d__16* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator, addr 0x3614ee8, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* System_Collections_Generic_IEnumerable_UnityEngine_Transform__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current, addr 0x3614e98, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3614f8c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3614ea0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3614ee0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3614ad4, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get___3__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get___3__transform();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set___3__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method <>m__Finally1, addr 0x3614de8, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x3613ff4, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>* i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__Transform__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__Transform__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityUtil___GetParents_d__16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetParents_d__16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityUtil___GetParents_d__16(__UnityUtil___GetParents_d__16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetParents_d__16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityUtil___GetParents_d__16(__UnityUtil___GetParents_d__16 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field transform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

  /// @brief Field <>3__transform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> _____3__transform;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::__UnityUtil___GetParents_d__16, 0x40>, "Size mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetParents_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetParents_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetParents_d__16, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetParents_d__16, ___transform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetParents_d__16, _____3__transform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetParents_d__16, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace ModestTree::Util
// Type: ::<GetParentsAndSelf>d__17
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// CS Name: ::UnityUtil::<GetParentsAndSelf>d__17*
class CORDL_TYPE __UnityUtil___GetParentsAndSelf_d__17 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get = System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current))::UnityW<::UnityEngine::Transform> System_Collections_Generic_IEnumerator_UnityEngine_Transform__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::UnityW<::UnityEngine::Transform> __2__current;

  /// @brief Field <>3__transform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__transform, put = __cordl_internal_set___3__transform))::UnityW<::UnityEngine::Transform> __3__transform;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field transform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform))::UnityW<::UnityEngine::Transform> transform;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3614fac, size 0x320, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator, addr 0x36153cc, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* System_Collections_Generic_IEnumerable_UnityEngine_Transform__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current, addr 0x361537c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3615470, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3615384, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x36153c4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3614f90, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get___3__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get___3__transform();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set___3__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method <>m__Finally1, addr 0x36152cc, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x3614028, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>* i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__Transform__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__Transform__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityUtil___GetParentsAndSelf_d__17();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetParentsAndSelf_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityUtil___GetParentsAndSelf_d__17(__UnityUtil___GetParentsAndSelf_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetParentsAndSelf_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityUtil___GetParentsAndSelf_d__17(__UnityUtil___GetParentsAndSelf_d__17 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field transform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

  /// @brief Field <>3__transform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> _____3__transform;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17, 0x40>, "Size mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17, ___transform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17, _____3__transform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace ModestTree::Util
// Type: ::<GetDirectChildrenAndSelf>d__20
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// CS Name: ::UnityUtil::<GetDirectChildrenAndSelf>d__20*
class CORDL_TYPE __UnityUtil___GetDirectChildrenAndSelf_d__20 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get = System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current))::UnityW<::UnityEngine::GameObject> System_Collections_Generic_IEnumerator_UnityEngine_GameObject__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::UnityW<::UnityEngine::GameObject> __2__current;

  /// @brief Field <>3__obj, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__obj, put = __cordl_internal_set___3__obj))::UnityW<::UnityEngine::GameObject> __3__obj;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::System::Collections::IEnumerator* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field obj, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj))::UnityW<::UnityEngine::GameObject> obj;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3615490, size 0x2ac, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator, addr 0x3615848, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>* System_Collections_Generic_IEnumerable_UnityEngine_GameObject__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current, addr 0x36157f8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x36158ec, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3615800, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3615840, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3615474, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get___3__obj() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get___3__obj();

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_obj() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_obj();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set___3__obj(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::IEnumerator* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method <>m__Finally1, addr 0x361573c, size 0xbc, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x3614334, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__GameObject__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>* i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__GameObject__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityUtil___GetDirectChildrenAndSelf_d__20();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetDirectChildrenAndSelf_d__20", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityUtil___GetDirectChildrenAndSelf_d__20(__UnityUtil___GetDirectChildrenAndSelf_d__20&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetDirectChildrenAndSelf_d__20", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityUtil___GetDirectChildrenAndSelf_d__20(__UnityUtil___GetDirectChildrenAndSelf_d__20 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field obj, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___obj;

  /// @brief Field <>3__obj, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _____3__obj;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IEnumerator* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20, 0x40>, "Size mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20, ___obj) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20, _____3__obj) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace ModestTree::Util
// Type: ::<GetDirectChildren>d__21
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// CS Name: ::UnityUtil::<GetDirectChildren>d__21*
class CORDL_TYPE __UnityUtil___GetDirectChildren_d__21 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get = System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current))::UnityW<::UnityEngine::GameObject> System_Collections_Generic_IEnumerator_UnityEngine_GameObject__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::UnityW<::UnityEngine::GameObject> __2__current;

  /// @brief Field <>3__obj, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__obj, put = __cordl_internal_set___3__obj))::UnityW<::UnityEngine::GameObject> __3__obj;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::System::Collections::IEnumerator* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field obj, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj))::UnityW<::UnityEngine::GameObject> obj;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x361590c, size 0x290, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator, addr 0x3615ca8, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>* System_Collections_Generic_IEnumerable_UnityEngine_GameObject__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current, addr 0x3615c58, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3615d4c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3615c60, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3615ca0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x36158f0, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get___3__obj() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get___3__obj();

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_obj() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_obj();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set___3__obj(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::IEnumerator* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method <>m__Finally1, addr 0x3615b9c, size 0xbc, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x36143e0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__GameObject__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>* i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__GameObject__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityUtil___GetDirectChildren_d__21();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetDirectChildren_d__21", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityUtil___GetDirectChildren_d__21(__UnityUtil___GetDirectChildren_d__21&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetDirectChildren_d__21", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityUtil___GetDirectChildren_d__21(__UnityUtil___GetDirectChildren_d__21 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field obj, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___obj;

  /// @brief Field <>3__obj, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _____3__obj;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IEnumerator* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21, 0x40>, "Size mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21, ___obj) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21, _____3__obj) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21, _____7__wrap1) == 0x38, "Offset mismatch!");

} // namespace ModestTree::Util
// Type: ModestTree.Util::UnityUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// CS Name: ::ModestTree.Util::UnityUtil*
class CORDL_TYPE UnityUtil : public ::System::Object {
public:
  // Declarations
  using _GetDirectChildrenAndSelf_d__20 = ::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20;

  using _GetDirectChildren_d__21 = ::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21;

  using _GetParentsAndSelf_d__17 = ::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17;

  using _GetParents_d__16 = ::ModestTree::Util::__UnityUtil___GetParents_d__16;

  using __c = ::ModestTree::Util::__UnityUtil____c;

  using _get_AllScenes_d__1 = ::ModestTree::Util::__UnityUtil___get_AllScenes_d__1;

  /// @brief Method GetAllGameObjects, addr 0x3614414, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* GetAllGameObjects();

  /// @brief Method GetAllRootGameObjects, addr 0x3614554, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetAllRootGameObjects();

  /// @brief Method GetComponentsInChildrenBottomUp, addr 0x361418c, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>* GetComponentsInChildrenBottomUp(::UnityEngine::GameObject* gameObject, bool includeInactive);

  /// @brief Method GetComponentsInChildrenTopDown, addr 0x361405c, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>* GetComponentsInChildrenTopDown(::UnityEngine::GameObject* gameObject, bool includeInactive);

  /// @brief Method GetDepthLevel, addr 0x3613d40, size 0x90, virtual false, abstract: false, final false
  static inline int32_t GetDepthLevel(::UnityEngine::Transform* transform);

  /// @brief Method GetDirectChildren, addr 0x3614368, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* GetDirectChildren(::UnityEngine::GameObject* obj);

  /// @brief Method GetDirectChildrenAndSelf, addr 0x36142bc, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* GetDirectChildrenAndSelf(::UnityEngine::GameObject* obj);

  /// @brief Method GetParents, addr 0x3613f7c, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>* GetParents(::UnityEngine::Transform* transform);

  /// @brief Method GetParentsAndSelf, addr 0x3613f04, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>* GetParentsAndSelf(::UnityEngine::Transform* transform);

  /// @brief Method GetRootParentOrSelf, addr 0x3613dd0, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> GetRootParentOrSelf(::UnityEngine::GameObject* gameObject);

  /// @brief Method get_AllLoadedScenes, addr 0x3613b4c, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>* get_AllLoadedScenes();

  /// @brief Method get_AllScenes, addr 0x3613aa8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>* get_AllScenes();

  /// @brief Method get_IsAltKeyDown, addr 0x3613c50, size 0x30, virtual false, abstract: false, final false
  static inline bool get_IsAltKeyDown();

  /// @brief Method get_IsControlKeyDown, addr 0x3613c80, size 0x30, virtual false, abstract: false, final false
  static inline bool get_IsControlKeyDown();

  /// @brief Method get_IsShiftKeyDown, addr 0x3613cb0, size 0x30, virtual false, abstract: false, final false
  static inline bool get_IsShiftKeyDown();

  /// @brief Method get_WasAltKeyJustPressed, addr 0x3613d10, size 0x30, virtual false, abstract: false, final false
  static inline bool get_WasAltKeyJustPressed();

  /// @brief Method get_WasShiftKeyJustPressed, addr 0x3613ce0, size 0x30, virtual false, abstract: false, final false
  static inline bool get_WasShiftKeyJustPressed();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityUtil(UnityUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityUtil(UnityUtil const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::UnityUtil, 0x10>, "Size mismatch!");

} // namespace ModestTree::Util
NEED_NO_BOX(::ModestTree::Util::UnityUtil);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::Util::UnityUtil*, "ModestTree.Util", "UnityUtil");
NEED_NO_BOX(::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20*, "ModestTree.Util", "UnityUtil/<GetDirectChildrenAndSelf>d__20");
NEED_NO_BOX(::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21*, "ModestTree.Util", "UnityUtil/<GetDirectChildren>d__21");
NEED_NO_BOX(::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17*, "ModestTree.Util", "UnityUtil/<GetParentsAndSelf>d__17");
NEED_NO_BOX(::ModestTree::Util::__UnityUtil___GetParents_d__16);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::Util::__UnityUtil___GetParents_d__16*, "ModestTree.Util", "UnityUtil/<GetParents>d__16");
NEED_NO_BOX(::ModestTree::Util::__UnityUtil____c);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::Util::__UnityUtil____c*, "ModestTree.Util", "UnityUtil/<>c");
NEED_NO_BOX(::ModestTree::Util::__UnityUtil___get_AllScenes_d__1);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::Util::__UnityUtil___get_AllScenes_d__1*, "ModestTree.Util", "UnityUtil/<get_AllScenes>d__1");
