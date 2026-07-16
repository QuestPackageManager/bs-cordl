#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/PickerOptions.hpp"
#include "UnityEngine/ProBuilder/zzzz__RectSelectMode_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__PickerOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__RectSelectMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::PickerOptions.get_depthTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::PickerOptions::*)()>(&::UnityEngine::ProBuilder::PickerOptions::get_depthTest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66dde58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), { "get_depthTest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PickerOptions.set_depthTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PickerOptions::*)(bool)>(&::UnityEngine::ProBuilder::PickerOptions::set_depthTest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66dde60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), { "set_depthTest", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PickerOptions.get_rectSelectMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::RectSelectMode (::UnityEngine::ProBuilder::PickerOptions::*)()>(
    &::UnityEngine::ProBuilder::PickerOptions::get_rectSelectMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66dde68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), { "get_rectSelectMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PickerOptions.set_rectSelectMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::PickerOptions::*)(::UnityEngine::ProBuilder::RectSelectMode)>(
    &::UnityEngine::ProBuilder::PickerOptions::set_rectSelectMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66dde70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), { "set_rectSelectMode", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::RectSelectMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PickerOptions.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::PickerOptions (*)()>(&::UnityEngine::ProBuilder::PickerOptions::get_Default)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x66dde78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PickerOptions.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::PickerOptions::*)(::System::Object*)>(&::UnityEngine::ProBuilder::PickerOptions::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66dded4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), { ::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PickerOptions.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::PickerOptions::*)(::UnityEngine::ProBuilder::PickerOptions)>(
    &::UnityEngine::ProBuilder::PickerOptions::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x66ddf88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PickerOptions.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::PickerOptions::*)()>(&::UnityEngine::ProBuilder::PickerOptions::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66de02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), { ::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PickerOptions.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::PickerOptions, ::UnityEngine::ProBuilder::PickerOptions)>(
    &::UnityEngine::ProBuilder::PickerOptions::op_Equality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x66de0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>(), ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::PickerOptions.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::PickerOptions, ::UnityEngine::ProBuilder::PickerOptions)>(
    &::UnityEngine::ProBuilder::PickerOptions::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x66de118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>(), ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::PickerOptions::setStaticF_k_Default(::UnityEngine::ProBuilder::PickerOptions value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::PickerOptions, "k_Default", ::UnityEngine::ProBuilder::PickerOptions>(std::forward<::UnityEngine::ProBuilder::PickerOptions>(value));
}
inline ::UnityEngine::ProBuilder::PickerOptions UnityEngine::ProBuilder::PickerOptions::getStaticF_k_Default() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::PickerOptions, "k_Default", ::UnityEngine::ProBuilder::PickerOptions>();
}
inline bool UnityEngine::ProBuilder::PickerOptions::get_depthTest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), { "get_depthTest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PickerOptions::set_depthTest(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), { "set_depthTest", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::RectSelectMode UnityEngine::ProBuilder::PickerOptions::get_rectSelectMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), { "get_rectSelectMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::RectSelectMode>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::PickerOptions::set_rectSelectMode(::UnityEngine::ProBuilder::RectSelectMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), { "set_rectSelectMode", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::RectSelectMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::PickerOptions UnityEngine::ProBuilder::PickerOptions::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::PickerOptions>(nullptr, ___internal_method);
}
inline bool UnityEngine::ProBuilder::PickerOptions::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::ProBuilder::PickerOptions::Equals(::UnityEngine::ProBuilder::PickerOptions other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::ProBuilder::PickerOptions::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::PickerOptions::op_Equality(::UnityEngine::ProBuilder::PickerOptions a, ::UnityEngine::ProBuilder::PickerOptions b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>(), ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::ProBuilder::PickerOptions::op_Inequality(::UnityEngine::ProBuilder::PickerOptions a, ::UnityEngine::ProBuilder::PickerOptions b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::PickerOptions>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>(), ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "_depthTest_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_rectSelectMode_k__BackingField", ty:
// "::UnityEngine::ProBuilder::RectSelectMode", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::PickerOptions::PickerOptions(bool _depthTest_k__BackingField, ::UnityEngine::ProBuilder::RectSelectMode _rectSelectMode_k__BackingField) noexcept {
  this->_depthTest_k__BackingField = _depthTest_k__BackingField;
  this->_rectSelectMode_k__BackingField = _rectSelectMode_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::PickerOptions::PickerOptions() {}
