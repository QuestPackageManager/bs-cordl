#pragma once
// IWYU pragma private; include "Zenject\ProjectKernel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MonoKernel_impl.hpp"
#include "Zenject/zzzz__ProjectKernel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__ProjectKernel_def.hpp"
#include "Zenject/zzzz__SceneContextRegistry_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
#include "Zenject/zzzz__ZenjectSettings_def.hpp"
//  Writing Method size for method: ::Zenject::ProjectKernel___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProjectKernel___c__DisplayClass4_0::*)()>(&::Zenject::ProjectKernel___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e94d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel___c__DisplayClass4_0._ForceUnloadAllScenes_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::ProjectKernel___c__DisplayClass4_0::*)(::Zenject::SceneContext*)>(
    &::Zenject::ProjectKernel___c__DisplayClass4_0::_ForceUnloadAllScenes_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e95394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel___c__DisplayClass4_0*>(), { "<ForceUnloadAllScenes>b__0", {}, { ::i2c::type_of<::Zenject::SceneContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel___c__DisplayClass4_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ProjectKernel___c__DisplayClass4_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e95430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel___c__DisplayClass4_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel___c__DisplayClass4_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ProjectKernel___c__DisplayClass4_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e95474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel___c__DisplayClass4_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*& Zenject::ProjectKernel___c__DisplayClass4_0::__cordl_internal_get_sceneOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneOrder;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>* const& Zenject::ProjectKernel___c__DisplayClass4_0::__cordl_internal_get_sceneOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneOrder;
}
constexpr void Zenject::ProjectKernel___c__DisplayClass4_0::__cordl_internal_set_sceneOrder(::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneOrder = value;
}
constexpr ::System::Func_2<::UnityW<::Zenject::SceneContext>, int32_t>*& Zenject::ProjectKernel___c__DisplayClass4_0::__cordl_internal_get___9__0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr ::System::Func_2<::UnityW<::Zenject::SceneContext>, int32_t>* const& Zenject::ProjectKernel___c__DisplayClass4_0::__cordl_internal_get___9__0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr void Zenject::ProjectKernel___c__DisplayClass4_0::__cordl_internal_set___9__0(::System::Func_2<::UnityW<::Zenject::SceneContext>, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__0 = value;
}
inline void Zenject::ProjectKernel___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Zenject::ProjectKernel___c__DisplayClass4_0::_ForceUnloadAllScenes_b__0(::Zenject::SceneContext* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel___c__DisplayClass4_0*>(), { "<ForceUnloadAllScenes>b__0", {}, { ::i2c::type_of<::Zenject::SceneContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::ProjectKernel___c__DisplayClass4_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel___c__DisplayClass4_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ProjectKernel___c__DisplayClass4_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel___c__DisplayClass4_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ProjectKernel___c__DisplayClass4_0* Zenject::ProjectKernel___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ProjectKernel___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::ProjectKernel___c__DisplayClass4_0::ProjectKernel___c__DisplayClass4_0() {}
//  Writing Method size for method: ::Zenject::ProjectKernel.OnApplicationQuit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProjectKernel::*)()>(&::Zenject::ProjectKernel::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e9491c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel*>(), { "OnApplicationQuit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.DestroyEverythingInOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProjectKernel::*)()>(&::Zenject::ProjectKernel::DestroyEverythingInOrder)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e9493c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel*>(), { "DestroyEverythingInOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.ForceUnloadAllScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProjectKernel::*)(bool)>(&::Zenject::ProjectKernel::ForceUnloadAllScenes)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x6e949d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel*>(), { "ForceUnloadAllScenes", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ProjectKernel::*)()>(&::Zenject::ProjectKernel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e94df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.__zenFieldSetter0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::Zenject::ProjectKernel::__zenFieldSetter0)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e94df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel*>(), { "__zenFieldSetter0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.__zenFieldSetter1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::Zenject::ProjectKernel::__zenFieldSetter1)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e94f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel*>(), { "__zenFieldSetter1", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ProjectKernel::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x6e95040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::ZenjectSettings*& Zenject::ProjectKernel::__cordl_internal_get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr ::Zenject::ZenjectSettings* const& Zenject::ProjectKernel::__cordl_internal_get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void Zenject::ProjectKernel::__cordl_internal_set__settings(::Zenject::ZenjectSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settings = value;
}
constexpr ::Zenject::SceneContextRegistry*& Zenject::ProjectKernel::__cordl_internal_get__contextRegistry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextRegistry;
}
constexpr ::Zenject::SceneContextRegistry* const& Zenject::ProjectKernel::__cordl_internal_get__contextRegistry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextRegistry;
}
constexpr void Zenject::ProjectKernel::__cordl_internal_set__contextRegistry(::Zenject::SceneContextRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contextRegistry = value;
}
inline void Zenject::ProjectKernel::OnApplicationQuit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel*>(), { "OnApplicationQuit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::ProjectKernel::DestroyEverythingInOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel*>(), { "DestroyEverythingInOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::ProjectKernel::ForceUnloadAllScenes(bool immediate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel*>(), { "ForceUnloadAllScenes", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, immediate);
}
inline void Zenject::ProjectKernel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::ProjectKernel::__zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel*>(), { "__zenFieldSetter0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline void Zenject::ProjectKernel::__zenFieldSetter1(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel*>(), { "__zenFieldSetter1", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* Zenject::ProjectKernel::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ProjectKernel*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ProjectKernel* Zenject::ProjectKernel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ProjectKernel*>());
}
// Ctor Parameters []
constexpr ::Zenject::ProjectKernel::ProjectKernel() {}
