#pragma once
// IWYU pragma private; include "UnityEngine\OverlapCapsuleCommand.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "UnityEngine/zzzz__QueryParameters_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__OverlapCapsuleCommand_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobsUtility_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__ColliderHit_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::OverlapCapsuleCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapCapsuleCommand::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::QueryParameters)>(
    &::UnityEngine::OverlapCapsuleCommand::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b985c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::QueryParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapCapsuleCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapCapsuleCommand::*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t,
                                                                                                      ::UnityEngine::QueryParameters)>(&::UnityEngine::OverlapCapsuleCommand::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b98688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::QueryParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapCapsuleCommand.get_point0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::OverlapCapsuleCommand::*)()>(&::UnityEngine::OverlapCapsuleCommand::get_point0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b986a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "get_point0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapCapsuleCommand.set_point0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapCapsuleCommand::*)(::UnityEngine::Vector3)>(&::UnityEngine::OverlapCapsuleCommand::set_point0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b986b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "set_point0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapCapsuleCommand.get_point1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::OverlapCapsuleCommand::*)()>(&::UnityEngine::OverlapCapsuleCommand::get_point1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b986bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "get_point1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapCapsuleCommand.set_point1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapCapsuleCommand::*)(::UnityEngine::Vector3)>(&::UnityEngine::OverlapCapsuleCommand::set_point1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b986c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "set_point1", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapCapsuleCommand.get_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::OverlapCapsuleCommand::*)()>(&::UnityEngine::OverlapCapsuleCommand::get_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b986d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "get_radius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapCapsuleCommand.set_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapCapsuleCommand::*)(float_t)>(&::UnityEngine::OverlapCapsuleCommand::set_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b986dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "set_radius", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapCapsuleCommand.get_physicsScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsScene (::UnityEngine::OverlapCapsuleCommand::*)()>(&::UnityEngine::OverlapCapsuleCommand::get_physicsScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b986e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "get_physicsScene", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapCapsuleCommand.set_physicsScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapCapsuleCommand::*)(::UnityEngine::PhysicsScene)>(&::UnityEngine::OverlapCapsuleCommand::set_physicsScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b986ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "set_physicsScene", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapCapsuleCommand.ScheduleBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeArray_1<::UnityEngine::OverlapCapsuleCommand>,
                                                                                    ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>, int32_t, int32_t, ::Unity::Jobs::JobHandle)>(
    &::UnityEngine::OverlapCapsuleCommand::ScheduleBatch)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6b986f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(),
                                                                                           { "ScheduleBatch",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::OverlapCapsuleCommand>>(),
                                                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapCapsuleCommand.ScheduleOverlapCapsuleBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, void*, int32_t, void*, int32_t,
                                                                                    int32_t, int32_t)>(&::UnityEngine::OverlapCapsuleCommand::ScheduleOverlapCapsuleBatch)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b988a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(),
                                                { "ScheduleOverlapCapsuleBatch",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapCapsuleCommand.ScheduleOverlapCapsuleBatch_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, void*, int32_t, void*, int32_t, int32_t, int32_t,
                                                                ::by_ref<::Unity::Jobs::JobHandle>)>(&::UnityEngine::OverlapCapsuleCommand::ScheduleOverlapCapsuleBatch_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b9893c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(),
                            { "ScheduleOverlapCapsuleBatch_Injected",
                              {},
                              { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::OverlapCapsuleCommand::_ctor(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, ::UnityEngine::QueryParameters queryParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::QueryParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, point0, point1, radius, queryParameters);
}
inline void UnityEngine::OverlapCapsuleCommand::_ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                                      ::UnityEngine::QueryParameters queryParameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::QueryParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, physicsScene, point0, point1, radius, queryParameters);
}
inline ::UnityEngine::Vector3 UnityEngine::OverlapCapsuleCommand::get_point0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "get_point0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::OverlapCapsuleCommand::set_point0(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "set_point0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::OverlapCapsuleCommand::get_point1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "get_point1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::OverlapCapsuleCommand::set_point1(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "set_point1", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::OverlapCapsuleCommand::get_radius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "get_radius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::OverlapCapsuleCommand::set_radius(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "set_radius", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::PhysicsScene UnityEngine::OverlapCapsuleCommand::get_physicsScene() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "get_physicsScene", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene>(*this, ___internal_method);
}
inline void UnityEngine::OverlapCapsuleCommand::set_physicsScene(::UnityEngine::PhysicsScene value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(), { "set_physicsScene", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Jobs::JobHandle UnityEngine::OverlapCapsuleCommand::ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::OverlapCapsuleCommand> commands,
                                                                                  ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit> results, int32_t minCommandsPerJob, int32_t maxHits,
                                                                                  ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(),
                                                                                         { "ScheduleBatch",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::OverlapCapsuleCommand>>(),
                                                                                             ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, commands, results, minCommandsPerJob, maxHits, dependsOn);
}
inline ::Unity::Jobs::JobHandle UnityEngine::OverlapCapsuleCommand::ScheduleOverlapCapsuleBatch(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, void* commands,
                                                                                                int32_t commandLen, void* result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(),
                                              { "ScheduleOverlapCapsuleBatch",
                                                {},
                                                { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, parameters, commands, commandLen, result, resultLen, minCommandsPerJob, maxHits);
}
inline void UnityEngine::OverlapCapsuleCommand::ScheduleOverlapCapsuleBatch_Injected(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, void* commands,
                                                                                     int32_t commandLen, void* result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits,
                                                                                     ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapCapsuleCommand>(),
                          { "ScheduleOverlapCapsuleBatch_Injected",
                            {},
                            { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, commands, commandLen, result, resultLen, minCommandsPerJob, maxHits, ret);
}
// Ctor Parameters [CppParam { name: "_point0_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_point1_k__BackingField", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_radius_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: Some("{}") }, CppParam { name: "queryParameters", ty: "::UnityEngine::QueryParameters", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::OverlapCapsuleCommand::OverlapCapsuleCommand(::UnityEngine::Vector3 _point0_k__BackingField, ::UnityEngine::Vector3 _point1_k__BackingField, float_t _radius_k__BackingField,
                                                                      ::UnityEngine::PhysicsScene _physicsScene_k__BackingField, ::UnityEngine::QueryParameters queryParameters) noexcept {
  this->_point0_k__BackingField = _point0_k__BackingField;
  this->_point1_k__BackingField = _point1_k__BackingField;
  this->_radius_k__BackingField = _radius_k__BackingField;
  this->_physicsScene_k__BackingField = _physicsScene_k__BackingField;
  this->queryParameters = queryParameters;
}
// Ctor Parameters []
constexpr ::UnityEngine::OverlapCapsuleCommand::OverlapCapsuleCommand() {}
