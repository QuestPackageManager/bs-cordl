#pragma once
// IWYU pragma private; include "GlobalNamespace\ResettableRandom.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ResettableRandom_def.hpp"
#include "GlobalNamespace/zzzz__DeterminismConfig_def.hpp"
#include "GlobalNamespace/zzzz__IRandom_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResettableRandom._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResettableRandom::*)(::GlobalNamespace::DeterminismConfig*, int32_t)>(&::GlobalNamespace::ResettableRandom::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3326654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResettableRandom*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::DeterminismConfig*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResettableRandom.Sample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::ResettableRandom::*)()>(&::GlobalNamespace::ResettableRandom::Sample)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3326794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResettableRandom*>(), { "Sample", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResettableRandom.HandleDeterminismSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResettableRandom::*)(bool)>(&::GlobalNamespace::ResettableRandom::HandleDeterminismSet)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3326708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResettableRandom*>(), { "HandleDeterminismSet", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResettableRandom.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResettableRandom::*)()>(&::GlobalNamespace::ResettableRandom::Dispose)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x33267b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResettableRandom*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DeterminismConfig*& GlobalNamespace::ResettableRandom::__cordl_internal_get__determinismConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____determinismConfig;
}
constexpr ::GlobalNamespace::DeterminismConfig* const& GlobalNamespace::ResettableRandom::__cordl_internal_get__determinismConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____determinismConfig;
}
constexpr void GlobalNamespace::ResettableRandom::__cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____determinismConfig = value;
}
constexpr int32_t& GlobalNamespace::ResettableRandom::__cordl_internal_get__fixedSeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedSeed;
}
constexpr int32_t const& GlobalNamespace::ResettableRandom::__cordl_internal_get__fixedSeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedSeed;
}
constexpr void GlobalNamespace::ResettableRandom::__cordl_internal_set__fixedSeed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fixedSeed = value;
}
constexpr ::System::Random*& GlobalNamespace::ResettableRandom::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::System::Random* const& GlobalNamespace::ResettableRandom::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::ResettableRandom::__cordl_internal_set__random(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____random = value;
}
inline void GlobalNamespace::ResettableRandom::_ctor(::GlobalNamespace::DeterminismConfig* determinismConfig, int32_t fixedSeed) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResettableRandom*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::DeterminismConfig*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, determinismConfig, fixedSeed);
}
inline double_t GlobalNamespace::ResettableRandom::Sample() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResettableRandom*>(), { "Sample", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void GlobalNamespace::ResettableRandom::HandleDeterminismSet(bool isDeterministic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResettableRandom*>(), { "HandleDeterminismSet", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDeterministic);
}
inline void GlobalNamespace::ResettableRandom::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ResettableRandom*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ResettableRandom* GlobalNamespace::ResettableRandom::New_ctor(::GlobalNamespace::DeterminismConfig* determinismConfig, int32_t fixedSeed) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ResettableRandom*>(determinismConfig, fixedSeed));
}
/// @brief Convert operator to "::GlobalNamespace::IRandom"
constexpr GlobalNamespace::ResettableRandom::operator ::GlobalNamespace::IRandom*() noexcept {
  return static_cast<::GlobalNamespace::IRandom*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRandom"
constexpr ::GlobalNamespace::IRandom* GlobalNamespace::ResettableRandom::i___GlobalNamespace__IRandom() noexcept {
  return static_cast<::GlobalNamespace::IRandom*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::ResettableRandom::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ResettableRandom::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResettableRandom::ResettableRandom() {}
