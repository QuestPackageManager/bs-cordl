#pragma once
// IWYU pragma private; include "UnityEngine/NumericFieldDraggerUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__NumericFieldDraggerUtility_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::NumericFieldDraggerUtility.Acceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(bool, bool)>(&::UnityEngine::NumericFieldDraggerUtility::Acceleration)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ad3230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(), { "Acceleration", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::NumericFieldDraggerUtility.NiceDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, float_t)>(&::UnityEngine::NumericFieldDraggerUtility::NiceDelta)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6ad3254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(), { "NiceDelta", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::NumericFieldDraggerUtility.CalculateFloatDragSensitivity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::UnityEngine::NumericFieldDraggerUtility::CalculateFloatDragSensitivity)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6ad33b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(), { "CalculateFloatDragSensitivity", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::NumericFieldDraggerUtility.CalculateFloatDragSensitivity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t, double_t)>(&::UnityEngine::NumericFieldDraggerUtility::CalculateFloatDragSensitivity)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6ad3450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(),
                                                             { "CalculateFloatDragSensitivity", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::NumericFieldDraggerUtility.CalculateIntDragSensitivity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t)>(&::UnityEngine::NumericFieldDraggerUtility::CalculateIntDragSensitivity)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6ad34ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(), { "CalculateIntDragSensitivity", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::NumericFieldDraggerUtility.CalculateIntDragSensitivity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t)>(&::UnityEngine::NumericFieldDraggerUtility::CalculateIntDragSensitivity)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ad3598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(), { "CalculateIntDragSensitivity", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::NumericFieldDraggerUtility.CalculateIntDragSensitivity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::UnityEngine::NumericFieldDraggerUtility::CalculateIntDragSensitivity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ad3518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(), { "CalculateIntDragSensitivity", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::NumericFieldDraggerUtility.CalculateIntDragSensitivity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t, int64_t, int64_t)>(&::UnityEngine::NumericFieldDraggerUtility::CalculateIntDragSensitivity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6ad35bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(),
                                                             { "CalculateIntDragSensitivity", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::NumericFieldDraggerUtility::setStaticF_s_UseYSign(bool value) {
  ::cordl_internals::setStaticField<bool, "s_UseYSign", ::UnityEngine::NumericFieldDraggerUtility*>(std::forward<bool>(value));
}
inline bool UnityEngine::NumericFieldDraggerUtility::getStaticF_s_UseYSign() {
  return ::cordl_internals::getStaticField<bool, "s_UseYSign", ::UnityEngine::NumericFieldDraggerUtility*>();
}
inline float_t UnityEngine::NumericFieldDraggerUtility::Acceleration(bool shiftPressed, bool altPressed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(), { "Acceleration", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, shiftPressed, altPressed);
}
inline float_t UnityEngine::NumericFieldDraggerUtility::NiceDelta(::UnityEngine::Vector2 deviceDelta, float_t acceleration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(), { "NiceDelta", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, deviceDelta, acceleration);
}
inline double_t UnityEngine::NumericFieldDraggerUtility::CalculateFloatDragSensitivity(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(), { "CalculateFloatDragSensitivity", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t UnityEngine::NumericFieldDraggerUtility::CalculateFloatDragSensitivity(double_t value, double_t minValue, double_t maxValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(),
                                                           { "CalculateFloatDragSensitivity", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, minValue, maxValue);
}
inline int64_t UnityEngine::NumericFieldDraggerUtility::CalculateIntDragSensitivity(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(), { "CalculateIntDragSensitivity", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline uint64_t UnityEngine::NumericFieldDraggerUtility::CalculateIntDragSensitivity(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(), { "CalculateIntDragSensitivity", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline double_t UnityEngine::NumericFieldDraggerUtility::CalculateIntDragSensitivity(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(), { "CalculateIntDragSensitivity", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline int64_t UnityEngine::NumericFieldDraggerUtility::CalculateIntDragSensitivity(int64_t value, int64_t minValue, int64_t maxValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NumericFieldDraggerUtility*>(),
                                                           { "CalculateIntDragSensitivity", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value, minValue, maxValue);
}
// Ctor Parameters []
constexpr ::UnityEngine::NumericFieldDraggerUtility::NumericFieldDraggerUtility() {}
