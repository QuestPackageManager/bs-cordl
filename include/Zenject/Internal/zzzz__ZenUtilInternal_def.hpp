#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZenUtilInternal)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject::Internal {
class __ZenUtilInternal____c;
}
namespace Zenject::Internal {
class __ZenUtilInternal___GetAllSceneContexts_d__3;
}
namespace Zenject::Internal {
class __ZenUtilInternal____c__DisplayClass10_0;
}
namespace System {
class Delegate;
}
namespace Zenject {
class SceneContext;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject::Internal {
class ZenUtilInternal;
}
namespace Zenject::Internal {
class __ZenUtilInternal___GetAllSceneContexts_d__3;
}
namespace Zenject::Internal {
class __ZenUtilInternal____c;
}
namespace Zenject::Internal {
class __ZenUtilInternal____c__DisplayClass10_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::ZenUtilInternal);
MARK_REF_PTR_T(::Zenject::Internal::__ZenUtilInternal___GetAllSceneContexts_d__3);
MARK_REF_PTR_T(::Zenject::Internal::__ZenUtilInternal____c);
MARK_REF_PTR_T(::Zenject::Internal::__ZenUtilInternal____c__DisplayClass10_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11395))
// CS Name: ::ZenUtilInternal::<>c*
class CORDL_TYPE __ZenUtilInternal____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::Internal::__ZenUtilInternal____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0,
                             put = setStaticF___9__3_0))::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>*>* __9__3_0;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Func_2<::UnityEngine::GameObject*, bool>* __9__10_0;

  static inline void setStaticF___9(::Zenject::Internal::__ZenUtilInternal____c* value);

  static inline ::Zenject::Internal::__ZenUtilInternal____c* getStaticF___9();

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>*>* value);

  static inline ::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>*>* getStaticF___9__3_0();

  static inline void setStaticF___9__10_0(::System::Func_2<::UnityEngine::GameObject*, bool>* value);

  static inline ::System::Func_2<::UnityEngine::GameObject*, bool>* getStaticF___9__10_0();

  static inline ::Zenject::Internal::__ZenUtilInternal____c* New_ctor();

  /// @brief Method .ctor addr 0x2f28c58 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetAllSceneContexts>b__3_0 addr 0x2f28c60 size 0x50 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>* _GetAllSceneContexts_b__3_0(::UnityEngine::GameObject* root);

  /// @brief Method <GetRootGameObjects>b__10_0 addr 0x2f28cb0 size 0x8c virtual false final false
  inline bool _GetRootGameObjects_b__10_0(::UnityEngine::GameObject* x);

  /// @brief Method __zenCreate addr 0x2f28d3c size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f28d98 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ZenUtilInternal____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ZenUtilInternal____c(__ZenUtilInternal____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ZenUtilInternal____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ZenUtilInternal____c(__ZenUtilInternal____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ZenUtilInternal____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ZenUtilInternal____c, 0x10>, "Size mismatch!");

} // namespace Zenject::Internal
// Type: ::<GetAllSceneContexts>d__3
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11396))
// CS Name: ::ZenUtilInternal::<GetAllSceneContexts>d__3*
class CORDL_TYPE __ZenUtilInternal___GetAllSceneContexts_d__3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::Zenject::SceneContext* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>7__wrap1, offset 0x28, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_Zenject_SceneContext__get_Current))::Zenject::SceneContext* System_Collections_Generic_IEnumerator_Zenject_SceneContext__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Zenject::SceneContext*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Zenject::SceneContext*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::Zenject::SceneContext*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SceneContext*> const& __get___2__current() const;

  constexpr void __set___2__current(::Zenject::SceneContext* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* value);

  static inline ::Zenject::Internal::__ZenUtilInternal___GetAllSceneContexts_d__3* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2f27e14 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2f28f58 size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2f28f74 size 0x484 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2f293f8 size 0xb0 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<Zenject.SceneContext>.get_Current addr 0x2f294a8 size 0x8 virtual true final true
  inline ::Zenject::SceneContext* System_Collections_Generic_IEnumerator_Zenject_SceneContext__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2f294b0 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2f294f0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<Zenject.SceneContext>.GetEnumerator addr 0x2f294f8 size 0x98 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::Zenject::SceneContext*>* System_Collections_Generic_IEnumerable_Zenject_SceneContext__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2f29590 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__ZenUtilInternal___GetAllSceneContexts_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ZenUtilInternal___GetAllSceneContexts_d__3(__ZenUtilInternal___GetAllSceneContexts_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ZenUtilInternal___GetAllSceneContexts_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ZenUtilInternal___GetAllSceneContexts_d__3(__ZenUtilInternal___GetAllSceneContexts_d__3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ZenUtilInternal___GetAllSceneContexts_d__3();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Zenject::SceneContext* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ZenUtilInternal___GetAllSceneContexts_d__3, 0x30>, "Size mismatch!");

} // namespace Zenject::Internal
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10380)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11397))
// CS Name: ::ZenUtilInternal::<>c__DisplayClass10_0*
class CORDL_TYPE __ZenUtilInternal____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field scene, offset 0x10, size 0x4
  __declspec(property(get = __get_scene, put = __set_scene))::UnityEngine::SceneManagement::Scene scene;

  constexpr ::UnityEngine::SceneManagement::Scene& __get_scene();

  constexpr ::UnityEngine::SceneManagement::Scene const& __get_scene() const;

  constexpr void __set_scene(::UnityEngine::SceneManagement::Scene value);

  static inline ::Zenject::Internal::__ZenUtilInternal____c__DisplayClass10_0* New_ctor();

  /// @brief Method .ctor addr 0x2f28bec size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetRootGameObjects>b__1 addr 0x2f29594 size 0x110 virtual false final false
  inline bool _GetRootGameObjects_b__1(::UnityEngine::GameObject* x);

  // Ctor Parameters [CppParam { name: "", ty: "__ZenUtilInternal____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ZenUtilInternal____c__DisplayClass10_0(__ZenUtilInternal____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ZenUtilInternal____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ZenUtilInternal____c__DisplayClass10_0(__ZenUtilInternal____c__DisplayClass10_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ZenUtilInternal____c__DisplayClass10_0();

public:
  /// @brief Field scene, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::Scene ___scene;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ZenUtilInternal____c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Type: Zenject.Internal::ZenUtilInternal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11398))
// CS Name: ::Zenject.Internal::ZenUtilInternal*
class CORDL_TYPE ZenUtilInternal : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass10_0 = ::Zenject::Internal::__ZenUtilInternal____c__DisplayClass10_0;

  using _GetAllSceneContexts_d__3 = ::Zenject::Internal::__ZenUtilInternal___GetAllSceneContexts_d__3;

  using __c = ::Zenject::Internal::__ZenUtilInternal____c;

  /// @brief Method IsNull addr 0x2f27bc4 size 0x1c virtual false final false
  static inline bool IsNull(::System::Object* obj);

  /// @brief Method AreFunctionsEqual addr 0x2f27be0 size 0xa8 virtual false final false
  static inline bool AreFunctionsEqual(::System::Delegate* left, ::System::Delegate* right);

  /// @brief Method GetInheritanceDelta addr 0x2f27c88 size 0x11c virtual false final false
  static inline int32_t GetInheritanceDelta(::System::Type* derived, ::System::Type* parent);

  /// @brief Method GetAllSceneContexts addr 0x2f27da4 size 0x70 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>* GetAllSceneContexts();

  /// @brief Method AddStateMachineBehaviourAutoInjectersInScene addr 0x2f27e48 size 0x320 virtual false final false
  static inline void AddStateMachineBehaviourAutoInjectersInScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method AddStateMachineBehaviourAutoInjectersUnderGameObject addr 0x2f2832c size 0x140 virtual false final false
  static inline void AddStateMachineBehaviourAutoInjectersUnderGameObject(::UnityEngine::GameObject* root);

  /// @brief Method GetInjectableMonoBehavioursInScene addr 0x2f2846c size 0x330 virtual false final false
  static inline void GetInjectableMonoBehavioursInScene(::UnityEngine::SceneManagement::Scene scene, ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* monoBehaviours);

  /// @brief Method GetInjectableMonoBehavioursUnderGameObject addr 0x2f28b00 size 0x4 virtual false final false
  static inline void GetInjectableMonoBehavioursUnderGameObject(::UnityEngine::GameObject* gameObject, ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* injectableComponents);

  /// @brief Method GetInjectableMonoBehavioursUnderGameObjectInternal addr 0x2f2879c size 0x364 virtual false final false
  static inline void GetInjectableMonoBehavioursUnderGameObjectInternal(::UnityEngine::GameObject* gameObject,
                                                                        ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* injectableComponents);

  /// @brief Method IsInjectableMonoBehaviourType addr 0x2f28b04 size 0xe8 virtual false final false
  static inline bool IsInjectableMonoBehaviourType(::System::Type* type);

  /// @brief Method GetRootGameObjects addr 0x2f28168 size 0x1c4 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* GetRootGameObjects(::UnityEngine::SceneManagement::Scene scene);

  // Ctor Parameters [CppParam { name: "", ty: "ZenUtilInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenUtilInternal(ZenUtilInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenUtilInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenUtilInternal(ZenUtilInternal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenUtilInternal();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ZenUtilInternal, 0x10>, "Size mismatch!");

} // namespace Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::ZenUtilInternal);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ZenUtilInternal*, "Zenject.Internal", "ZenUtilInternal");
NEED_NO_BOX(::Zenject::Internal::__ZenUtilInternal___GetAllSceneContexts_d__3);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ZenUtilInternal___GetAllSceneContexts_d__3*, "Zenject.Internal", "ZenUtilInternal/<GetAllSceneContexts>d__3");
NEED_NO_BOX(::Zenject::Internal::__ZenUtilInternal____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ZenUtilInternal____c*, "Zenject.Internal", "ZenUtilInternal/<>c");
NEED_NO_BOX(::Zenject::Internal::__ZenUtilInternal____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ZenUtilInternal____c__DisplayClass10_0*, "Zenject.Internal", "ZenUtilInternal/<>c__DisplayClass10_0");
