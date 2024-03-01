#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType::__ScoreMultiplierCounter__MultiplierEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType::__ScoreMultiplierCounter__MultiplierEventType() {}
constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType::Positive{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType::Neutral{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType::Negative{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::ScoreMultiplierCounter.get_multiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ScoreMultiplierCounter::*)()>(
    &::GlobalNamespace::ScoreMultiplierCounter::get_multiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12fbad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(),
                                                                               "get_multiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreMultiplierCounter.get_normalizedProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::ScoreMultiplierCounter::*)()>(
    &::GlobalNamespace::ScoreMultiplierCounter::get_normalizedProgress)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x12fbadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(),
                                                                               "get_normalizedProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreMultiplierCounter.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreMultiplierCounter::*)()>(&::GlobalNamespace::ScoreMultiplierCounter::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x12fb574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreMultiplierCounter.ProcessMultiplierEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ScoreMultiplierCounter::*)(
    ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType)>(&::GlobalNamespace::ScoreMultiplierCounter::ProcessMultiplierEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x12fb58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(), "ProcessMultiplierEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreMultiplierCounter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreMultiplierCounter::*)()>(&::GlobalNamespace::ScoreMultiplierCounter::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x12fba10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ScoreMultiplierCounter::__cordl_internal_get__multiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplier;
}
constexpr int32_t const& GlobalNamespace::ScoreMultiplierCounter::__cordl_internal_get__multiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplier;
}
constexpr void GlobalNamespace::ScoreMultiplierCounter::__cordl_internal_set__multiplier(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplier = value;
}
constexpr int32_t& GlobalNamespace::ScoreMultiplierCounter::__cordl_internal_get__multiplierIncreaseProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierIncreaseProgress;
}
constexpr int32_t const& GlobalNamespace::ScoreMultiplierCounter::__cordl_internal_get__multiplierIncreaseProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierIncreaseProgress;
}
constexpr void GlobalNamespace::ScoreMultiplierCounter::__cordl_internal_set__multiplierIncreaseProgress(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplierIncreaseProgress = value;
}
constexpr int32_t& GlobalNamespace::ScoreMultiplierCounter::__cordl_internal_get__multiplierIncreaseMaxProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierIncreaseMaxProgress;
}
constexpr int32_t const& GlobalNamespace::ScoreMultiplierCounter::__cordl_internal_get__multiplierIncreaseMaxProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierIncreaseMaxProgress;
}
constexpr void GlobalNamespace::ScoreMultiplierCounter::__cordl_internal_set__multiplierIncreaseMaxProgress(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplierIncreaseMaxProgress = value;
}
inline int32_t GlobalNamespace::ScoreMultiplierCounter::get_multiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(),
                                                                             "get_multiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::ScoreMultiplierCounter::get_normalizedProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(),
                                                                             "get_normalizedProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScoreMultiplierCounter::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ScoreMultiplierCounter::ProcessMultiplierEvent(::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType multiplierEventType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(), "ProcessMultiplierEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, multiplierEventType);
}
inline ::GlobalNamespace::ScoreMultiplierCounter* GlobalNamespace::ScoreMultiplierCounter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScoreMultiplierCounter*>());
}
inline void GlobalNamespace::ScoreMultiplierCounter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreMultiplierCounter::ScoreMultiplierCounter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
