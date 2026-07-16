#pragma once
// IWYU pragma private; include "UnityEngine/Keyframe.hpp"
#include "UnityEngine/zzzz__Keyframe_def.hpp"
#include "UnityEngine/zzzz__WeightedMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Keyframe._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Keyframe::*)(float_t, float_t)>(&::UnityEngine::Keyframe::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a60048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Keyframe::*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::Keyframe::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a60058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Keyframe::*)()>(&::UnityEngine::Keyframe::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6006c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe.set_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Keyframe::*)(float_t)>(&::UnityEngine::Keyframe::set_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a60074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Keyframe::*)()>(&::UnityEngine::Keyframe::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6007c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Keyframe::*)(float_t)>(&::UnityEngine::Keyframe::set_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a60084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe.get_inTangent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Keyframe::*)()>(&::UnityEngine::Keyframe::get_inTangent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6008c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "get_inTangent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe.set_inTangent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Keyframe::*)(float_t)>(&::UnityEngine::Keyframe::set_inTangent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a60094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "set_inTangent", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe.get_outTangent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Keyframe::*)()>(&::UnityEngine::Keyframe::get_outTangent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a6009c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "get_outTangent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe.set_outTangent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Keyframe::*)(float_t)>(&::UnityEngine::Keyframe::set_outTangent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a600a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "set_outTangent", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe.get_inWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Keyframe::*)()>(&::UnityEngine::Keyframe::get_inWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a600ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "get_inWeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe.set_inWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Keyframe::*)(float_t)>(&::UnityEngine::Keyframe::set_inWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a600b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "set_inWeight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe.get_outWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Keyframe::*)()>(&::UnityEngine::Keyframe::get_outWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a600bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "get_outWeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe.set_outWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Keyframe::*)(float_t)>(&::UnityEngine::Keyframe::set_outWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a600c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "set_outWeight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe.get_weightedMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::WeightedMode (::UnityEngine::Keyframe::*)()>(&::UnityEngine::Keyframe::get_weightedMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a600cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "get_weightedMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Keyframe.set_weightedMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Keyframe::*)(::UnityEngine::WeightedMode)>(&::UnityEngine::Keyframe::set_weightedMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a600d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "set_weightedMode", {}, { ::i2c::type_of<::UnityEngine::WeightedMode>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Keyframe::_ctor(float_t time, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, time, value);
}
inline void UnityEngine::Keyframe::_ctor(float_t time, float_t value, float_t inTangent, float_t outTangent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, time, value, inTangent, outTangent);
}
inline float_t UnityEngine::Keyframe::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Keyframe::set_time(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Keyframe::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Keyframe::set_value(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Keyframe::get_inTangent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "get_inTangent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Keyframe::set_inTangent(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "set_inTangent", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Keyframe::get_outTangent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "get_outTangent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Keyframe::set_outTangent(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "set_outTangent", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Keyframe::get_inWeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "get_inWeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Keyframe::set_inWeight(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "set_inWeight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Keyframe::get_outWeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "get_outWeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Keyframe::set_outWeight(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "set_outWeight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::WeightedMode UnityEngine::Keyframe::get_weightedMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "get_weightedMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::WeightedMode>(*this, ___internal_method);
}
inline void UnityEngine::Keyframe::set_weightedMode(::UnityEngine::WeightedMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Keyframe>(), { "set_weightedMode", {}, { ::i2c::type_of<::UnityEngine::WeightedMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_InTangent", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OutTangent", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_WeightedMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OutWeight", ty:
// "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Keyframe::Keyframe(float_t m_Time, float_t m_Value, float_t m_InTangent, float_t m_OutTangent, int32_t m_WeightedMode, float_t m_InWeight, float_t m_OutWeight) noexcept {
  this->m_Time = m_Time;
  this->m_Value = m_Value;
  this->m_InTangent = m_InTangent;
  this->m_OutTangent = m_OutTangent;
  this->m_WeightedMode = m_WeightedMode;
  this->m_InWeight = m_InWeight;
  this->m_OutWeight = m_OutWeight;
}
// Ctor Parameters []
constexpr ::UnityEngine::Keyframe::Keyframe() {}
