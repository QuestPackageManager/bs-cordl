#pragma once
// IWYU pragma private; include "GlobalNamespace/PosesRecorder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__PosesRecorder_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__PoseObject_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PosesRecorder___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecorder___c::*)()>(&::GlobalNamespace::PosesRecorder___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e8788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecorder___c._Init_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::PosesRecorder___c::*)(::GlobalNamespace::PoseObject*)>(
    &::GlobalNamespace::PosesRecorder___c::_Init_b__6_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58e878c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder___c*>(), { "<Init>b__6_0", {}, { ::i2c::type_of<::GlobalNamespace::PoseObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecorder___c._Init_b__6_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PosesRecorder___c::*)(::GlobalNamespace::PoseObject*)>(&::GlobalNamespace::PosesRecorder___c::_Init_b__6_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58e87a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder___c*>(), { "<Init>b__6_1", {}, { ::i2c::type_of<::GlobalNamespace::PoseObject*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PosesRecorder___c::setStaticF___9(::GlobalNamespace::PosesRecorder___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PosesRecorder___c*, "<>9", ::GlobalNamespace::PosesRecorder___c*>(std::forward<::GlobalNamespace::PosesRecorder___c*>(value));
}
inline ::GlobalNamespace::PosesRecorder___c* GlobalNamespace::PosesRecorder___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PosesRecorder___c*, "<>9", ::GlobalNamespace::PosesRecorder___c*>();
}
inline void GlobalNamespace::PosesRecorder___c::setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::PoseObject*, ::UnityW<::UnityEngine::Transform>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::PoseObject*, ::UnityW<::UnityEngine::Transform>>*, "<>9__6_0", ::GlobalNamespace::PosesRecorder___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::PoseObject*, ::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::PoseObject*, ::UnityW<::UnityEngine::Transform>>* GlobalNamespace::PosesRecorder___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::PoseObject*, ::UnityW<::UnityEngine::Transform>>*, "<>9__6_0", ::GlobalNamespace::PosesRecorder___c*>();
}
inline void GlobalNamespace::PosesRecorder___c::setStaticF___9__6_1(::System::Func_2<::GlobalNamespace::PoseObject*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::PoseObject*, ::StringW>*, "<>9__6_1", ::GlobalNamespace::PosesRecorder___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::PoseObject*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::PoseObject*, ::StringW>* GlobalNamespace::PosesRecorder___c::getStaticF___9__6_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::PoseObject*, ::StringW>*, "<>9__6_1", ::GlobalNamespace::PosesRecorder___c*>();
}
inline void GlobalNamespace::PosesRecorder___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::PosesRecorder___c::_Init_b__6_0(::GlobalNamespace::PoseObject* ro) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder___c*>(), { "<Init>b__6_0", {}, { ::i2c::type_of<::GlobalNamespace::PoseObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, ro);
}
inline ::StringW GlobalNamespace::PosesRecorder___c::_Init_b__6_1(::GlobalNamespace::PoseObject* ro) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder___c*>(), { "<Init>b__6_1", {}, { ::i2c::type_of<::GlobalNamespace::PoseObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ro);
}
inline ::GlobalNamespace::PosesRecorder___c* GlobalNamespace::PosesRecorder___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesRecorder___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesRecorder___c::PosesRecorder___c() {}
//  Writing Method size for method: ::GlobalNamespace::PosesRecorder.get_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PosesRecordingData* (::GlobalNamespace::PosesRecorder::*)()>(&::GlobalNamespace::PosesRecorder::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e8484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder*>(), { "get_data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecorder.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecorder::*)()>(&::GlobalNamespace::PosesRecorder::LateUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58e848c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecorder.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecorder::*)(
    ::ArrayW<::GlobalNamespace::PoseObject*>, ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*)>(&::GlobalNamespace::PosesRecorder::Init)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x58e5e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder*>(),
                            { "Init", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::PoseObject*>>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecorder.StartRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecorder::*)()>(&::GlobalNamespace::PosesRecorder::StartRecording)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58e685c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder*>(), { "StartRecording", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecorder.RecordTick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecorder::*)(float_t)>(&::GlobalNamespace::PosesRecorder::RecordTick)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x58e84a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder*>(), { "RecordTick", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecorder.StopRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecorder::*)()>(&::GlobalNamespace::PosesRecorder::StopRecording)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58e67d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder*>(), { "StopRecording", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesRecorder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesRecorder::*)()>(&::GlobalNamespace::PosesRecorder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e8730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::PosesRecorder::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::PosesRecorder::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::PosesRecorder::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::PosesRecorder::__cordl_internal_get__transforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::PosesRecorder::__cordl_internal_get__transforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr void GlobalNamespace::PosesRecorder::__cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transforms = value;
}
constexpr ::GlobalNamespace::PosesRecordingData*& GlobalNamespace::PosesRecorder::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::GlobalNamespace::PosesRecordingData* const& GlobalNamespace::PosesRecorder::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::PosesRecorder::__cordl_internal_set__data(::GlobalNamespace::PosesRecordingData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
inline ::GlobalNamespace::PosesRecordingData* GlobalNamespace::PosesRecorder::get_data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder*>(), { "get_data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PosesRecordingData*>(this, ___internal_method);
}
inline void GlobalNamespace::PosesRecorder::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PosesRecorder::Init(::ArrayW<::GlobalNamespace::PoseObject*> poseObjects, ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration* externalCameraCalibration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder*>(),
                          { "Init", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::PoseObject*>>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseObjects, externalCameraCalibration);
}
inline void GlobalNamespace::PosesRecorder::StartRecording() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder*>(), { "StartRecording", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PosesRecorder::RecordTick(float_t time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder*>(), { "RecordTick", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GlobalNamespace::PosesRecorder::StopRecording() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder*>(), { "StopRecording", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PosesRecorder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesRecorder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PosesRecorder* GlobalNamespace::PosesRecorder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesRecorder*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesRecorder::PosesRecorder() {}
