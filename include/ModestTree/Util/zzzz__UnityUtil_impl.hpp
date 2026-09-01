#pragma once
// IWYU pragma private; include "ModestTree\Util\UnityUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_impl.hpp"
#include "ModestTree/Util/zzzz__UnityUtil_def.hpp"
#include "ModestTree/Util/zzzz__UnityUtil_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::ModestTree::Util::UnityUtil___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil___c::*)()>(&::ModestTree::Util::UnityUtil___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e43834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil___c._get_AllLoadedScenes_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ModestTree::Util::UnityUtil___c::*)(::UnityEngine::SceneManagement::Scene)>(
    &::ModestTree::Util::UnityUtil___c::_get_AllLoadedScenes_b__3_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e43838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil___c*>(), { "<get_AllLoadedScenes>b__3_0", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil___c._GetRootParentOrSelf_b__15_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::ModestTree::Util::UnityUtil___c::*)(::UnityEngine::Transform*)>(
    &::ModestTree::Util::UnityUtil___c::_GetRootParentOrSelf_b__15_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e43874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil___c*>(), { "<GetRootParentOrSelf>b__15_0", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil___c._GetComponentsInChildrenTopDown_b__18_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ModestTree::Util::UnityUtil___c::*)(::UnityEngine::Component*)>(
    &::ModestTree::Util::UnityUtil___c::_GetComponentsInChildrenTopDown_b__18_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e4388c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil___c*>(), { "<GetComponentsInChildrenTopDown>b__18_0", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil___c._GetComponentsInChildrenBottomUp_b__19_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ModestTree::Util::UnityUtil___c::*)(::UnityEngine::Component*)>(
    &::ModestTree::Util::UnityUtil___c::_GetComponentsInChildrenBottomUp_b__19_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e43918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil___c*>(), { "<GetComponentsInChildrenBottomUp>b__19_0", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil___c._GetAllGameObjects_b__22_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::ModestTree::Util::UnityUtil___c::*)(::UnityEngine::Transform*)>(
    &::ModestTree::Util::UnityUtil___c::_GetAllGameObjects_b__22_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e439a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil___c*>(), { "<GetAllGameObjects>b__22_0", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil___c._GetAllRootGameObjects_b__23_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ModestTree::Util::UnityUtil___c::*)(::UnityEngine::GameObject*)>(&::ModestTree::Util::UnityUtil___c::_GetAllRootGameObjects_b__23_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e439bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil___c*>(), { "<GetAllRootGameObjects>b__23_0", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
inline void ModestTree::Util::UnityUtil___c::setStaticF___9(::ModestTree::Util::UnityUtil___c* value) {
  ::cordl_internals::setStaticField<::ModestTree::Util::UnityUtil___c*, "<>9", ::ModestTree::Util::UnityUtil___c*>(std::forward<::ModestTree::Util::UnityUtil___c*>(value));
}
inline ::ModestTree::Util::UnityUtil___c* ModestTree::Util::UnityUtil___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::ModestTree::Util::UnityUtil___c*, "<>9", ::ModestTree::Util::UnityUtil___c*>();
}
inline void ModestTree::Util::UnityUtil___c::setStaticF___9__3_0(::System::Func_2<::UnityEngine::SceneManagement::Scene, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::SceneManagement::Scene, bool>*, "<>9__3_0", ::ModestTree::Util::UnityUtil___c*>(
      std::forward<::System::Func_2<::UnityEngine::SceneManagement::Scene, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::SceneManagement::Scene, bool>* ModestTree::Util::UnityUtil___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::SceneManagement::Scene, bool>*, "<>9__3_0", ::ModestTree::Util::UnityUtil___c*>();
}
inline void ModestTree::Util::UnityUtil___c::setStaticF___9__15_0(::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>*, "<>9__15_0", ::ModestTree::Util::UnityUtil___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>* ModestTree::Util::UnityUtil___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>*, "<>9__15_0", ::ModestTree::Util::UnityUtil___c*>();
}
inline void ModestTree::Util::UnityUtil___c::setStaticF___9__18_0(::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>*, "<>9__18_0", ::ModestTree::Util::UnityUtil___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>* ModestTree::Util::UnityUtil___c::getStaticF___9__18_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>*, "<>9__18_0", ::ModestTree::Util::UnityUtil___c*>();
}
inline void ModestTree::Util::UnityUtil___c::setStaticF___9__19_0(::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>*, "<>9__19_0", ::ModestTree::Util::UnityUtil___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>* ModestTree::Util::UnityUtil___c::getStaticF___9__19_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::Component>, int32_t>*, "<>9__19_0", ::ModestTree::Util::UnityUtil___c*>();
}
inline void ModestTree::Util::UnityUtil___c::setStaticF___9__22_0(::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>*, "<>9__22_0", ::ModestTree::Util::UnityUtil___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>* ModestTree::Util::UnityUtil___c::getStaticF___9__22_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::Transform>, ::UnityW<::UnityEngine::GameObject>>*, "<>9__22_0", ::ModestTree::Util::UnityUtil___c*>();
}
inline void ModestTree::Util::UnityUtil___c::setStaticF___9__23_0(::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>*, "<>9__23_0", ::ModestTree::Util::UnityUtil___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>* ModestTree::Util::UnityUtil___c::getStaticF___9__23_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>*, "<>9__23_0", ::ModestTree::Util::UnityUtil___c*>();
}
inline void ModestTree::Util::UnityUtil___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ModestTree::Util::UnityUtil___c::_get_AllLoadedScenes_b__3_0(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil___c*>(), { "<get_AllLoadedScenes>b__3_0", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scene);
}
inline ::UnityW<::UnityEngine::GameObject> ModestTree::Util::UnityUtil___c::_GetRootParentOrSelf_b__15_0(::UnityEngine::Transform* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil___c*>(), { "<GetRootParentOrSelf>b__15_0", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, x);
}
inline int32_t ModestTree::Util::UnityUtil___c::_GetComponentsInChildrenTopDown_b__18_0(::UnityEngine::Component* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil___c*>(), { "<GetComponentsInChildrenTopDown>b__18_0", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline int32_t ModestTree::Util::UnityUtil___c::_GetComponentsInChildrenBottomUp_b__19_0(::UnityEngine::Component* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil___c*>(), { "<GetComponentsInChildrenBottomUp>b__19_0", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::UnityW<::UnityEngine::GameObject> ModestTree::Util::UnityUtil___c::_GetAllGameObjects_b__22_0(::UnityEngine::Transform* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil___c*>(), { "<GetAllGameObjects>b__22_0", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, x);
}
inline bool ModestTree::Util::UnityUtil___c::_GetAllRootGameObjects_b__23_0(::UnityEngine::GameObject* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil___c*>(), { "<GetAllRootGameObjects>b__23_0", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::ModestTree::Util::UnityUtil___c* ModestTree::Util::UnityUtil___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ModestTree::Util::UnityUtil___c*>());
}
// Ctor Parameters []
constexpr ::ModestTree::Util::UnityUtil___c::UnityUtil___c() {}
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildren_d__21._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::*)(int32_t)>(&::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e43540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildren_d__21.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::*)()>(
    &::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e43a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildren_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::*)()>(&::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x6e43a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildren_d__21.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::*)()>(&::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__m__Finally1)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e43ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildren_d__21.System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::*)()>(
    &::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e43da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildren_d__21.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::*)()>(
    &::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e43dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildren_d__21.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::*)()>(
    &::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e43de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildren_d__21.System_Collections_Generic_IEnumerable_UnityEngine_GameObject__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>* (::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::*)()>(
        &::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::System_Collections_Generic_IEnumerable_UnityEngine_GameObject__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e43dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildren_d__21.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::*)()>(
    &::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e43e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_set___2__current(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_get_obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_get_obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr void ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obj = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_get___3__obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__obj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_get___3__obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__obj;
}
constexpr void ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_set___3__obj(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__obj = value;
}
constexpr ::System::Collections::IEnumerator*& ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::IEnumerator* const& ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__cordl_internal_set___7__wrap1(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline void ModestTree::Util::UnityUtil__GetDirectChildren_d__21::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void ModestTree::Util::UnityUtil__GetDirectChildren_d__21::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ModestTree::Util::UnityUtil__GetDirectChildren_d__21::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ModestTree::Util::UnityUtil__GetDirectChildren_d__21::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> ModestTree::Util::UnityUtil__GetDirectChildren_d__21::System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void ModestTree::Util::UnityUtil__GetDirectChildren_d__21::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* ModestTree::Util::UnityUtil__GetDirectChildren_d__21::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>*
ModestTree::Util::UnityUtil__GetDirectChildren_d__21::System_Collections_Generic_IEnumerable_UnityEngine_GameObject__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* ModestTree::Util::UnityUtil__GetDirectChildren_d__21::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::ModestTree::Util::UnityUtil__GetDirectChildren_d__21* ModestTree::Util::UnityUtil__GetDirectChildren_d__21::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ModestTree::Util::UnityUtil__GetDirectChildren_d__21*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>"
constexpr ModestTree::Util::UnityUtil__GetDirectChildren_d__21::operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*
ModestTree::Util::UnityUtil__GetDirectChildren_d__21::i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__GameObject__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr ModestTree::Util::UnityUtil__GetDirectChildren_d__21::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* ModestTree::Util::UnityUtil__GetDirectChildren_d__21::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>"
constexpr ModestTree::Util::UnityUtil__GetDirectChildren_d__21::operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>*
ModestTree::Util::UnityUtil__GetDirectChildren_d__21::i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__GameObject__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr ModestTree::Util::UnityUtil__GetDirectChildren_d__21::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* ModestTree::Util::UnityUtil__GetDirectChildren_d__21::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr ModestTree::Util::UnityUtil__GetDirectChildren_d__21::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ModestTree::Util::UnityUtil__GetDirectChildren_d__21::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ModestTree::Util::UnityUtil__GetDirectChildren_d__21::UnityUtil__GetDirectChildren_d__21() {}
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::*)(int32_t)>(
    &::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e434b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::*)()>(
    &::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e43e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::*)()>(
    &::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x6e43ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::*)()>(
    &::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__m__Finally1)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e44148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20.System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::*)()>(
    &::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e44208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::*)()>(
    &::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e44210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::*)()>(
    &::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e44248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20.System_Collections_Generic_IEnumerable_UnityEngine_GameObject__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>* (::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::*)()>(
        &::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::System_Collections_Generic_IEnumerable_UnityEngine_GameObject__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e44250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::*)()>(
    &::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e442e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_set___2__current(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_get_obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_get_obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr void ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obj = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_get___3__obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__obj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_get___3__obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__obj;
}
constexpr void ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_set___3__obj(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__obj = value;
}
constexpr ::System::Collections::IEnumerator*& ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::IEnumerator* const& ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__cordl_internal_set___7__wrap1(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline void ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>*
ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::System_Collections_Generic_IEnumerable_UnityEngine_GameObject__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20* ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>"
constexpr ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*
ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__GameObject__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>"
constexpr ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>*
ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__GameObject__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::GameObject>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ModestTree::Util::UnityUtil__GetDirectChildrenAndSelf_d__20::UnityUtil__GetDirectChildrenAndSelf_d__20() {}
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParents_d__16._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetParents_d__16::*)(int32_t)>(&::ModestTree::Util::UnityUtil__GetParents_d__16::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e43180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParents_d__16.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetParents_d__16::*)()>(&::ModestTree::Util::UnityUtil__GetParents_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e442ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParents_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ModestTree::Util::UnityUtil__GetParents_d__16::*)()>(&::ModestTree::Util::UnityUtil__GetParents_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x6e44308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParents_d__16.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetParents_d__16::*)()>(&::ModestTree::Util::UnityUtil__GetParents_d__16::__m__Finally1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e44600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParents_d__16.System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::ModestTree::Util::UnityUtil__GetParents_d__16::*)()>(
    &::ModestTree::Util::UnityUtil__GetParents_d__16::System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e446b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParents_d__16.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetParents_d__16::*)()>(
    &::ModestTree::Util::UnityUtil__GetParents_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e446bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParents_d__16.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ModestTree::Util::UnityUtil__GetParents_d__16::*)()>(
    &::ModestTree::Util::UnityUtil__GetParents_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e446f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParents_d__16.System_Collections_Generic_IEnumerable_UnityEngine_Transform__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* (::ModestTree::Util::UnityUtil__GetParents_d__16::*)()>(
    &::ModestTree::Util::UnityUtil__GetParents_d__16::System_Collections_Generic_IEnumerable_UnityEngine_Transform__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e446fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParents_d__16.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::ModestTree::Util::UnityUtil__GetParents_d__16::*)()>(
    &::ModestTree::Util::UnityUtil__GetParents_d__16::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e44794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityW<::UnityEngine::Transform> const& ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_set___2__current(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_get_transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_get_transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr void ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_get___3__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_get___3__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__transform;
}
constexpr void ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_set___3__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__transform = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*& ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* const& ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void ModestTree::Util::UnityUtil__GetParents_d__16::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline void ModestTree::Util::UnityUtil__GetParents_d__16::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void ModestTree::Util::UnityUtil__GetParents_d__16::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ModestTree::Util::UnityUtil__GetParents_d__16::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ModestTree::Util::UnityUtil__GetParents_d__16::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> ModestTree::Util::UnityUtil__GetParents_d__16::System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { "System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void ModestTree::Util::UnityUtil__GetParents_d__16::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* ModestTree::Util::UnityUtil__GetParents_d__16::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*
ModestTree::Util::UnityUtil__GetParents_d__16::System_Collections_Generic_IEnumerable_UnityEngine_Transform__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* ModestTree::Util::UnityUtil__GetParents_d__16::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParents_d__16*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::ModestTree::Util::UnityUtil__GetParents_d__16* ModestTree::Util::UnityUtil__GetParents_d__16::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ModestTree::Util::UnityUtil__GetParents_d__16*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>"
constexpr ModestTree::Util::UnityUtil__GetParents_d__16::operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>*
ModestTree::Util::UnityUtil__GetParents_d__16::i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__Transform__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr ModestTree::Util::UnityUtil__GetParents_d__16::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* ModestTree::Util::UnityUtil__GetParents_d__16::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>"
constexpr ModestTree::Util::UnityUtil__GetParents_d__16::operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*
ModestTree::Util::UnityUtil__GetParents_d__16::i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__Transform__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr ModestTree::Util::UnityUtil__GetParents_d__16::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* ModestTree::Util::UnityUtil__GetParents_d__16::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr ModestTree::Util::UnityUtil__GetParents_d__16::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ModestTree::Util::UnityUtil__GetParents_d__16::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ModestTree::Util::UnityUtil__GetParents_d__16::UnityUtil__GetParents_d__16() {}
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::*)(int32_t)>(&::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e431a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::*)()>(
    &::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e44798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::*)()>(&::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x6e447b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::*)()>(&::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__m__Finally1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e44ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17.System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::*)()>(
    &::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e44b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::*)()>(
    &::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e44b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::*)()>(
    &::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e44bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17.System_Collections_Generic_IEnumerable_UnityEngine_Transform__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* (::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::*)()>(
        &::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::System_Collections_Generic_IEnumerable_UnityEngine_Transform__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e44bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::*)()>(
    &::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e44c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityW<::UnityEngine::Transform> const& ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_set___2__current(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_get_transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_get_transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr void ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_get___3__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_get___3__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__transform;
}
constexpr void ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_set___3__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__transform = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*& ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* const& ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline void ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*
ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::System_Collections_Generic_IEnumerable_UnityEngine_Transform__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17* ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>"
constexpr ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>*
ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__Transform__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>"
constexpr ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*
ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__Transform__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Transform>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ModestTree::Util::UnityUtil__GetParentsAndSelf_d__17::UnityUtil__GetParentsAndSelf_d__17() {}
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__get_AllScenes_d__1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__get_AllScenes_d__1::*)(int32_t)>(&::ModestTree::Util::UnityUtil__get_AllScenes_d__1::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e42b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__get_AllScenes_d__1.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__get_AllScenes_d__1::*)()>(&::ModestTree::Util::UnityUtil__get_AllScenes_d__1::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e44c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__get_AllScenes_d__1.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ModestTree::Util::UnityUtil__get_AllScenes_d__1::*)()>(&::ModestTree::Util::UnityUtil__get_AllScenes_d__1::MoveNext)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6e44c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__get_AllScenes_d__1.System_Collections_Generic_IEnumerator_UnityEngine_SceneManagement_Scene__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (::ModestTree::Util::UnityUtil__get_AllScenes_d__1::*)()>(
    &::ModestTree::Util::UnityUtil__get_AllScenes_d__1::System_Collections_Generic_IEnumerator_UnityEngine_SceneManagement_Scene__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e44d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.SceneManagement.Scene>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__get_AllScenes_d__1.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ModestTree::Util::UnityUtil__get_AllScenes_d__1::*)()>(
    &::ModestTree::Util::UnityUtil__get_AllScenes_d__1::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e44d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__get_AllScenes_d__1.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ModestTree::Util::UnityUtil__get_AllScenes_d__1::*)()>(
    &::ModestTree::Util::UnityUtil__get_AllScenes_d__1::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e44d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__get_AllScenes_d__1.System_Collections_Generic_IEnumerable_UnityEngine_SceneManagement_Scene__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* (::ModestTree::Util::UnityUtil__get_AllScenes_d__1::*)()>(
    &::ModestTree::Util::UnityUtil__get_AllScenes_d__1::System_Collections_Generic_IEnumerable_UnityEngine_SceneManagement_Scene__GetEnumerator)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e44dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.SceneManagement.Scene>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil__get_AllScenes_d__1.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::ModestTree::Util::UnityUtil__get_AllScenes_d__1::*)()>(
    &::ModestTree::Util::UnityUtil__get_AllScenes_d__1::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e44e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& ModestTree::Util::UnityUtil__get_AllScenes_d__1::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& ModestTree::Util::UnityUtil__get_AllScenes_d__1::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void ModestTree::Util::UnityUtil__get_AllScenes_d__1::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::SceneManagement::Scene& ModestTree::Util::UnityUtil__get_AllScenes_d__1::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::SceneManagement::Scene const& ModestTree::Util::UnityUtil__get_AllScenes_d__1::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void ModestTree::Util::UnityUtil__get_AllScenes_d__1::__cordl_internal_set___2__current(::UnityEngine::SceneManagement::Scene value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& ModestTree::Util::UnityUtil__get_AllScenes_d__1::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& ModestTree::Util::UnityUtil__get_AllScenes_d__1::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void ModestTree::Util::UnityUtil__get_AllScenes_d__1::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr int32_t& ModestTree::Util::UnityUtil__get_AllScenes_d__1::__cordl_internal_get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
constexpr int32_t const& ModestTree::Util::UnityUtil__get_AllScenes_d__1::__cordl_internal_get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
constexpr void ModestTree::Util::UnityUtil__get_AllScenes_d__1::__cordl_internal_set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__2 = value;
}
inline void ModestTree::Util::UnityUtil__get_AllScenes_d__1::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void ModestTree::Util::UnityUtil__get_AllScenes_d__1::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ModestTree::Util::UnityUtil__get_AllScenes_d__1::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::SceneManagement::Scene ModestTree::Util::UnityUtil__get_AllScenes_d__1::System_Collections_Generic_IEnumerator_UnityEngine_SceneManagement_Scene__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.SceneManagement.Scene>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(this, ___internal_method);
}
inline void ModestTree::Util::UnityUtil__get_AllScenes_d__1::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* ModestTree::Util::UnityUtil__get_AllScenes_d__1::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*
ModestTree::Util::UnityUtil__get_AllScenes_d__1::System_Collections_Generic_IEnumerable_UnityEngine_SceneManagement_Scene__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.SceneManagement.Scene>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* ModestTree::Util::UnityUtil__get_AllScenes_d__1::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::ModestTree::Util::UnityUtil__get_AllScenes_d__1* ModestTree::Util::UnityUtil__get_AllScenes_d__1::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ModestTree::Util::UnityUtil__get_AllScenes_d__1*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>"
constexpr ModestTree::Util::UnityUtil__get_AllScenes_d__1::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>*
ModestTree::Util::UnityUtil__get_AllScenes_d__1::i___System__Collections__Generic__IEnumerable_1___UnityEngine__SceneManagement__Scene_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr ModestTree::Util::UnityUtil__get_AllScenes_d__1::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* ModestTree::Util::UnityUtil__get_AllScenes_d__1::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>"
constexpr ModestTree::Util::UnityUtil__get_AllScenes_d__1::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*
ModestTree::Util::UnityUtil__get_AllScenes_d__1::i___System__Collections__Generic__IEnumerator_1___UnityEngine__SceneManagement__Scene_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr ModestTree::Util::UnityUtil__get_AllScenes_d__1::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* ModestTree::Util::UnityUtil__get_AllScenes_d__1::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr ModestTree::Util::UnityUtil__get_AllScenes_d__1::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ModestTree::Util::UnityUtil__get_AllScenes_d__1::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ModestTree::Util::UnityUtil__get_AllScenes_d__1::UnityUtil__get_AllScenes_d__1() {}
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.get_AllScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>* (*)()>(&::ModestTree::Util::UnityUtil::get_AllScenes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e42b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "get_AllScenes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.get_AllLoadedScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>* (*)()>(
    &::ModestTree::Util::UnityUtil::get_AllLoadedScenes)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6e42bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "get_AllLoadedScenes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.get_IsAltKeyDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::ModestTree::Util::UnityUtil::get_IsAltKeyDown)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e42cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "get_IsAltKeyDown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.get_IsControlKeyDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::ModestTree::Util::UnityUtil::get_IsControlKeyDown)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e42d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "get_IsControlKeyDown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.get_IsShiftKeyDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::ModestTree::Util::UnityUtil::get_IsShiftKeyDown)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e42d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "get_IsShiftKeyDown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.get_WasShiftKeyJustPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::ModestTree::Util::UnityUtil::get_WasShiftKeyJustPressed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e42df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "get_WasShiftKeyJustPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.get_WasAltKeyJustPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::ModestTree::Util::UnityUtil::get_WasAltKeyJustPressed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e42e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "get_WasAltKeyJustPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.GetDepthLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*)>(&::ModestTree::Util::UnityUtil::GetDepthLevel)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e42ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetDepthLevel", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.GetRootParentOrSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*)>(&::ModestTree::Util::UnityUtil::GetRootParentOrSelf)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6e42f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetRootParentOrSelf", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.GetParents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>* (*)(::UnityEngine::Transform*)>(
    &::ModestTree::Util::UnityUtil::GetParents)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e43110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetParents", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.GetParentsAndSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>* (*)(::UnityEngine::Transform*)>(
    &::ModestTree::Util::UnityUtil::GetParentsAndSelf)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e430a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetParentsAndSelf", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.GetComponentsInChildrenTopDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>* (*)(::UnityEngine::GameObject*, bool)>(
    &::ModestTree::Util::UnityUtil::GetComponentsInChildrenTopDown)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e431c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetComponentsInChildrenTopDown", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.GetComponentsInChildrenBottomUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>* (*)(::UnityEngine::GameObject*, bool)>(
    &::ModestTree::Util::UnityUtil::GetComponentsInChildrenBottomUp)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e43300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetComponentsInChildrenBottomUp", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.GetDirectChildrenAndSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* (*)(::UnityEngine::GameObject*)>(
    &::ModestTree::Util::UnityUtil::GetDirectChildrenAndSelf)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e43440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetDirectChildrenAndSelf", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.GetDirectChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* (*)(::UnityEngine::GameObject*)>(
    &::ModestTree::Util::UnityUtil::GetDirectChildren)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e434d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetDirectChildren", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.GetAllGameObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* (*)()>(&::ModestTree::Util::UnityUtil::GetAllGameObjects)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6e43560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetAllGameObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::Util::UnityUtil.GetAllRootGameObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (*)()>(&::ModestTree::Util::UnityUtil::GetAllRootGameObjects)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e436b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetAllRootGameObjects", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>* ModestTree::Util::UnityUtil::get_AllScenes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "get_AllScenes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>* ModestTree::Util::UnityUtil::get_AllLoadedScenes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "get_AllLoadedScenes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>*>(nullptr, ___internal_method);
}
inline bool ModestTree::Util::UnityUtil::get_IsAltKeyDown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "get_IsAltKeyDown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool ModestTree::Util::UnityUtil::get_IsControlKeyDown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "get_IsControlKeyDown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool ModestTree::Util::UnityUtil::get_IsShiftKeyDown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "get_IsShiftKeyDown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool ModestTree::Util::UnityUtil::get_WasShiftKeyJustPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "get_WasShiftKeyJustPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool ModestTree::Util::UnityUtil::get_WasAltKeyJustPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "get_WasAltKeyJustPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t ModestTree::Util::UnityUtil::GetDepthLevel(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetDepthLevel", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform);
}
inline ::UnityW<::UnityEngine::GameObject> ModestTree::Util::UnityUtil::GetRootParentOrSelf(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetRootParentOrSelf", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, gameObject);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>* ModestTree::Util::UnityUtil::GetParents(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetParents", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>*>(nullptr, ___internal_method, transform);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>* ModestTree::Util::UnityUtil::GetParentsAndSelf(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetParentsAndSelf", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Transform>>*>(nullptr, ___internal_method, transform);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>* ModestTree::Util::UnityUtil::GetComponentsInChildrenTopDown(::UnityEngine::GameObject* gameObject,
                                                                                                                                                      bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetComponentsInChildrenTopDown", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>(nullptr, ___internal_method, gameObject, includeInactive);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>* ModestTree::Util::UnityUtil::GetComponentsInChildrenBottomUp(::UnityEngine::GameObject* gameObject,
                                                                                                                                                       bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetComponentsInChildrenBottomUp", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>(nullptr, ___internal_method, gameObject, includeInactive);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* ModestTree::Util::UnityUtil::GetDirectChildrenAndSelf(::UnityEngine::GameObject* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetDirectChildrenAndSelf", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method, obj);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* ModestTree::Util::UnityUtil::GetDirectChildren(::UnityEngine::GameObject* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetDirectChildren", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method, obj);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* ModestTree::Util::UnityUtil::GetAllGameObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetAllGameObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ModestTree::Util::UnityUtil::GetAllRootGameObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ModestTree::Util::UnityUtil*>(), { "GetAllRootGameObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::ModestTree::Util::UnityUtil::UnityUtil() {}
