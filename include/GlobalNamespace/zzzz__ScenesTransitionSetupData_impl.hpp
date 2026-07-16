#pragma once
// IWYU pragma private; include "GlobalNamespace/ScenesTransitionSetupData.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupData.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ScenesTransitionSetupData::*)()>(&::GlobalNamespace::ScenesTransitionSetupData::get_name)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3306820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupData.get_scenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::ScenesTransitionSetupData::*)()>(&::GlobalNamespace::ScenesTransitionSetupData::get_scenes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3306848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(), { "get_scenes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupData.set_scenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupData::*)(::ArrayW<::StringW>)>(&::GlobalNamespace::ScenesTransitionSetupData::set_scenes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3306850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(), { "set_scenes", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupData::*)()>(&::GlobalNamespace::ScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3306700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupData::*)(::StringW, ::ArrayW<::GlobalNamespace::SceneSetupData*>)>(
    &::GlobalNamespace::ScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3306860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::SceneSetupData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupData::*)(::ArrayW<::StringW>, ::ArrayW<::GlobalNamespace::SceneSetupData*>)>(
    &::GlobalNamespace::ScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3306858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::SceneSetupData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupData::*)(::ArrayW<::StringW>, ::ArrayW<::GlobalNamespace::SceneSetupData*>)>(
    &::GlobalNamespace::ScenesTransitionSetupData::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3306864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(),
                                                             { "Init", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::SceneSetupData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupData::*)(::StringW, ::ArrayW<::GlobalNamespace::SceneSetupData*>)>(
    &::GlobalNamespace::ScenesTransitionSetupData::Init)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3306680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(),
                                                             { "Init", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::SceneSetupData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupData.BeforeScenesWillBeActivatedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::ScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::ScenesTransitionSetupData::BeforeScenesWillBeActivatedAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x330686c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(), { ::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScenesTransitionSetupData.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScenesTransitionSetupData::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::ScenesTransitionSetupData::InstallBindings)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3303a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(), { "InstallBindings", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& GlobalNamespace::ScenesTransitionSetupData::__cordl_internal_get__scenes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenes_k__BackingField;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::ScenesTransitionSetupData::__cordl_internal_get__scenes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenes_k__BackingField;
}
constexpr void GlobalNamespace::ScenesTransitionSetupData::__cordl_internal_set__scenes_k__BackingField(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scenes_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*>& GlobalNamespace::ScenesTransitionSetupData::__cordl_internal_get__sceneSetupDataArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupDataArray;
}
constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*> const& GlobalNamespace::ScenesTransitionSetupData::__cordl_internal_get__sceneSetupDataArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupDataArray;
}
constexpr void GlobalNamespace::ScenesTransitionSetupData::__cordl_internal_set__sceneSetupDataArray(::ArrayW<::GlobalNamespace::SceneSetupData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneSetupDataArray = value;
}
inline ::StringW GlobalNamespace::ScenesTransitionSetupData::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::StringW> GlobalNamespace::ScenesTransitionSetupData::get_scenes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(), { "get_scenes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void GlobalNamespace::ScenesTransitionSetupData::set_scenes(::ArrayW<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(), { "set_scenes", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ScenesTransitionSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScenesTransitionSetupData::_ctor(::StringW scene, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::SceneSetupData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, sceneSetupData);
}
inline void GlobalNamespace::ScenesTransitionSetupData::_ctor(::ArrayW<::StringW> scenes, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::SceneSetupData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scenes, sceneSetupData);
}
inline void GlobalNamespace::ScenesTransitionSetupData::Init(::ArrayW<::StringW> newScenes, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(),
                                                           { "Init", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::SceneSetupData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newScenes, sceneSetupData);
}
inline void GlobalNamespace::ScenesTransitionSetupData::Init(::StringW scene, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(),
                                                           { "Init", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::SceneSetupData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, sceneSetupData);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::ScenesTransitionSetupData::BeforeScenesWillBeActivatedAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::ScenesTransitionSetupData::InstallBindings(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScenesTransitionSetupData*>(), { "InstallBindings", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::GlobalNamespace::ScenesTransitionSetupData* GlobalNamespace::ScenesTransitionSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScenesTransitionSetupData*>());
}
inline ::GlobalNamespace::ScenesTransitionSetupData* GlobalNamespace::ScenesTransitionSetupData::New_ctor(::StringW scene, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScenesTransitionSetupData*>(scene, sceneSetupData));
}
inline ::GlobalNamespace::ScenesTransitionSetupData* GlobalNamespace::ScenesTransitionSetupData::New_ctor(::ArrayW<::StringW> scenes, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScenesTransitionSetupData*>(scenes, sceneSetupData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScenesTransitionSetupData::ScenesTransitionSetupData() {}
