#pragma once
// IWYU pragma private; include "UnityEngine/OverlapSphereCommand.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "UnityEngine/zzzz__QueryParameters_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__OverlapSphereCommand_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobsUtility_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__ColliderHit_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::OverlapSphereCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapSphereCommand::*)(::UnityEngine::Vector3, float_t, ::UnityEngine::QueryParameters)>(
    &::UnityEngine::OverlapSphereCommand::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b94850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::QueryParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapSphereCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapSphereCommand::*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, float_t, ::UnityEngine::QueryParameters)>(
    &::UnityEngine::OverlapSphereCommand::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b948f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(), { ".ctor",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                            ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::QueryParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapSphereCommand.get_point
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::OverlapSphereCommand::*)()>(&::UnityEngine::OverlapSphereCommand::get_point)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b9490c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(), { "get_point", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapSphereCommand.set_point
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapSphereCommand::*)(::UnityEngine::Vector3)>(&::UnityEngine::OverlapSphereCommand::set_point)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b94918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(), { "set_point", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapSphereCommand.get_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::OverlapSphereCommand::*)()>(&::UnityEngine::OverlapSphereCommand::get_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b94924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(), { "get_radius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapSphereCommand.set_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapSphereCommand::*)(float_t)>(&::UnityEngine::OverlapSphereCommand::set_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b9492c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(), { "set_radius", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapSphereCommand.get_physicsScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsScene (::UnityEngine::OverlapSphereCommand::*)()>(&::UnityEngine::OverlapSphereCommand::get_physicsScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b94934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(), { "get_physicsScene", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapSphereCommand.set_physicsScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapSphereCommand::*)(::UnityEngine::PhysicsScene)>(&::UnityEngine::OverlapSphereCommand::set_physicsScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b9493c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(), { "set_physicsScene", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapSphereCommand.ScheduleBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>,
                                                                                    ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>, int32_t, int32_t, ::Unity::Jobs::JobHandle)>(
    &::UnityEngine::OverlapSphereCommand::ScheduleBatch)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6b94944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(),
                                                                                           { "ScheduleBatch",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>>(),
                                                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapSphereCommand.ScheduleOverlapSphereBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, void*, int32_t, void*, int32_t,
                                                                                    int32_t, int32_t)>(&::UnityEngine::OverlapSphereCommand::ScheduleOverlapSphereBatch)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b94af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(),
                                                { "ScheduleOverlapSphereBatch",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapSphereCommand.ScheduleOverlapSphereBatch_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, void*, int32_t, void*, int32_t, int32_t, int32_t,
                                                                ::by_ref<::Unity::Jobs::JobHandle>)>(&::UnityEngine::OverlapSphereCommand::ScheduleOverlapSphereBatch_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b94b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(),
                            { "ScheduleOverlapSphereBatch_Injected",
                              {},
                              { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::OverlapSphereCommand::_ctor(::UnityEngine::Vector3 point, float_t radius, ::UnityEngine::QueryParameters queryParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::QueryParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, point, radius, queryParameters);
}
inline void UnityEngine::OverlapSphereCommand::_ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point, float_t radius, ::UnityEngine::QueryParameters queryParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::OverlapSphereCommand>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::QueryParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, physicsScene, point, radius, queryParameters);
}
inline ::UnityEngine::Vector3 UnityEngine::OverlapSphereCommand::get_point() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(), { "get_point", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::OverlapSphereCommand::set_point(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(), { "set_point", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::OverlapSphereCommand::get_radius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(), { "get_radius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::OverlapSphereCommand::set_radius(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(), { "set_radius", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::PhysicsScene UnityEngine::OverlapSphereCommand::get_physicsScene() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(), { "get_physicsScene", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene>(*this, ___internal_method);
}
inline void UnityEngine::OverlapSphereCommand::set_physicsScene(::UnityEngine::PhysicsScene value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(), { "set_physicsScene", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Jobs::JobHandle UnityEngine::OverlapSphereCommand::ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand> commands,
                                                                                 ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit> results, int32_t minCommandsPerJob, int32_t maxHits,
                                                                                 ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(),
                                                                                         { "ScheduleBatch",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>>(),
                                                                                             ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, commands, results, minCommandsPerJob, maxHits, dependsOn);
}
inline ::Unity::Jobs::JobHandle UnityEngine::OverlapSphereCommand::ScheduleOverlapSphereBatch(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, void* commands,
                                                                                              int32_t commandLen, void* result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(),
                                              { "ScheduleOverlapSphereBatch",
                                                {},
                                                { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, parameters, commands, commandLen, result, resultLen, minCommandsPerJob, maxHits);
}
inline void UnityEngine::OverlapSphereCommand::ScheduleOverlapSphereBatch_Injected(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, void* commands,
                                                                                   int32_t commandLen, void* result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits,
                                                                                   ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapSphereCommand>(),
                          { "ScheduleOverlapSphereBatch_Injected",
                            {},
                            { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, commands, commandLen, result, resultLen, minCommandsPerJob, maxHits, ret);
}
// Ctor Parameters [CppParam { name: "_point_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_radius_k__BackingField", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "queryParameters", ty: "::UnityEngine::QueryParameters", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::OverlapSphereCommand::OverlapSphereCommand(::UnityEngine::Vector3 _point_k__BackingField, float_t _radius_k__BackingField,
                                                                    ::UnityEngine::PhysicsScene _physicsScene_k__BackingField, ::UnityEngine::QueryParameters queryParameters) noexcept {
  this->_point_k__BackingField = _point_k__BackingField;
  this->_radius_k__BackingField = _radius_k__BackingField;
  this->_physicsScene_k__BackingField = _physicsScene_k__BackingField;
  this->queryParameters = queryParameters;
}
// Ctor Parameters []
constexpr ::UnityEngine::OverlapSphereCommand::OverlapSphereCommand() {}
