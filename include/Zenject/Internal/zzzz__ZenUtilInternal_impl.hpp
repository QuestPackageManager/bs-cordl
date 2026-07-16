#pragma once
// IWYU pragma private; include "Zenject/Internal/ZenUtilInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_impl.hpp"
#include "Zenject/Internal/zzzz__ZenUtilInternal_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/Internal/zzzz__ZenUtilInternal_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ZenUtilInternal___c::*)()>(&::Zenject::Internal::ZenUtilInternal___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea31a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal___c._GetAllSceneContexts_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>* (
    ::Zenject::Internal::ZenUtilInternal___c::*)(::UnityEngine::GameObject*)>(&::Zenject::Internal::ZenUtilInternal___c::_GetAllSceneContexts_b__3_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ea31a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal___c*>(), { "<GetAllSceneContexts>b__3_0", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal___c._GetRootGameObjects_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::Internal::ZenUtilInternal___c::*)(::UnityEngine::GameObject*)>(
    &::Zenject::Internal::ZenUtilInternal___c::_GetRootGameObjects_b__10_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6ea31f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal___c*>(), { "<GetRootGameObjects>b__10_0", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ZenUtilInternal___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea328c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ZenUtilInternal___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea32d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::Internal::ZenUtilInternal___c::setStaticF___9(::Zenject::Internal::ZenUtilInternal___c* value) {
  ::cordl_internals::setStaticField<::Zenject::Internal::ZenUtilInternal___c*, "<>9", ::Zenject::Internal::ZenUtilInternal___c*>(std::forward<::Zenject::Internal::ZenUtilInternal___c*>(value));
}
inline ::Zenject::Internal::ZenUtilInternal___c* Zenject::Internal::ZenUtilInternal___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::Internal::ZenUtilInternal___c*, "<>9", ::Zenject::Internal::ZenUtilInternal___c*>();
}
inline void Zenject::Internal::ZenUtilInternal___c::setStaticF___9__3_0(
    ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>*, "<>9__3_0",
                                    ::Zenject::Internal::ZenUtilInternal___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>*
Zenject::Internal::ZenUtilInternal___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>*, "<>9__3_0",
                                           ::Zenject::Internal::ZenUtilInternal___c*>();
}
inline void Zenject::Internal::ZenUtilInternal___c::setStaticF___9__10_0(::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>*, "<>9__10_0", ::Zenject::Internal::ZenUtilInternal___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>* Zenject::Internal::ZenUtilInternal___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::GameObject>, bool>*, "<>9__10_0", ::Zenject::Internal::ZenUtilInternal___c*>();
}
inline void Zenject::Internal::ZenUtilInternal___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>* Zenject::Internal::ZenUtilInternal___c::_GetAllSceneContexts_b__3_0(::UnityEngine::GameObject* root) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal___c*>(), { "<GetAllSceneContexts>b__3_0", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>(this, ___internal_method, root);
}
inline bool Zenject::Internal::ZenUtilInternal___c::_GetRootGameObjects_b__10_0(::UnityEngine::GameObject* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal___c*>(), { "<GetRootGameObjects>b__10_0", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::ZenUtilInternal___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ZenUtilInternal___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ZenUtilInternal___c* Zenject::Internal::ZenUtilInternal___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ZenUtilInternal___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ZenUtilInternal___c::ZenUtilInternal___c() {}
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0::*)()>(&::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea3148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0._GetRootGameObjects_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0::*)(::UnityEngine::GameObject*)>(
    &::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0::_GetRootGameObjects_b__1)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6ea3464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0*>(),
                                                                                           { "<GetRootGameObjects>b__1", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::SceneManagement::Scene& Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0::__cordl_internal_get_scene() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scene;
}
constexpr ::UnityEngine::SceneManagement::Scene const& Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0::__cordl_internal_get_scene() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scene;
}
constexpr void Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0::__cordl_internal_set_scene(::UnityEngine::SceneManagement::Scene value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scene = value;
}
inline void Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0::_GetRootGameObjects_b__1(::UnityEngine::GameObject* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0*>(),
                                                                                         { "<GetRootGameObjects>b__1", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0* Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ZenUtilInternal___c__DisplayClass10_0::ZenUtilInternal___c__DisplayClass10_0() {}
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::*)(int32_t)>(
    &::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ea2398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::*)()>(
    &::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6ea356c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::*)()>(
    &::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x6ea3588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::*)()>(
    &::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::__m__Finally1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6ea3a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3.System_Collections_Generic_IEnumerator_Zenject_SceneContext__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Zenject::SceneContext> (::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::*)()>(
    &::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::System_Collections_Generic_IEnumerator_Zenject_SceneContext__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ea3ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<Zenject.SceneContext>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::*)()>(
    &::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6ea3ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::*)()>(
    &::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ea3b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3.System_Collections_Generic_IEnumerable_Zenject_SceneContext__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::Zenject::SceneContext>>* (::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::*)()>(
        &::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::System_Collections_Generic_IEnumerable_Zenject_SceneContext__GetEnumerator)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6ea3b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<Zenject.SceneContext>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::*)()>(
    &::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea3b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityW<::Zenject::SceneContext>& Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityW<::Zenject::SceneContext> const& Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::__cordl_internal_set___2__current(::UnityW<::Zenject::SceneContext> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>*& Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* const&
Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void
Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline void Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Zenject::SceneContext> Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::System_Collections_Generic_IEnumerator_Zenject_SceneContext__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<Zenject.SceneContext>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Zenject::SceneContext>>(this, ___internal_method);
}
inline void Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::Zenject::SceneContext>>*
Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::System_Collections_Generic_IEnumerable_Zenject_SceneContext__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<Zenject.SceneContext>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::Zenject::SceneContext>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3* Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>"
constexpr Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*
Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::i___System__Collections__Generic__IEnumerable_1___UnityW___Zenject__SceneContext__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::Zenject::SceneContext>>"
constexpr Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::Zenject::SceneContext>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::Zenject::SceneContext>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::Zenject::SceneContext>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::Zenject::SceneContext>>*
Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::i___System__Collections__Generic__IEnumerator_1___UnityW___Zenject__SceneContext__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::Zenject::SceneContext>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ZenUtilInternal__GetAllSceneContexts_d__3::ZenUtilInternal__GetAllSceneContexts_d__3() {}
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal.IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::Zenject::Internal::ZenUtilInternal::IsNull)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6ea2120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(), { "IsNull", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal.AreFunctionsEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Delegate*, ::System::Delegate*)>(&::Zenject::Internal::ZenUtilInternal::AreFunctionsEqual)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6ea213c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(), { "AreFunctionsEqual", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal.GetInheritanceDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*, ::System::Type*)>(&::Zenject::Internal::ZenUtilInternal::GetInheritanceDelta)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6ea221c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(),
                                                                                           { "GetInheritanceDelta", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal.GetAllSceneContexts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>* (*)()>(
    &::Zenject::Internal::ZenUtilInternal::GetAllSceneContexts)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6ea2330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(), { "GetAllSceneContexts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal.AddStateMachineBehaviourAutoInjectersInScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene)>(&::Zenject::Internal::ZenUtilInternal::AddStateMachineBehaviourAutoInjectersInScene)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x6ea23b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(),
                                                             { "AddStateMachineBehaviourAutoInjectersInScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal.AddStateMachineBehaviourAutoInjectersUnderGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Zenject::Internal::ZenUtilInternal::AddStateMachineBehaviourAutoInjectersUnderGameObject)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6ea289c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(),
                                                             { "AddStateMachineBehaviourAutoInjectersUnderGameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal.GetInjectableMonoBehavioursInScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*)>(
    &::Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursInScene)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x6ea29f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(),
                            { "GetInjectableMonoBehavioursInScene",
                              {},
                              { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal.GetInjectableMonoBehavioursUnderGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*)>(
    &::Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursUnderGameObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea3068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(),
                                         { "GetInjectableMonoBehavioursUnderGameObject",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal.GetInjectableMonoBehavioursUnderGameObjectInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*)>(
    &::Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursUnderGameObjectInternal)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x6ea2cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(),
                                         { "GetInjectableMonoBehavioursUnderGameObjectInternal",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal.IsInjectableMonoBehaviourType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Zenject::Internal::ZenUtilInternal::IsInjectableMonoBehaviourType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6ea306c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(), { "IsInjectableMonoBehaviourType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ZenUtilInternal.GetRootGameObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* (*)(::UnityEngine::SceneManagement::Scene)>(
    &::Zenject::Internal::ZenUtilInternal::GetRootGameObjects)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6ea26b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(), { "GetRootGameObjects", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
inline bool Zenject::Internal::ZenUtilInternal::IsNull(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(), { "IsNull", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline bool Zenject::Internal::ZenUtilInternal::AreFunctionsEqual(::System::Delegate* left, ::System::Delegate* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(), { "AreFunctionsEqual", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline int32_t Zenject::Internal::ZenUtilInternal::GetInheritanceDelta(::System::Type* derived, ::System::Type* parent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(),
                                                                                         { "GetInheritanceDelta", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, derived, parent);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>* Zenject::Internal::ZenUtilInternal::GetAllSceneContexts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(), { "GetAllSceneContexts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>(nullptr, ___internal_method);
}
inline void Zenject::Internal::ZenUtilInternal::AddStateMachineBehaviourAutoInjectersInScene(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(),
                                                           { "AddStateMachineBehaviourAutoInjectersInScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene);
}
inline void Zenject::Internal::ZenUtilInternal::AddStateMachineBehaviourAutoInjectersUnderGameObject(::UnityEngine::GameObject* root) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(), { "AddStateMachineBehaviourAutoInjectersUnderGameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, root);
}
inline void Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursInScene(::UnityEngine::SceneManagement::Scene scene,
                                                                                   ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* monoBehaviours) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(),
                          { "GetInjectableMonoBehavioursInScene",
                            {},
                            { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, monoBehaviours);
}
inline void Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursUnderGameObject(::UnityEngine::GameObject* gameObject,
                                                                                           ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* injectableComponents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(),
                                       { "GetInjectableMonoBehavioursUnderGameObject",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, injectableComponents);
}
inline void
Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursUnderGameObjectInternal(::UnityEngine::GameObject* gameObject,
                                                                                       ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* injectableComponents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(),
                                       { "GetInjectableMonoBehavioursUnderGameObjectInternal",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, injectableComponents);
}
inline bool Zenject::Internal::ZenUtilInternal::IsInjectableMonoBehaviourType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(), { "IsInjectableMonoBehaviourType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* Zenject::Internal::ZenUtilInternal::GetRootGameObjects(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ZenUtilInternal*>(), { "GetRootGameObjects", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method, scene);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ZenUtilInternal::ZenUtilInternal() {}
