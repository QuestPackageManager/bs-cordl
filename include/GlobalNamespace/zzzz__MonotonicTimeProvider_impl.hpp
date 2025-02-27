#pragma once
// IWYU pragma private; include "GlobalNamespace/MonotonicTimeProvider.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MonotonicTimeProvider_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonotonicTimeProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MonotonicTimeProvider::*)()>(&::GlobalNamespace::MonotonicTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x22ddeb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonotonicTimeProvider.GetTimeMs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MonotonicTimeProvider::*)()>(&::GlobalNamespace::MonotonicTimeProvider::GetTimeMs)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22de040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get(), "GetTimeMs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonotonicTimeProvider.GetTicks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MonotonicTimeProvider::*)()>(&::GlobalNamespace::MonotonicTimeProvider::GetTicks)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22de06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get(), "GetTicks",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr double_t& GlobalNamespace::MonotonicTimeProvider::__cordl_internal_get__timeSpanTicksPerStopwatchTick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeSpanTicksPerStopwatchTick;
}
constexpr double_t const& GlobalNamespace::MonotonicTimeProvider::__cordl_internal_get__timeSpanTicksPerStopwatchTick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeSpanTicksPerStopwatchTick;
}
constexpr void GlobalNamespace::MonotonicTimeProvider::__cordl_internal_set__timeSpanTicksPerStopwatchTick(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeSpanTicksPerStopwatchTick = value;
}
constexpr int64_t& GlobalNamespace::MonotonicTimeProvider::__cordl_internal_get__startTicks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTicks;
}
constexpr int64_t const& GlobalNamespace::MonotonicTimeProvider::__cordl_internal_get__startTicks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTicks;
}
constexpr void GlobalNamespace::MonotonicTimeProvider::__cordl_internal_set__startTicks(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTicks = value;
}
constexpr ::System::Diagnostics::Stopwatch*& GlobalNamespace::MonotonicTimeProvider::__cordl_internal_get__stopwatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopwatch;
}
constexpr ::System::Diagnostics::Stopwatch* const& GlobalNamespace::MonotonicTimeProvider::__cordl_internal_get__stopwatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopwatch;
}
constexpr void GlobalNamespace::MonotonicTimeProvider::__cordl_internal_set__stopwatch(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stopwatch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MonotonicTimeProvider::setStaticF_instance(::GlobalNamespace::MonotonicTimeProvider* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MonotonicTimeProvider*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get>(
      std::forward<::GlobalNamespace::MonotonicTimeProvider*>(value));
}
inline ::GlobalNamespace::MonotonicTimeProvider* GlobalNamespace::MonotonicTimeProvider::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MonotonicTimeProvider*, "instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get>();
}
inline void GlobalNamespace::MonotonicTimeProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::MonotonicTimeProvider::GetTimeMs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get(), "GetTimeMs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::MonotonicTimeProvider::GetTicks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonotonicTimeProvider*>::get(), "GetTicks",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MonotonicTimeProvider* GlobalNamespace::MonotonicTimeProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MonotonicTimeProvider*>());
}
/// @brief Convert operator to "::BGNet::Core::ITimeProvider"
constexpr GlobalNamespace::MonotonicTimeProvider::operator ::BGNet::Core::ITimeProvider*() noexcept {
  return static_cast<::BGNet::Core::ITimeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGNet::Core::ITimeProvider"
constexpr ::BGNet::Core::ITimeProvider* GlobalNamespace::MonotonicTimeProvider::i___BGNet__Core__ITimeProvider() noexcept {
  return static_cast<::BGNet::Core::ITimeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonotonicTimeProvider::MonotonicTimeProvider() {}
