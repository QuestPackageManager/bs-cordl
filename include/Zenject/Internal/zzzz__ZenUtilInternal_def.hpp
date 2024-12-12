#pragma once
// IWYU pragma private; include "Zenject/Internal/ZenUtilInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZenUtilInternal)
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
class IEnumerator;
}
namespace System {
class Delegate;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace Zenject::Internal {
class ZenUtilInternal__GetAllSceneContexts_d__3;
}
namespace Zenject::Internal {
class ZenUtilInternal___c;
}
namespace Zenject::Internal {
class ZenUtilInternal___c__DisplayClass10_0;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SceneContext;
}
// Forward declare root types
namespace Zenject::Internal {
class ZenUtilInternal;
}
namespace Zenject::Internal {
class ZenUtilInternal__GetAllSceneContexts_d__3;
}
namespace Zenject::Internal {
class ZenUtilInternal___c;
}
namespace Zenject::Internal {
class ZenUtilInternal___c__DisplayClass10_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::ZenUtilInternal);
MARK_REF_PTR_T(::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3);
MARK_REF_PTR_T(::Zenject::Internal::ZenUtilInternal___c);
MARK_REF_PTR_T(::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0);
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ZenUtilInternal/<>c
class CORDL_TYPE ZenUtilInternal___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::Internal::ZenUtilInternal___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>* __9__10_0;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0,
                      put = setStaticF___9__3_0)) ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>* __9__3_0;

  static inline ::Zenject::Internal::ZenUtilInternal___c* New_ctor();

  /// @brief Method <GetAllSceneContexts>b__3_0, addr 0x4b5b06c, size 0x50, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>* _GetAllSceneContexts_b__3_0(::UnityEngine::GameObject* root);

  /// @brief Method <GetRootGameObjects>b__10_0, addr 0x4b5b0bc, size 0x8c, virtual false, abstract: false, final false
  inline bool _GetRootGameObjects_b__10_0(::UnityEngine::GameObject* x);

  /// @brief Method __zenCreate, addr 0x4b5b148, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b5b19c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b5b064, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::Internal::ZenUtilInternal___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>* getStaticF___9__10_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>* getStaticF___9__3_0();

  static inline void setStaticF___9(::Zenject::Internal::ZenUtilInternal___c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenUtilInternal___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenUtilInternal___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenUtilInternal___c(ZenUtilInternal___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenUtilInternal___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenUtilInternal___c(ZenUtilInternal___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12732 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ZenUtilInternal___c, 0x10>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object, UnityEngine.SceneManagement.Scene
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ZenUtilInternal/<>c__DisplayClass10_0
class CORDL_TYPE ZenUtilInternal___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field scene, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_scene, put = __cordl_internal_set_scene)) ::UnityEngine::SceneManagement::Scene scene;

  static inline ::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0* New_ctor();

  /// @brief Method <GetRootGameObjects>b__1, addr 0x4b5b354, size 0x110, virtual false, abstract: false, final false
  inline bool _GetRootGameObjects_b__1(::UnityEngine::GameObject* x);

  constexpr ::UnityEngine::SceneManagement::Scene const& __cordl_internal_get_scene() const;

  constexpr ::UnityEngine::SceneManagement::Scene& __cordl_internal_get_scene();

  constexpr void __cordl_internal_set_scene(::UnityEngine::SceneManagement::Scene value);

  /// @brief Method .ctor, addr 0x4b5b000, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenUtilInternal___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenUtilInternal___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenUtilInternal___c__DisplayClass10_0(ZenUtilInternal___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenUtilInternal___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenUtilInternal___c__DisplayClass10_0(ZenUtilInternal___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12733 };

  /// @brief Field scene, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::Scene ___scene;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0, ___scene) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3
class CORDL_TYPE ZenUtilInternal__GetAllSceneContexts_d__3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Zenject_SceneContext__get_Current)) ::UnityW<::Zenject::SceneContext>
      System_Collections_Generic_IEnumerator_Zenject_SceneContext__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::Zenject::SceneContext> __2__current;

  /// @brief Field <>7__wrap1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Zenject::SceneContext*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Zenject::SceneContext*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4b5b480, size 0x474, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Zenject.SceneContext>.GetEnumerator, addr 0x4b5b9ec, size 0x90, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::Zenject::SceneContext>>* System_Collections_Generic_IEnumerable_Zenject_SceneContext__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Zenject.SceneContext>.get_Current, addr 0x4b5b9a4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::Zenject::SceneContext> System_Collections_Generic_IEnumerator_Zenject_SceneContext__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4b5ba7c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4b5b9ac, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4b5b9e4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4b5b464, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::Zenject::SceneContext> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::Zenject::SceneContext>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::Zenject::SceneContext> value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x4b5b8f4, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x4b5a238, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>* i___System__Collections__Generic__IEnumerable_1___Zenject__SceneContext__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Zenject::SceneContext*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::SceneContext*>* i___System__Collections__Generic__IEnumerator_1___Zenject__SceneContext__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenUtilInternal__GetAllSceneContexts_d__3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenUtilInternal__GetAllSceneContexts_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenUtilInternal__GetAllSceneContexts_d__3(ZenUtilInternal__GetAllSceneContexts_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenUtilInternal__GetAllSceneContexts_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenUtilInternal__GetAllSceneContexts_d__3(ZenUtilInternal__GetAllSceneContexts_d__3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12734 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Zenject::SceneContext> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3, _____7__wrap1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3, 0x30>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ZenUtilInternal
class CORDL_TYPE ZenUtilInternal : public ::System::Object {
public:
  // Declarations
  using _GetAllSceneContexts_d__3 = ::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3;

  using __c = ::Zenject::Internal::ZenUtilInternal___c;

  using __c__DisplayClass10_0 = ::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0;

  /// @brief Method AddStateMachineBehaviourAutoInjectersInScene, addr 0x4b5a26c, size 0x31c, virtual false, abstract: false, final false
  static inline void AddStateMachineBehaviourAutoInjectersInScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method AddStateMachineBehaviourAutoInjectersUnderGameObject, addr 0x4b5a748, size 0x140, virtual false, abstract: false, final false
  static inline void AddStateMachineBehaviourAutoInjectersUnderGameObject(::UnityEngine::GameObject* root);

  /// @brief Method AreFunctionsEqual, addr 0x4b5a00c, size 0xa8, virtual false, abstract: false, final false
  static inline bool AreFunctionsEqual(::System::Delegate* left, ::System::Delegate* right);

  /// @brief Method GetAllSceneContexts, addr 0x4b5a1d0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>* GetAllSceneContexts();

  /// @brief Method GetInheritanceDelta, addr 0x4b5a0b4, size 0x11c, virtual false, abstract: false, final false
  static inline int32_t GetInheritanceDelta(::System::Type* derived, ::System::Type* parent);

  /// @brief Method GetInjectableMonoBehavioursInScene, addr 0x4b5a888, size 0x32c, virtual false, abstract: false, final false
  static inline void GetInjectableMonoBehavioursInScene(::UnityEngine::SceneManagement::Scene scene, ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* monoBehaviours);

  /// @brief Method GetInjectableMonoBehavioursUnderGameObject, addr 0x4b5af14, size 0x4, virtual false, abstract: false, final false
  static inline void GetInjectableMonoBehavioursUnderGameObject(::UnityEngine::GameObject* gameObject, ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* injectableComponents);

  /// @brief Method GetInjectableMonoBehavioursUnderGameObjectInternal, addr 0x4b5abb4, size 0x360, virtual false, abstract: false, final false
  static inline void GetInjectableMonoBehavioursUnderGameObjectInternal(::UnityEngine::GameObject* gameObject,
                                                                        ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* injectableComponents);

  /// @brief Method GetRootGameObjects, addr 0x4b5a588, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* GetRootGameObjects(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method IsInjectableMonoBehaviourType, addr 0x4b5af18, size 0xe8, virtual false, abstract: false, final false
  static inline bool IsInjectableMonoBehaviourType(::System::Type* type);

  /// @brief Method IsNull, addr 0x4b59ff0, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsNull(::System::Object* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenUtilInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenUtilInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenUtilInternal(ZenUtilInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenUtilInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenUtilInternal(ZenUtilInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12735 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ZenUtilInternal, 0x10>, "Size mismatch!");

} // namespace Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::ZenUtilInternal);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ZenUtilInternal*, "Zenject.Internal", "ZenUtilInternal");
NEED_NO_BOX(::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*, "Zenject.Internal", "ZenUtilInternal/<GetAllSceneContexts>d__3");
NEED_NO_BOX(::Zenject::Internal::ZenUtilInternal___c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ZenUtilInternal___c*, "Zenject.Internal", "ZenUtilInternal/<>c");
NEED_NO_BOX(::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0*, "Zenject.Internal", "ZenUtilInternal/<>c__DisplayClass10_0");
