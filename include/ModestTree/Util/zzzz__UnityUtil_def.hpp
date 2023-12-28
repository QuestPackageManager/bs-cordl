#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityUtil)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Transform;
}
namespace ModestTree::Util {
class __UnityUtil___GetParentsAndSelf_d__17;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace ModestTree::Util {
class __UnityUtil____c;
}
namespace ModestTree::Util {
class __UnityUtil___GetDirectChildrenAndSelf_d__20;
}
namespace ModestTree::Util {
class __UnityUtil___GetDirectChildren_d__21;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace ModestTree::Util {
class __UnityUtil___get_AllScenes_d__1;
}
namespace ModestTree::Util {
class __UnityUtil___GetParents_d__16;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10380))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10630))
// CS Name: ::UnityUtil::<get_AllScenes>d__1*
class CORDL_TYPE __UnityUtil___get_AllScenes_d__1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x4
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::SceneManagement::Scene __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x18, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <i>5__2, offset 0x1c, size 0x4
  __declspec(property(get = __get__i_5__2, put = __set__i_5__2)) int32_t _i_5__2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_SceneManagement_Scene__get_Current))::UnityEngine::SceneManagement::Scene
      System_Collections_Generic_IEnumerator_UnityEngine_SceneManagement_Scene__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::SceneManagement::Scene& __get___2__current();

  constexpr ::UnityEngine::SceneManagement::Scene const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::SceneManagement::Scene value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr int32_t& __get__i_5__2();

  constexpr int32_t const& __get__i_5__2() const;

  constexpr void __set__i_5__2(int32_t value);

  static inline ::ModestTree::Util::__UnityUtil___get_AllScenes_d__1* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2ebeeac size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2ebfa08 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2ebfa0c size 0xcc virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.SceneManagement.Scene>.get_Current addr 0x2ebfad8 size 0x8 virtual true final true
  inline ::UnityEngine::SceneManagement::Scene System_Collections_Generic_IEnumerator_UnityEngine_SceneManagement_Scene__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2ebfae0 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ebfb20 size 0x5c virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.SceneManagement.Scene>.GetEnumerator addr 0x2ebfb7c size 0x98 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* System_Collections_Generic_IEnumerable_UnityEngine_SceneManagement_Scene__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ebfc14 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___get_AllScenes_d__1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityUtil___get_AllScenes_d__1(__UnityUtil___get_AllScenes_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___get_AllScenes_d__1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityUtil___get_AllScenes_d__1(__UnityUtil___get_AllScenes_d__1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityUtil___get_AllScenes_d__1();

public:
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

} // namespace ModestTree::Util
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10631))
// CS Name: ::UnityUtil::<>c*
class CORDL_TYPE __UnityUtil____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::ModestTree::Util::__UnityUtil____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::UnityEngine::SceneManagement::Scene, bool>* __9__3_0;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0))::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::GameObject*>* __9__15_0;

  /// @brief Field <>9__18_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_0, put = setStaticF___9__18_0))::System::Func_2<::UnityEngine::Component*, int32_t>* __9__18_0;

  /// @brief Field <>9__19_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__19_0, put = setStaticF___9__19_0))::System::Func_2<::UnityEngine::Component*, int32_t>* __9__19_0;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__22_0, put = setStaticF___9__22_0))::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::GameObject*>* __9__22_0;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0))::System::Func_2<::UnityEngine::GameObject*, bool>* __9__23_0;

  static inline void setStaticF___9(::ModestTree::Util::__UnityUtil____c* value);

  static inline ::ModestTree::Util::__UnityUtil____c* getStaticF___9();

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityEngine::SceneManagement::Scene, bool>* value);

  static inline ::System::Func_2<::UnityEngine::SceneManagement::Scene, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9__15_0(::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::GameObject*>* value);

  static inline ::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::GameObject*>* getStaticF___9__15_0();

  static inline void setStaticF___9__18_0(::System::Func_2<::UnityEngine::Component*, int32_t>* value);

  static inline ::System::Func_2<::UnityEngine::Component*, int32_t>* getStaticF___9__18_0();

  static inline void setStaticF___9__19_0(::System::Func_2<::UnityEngine::Component*, int32_t>* value);

  static inline ::System::Func_2<::UnityEngine::Component*, int32_t>* getStaticF___9__19_0();

  static inline void setStaticF___9__22_0(::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::GameObject*>* value);

  static inline ::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::GameObject*>* getStaticF___9__22_0();

  static inline void setStaticF___9__23_0(::System::Func_2<::UnityEngine::GameObject*, bool>* value);

  static inline ::System::Func_2<::UnityEngine::GameObject*, bool>* getStaticF___9__23_0();

  static inline ::ModestTree::Util::__UnityUtil____c* New_ctor();

  /// @brief Method .ctor addr 0x2ebfc7c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <get_AllLoadedScenes>b__3_0 addr 0x2ebfc84 size 0x20 virtual false final false
  inline bool _get_AllLoadedScenes_b__3_0(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method <GetRootParentOrSelf>b__15_0 addr 0x2ebfca4 size 0x18 virtual false final false
  inline ::UnityEngine::GameObject* _GetRootParentOrSelf_b__15_0(::UnityEngine::Transform* x);

  /// @brief Method <GetComponentsInChildrenTopDown>b__18_0 addr 0x2ebfcbc size 0x88 virtual false final false
  inline int32_t _GetComponentsInChildrenTopDown_b__18_0(::UnityEngine::Component* x);

  /// @brief Method <GetComponentsInChildrenBottomUp>b__19_0 addr 0x2ebfd44 size 0x88 virtual false final false
  inline int32_t _GetComponentsInChildrenBottomUp_b__19_0(::UnityEngine::Component* x);

  /// @brief Method <GetAllGameObjects>b__22_0 addr 0x2ebfdcc size 0x18 virtual false final false
  inline ::UnityEngine::GameObject* _GetAllGameObjects_b__22_0(::UnityEngine::Transform* x);

  /// @brief Method <GetAllRootGameObjects>b__23_0 addr 0x2ebfde4 size 0x84 virtual false final false
  inline bool _GetAllRootGameObjects_b__23_0(::UnityEngine::GameObject* x);

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityUtil____c(__UnityUtil____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityUtil____c(__UnityUtil____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityUtil____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::__UnityUtil____c, 0x10>, "Size mismatch!");

} // namespace ModestTree::Util
// Type: ::<GetParents>d__16
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10632))
// CS Name: ::UnityUtil::<GetParents>d__16*
class CORDL_TYPE __UnityUtil___GetParents_d__16 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::Transform* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field transform, offset 0x28, size 0x8
  __declspec(property(get = __get_transform, put = __set_transform))::UnityEngine::Transform* transform;

  /// @brief Field <>3__transform, offset 0x30, size 0x8
  __declspec(property(get = __get___3__transform, put = __set___3__transform))::UnityEngine::Transform* __3__transform;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>* __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current))::UnityEngine::Transform* System_Collections_Generic_IEnumerator_UnityEngine_Transform__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::Transform*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::Transform* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::UnityEngine::Transform*& __get_transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_transform() const;

  constexpr void __set_transform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get___3__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get___3__transform() const;

  constexpr void __set___3__transform(::UnityEngine::Transform* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>* value);

  static inline ::ModestTree::Util::__UnityUtil___GetParents_d__16* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2ebf388 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2ebfe68 size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2ebfe84 size 0x2f8 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2ec017c size 0xb0 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current addr 0x2ec022c size 0x8 virtual true final true
  inline ::UnityEngine::Transform* System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2ec0234 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ec0274 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator addr 0x2ec027c size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>* System_Collections_Generic_IEnumerable_UnityEngine_Transform__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ec0320 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetParents_d__16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityUtil___GetParents_d__16(__UnityUtil___GetParents_d__16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetParents_d__16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityUtil___GetParents_d__16(__UnityUtil___GetParents_d__16 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityUtil___GetParents_d__16();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field transform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ___transform;

  /// @brief Field <>3__transform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* _____3__transform;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::__UnityUtil___GetParents_d__16, 0x40>, "Size mismatch!");

} // namespace ModestTree::Util
// Type: ::<GetParentsAndSelf>d__17
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10633))
// CS Name: ::UnityUtil::<GetParentsAndSelf>d__17*
class CORDL_TYPE __UnityUtil___GetParentsAndSelf_d__17 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::Transform* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field transform, offset 0x28, size 0x8
  __declspec(property(get = __get_transform, put = __set_transform))::UnityEngine::Transform* transform;

  /// @brief Field <>3__transform, offset 0x30, size 0x8
  __declspec(property(get = __get___3__transform, put = __set___3__transform))::UnityEngine::Transform* __3__transform;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>* __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current))::UnityEngine::Transform* System_Collections_Generic_IEnumerator_UnityEngine_Transform__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::Transform*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::Transform* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::UnityEngine::Transform*& __get_transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_transform() const;

  constexpr void __set_transform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get___3__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get___3__transform() const;

  constexpr void __set___3__transform(::UnityEngine::Transform* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>* value);

  static inline ::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2ebf3bc size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2ec0324 size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2ec0340 size 0x320 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2ec0660 size 0xb0 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current addr 0x2ec0710 size 0x8 virtual true final true
  inline ::UnityEngine::Transform* System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2ec0718 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ec0758 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator addr 0x2ec0760 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>* System_Collections_Generic_IEnumerable_UnityEngine_Transform__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ec0804 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetParentsAndSelf_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityUtil___GetParentsAndSelf_d__17(__UnityUtil___GetParentsAndSelf_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetParentsAndSelf_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityUtil___GetParentsAndSelf_d__17(__UnityUtil___GetParentsAndSelf_d__17 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityUtil___GetParentsAndSelf_d__17();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field transform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ___transform;

  /// @brief Field <>3__transform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* _____3__transform;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17, 0x40>, "Size mismatch!");

} // namespace ModestTree::Util
// Type: ::<GetDirectChildrenAndSelf>d__20
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10634))
// CS Name: ::UnityUtil::<GetDirectChildrenAndSelf>d__20*
class CORDL_TYPE __UnityUtil___GetDirectChildrenAndSelf_d__20 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::GameObject* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field obj, offset 0x28, size 0x8
  __declspec(property(get = __get_obj, put = __set_obj))::UnityEngine::GameObject* obj;

  /// @brief Field <>3__obj, offset 0x30, size 0x8
  __declspec(property(get = __get___3__obj, put = __set___3__obj))::UnityEngine::GameObject* __3__obj;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::IEnumerator* __7__wrap1;

  __declspec(
      property(get = System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current))::UnityEngine::GameObject* System_Collections_Generic_IEnumerator_UnityEngine_GameObject__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::GameObject*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::GameObject*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::GameObject*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::GameObject* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::UnityEngine::GameObject*& __get_obj();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_obj() const;

  constexpr void __set_obj(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get___3__obj();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get___3__obj() const;

  constexpr void __set___3__obj(::UnityEngine::GameObject* value);

  constexpr ::System::Collections::IEnumerator*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::IEnumerator* value);

  static inline ::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2ebf6c8 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2ec0808 size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2ec0824 size 0x2ac virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2ec0ad0 size 0xbc virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current addr 0x2ec0b8c size 0x8 virtual true final true
  inline ::UnityEngine::GameObject* System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2ec0b94 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ec0bd4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator addr 0x2ec0bdc size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::GameObject*>* System_Collections_Generic_IEnumerable_UnityEngine_GameObject__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ec0c80 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetDirectChildrenAndSelf_d__20", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityUtil___GetDirectChildrenAndSelf_d__20(__UnityUtil___GetDirectChildrenAndSelf_d__20&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetDirectChildrenAndSelf_d__20", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityUtil___GetDirectChildrenAndSelf_d__20(__UnityUtil___GetDirectChildrenAndSelf_d__20 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityUtil___GetDirectChildrenAndSelf_d__20();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field obj, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___obj;

  /// @brief Field <>3__obj, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GameObject* _____3__obj;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IEnumerator* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20, 0x40>, "Size mismatch!");

} // namespace ModestTree::Util
// Type: ::<GetDirectChildren>d__21
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10635))
// CS Name: ::UnityUtil::<GetDirectChildren>d__21*
class CORDL_TYPE __UnityUtil___GetDirectChildren_d__21 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::GameObject* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field obj, offset 0x28, size 0x8
  __declspec(property(get = __get_obj, put = __set_obj))::UnityEngine::GameObject* obj;

  /// @brief Field <>3__obj, offset 0x30, size 0x8
  __declspec(property(get = __get___3__obj, put = __set___3__obj))::UnityEngine::GameObject* __3__obj;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::IEnumerator* __7__wrap1;

  __declspec(
      property(get = System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current))::UnityEngine::GameObject* System_Collections_Generic_IEnumerator_UnityEngine_GameObject__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::GameObject*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::GameObject*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::GameObject*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::GameObject* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::UnityEngine::GameObject*& __get_obj();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_obj() const;

  constexpr void __set_obj(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get___3__obj();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get___3__obj() const;

  constexpr void __set___3__obj(::UnityEngine::GameObject* value);

  constexpr ::System::Collections::IEnumerator*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::IEnumerator* value);

  static inline ::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2ebf774 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2ec0c84 size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2ec0ca0 size 0x290 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2ec0f30 size 0xbc virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current addr 0x2ec0fec size 0x8 virtual true final true
  inline ::UnityEngine::GameObject* System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2ec0ff4 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ec1034 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator addr 0x2ec103c size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::GameObject*>* System_Collections_Generic_IEnumerable_UnityEngine_GameObject__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ec10e0 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetDirectChildren_d__21", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityUtil___GetDirectChildren_d__21(__UnityUtil___GetDirectChildren_d__21&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityUtil___GetDirectChildren_d__21", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityUtil___GetDirectChildren_d__21(__UnityUtil___GetDirectChildren_d__21 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityUtil___GetDirectChildren_d__21();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field obj, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___obj;

  /// @brief Field <>3__obj, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GameObject* _____3__obj;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IEnumerator* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21, 0x40>, "Size mismatch!");

} // namespace ModestTree::Util
// Type: ModestTree.Util::UnityUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10636))
// CS Name: ::ModestTree.Util::UnityUtil*
class CORDL_TYPE UnityUtil : public ::System::Object {
public:
  // Declarations
  using _GetDirectChildren_d__21 = ::ModestTree::Util::__UnityUtil___GetDirectChildren_d__21;

  using _GetDirectChildrenAndSelf_d__20 = ::ModestTree::Util::__UnityUtil___GetDirectChildrenAndSelf_d__20;

  using _GetParentsAndSelf_d__17 = ::ModestTree::Util::__UnityUtil___GetParentsAndSelf_d__17;

  using _GetParents_d__16 = ::ModestTree::Util::__UnityUtil___GetParents_d__16;

  using __c = ::ModestTree::Util::__UnityUtil____c;

  using _get_AllScenes_d__1 = ::ModestTree::Util::__UnityUtil___get_AllScenes_d__1;

  /// @brief Method get_AllScenes addr 0x2ebee3c size 0x70 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>* get_AllScenes();

  /// @brief Method get_AllLoadedScenes addr 0x2ebeee0 size 0x104 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>* get_AllLoadedScenes();

  /// @brief Method get_IsAltKeyDown addr 0x2ebefe4 size 0x30 virtual false final false
  static inline bool get_IsAltKeyDown();

  /// @brief Method get_IsControlKeyDown addr 0x2ebf014 size 0x30 virtual false final false
  static inline bool get_IsControlKeyDown();

  /// @brief Method get_IsShiftKeyDown addr 0x2ebf044 size 0x30 virtual false final false
  static inline bool get_IsShiftKeyDown();

  /// @brief Method get_WasShiftKeyJustPressed addr 0x2ebf074 size 0x30 virtual false final false
  static inline bool get_WasShiftKeyJustPressed();

  /// @brief Method get_WasAltKeyJustPressed addr 0x2ebf0a4 size 0x30 virtual false final false
  static inline bool get_WasAltKeyJustPressed();

  /// @brief Method GetDepthLevel addr 0x2ebf0d4 size 0x90 virtual false final false
  static inline int32_t GetDepthLevel(::UnityEngine::Transform* transform);

  /// @brief Method GetRootParentOrSelf addr 0x2ebf164 size 0x134 virtual false final false
  static inline ::UnityEngine::GameObject* GetRootParentOrSelf(::UnityEngine::GameObject* gameObject);

  /// @brief Method GetParents addr 0x2ebf310 size 0x78 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>* GetParents(::UnityEngine::Transform* transform);

  /// @brief Method GetParentsAndSelf addr 0x2ebf298 size 0x78 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>* GetParentsAndSelf(::UnityEngine::Transform* transform);

  /// @brief Method GetComponentsInChildrenTopDown addr 0x2ebf3f0 size 0x130 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Component*>* GetComponentsInChildrenTopDown(::UnityEngine::GameObject* gameObject, bool includeInactive);

  /// @brief Method GetComponentsInChildrenBottomUp addr 0x2ebf520 size 0x130 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Component*>* GetComponentsInChildrenBottomUp(::UnityEngine::GameObject* gameObject, bool includeInactive);

  /// @brief Method GetDirectChildrenAndSelf addr 0x2ebf650 size 0x78 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* GetDirectChildrenAndSelf(::UnityEngine::GameObject* obj);

  /// @brief Method GetDirectChildren addr 0x2ebf6fc size 0x78 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* GetDirectChildren(::UnityEngine::GameObject* obj);

  /// @brief Method GetAllGameObjects addr 0x2ebf7a8 size 0x140 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* GetAllGameObjects();

  /// @brief Method GetAllRootGameObjects addr 0x2ebf8e8 size 0x120 virtual false final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetAllRootGameObjects();

  // Ctor Parameters [CppParam { name: "", ty: "UnityUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityUtil(UnityUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityUtil(UnityUtil const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityUtil();

public:
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
