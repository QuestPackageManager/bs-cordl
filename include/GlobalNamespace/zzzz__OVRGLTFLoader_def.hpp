#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRGLTFScene_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFLoader)
namespace GlobalNamespace {
struct OVRChunkType;
}
namespace GlobalNamespace {
class OVRGLTFAccessor;
}
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
namespace GlobalNamespace {
class OVRGLTFAnimationNodeMorphTargetHandler;
}
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace GlobalNamespace {
class OVRGLTFLoader__LoadGLBCoroutine_d__26;
}
namespace GlobalNamespace {
class OVRGLTFLoader__LoadGLTF_d__37;
}
namespace GlobalNamespace {
class OVRGLTFLoader__ProcessAnimations_d__48;
}
namespace GlobalNamespace {
class OVRGLTFLoader__ProcessNode_d__38;
}
namespace GlobalNamespace {
class OVRGLTFLoader___c__DisplayClass26_0;
}
namespace GlobalNamespace {
struct OVRGLTFScene;
}
namespace GlobalNamespace {
struct OVRMaterialData;
}
namespace GlobalNamespace {
struct OVRMeshAttributes;
}
namespace GlobalNamespace {
struct OVRMeshData;
}
namespace GlobalNamespace {
struct OVRTextureData;
}
namespace GlobalNamespace {
struct OVRTextureQualityFiltering;
}
namespace OVRSimpleJSON {
class JSONArray;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGLTFLoader;
}
namespace GlobalNamespace {
class OVRGLTFLoader__LoadGLBCoroutine_d__26;
}
namespace GlobalNamespace {
class OVRGLTFLoader__LoadGLTF_d__37;
}
namespace GlobalNamespace {
class OVRGLTFLoader__ProcessAnimations_d__48;
}
namespace GlobalNamespace {
class OVRGLTFLoader__ProcessNode_d__38;
}
namespace GlobalNamespace {
class OVRGLTFLoader___c__DisplayClass26_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFLoader);
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26);
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37);
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48);
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38);
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGLTFLoader/<>c__DisplayClass26_0
class CORDL_TYPE OVRGLTFLoader___c__DisplayClass26_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field task, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task)) ::System::Threading::Tasks::Task_1<::OVRSimpleJSON::JSONNode*>* task;

  static inline ::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0* New_ctor();

  /// @brief Method <LoadGLBCoroutine>b__1, addr 0x5ca5fc0, size 0x18, virtual false, abstract: false, final false
  inline bool _LoadGLBCoroutine_b__1();

  constexpr ::System::Threading::Tasks::Task_1<::OVRSimpleJSON::JSONNode*>* const& __cordl_internal_get_task() const;

  constexpr ::System::Threading::Tasks::Task_1<::OVRSimpleJSON::JSONNode*>*& __cordl_internal_get_task();

  constexpr void __cordl_internal_set_task(::System::Threading::Tasks::Task_1<::OVRSimpleJSON::JSONNode*>* value);

  /// @brief Method .ctor, addr 0x5ca5fbc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFLoader___c__DisplayClass26_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader___c__DisplayClass26_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGLTFLoader___c__DisplayClass26_0(OVRGLTFLoader___c__DisplayClass26_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader___c__DisplayClass26_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGLTFLoader___c__DisplayClass26_0(OVRGLTFLoader___c__DisplayClass26_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7151 };

  /// @brief Field task, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::OVRSimpleJSON::JSONNode*>* ___task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0, ___task) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGLTFLoader/<LoadGLBCoroutine>d__26
class CORDL_TYPE OVRGLTFLoader__LoadGLBCoroutine_d__26 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OVRGLTFLoader* __4__this;

  /// @brief Field <>8__1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___8__1, put = __cordl_internal_set___8__1)) ::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0* __8__1;

  /// @brief Field <loadGltf>5__2, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__loadGltf_5__2, put = __cordl_internal_set__loadGltf_5__2)) ::System::Collections::IEnumerator* _loadGltf_5__2;

  /// @brief Field loadMips, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_loadMips, put = __cordl_internal_set_loadMips)) bool loadMips;

  /// @brief Field supportAnimation, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_supportAnimation, put = __cordl_internal_set_supportAnimation)) bool supportAnimation;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5ca5fdc, size 0x8ec, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ca68c8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ca68d0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ca6908, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5ca5fd8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::OVRGLTFLoader* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OVRGLTFLoader*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0* const& __cordl_internal_get___8__1() const;

  constexpr ::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0*& __cordl_internal_get___8__1();

  constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get__loadGltf_5__2() const;

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get__loadGltf_5__2();

  constexpr bool const& __cordl_internal_get_loadMips() const;

  constexpr bool& __cordl_internal_get_loadMips();

  constexpr bool const& __cordl_internal_get_supportAnimation() const;

  constexpr bool& __cordl_internal_get_supportAnimation();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OVRGLTFLoader* value);

  constexpr void __cordl_internal_set___8__1(::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0* value);

  constexpr void __cordl_internal_set__loadGltf_5__2(::System::Collections::IEnumerator* value);

  constexpr void __cordl_internal_set_loadMips(bool value);

  constexpr void __cordl_internal_set_supportAnimation(bool value);

  /// @brief Method .ctor, addr 0x5ca3448, size 0x8, virtual false, abstract: false, final false
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
  constexpr OVRGLTFLoader__LoadGLBCoroutine_d__26();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader__LoadGLBCoroutine_d__26", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGLTFLoader__LoadGLBCoroutine_d__26(OVRGLTFLoader__LoadGLBCoroutine_d__26&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader__LoadGLBCoroutine_d__26", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGLTFLoader__LoadGLBCoroutine_d__26(OVRGLTFLoader__LoadGLBCoroutine_d__26 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7152 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRGLTFLoader* _____4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0* _____8__1;

  /// @brief Field supportAnimation, offset: 0x30, size: 0x1, def value: None
  bool ___supportAnimation;

  /// @brief Field loadMips, offset: 0x31, size: 0x1, def value: None
  bool ___loadMips;

  /// @brief Field <loadGltf>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ____loadGltf_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26, _____8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26, ___supportAnimation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26, ___loadMips) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26, ____loadGltf_5__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSimpleJSON.JSONNode::Enumerator, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGLTFLoader/<LoadGLTF>d__37
class CORDL_TYPE OVRGLTFLoader__LoadGLTF_d__37 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OVRGLTFLoader* __4__this;

  /// @brief Field <>7__wrap3, offset 0x40, size 0x48
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3)) ::OVRSimpleJSON::JSONNode_Enumerator __7__wrap3;

  /// @brief Field <nodes>5__3, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__nodes_5__3, put = __cordl_internal_set__nodes_5__3)) ::OVRSimpleJSON::JSONArray* _nodes_5__3;

  /// @brief Field <processNode>5__5, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__processNode_5__5, put = __cordl_internal_set__processNode_5__5)) ::System::Collections::IEnumerator* _processNode_5__5;

  /// @brief Field <sceneRootTransform>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneRootTransform_5__2, put = __cordl_internal_set__sceneRootTransform_5__2)) ::UnityW<::UnityEngine::Transform> _sceneRootTransform_5__2;

  /// @brief Field loadMips, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_loadMips, put = __cordl_internal_set_loadMips)) bool loadMips;

  /// @brief Field supportAnimation, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_supportAnimation, put = __cordl_internal_set_supportAnimation)) bool supportAnimation;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5ca6914, size 0x6dc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ca6ff0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ca6ff8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ca7030, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5ca6910, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::OVRGLTFLoader* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OVRGLTFLoader*& __cordl_internal_get___4__this();

  constexpr ::OVRSimpleJSON::JSONNode_Enumerator const& __cordl_internal_get___7__wrap3() const;

  constexpr ::OVRSimpleJSON::JSONNode_Enumerator& __cordl_internal_get___7__wrap3();

  constexpr ::OVRSimpleJSON::JSONArray* const& __cordl_internal_get__nodes_5__3() const;

  constexpr ::OVRSimpleJSON::JSONArray*& __cordl_internal_get__nodes_5__3();

  constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get__processNode_5__5() const;

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get__processNode_5__5();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__sceneRootTransform_5__2() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__sceneRootTransform_5__2();

  constexpr bool const& __cordl_internal_get_loadMips() const;

  constexpr bool& __cordl_internal_get_loadMips();

  constexpr bool const& __cordl_internal_get_supportAnimation() const;

  constexpr bool& __cordl_internal_get_supportAnimation();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OVRGLTFLoader* value);

  constexpr void __cordl_internal_set___7__wrap3(::OVRSimpleJSON::JSONNode_Enumerator value);

  constexpr void __cordl_internal_set__nodes_5__3(::OVRSimpleJSON::JSONArray* value);

  constexpr void __cordl_internal_set__processNode_5__5(::System::Collections::IEnumerator* value);

  constexpr void __cordl_internal_set__sceneRootTransform_5__2(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_loadMips(bool value);

  constexpr void __cordl_internal_set_supportAnimation(bool value);

  /// @brief Method .ctor, addr 0x5ca3bcc, size 0x8, virtual false, abstract: false, final false
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
  constexpr OVRGLTFLoader__LoadGLTF_d__37();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader__LoadGLTF_d__37", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGLTFLoader__LoadGLTF_d__37(OVRGLTFLoader__LoadGLTF_d__37&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader__LoadGLTF_d__37", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGLTFLoader__LoadGLTF_d__37(OVRGLTFLoader__LoadGLTF_d__37 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7153 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRGLTFLoader* _____4__this;

  /// @brief Field loadMips, offset: 0x28, size: 0x1, def value: None
  bool ___loadMips;

  /// @brief Field supportAnimation, offset: 0x29, size: 0x1, def value: None
  bool ___supportAnimation;

  /// @brief Field <sceneRootTransform>5__2, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____sceneRootTransform_5__2;

  /// @brief Field <nodes>5__3, offset: 0x38, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONArray* ____nodes_5__3;

  /// @brief Field <>7__wrap3, offset: 0x40, size: 0x48, def value: None
  ::OVRSimpleJSON::JSONNode_Enumerator _____7__wrap3;

  /// @brief Field <processNode>5__5, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ____processNode_5__5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37, ___loadMips) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37, ___supportAnimation) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37, ____sceneRootTransform_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37, ____nodes_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37, _____7__wrap3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37, ____processNode_5__5) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSimpleJSON.JSONNode::Enumerator, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGLTFLoader/<ProcessAnimations>d__48
class CORDL_TYPE OVRGLTFLoader__ProcessAnimations_d__48 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OVRGLTFLoader* __4__this;

  /// @brief Field <>7__wrap3, offset 0x30, size 0x48
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3)) ::OVRSimpleJSON::JSONNode_Enumerator __7__wrap3;

  /// @brief Field <animationIndex>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__animationIndex_5__2, put = __cordl_internal_set__animationIndex_5__2)) int32_t _animationIndex_5__2;

  /// @brief Field <processingStart>5__3, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__processingStart_5__3, put = __cordl_internal_set__processingStart_5__3)) float_t _processingStart_5__3;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5ca703c, size 0x6c8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ca7704, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ca770c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ca7744, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5ca7038, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::OVRGLTFLoader* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OVRGLTFLoader*& __cordl_internal_get___4__this();

  constexpr ::OVRSimpleJSON::JSONNode_Enumerator const& __cordl_internal_get___7__wrap3() const;

  constexpr ::OVRSimpleJSON::JSONNode_Enumerator& __cordl_internal_get___7__wrap3();

  constexpr int32_t const& __cordl_internal_get__animationIndex_5__2() const;

  constexpr int32_t& __cordl_internal_get__animationIndex_5__2();

  constexpr float_t const& __cordl_internal_get__processingStart_5__3() const;

  constexpr float_t& __cordl_internal_get__processingStart_5__3();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OVRGLTFLoader* value);

  constexpr void __cordl_internal_set___7__wrap3(::OVRSimpleJSON::JSONNode_Enumerator value);

  constexpr void __cordl_internal_set__animationIndex_5__2(int32_t value);

  constexpr void __cordl_internal_set__processingStart_5__3(float_t value);

  /// @brief Method .ctor, addr 0x5ca5cbc, size 0x8, virtual false, abstract: false, final false
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
  constexpr OVRGLTFLoader__ProcessAnimations_d__48();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader__ProcessAnimations_d__48", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGLTFLoader__ProcessAnimations_d__48(OVRGLTFLoader__ProcessAnimations_d__48&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader__ProcessAnimations_d__48", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGLTFLoader__ProcessAnimations_d__48(OVRGLTFLoader__ProcessAnimations_d__48 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7154 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRGLTFLoader* _____4__this;

  /// @brief Field <animationIndex>5__2, offset: 0x28, size: 0x4, def value: None
  int32_t ____animationIndex_5__2;

  /// @brief Field <processingStart>5__3, offset: 0x2c, size: 0x4, def value: None
  float_t ____processingStart_5__3;

  /// @brief Field <>7__wrap3, offset: 0x30, size: 0x48, def value: None
  ::OVRSimpleJSON::JSONNode_Enumerator _____7__wrap3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48, ____animationIndex_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48, ____processingStart_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48, _____7__wrap3) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSimpleJSON.JSONNode::ValueEnumerator, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGLTFLoader/<ProcessNode>d__38
class CORDL_TYPE OVRGLTFLoader__ProcessNode_d__38 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OVRGLTFLoader* __4__this;

  /// @brief Field <>7__wrap6, offset 0x68, size 0x48
  __declspec(property(get = __cordl_internal_get___7__wrap6, put = __cordl_internal_set___7__wrap6)) ::OVRSimpleJSON::JSONNode_ValueEnumerator __7__wrap6;

  /// @brief Field <hasSkipped>5__2, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__hasSkipped_5__2, put = __cordl_internal_set__hasSkipped_5__2)) bool _hasSkipped_5__2;

  /// @brief Field <nodeGameObject>5__4, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__nodeGameObject_5__4, put = __cordl_internal_set__nodeGameObject_5__4)) ::UnityW<::UnityEngine::GameObject> _nodeGameObject_5__4;

  /// @brief Field <nodeName>5__6, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__nodeName_5__6, put = __cordl_internal_set__nodeName_5__6)) ::StringW _nodeName_5__6;

  /// @brief Field <nodeTransform>5__5, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__nodeTransform_5__5, put = __cordl_internal_set__nodeTransform_5__5)) ::UnityW<::UnityEngine::Transform> _nodeTransform_5__5;

  /// @brief Field <node>5__3, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__node_5__3, put = __cordl_internal_set__node_5__3)) ::OVRSimpleJSON::JSONNode* _node_5__3;

  /// @brief Field <processNode>5__8, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__processNode_5__8, put = __cordl_internal_set__processNode_5__8)) ::System::Collections::IEnumerator* _processNode_5__8;

  /// @brief Field loadMips, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_loadMips, put = __cordl_internal_set_loadMips)) bool loadMips;

  /// @brief Field nodeId, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_nodeId, put = __cordl_internal_set_nodeId)) int32_t nodeId;

  /// @brief Field nodes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nodes, put = __cordl_internal_set_nodes)) ::OVRSimpleJSON::JSONArray* nodes;

  /// @brief Field parent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent)) ::UnityW<::UnityEngine::Transform> parent;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5ca7750, size 0xd64, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ca84b4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ca84bc, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ca84f4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5ca774c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::OVRGLTFLoader* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OVRGLTFLoader*& __cordl_internal_get___4__this();

  constexpr ::OVRSimpleJSON::JSONNode_ValueEnumerator const& __cordl_internal_get___7__wrap6() const;

  constexpr ::OVRSimpleJSON::JSONNode_ValueEnumerator& __cordl_internal_get___7__wrap6();

  constexpr bool const& __cordl_internal_get__hasSkipped_5__2() const;

  constexpr bool& __cordl_internal_get__hasSkipped_5__2();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__nodeGameObject_5__4() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__nodeGameObject_5__4();

  constexpr ::StringW const& __cordl_internal_get__nodeName_5__6() const;

  constexpr ::StringW& __cordl_internal_get__nodeName_5__6();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__nodeTransform_5__5() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__nodeTransform_5__5();

  constexpr ::OVRSimpleJSON::JSONNode* const& __cordl_internal_get__node_5__3() const;

  constexpr ::OVRSimpleJSON::JSONNode*& __cordl_internal_get__node_5__3();

  constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get__processNode_5__8() const;

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get__processNode_5__8();

  constexpr bool const& __cordl_internal_get_loadMips() const;

  constexpr bool& __cordl_internal_get_loadMips();

  constexpr int32_t const& __cordl_internal_get_nodeId() const;

  constexpr int32_t& __cordl_internal_get_nodeId();

  constexpr ::OVRSimpleJSON::JSONArray* const& __cordl_internal_get_nodes() const;

  constexpr ::OVRSimpleJSON::JSONArray*& __cordl_internal_get_nodes();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parent();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OVRGLTFLoader* value);

  constexpr void __cordl_internal_set___7__wrap6(::OVRSimpleJSON::JSONNode_ValueEnumerator value);

  constexpr void __cordl_internal_set__hasSkipped_5__2(bool value);

  constexpr void __cordl_internal_set__nodeGameObject_5__4(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__nodeName_5__6(::StringW value);

  constexpr void __cordl_internal_set__nodeTransform_5__5(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__node_5__3(::OVRSimpleJSON::JSONNode* value);

  constexpr void __cordl_internal_set__processNode_5__8(::System::Collections::IEnumerator* value);

  constexpr void __cordl_internal_set_loadMips(bool value);

  constexpr void __cordl_internal_set_nodeId(int32_t value);

  constexpr void __cordl_internal_set_nodes(::OVRSimpleJSON::JSONArray* value);

  constexpr void __cordl_internal_set_parent(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x5ca3c58, size 0x8, virtual false, abstract: false, final false
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
  constexpr OVRGLTFLoader__ProcessNode_d__38();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader__ProcessNode_d__38", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGLTFLoader__ProcessNode_d__38(OVRGLTFLoader__ProcessNode_d__38&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader__ProcessNode_d__38", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGLTFLoader__ProcessNode_d__38(OVRGLTFLoader__ProcessNode_d__38 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7155 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRGLTFLoader* _____4__this;

  /// @brief Field nodes, offset: 0x28, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONArray* ___nodes;

  /// @brief Field nodeId, offset: 0x30, size: 0x4, def value: None
  int32_t ___nodeId;

  /// @brief Field parent, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___parent;

  /// @brief Field loadMips, offset: 0x40, size: 0x1, def value: None
  bool ___loadMips;

  /// @brief Field <hasSkipped>5__2, offset: 0x41, size: 0x1, def value: None
  bool ____hasSkipped_5__2;

  /// @brief Field <node>5__3, offset: 0x48, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONNode* ____node_5__3;

  /// @brief Field <nodeGameObject>5__4, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____nodeGameObject_5__4;

  /// @brief Field <nodeTransform>5__5, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____nodeTransform_5__5;

  /// @brief Field <nodeName>5__6, offset: 0x60, size: 0x8, def value: None
  ::StringW ____nodeName_5__6;

  /// @brief Field <>7__wrap6, offset: 0x68, size: 0x48, def value: None
  ::OVRSimpleJSON::JSONNode_ValueEnumerator _____7__wrap6;

  /// @brief Field <processNode>5__8, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ____processNode_5__8;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, ___nodes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, ___nodeId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, ___parent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, ___loadMips) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, ____hasSkipped_5__2) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, ____node_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, ____nodeGameObject_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, ____nodeTransform_5__5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, ____nodeName_5__6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, _____7__wrap6) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, ____processNode_5__8) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38, 0xb8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRGLTFScene, OVRTextureQualityFiltering, System.Object, UnityEngine.Vector3, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGLTFLoader
class CORDL_TYPE OVRGLTFLoader : public ::System::Object {
public:
  // Declarations
  using _LoadGLBCoroutine_d__26 = ::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26;

  using _LoadGLTF_d__37 = ::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37;

  using _ProcessAnimations_d__48 = ::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48;

  using _ProcessNode_d__38 = ::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38;

  using __c__DisplayClass26_0 = ::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0;

  /// @brief Field GLTFToUnitySpace, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_GLTFToUnitySpace, put = setStaticF_GLTFToUnitySpace)) ::UnityEngine::Vector3 GLTFToUnitySpace;

  /// @brief Field GLTFToUnitySpace_Rotation, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_GLTFToUnitySpace_Rotation, put = setStaticF_GLTFToUnitySpace_Rotation)) ::UnityEngine::Vector4 GLTFToUnitySpace_Rotation;

  /// @brief Field GLTFToUnityTangent, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_GLTFToUnityTangent, put = setStaticF_GLTFToUnityTangent)) ::UnityEngine::Vector3 GLTFToUnityTangent;

  /// @brief Field InputNodeNameMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InputNodeNameMap,
                      put = setStaticF_InputNodeNameMap)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* InputNodeNameMap;

  /// @brief Field _dataAccessor, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__dataAccessor, put = __cordl_internal_set__dataAccessor)) ::GlobalNamespace::OVRGLTFAccessor* _dataAccessor;

  /// @brief Field m_AlphaBlendShader, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AlphaBlendShader, put = __cordl_internal_set_m_AlphaBlendShader)) ::UnityW<::UnityEngine::Shader> m_AlphaBlendShader;

  /// @brief Field m_AnimationLookup, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AnimationLookup, put = __cordl_internal_set_m_AnimationLookup)) ::System::Collections::Generic::Dictionary_2<
      int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* m_AnimationLookup;

  /// @brief Field m_InputAnimationNodes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputAnimationNodes,
                      put = __cordl_internal_set_m_InputAnimationNodes)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*
      m_InputAnimationNodes;

  /// @brief Field m_Nodes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Nodes, put = __cordl_internal_set_m_Nodes)) ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> m_Nodes;

  /// @brief Field m_Shader, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Shader, put = __cordl_internal_set_m_Shader)) ::UnityW<::UnityEngine::Shader> m_Shader;

  /// @brief Field m_TextureMipmapBias, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextureMipmapBias, put = __cordl_internal_set_m_TextureMipmapBias)) float_t m_TextureMipmapBias;

  /// @brief Field m_TextureQuality, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextureQuality, put = __cordl_internal_set_m_TextureQuality)) ::GlobalNamespace::OVRTextureQualityFiltering m_TextureQuality;

  /// @brief Field m_deferredStream, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_deferredStream, put = __cordl_internal_set_m_deferredStream)) ::System::Func_1<::System::IO::Stream*>* m_deferredStream;

  /// @brief Field m_glbStream, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_glbStream, put = __cordl_internal_set_m_glbStream)) ::System::IO::Stream* m_glbStream;

  /// @brief Field m_jsonData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_jsonData, put = __cordl_internal_set_m_jsonData)) ::OVRSimpleJSON::JSONNode* m_jsonData;

  /// @brief Field m_materials, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_materials,
                      put = __cordl_internal_set_m_materials)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* m_materials;

  /// @brief Field m_morphTargetHandlers, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_morphTargetHandlers,
      put = __cordl_internal_set_m_morphTargetHandlers)) ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* m_morphTargetHandlers;

  /// @brief Field m_processingNodesStart, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_processingNodesStart, put = __cordl_internal_set_m_processingNodesStart)) float_t m_processingNodesStart;

  /// @brief Field m_textures, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_textures,
                      put = __cordl_internal_set_m_textures)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture2D>>* m_textures;

  /// @brief Field scene, offset 0x60, size 0x20
  __declspec(property(get = __cordl_internal_get_scene, put = __cordl_internal_set_scene)) ::GlobalNamespace::OVRGLTFScene scene;

  /// @brief Field textureUriHandler, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_textureUriHandler,
                      put = __cordl_internal_set_textureUriHandler)) ::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>* textureUriHandler;

  /// @brief Method ApplyTextureQuality, addr 0x5ca38c0, size 0x170, virtual false, abstract: false, final false
  static inline void ApplyTextureQuality(::GlobalNamespace::OVRTextureQualityFiltering qualityLevel, ::ByRef<::UnityEngine::Texture2D*> destTexture);

  /// @brief Method CreateUnityMaterial, addr 0x5ca4df0, size 0x324, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> CreateUnityMaterial(::GlobalNamespace::OVRMaterialData matData, bool loadMips);

  /// @brief Method DetectTextureQuality, addr 0x5ca3800, size 0xc0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTextureQualityFiltering DetectTextureQuality(::ByRef<::UnityEngine::Texture2D*> srcTexture);

  /// @brief Method FlipTriangleIndices, addr 0x5ca5114, size 0x70, virtual false, abstract: false, final false
  static inline void FlipTriangleIndices(::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> indices);

  /// @brief Method GetInputNodeType, addr 0x5ca5ae0, size 0x188, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRGLTFInputNode GetInputNodeType(::StringW name);

  /// @brief Method InitializeGLBLoad, addr 0x5ca3450, size 0xec, virtual false, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* InitializeGLBLoad();

  /// @brief Method LoadGLB, addr 0x5ca32f4, size 0xe0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRGLTFScene LoadGLB(bool supportAnimation, bool loadMips);

  /// @brief Method LoadGLBCoroutine, addr 0x5ca33d4, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* LoadGLBCoroutine(bool supportAnimation, bool loadMips);

  /// @brief Method LoadGLTF, addr 0x5ca3b58, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* LoadGLTF(bool supportAnimation, bool loadMips);

  static inline ::GlobalNamespace::OVRGLTFLoader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::GlobalNamespace::OVRGLTFLoader* New_ctor(::System::Func_1<::System::IO::Stream*>* deferredStream);

  static inline ::GlobalNamespace::OVRGLTFLoader* New_ctor(::StringW fileName);

  /// @brief Method ProcessAnimations, addr 0x5ca5c68, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ProcessAnimations();

  /// @brief Method ProcessMaterial, addr 0x5ca4548, size 0x3e0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRMaterialData ProcessMaterial(int32_t matId);

  /// @brief Method ProcessMesh, addr 0x5ca3c60, size 0x8e8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRMeshData ProcessMesh(::OVRSimpleJSON::JSONNode* meshNode, bool loadMips);

  /// @brief Method ProcessNode, addr 0x5ca3bd4, size 0x84, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ProcessNode(::OVRSimpleJSON::JSONArray* nodes, int32_t nodeId, bool loadMips, ::UnityEngine::Transform* parent);

  /// @brief Method ProcessSkin, addr 0x5ca56fc, size 0x3e4, virtual false, abstract: false, final false
  inline void ProcessSkin(::OVRSimpleJSON::JSONNode* skinNode, ::UnityEngine::SkinnedMeshRenderer* renderer);

  /// @brief Method ProcessTexture, addr 0x5ca4928, size 0x40c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTextureData ProcessTexture(int32_t textureId);

  /// @brief Method ReadChunk, addr 0x5ca36f0, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadChunk(::System::IO::Stream* glbStream, ::GlobalNamespace::OVRChunkType type);

  /// @brief Method ReadMeshAttributes, addr 0x5ca5184, size 0x578, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRMeshAttributes ReadMeshAttributes(::OVRSimpleJSON::JSONNode* jsonAttributes, int32_t totalVertexCount, int32_t vertexOffset);

  /// @brief Method SetMipMapBias, addr 0x5ca37e0, size 0x20, virtual false, abstract: false, final false
  inline void SetMipMapBias(float_t loadedTexturesMipmapBiasing);

  /// @brief Method SetModelAlphaBlendShader, addr 0x5ca37d0, size 0x8, virtual false, abstract: false, final false
  inline void SetModelAlphaBlendShader(::UnityEngine::Shader* shader);

  /// @brief Method SetModelShader, addr 0x5ca37c8, size 0x8, virtual false, abstract: false, final false
  inline void SetModelShader(::UnityEngine::Shader* shader);

  /// @brief Method SetTextureQualityFiltering, addr 0x5ca37d8, size 0x8, virtual false, abstract: false, final false
  inline void SetTextureQualityFiltering(::GlobalNamespace::OVRTextureQualityFiltering loadedTexturesQuality);

  /// @brief Method TranscodeTexture, addr 0x5ca4d34, size 0xbc, virtual false, abstract: false, final false
  inline void TranscodeTexture(::ByRef<::GlobalNamespace::OVRTextureData> textureData);

  /// @brief Method ValidateChunk, addr 0x5ca3a30, size 0x128, virtual false, abstract: false, final false
  static inline bool ValidateChunk(::System::IO::Stream* glbStream, ::GlobalNamespace::OVRChunkType type, ::ByRef<uint32_t> chunkLength);

  /// @brief Method ValidateGLB, addr 0x5ca353c, size 0x1b4, virtual false, abstract: false, final false
  static inline bool ValidateGLB(::System::IO::Stream* glbStream);

  /// @brief Method <LoadGLBCoroutine>b__26_0, addr 0x5ca5fb8, size 0x4, virtual false, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* _LoadGLBCoroutine_b__26_0();

  constexpr ::GlobalNamespace::OVRGLTFAccessor* const& __cordl_internal_get__dataAccessor() const;

  constexpr ::GlobalNamespace::OVRGLTFAccessor*& __cordl_internal_get__dataAccessor();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_AlphaBlendShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_AlphaBlendShader();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* const&
  __cordl_internal_get_m_AnimationLookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*&
  __cordl_internal_get_m_AnimationLookup();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* const& __cordl_internal_get_m_InputAnimationNodes() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*& __cordl_internal_get_m_InputAnimationNodes();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_m_Nodes() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_m_Nodes();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_Shader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_Shader();

  constexpr float_t const& __cordl_internal_get_m_TextureMipmapBias() const;

  constexpr float_t& __cordl_internal_get_m_TextureMipmapBias();

  constexpr ::GlobalNamespace::OVRTextureQualityFiltering const& __cordl_internal_get_m_TextureQuality() const;

  constexpr ::GlobalNamespace::OVRTextureQualityFiltering& __cordl_internal_get_m_TextureQuality();

  constexpr ::System::Func_1<::System::IO::Stream*>* const& __cordl_internal_get_m_deferredStream() const;

  constexpr ::System::Func_1<::System::IO::Stream*>*& __cordl_internal_get_m_deferredStream();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_m_glbStream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_m_glbStream();

  constexpr ::OVRSimpleJSON::JSONNode* const& __cordl_internal_get_m_jsonData() const;

  constexpr ::OVRSimpleJSON::JSONNode*& __cordl_internal_get_m_jsonData();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_m_materials() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_m_materials();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* const& __cordl_internal_get_m_morphTargetHandlers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*& __cordl_internal_get_m_morphTargetHandlers();

  constexpr float_t const& __cordl_internal_get_m_processingNodesStart() const;

  constexpr float_t& __cordl_internal_get_m_processingNodesStart();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_m_textures() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_m_textures();

  constexpr ::GlobalNamespace::OVRGLTFScene const& __cordl_internal_get_scene() const;

  constexpr ::GlobalNamespace::OVRGLTFScene& __cordl_internal_get_scene();

  constexpr ::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_textureUriHandler() const;

  constexpr ::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_textureUriHandler();

  constexpr void __cordl_internal_set__dataAccessor(::GlobalNamespace::OVRGLTFAccessor* value);

  constexpr void __cordl_internal_set_m_AlphaBlendShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_AnimationLookup(
      ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* value);

  constexpr void __cordl_internal_set_m_InputAnimationNodes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* value);

  constexpr void __cordl_internal_set_m_Nodes(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_m_Shader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_TextureMipmapBias(float_t value);

  constexpr void __cordl_internal_set_m_TextureQuality(::GlobalNamespace::OVRTextureQualityFiltering value);

  constexpr void __cordl_internal_set_m_deferredStream(::System::Func_1<::System::IO::Stream*>* value);

  constexpr void __cordl_internal_set_m_glbStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_m_jsonData(::OVRSimpleJSON::JSONNode* value);

  constexpr void __cordl_internal_set_m_materials(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* value);

  constexpr void __cordl_internal_set_m_morphTargetHandlers(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* value);

  constexpr void __cordl_internal_set_m_processingNodesStart(float_t value);

  constexpr void __cordl_internal_set_m_textures(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture2D>>* value);

  constexpr void __cordl_internal_set_scene(::GlobalNamespace::OVRGLTFScene value);

  constexpr void __cordl_internal_set_textureUriHandler(::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>* value);

  /// @brief Method .ctor, addr 0x5ca318c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x5ca3264, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<::System::IO::Stream*>* deferredStream);

  /// @brief Method .ctor, addr 0x5ca30e8, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW fileName);

  static inline ::UnityEngine::Vector3 getStaticF_GLTFToUnitySpace();

  static inline ::UnityEngine::Vector4 getStaticF_GLTFToUnitySpace_Rotation();

  static inline ::UnityEngine::Vector3 getStaticF_GLTFToUnityTangent();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* getStaticF_InputNodeNameMap();

  static inline void setStaticF_GLTFToUnitySpace(::UnityEngine::Vector3 value);

  static inline void setStaticF_GLTFToUnitySpace_Rotation(::UnityEngine::Vector4 value);

  static inline void setStaticF_GLTFToUnityTangent(::UnityEngine::Vector3 value);

  static inline void setStaticF_InputNodeNameMap(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGLTFLoader(OVRGLTFLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGLTFLoader(OVRGLTFLoader const&) = delete;

  /// @brief Field LoadingMaxTimePerFrame offset 0xffffffff size 0x4
  static constexpr float_t LoadingMaxTimePerFrame{ static_cast<float_t>(0.014285714f) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7156 };

  /// @brief Field m_deferredStream, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<::System::IO::Stream*>* ___m_deferredStream;

  /// @brief Field m_jsonData, offset: 0x18, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONNode* ___m_jsonData;

  /// @brief Field m_glbStream, offset: 0x20, size: 0x8, def value: None
  ::System::IO::Stream* ___m_glbStream;

  /// @brief Field m_Nodes, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___m_Nodes;

  /// @brief Field m_InputAnimationNodes, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* ___m_InputAnimationNodes;

  /// @brief Field m_AnimationLookup, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* ___m_AnimationLookup;

  /// @brief Field m_morphTargetHandlers, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* ___m_morphTargetHandlers;

  /// @brief Field m_Shader, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_Shader;

  /// @brief Field m_AlphaBlendShader, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_AlphaBlendShader;

  /// @brief Field m_TextureQuality, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::OVRTextureQualityFiltering ___m_TextureQuality;

  /// @brief Field m_TextureMipmapBias, offset: 0x5c, size: 0x4, def value: None
  float_t ___m_TextureMipmapBias;

  /// @brief Field scene, offset: 0x60, size: 0x20, def value: None
  ::GlobalNamespace::OVRGLTFScene ___scene;

  /// @brief Field textureUriHandler, offset: 0x80, size: 0x8, def value: None
  ::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>* ___textureUriHandler;

  /// @brief Field m_textures, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture2D>>* ___m_textures;

  /// @brief Field m_materials, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* ___m_materials;

  /// @brief Field m_processingNodesStart, offset: 0x98, size: 0x4, def value: None
  float_t ___m_processingNodesStart;

  /// @brief Field _dataAccessor, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::OVRGLTFAccessor* ____dataAccessor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_deferredStream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_jsonData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_glbStream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_Nodes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_InputAnimationNodes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_AnimationLookup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_morphTargetHandlers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_Shader) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_AlphaBlendShader) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_TextureQuality) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_TextureMipmapBias) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___scene) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___textureUriHandler) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_textures) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_materials) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ___m_processingNodesStart) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFLoader, ____dataAccessor) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFLoader, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGLTFLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFLoader*, "", "OVRGLTFLoader");
NEED_NO_BOX(::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26*, "", "OVRGLTFLoader/<LoadGLBCoroutine>d__26");
NEED_NO_BOX(::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37*, "", "OVRGLTFLoader/<LoadGLTF>d__37");
NEED_NO_BOX(::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48*, "", "OVRGLTFLoader/<ProcessAnimations>d__48");
NEED_NO_BOX(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38*, "", "OVRGLTFLoader/<ProcessNode>d__38");
NEED_NO_BOX(::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0*, "", "OVRGLTFLoader/<>c__DisplayClass26_0");
