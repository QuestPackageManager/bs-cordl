#pragma once
// IWYU pragma private; include "UnityEngine/OverlapBoxCommand.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__QueryParameters_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__OverlapBoxCommand_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobsUtility_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__ColliderHit_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::OverlapBoxCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapBoxCommand::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                                                  ::UnityEngine::QueryParameters)>(&::UnityEngine::OverlapBoxCommand::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6b94c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { ".ctor",
                                                                                                {},
                                                                                                { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                  ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::QueryParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapBoxCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapBoxCommand::*)(
    ::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::QueryParameters)>(&::UnityEngine::OverlapBoxCommand::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b94cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::QueryParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapBoxCommand.get_center
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::OverlapBoxCommand::*)()>(&::UnityEngine::OverlapBoxCommand::get_center)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b94d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "get_center", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapBoxCommand.set_center
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapBoxCommand::*)(::UnityEngine::Vector3)>(&::UnityEngine::OverlapBoxCommand::set_center)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b94d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "set_center", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapBoxCommand.get_halfExtents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::OverlapBoxCommand::*)()>(&::UnityEngine::OverlapBoxCommand::get_halfExtents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b94d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "get_halfExtents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapBoxCommand.set_halfExtents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapBoxCommand::*)(::UnityEngine::Vector3)>(&::UnityEngine::OverlapBoxCommand::set_halfExtents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b94d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "set_halfExtents", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapBoxCommand.get_orientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::OverlapBoxCommand::*)()>(&::UnityEngine::OverlapBoxCommand::get_orientation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b94d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "get_orientation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapBoxCommand.set_orientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapBoxCommand::*)(::UnityEngine::Quaternion)>(&::UnityEngine::OverlapBoxCommand::set_orientation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b94d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "set_orientation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapBoxCommand.get_physicsScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsScene (::UnityEngine::OverlapBoxCommand::*)()>(&::UnityEngine::OverlapBoxCommand::get_physicsScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b94d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "get_physicsScene", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapBoxCommand.set_physicsScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::OverlapBoxCommand::*)(::UnityEngine::PhysicsScene)>(&::UnityEngine::OverlapBoxCommand::set_physicsScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b94d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "set_physicsScene", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapBoxCommand.ScheduleBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeArray_1<::UnityEngine::OverlapBoxCommand>,
                                                                                    ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>, int32_t, int32_t, ::Unity::Jobs::JobHandle)>(
    &::UnityEngine::OverlapBoxCommand::ScheduleBatch)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6b94d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(),
                                                                                           { "ScheduleBatch",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::OverlapBoxCommand>>(),
                                                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapBoxCommand.ScheduleOverlapBoxBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, void*, int32_t, void*, int32_t,
                                                                                    int32_t, int32_t)>(&::UnityEngine::OverlapBoxCommand::ScheduleOverlapBoxBatch)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b94f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(),
                                                { "ScheduleOverlapBoxBatch",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::OverlapBoxCommand.ScheduleOverlapBoxBatch_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, void*, int32_t, void*, int32_t, int32_t, int32_t,
                                                                ::by_ref<::Unity::Jobs::JobHandle>)>(&::UnityEngine::OverlapBoxCommand::ScheduleOverlapBoxBatch_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b94fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(),
                            { "ScheduleOverlapBoxBatch_Injected",
                              {},
                              { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::OverlapBoxCommand::_ctor(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                                                  ::UnityEngine::QueryParameters queryParameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { ".ctor",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::QueryParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, halfExtents, orientation, queryParameters);
}
inline void UnityEngine::OverlapBoxCommand::_ctor(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                                                  ::UnityEngine::QueryParameters queryParameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::QueryParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, physicsScene, center, halfExtents, orientation, queryParameters);
}
inline ::UnityEngine::Vector3 UnityEngine::OverlapBoxCommand::get_center() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "get_center", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::OverlapBoxCommand::set_center(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "set_center", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::OverlapBoxCommand::get_halfExtents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "get_halfExtents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::OverlapBoxCommand::set_halfExtents(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "set_halfExtents", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::OverlapBoxCommand::get_orientation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "get_orientation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline void UnityEngine::OverlapBoxCommand::set_orientation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "set_orientation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::PhysicsScene UnityEngine::OverlapBoxCommand::get_physicsScene() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "get_physicsScene", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene>(*this, ___internal_method);
}
inline void UnityEngine::OverlapBoxCommand::set_physicsScene(::UnityEngine::PhysicsScene value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "set_physicsScene", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Jobs::JobHandle UnityEngine::OverlapBoxCommand::ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::OverlapBoxCommand> commands,
                                                                              ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit> results, int32_t minCommandsPerJob, int32_t maxHits,
                                                                              ::Unity::Jobs::JobHandle dependsOn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(), { "ScheduleBatch",
                                                                                              {},
                                                                                              { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::OverlapBoxCommand>>(),
                                                                                                ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>>(),
                                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, commands, results, minCommandsPerJob, maxHits, dependsOn);
}
inline ::Unity::Jobs::JobHandle UnityEngine::OverlapBoxCommand::ScheduleOverlapBoxBatch(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, void* commands,
                                                                                        int32_t commandLen, void* result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(),
                                              { "ScheduleOverlapBoxBatch",
                                                {},
                                                { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, parameters, commands, commandLen, result, resultLen, minCommandsPerJob, maxHits);
}
inline void UnityEngine::OverlapBoxCommand::ScheduleOverlapBoxBatch_Injected(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, void* commands,
                                                                             int32_t commandLen, void* result, int32_t resultLen, int32_t minCommandsPerJob, int32_t maxHits,
                                                                             ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::OverlapBoxCommand>(),
                          { "ScheduleOverlapBoxBatch_Injected",
                            {},
                            { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, commands, commandLen, result, resultLen, minCommandsPerJob, maxHits, ret);
}
// Ctor Parameters [CppParam { name: "_center_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_halfExtents_k__BackingField", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_orientation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: Some("{}") }, CppParam { name: "queryParameters", ty: "::UnityEngine::QueryParameters",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::OverlapBoxCommand::OverlapBoxCommand(::UnityEngine::Vector3 _center_k__BackingField, ::UnityEngine::Vector3 _halfExtents_k__BackingField,
                                                              ::UnityEngine::Quaternion _orientation_k__BackingField, ::UnityEngine::PhysicsScene _physicsScene_k__BackingField,
                                                              ::UnityEngine::QueryParameters queryParameters) noexcept {
  this->_center_k__BackingField = _center_k__BackingField;
  this->_halfExtents_k__BackingField = _halfExtents_k__BackingField;
  this->_orientation_k__BackingField = _orientation_k__BackingField;
  this->_physicsScene_k__BackingField = _physicsScene_k__BackingField;
  this->queryParameters = queryParameters;
}
// Ctor Parameters []
constexpr ::UnityEngine::OverlapBoxCommand::OverlapBoxCommand() {}
