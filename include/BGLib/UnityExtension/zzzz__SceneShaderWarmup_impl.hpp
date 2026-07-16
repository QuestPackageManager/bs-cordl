#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SceneShaderWarmup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PassType_impl.hpp"
#include "BGLib/UnityExtension/zzzz__SceneShaderWarmup_def.hpp"
#include "BGLib/UnityExtension/zzzz__SceneShaderWarmup_def.hpp"
#include "GlobalNamespace/zzzz__BoolCvar_def.hpp"
#include "GlobalNamespace/zzzz__FloatCvar_def.hpp"
#include "GlobalNamespace/zzzz__IntCvar_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/zzzz__ShaderVariantCollection_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::UnityExtension::SceneShaderWarmup_LogLevel::SceneShaderWarmup_LogLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::SceneShaderWarmup_LogLevel::SceneShaderWarmup_LogLevel() {}
constexpr ::BGLib::UnityExtension::SceneShaderWarmup_LogLevel BGLib::UnityExtension::SceneShaderWarmup_LogLevel::Error{ static_cast<int32_t>(0x0) };
constexpr ::BGLib::UnityExtension::SceneShaderWarmup_LogLevel BGLib::UnityExtension::SceneShaderWarmup_LogLevel::Summary{ static_cast<int32_t>(0x1) };
constexpr ::BGLib::UnityExtension::SceneShaderWarmup_LogLevel BGLib::UnityExtension::SceneShaderWarmup_LogLevel::Info{ static_cast<int32_t>(0x2) };
constexpr ::BGLib::UnityExtension::SceneShaderWarmup_LogLevel BGLib::UnityExtension::SceneShaderWarmup_LogLevel::Verbose{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::*)(int32_t)>(
    &::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3326f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::*)()>(
    &::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3327204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::*)()>(
    &::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x142c;
  constexpr static std::size_t addrs = 0x3327208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::*)()>(
    &::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3328634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::*)()>(
    &::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x332863c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::*)()>(
    &::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3328674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::System::Diagnostics::Stopwatch*& BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::__cordl_internal_get__shaderVariantWarmupTime_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderVariantWarmupTime_5__2;
}
constexpr ::System::Diagnostics::Stopwatch* const& BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::__cordl_internal_get__shaderVariantWarmupTime_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderVariantWarmupTime_5__2;
}
constexpr void BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::__cordl_internal_set__shaderVariantWarmupTime_5__2(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shaderVariantWarmupTime_5__2 = value;
}
constexpr ::UnityW<::UnityEngine::ShaderVariantCollection>& BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::__cordl_internal_get__shaderVariants_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderVariants_5__3;
}
constexpr ::UnityW<::UnityEngine::ShaderVariantCollection> const& BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::__cordl_internal_get__shaderVariants_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderVariants_5__3;
}
constexpr void BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::__cordl_internal_set__shaderVariants_5__3(::UnityW<::UnityEngine::ShaderVariantCollection> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shaderVariants_5__3 = value;
}
inline void BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8* BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::SceneShaderWarmup__WarmupShaders_d__8::SceneShaderWarmup__WarmupShaders_d__8() {}
//  Writing Method size for method: ::BGLib::UnityExtension::SceneShaderWarmup.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BGLib::UnityExtension::SceneShaderWarmup::Initialize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3326e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::SceneShaderWarmup.WarmupShaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)()>(&::BGLib::UnityExtension::SceneShaderWarmup::WarmupShaders)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3326ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup*>(), { "WarmupShaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::SceneShaderWarmup.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::BGLib::UnityExtension::SceneShaderWarmup::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3326f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void BGLib::UnityExtension::SceneShaderWarmup::setStaticF__enabled(::GlobalNamespace::BoolCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolCvar*, "_enabled", ::BGLib::UnityExtension::SceneShaderWarmup*>(std::forward<::GlobalNamespace::BoolCvar*>(value));
}
inline ::GlobalNamespace::BoolCvar* BGLib::UnityExtension::SceneShaderWarmup::getStaticF__enabled() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolCvar*, "_enabled", ::BGLib::UnityExtension::SceneShaderWarmup*>();
}
inline void BGLib::UnityExtension::SceneShaderWarmup::setStaticF__logLevel(::GlobalNamespace::IntCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::IntCvar*, "_logLevel", ::BGLib::UnityExtension::SceneShaderWarmup*>(std::forward<::GlobalNamespace::IntCvar*>(value));
}
inline ::GlobalNamespace::IntCvar* BGLib::UnityExtension::SceneShaderWarmup::getStaticF__logLevel() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::IntCvar*, "_logLevel", ::BGLib::UnityExtension::SceneShaderWarmup*>();
}
inline void BGLib::UnityExtension::SceneShaderWarmup::setStaticF__maxDuration(::GlobalNamespace::FloatCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::FloatCvar*, "_maxDuration", ::BGLib::UnityExtension::SceneShaderWarmup*>(std::forward<::GlobalNamespace::FloatCvar*>(value));
}
inline ::GlobalNamespace::FloatCvar* BGLib::UnityExtension::SceneShaderWarmup::getStaticF__maxDuration() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::FloatCvar*, "_maxDuration", ::BGLib::UnityExtension::SceneShaderWarmup*>();
}
inline void BGLib::UnityExtension::SceneShaderWarmup::setStaticF__variantsPerStep(::GlobalNamespace::IntCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::IntCvar*, "_variantsPerStep", ::BGLib::UnityExtension::SceneShaderWarmup*>(std::forward<::GlobalNamespace::IntCvar*>(value));
}
inline ::GlobalNamespace::IntCvar* BGLib::UnityExtension::SceneShaderWarmup::getStaticF__variantsPerStep() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::IntCvar*, "_variantsPerStep", ::BGLib::UnityExtension::SceneShaderWarmup*>();
}
inline void BGLib::UnityExtension::SceneShaderWarmup::setStaticF__passTypes(::ArrayW<::UnityEngine::Rendering::PassType> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::PassType>, "_passTypes", ::BGLib::UnityExtension::SceneShaderWarmup*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::PassType>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::PassType> BGLib::UnityExtension::SceneShaderWarmup::getStaticF__passTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::PassType>, "_passTypes", ::BGLib::UnityExtension::SceneShaderWarmup*>();
}
inline void BGLib::UnityExtension::SceneShaderWarmup::setStaticF__shaderKeywords(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>, ::ArrayW<::UnityEngine::Rendering::LocalKeyword>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>, ::ArrayW<::UnityEngine::Rendering::LocalKeyword>>*, "_shaderKeywords",
                                    ::BGLib::UnityExtension::SceneShaderWarmup*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>, ::ArrayW<::UnityEngine::Rendering::LocalKeyword>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>, ::ArrayW<::UnityEngine::Rendering::LocalKeyword>>*
BGLib::UnityExtension::SceneShaderWarmup::getStaticF__shaderKeywords() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>, ::ArrayW<::UnityEngine::Rendering::LocalKeyword>>*, "_shaderKeywords",
                                           ::BGLib::UnityExtension::SceneShaderWarmup*>();
}
inline void BGLib::UnityExtension::SceneShaderWarmup::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Collections::IEnumerator* BGLib::UnityExtension::SceneShaderWarmup::WarmupShaders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup*>(), { "WarmupShaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method);
}
inline void BGLib::UnityExtension::SceneShaderWarmup::Log(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SceneShaderWarmup*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::SceneShaderWarmup::SceneShaderWarmup() {}
