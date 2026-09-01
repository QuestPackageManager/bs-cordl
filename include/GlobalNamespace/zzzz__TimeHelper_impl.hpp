#pragma once
// IWYU pragma private; include "GlobalNamespace\TimeHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.get_Time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TimeHelper::*)()>(&::GlobalNamespace::TimeHelper::get_Time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3326af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "get_Time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.set_Time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeHelper::*)(float_t)>(&::GlobalNamespace::TimeHelper::set_Time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3326af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "set_Time", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.get_DeltaTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TimeHelper::*)()>(&::GlobalNamespace::TimeHelper::get_DeltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3326b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "get_DeltaTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.set_DeltaTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeHelper::*)(float_t)>(&::GlobalNamespace::TimeHelper::set_DeltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3326b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "set_DeltaTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.get_FixedDeltaTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TimeHelper::*)()>(&::GlobalNamespace::TimeHelper::get_FixedDeltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3326b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "get_FixedDeltaTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.set_FixedDeltaTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeHelper::*)(float_t)>(&::GlobalNamespace::TimeHelper::set_FixedDeltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3326b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "set_FixedDeltaTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.get_InterpolationFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TimeHelper::*)()>(&::GlobalNamespace::TimeHelper::get_InterpolationFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3326b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "get_InterpolationFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.set_InterpolationFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeHelper::*)(float_t)>(&::GlobalNamespace::TimeHelper::set_InterpolationFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3326b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "set_InterpolationFactor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.get_TimeHelperOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::GlobalNamespace::TimeHelper::*)()>(&::GlobalNamespace::TimeHelper::get_TimeHelperOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3326b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "get_TimeHelperOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.set_TimeHelperOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeHelper::*)(::UnityEngine::Vector4)>(&::GlobalNamespace::TimeHelper::set_TimeHelperOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3326b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "set_TimeHelperOffset", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeHelper::*)()>(&::GlobalNamespace::TimeHelper::Awake)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3326b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.FixedUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeHelper::*)()>(&::GlobalNamespace::TimeHelper::FixedUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3326b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "FixedUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeHelper::*)()>(&::GlobalNamespace::TimeHelper::Update)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3326c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.GetFrameCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TimeHelper::*)()>(&::GlobalNamespace::TimeHelper::GetFrameCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3326c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "GetFrameCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.SetTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeHelper::*)(float_t)>(&::GlobalNamespace::TimeHelper::SetTime)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3326574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "SetTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.SetCommandBufferTimeProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeHelper::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::GlobalNamespace::TimeHelper::SetCommandBufferTimeProperties)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3326d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "SetCommandBufferTimeProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.EncodeTimeAsVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(float_t)>(&::GlobalNamespace::TimeHelper::EncodeTimeAsVector)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3326cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "EncodeTimeAsVector", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper.GetShaderTimeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::TimeHelper::GetShaderTimeValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3326cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "GetShaderTimeValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeHelper::*)()>(&::GlobalNamespace::TimeHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3326df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::TimeHelper::__cordl_internal_get__DeltaTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeltaTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::TimeHelper::__cordl_internal_get__DeltaTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeltaTime_k__BackingField;
}
constexpr void GlobalNamespace::TimeHelper::__cordl_internal_set__DeltaTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DeltaTime_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::TimeHelper::__cordl_internal_get__FixedDeltaTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FixedDeltaTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::TimeHelper::__cordl_internal_get__FixedDeltaTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FixedDeltaTime_k__BackingField;
}
constexpr void GlobalNamespace::TimeHelper::__cordl_internal_set__FixedDeltaTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____FixedDeltaTime_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::TimeHelper::__cordl_internal_get__InterpolationFactor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InterpolationFactor_k__BackingField;
}
constexpr float_t const& GlobalNamespace::TimeHelper::__cordl_internal_get__InterpolationFactor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InterpolationFactor_k__BackingField;
}
constexpr void GlobalNamespace::TimeHelper::__cordl_internal_set__InterpolationFactor_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InterpolationFactor_k__BackingField = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::TimeHelper::__cordl_internal_get__TimeHelperOffset_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TimeHelperOffset_k__BackingField;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::TimeHelper::__cordl_internal_get__TimeHelperOffset_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TimeHelperOffset_k__BackingField;
}
constexpr void GlobalNamespace::TimeHelper::__cordl_internal_set__TimeHelperOffset_k__BackingField(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TimeHelperOffset_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::TimeHelper::__cordl_internal_get__time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr float_t const& GlobalNamespace::TimeHelper::__cordl_internal_get__time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr void GlobalNamespace::TimeHelper::__cordl_internal_set__time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____time = value;
}
constexpr int32_t& GlobalNamespace::TimeHelper::__cordl_internal_get__baseFrameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseFrameCount;
}
constexpr int32_t const& GlobalNamespace::TimeHelper::__cordl_internal_get__baseFrameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseFrameCount;
}
constexpr void GlobalNamespace::TimeHelper::__cordl_internal_set__baseFrameCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseFrameCount = value;
}
constexpr float_t& GlobalNamespace::TimeHelper::__cordl_internal_get__accumulator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accumulator;
}
constexpr float_t const& GlobalNamespace::TimeHelper::__cordl_internal_get__accumulator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accumulator;
}
constexpr void GlobalNamespace::TimeHelper::__cordl_internal_set__accumulator(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____accumulator = value;
}
constexpr bool& GlobalNamespace::TimeHelper::__cordl_internal_get__shouldResetAccumulator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldResetAccumulator;
}
constexpr bool const& GlobalNamespace::TimeHelper::__cordl_internal_get__shouldResetAccumulator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldResetAccumulator;
}
constexpr void GlobalNamespace::TimeHelper::__cordl_internal_set__shouldResetAccumulator(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldResetAccumulator = value;
}
inline void GlobalNamespace::TimeHelper::setStaticF_kTimeHelperPropertyID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kTimeHelperPropertyID", ::GlobalNamespace::TimeHelper*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TimeHelper::getStaticF_kTimeHelperPropertyID() {
  return ::cordl_internals::getStaticField<int32_t, "kTimeHelperPropertyID", ::GlobalNamespace::TimeHelper*>();
}
inline void GlobalNamespace::TimeHelper::setStaticF_kTimeID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kTimeID", ::GlobalNamespace::TimeHelper*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TimeHelper::getStaticF_kTimeID() {
  return ::cordl_internals::getStaticField<int32_t, "kTimeID", ::GlobalNamespace::TimeHelper*>();
}
inline float_t GlobalNamespace::TimeHelper::get_Time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "get_Time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TimeHelper::set_Time(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "set_Time", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TimeHelper::get_DeltaTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "get_DeltaTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TimeHelper::set_DeltaTime(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "set_DeltaTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TimeHelper::get_FixedDeltaTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "get_FixedDeltaTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TimeHelper::set_FixedDeltaTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "set_FixedDeltaTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TimeHelper::get_InterpolationFactor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "get_InterpolationFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TimeHelper::set_InterpolationFactor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "set_InterpolationFactor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 GlobalNamespace::TimeHelper::get_TimeHelperOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "get_TimeHelperOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void GlobalNamespace::TimeHelper::set_TimeHelperOffset(::UnityEngine::Vector4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "set_TimeHelperOffset", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TimeHelper::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimeHelper::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "FixedUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimeHelper::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::TimeHelper::GetFrameCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "GetFrameCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TimeHelper::SetTime(float_t time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "SetTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GlobalNamespace::TimeHelper::SetCommandBufferTimeProperties(::UnityEngine::Rendering::CommandBuffer* commandBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "SetCommandBufferTimeProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commandBuffer);
}
inline ::UnityEngine::Vector4 GlobalNamespace::TimeHelper::EncodeTimeAsVector(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "EncodeTimeAsVector", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, time);
}
inline float_t GlobalNamespace::TimeHelper::GetShaderTimeValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { "GetShaderTimeValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::TimeHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimeHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TimeHelper* GlobalNamespace::TimeHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TimeHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeHelper::TimeHelper() {}
