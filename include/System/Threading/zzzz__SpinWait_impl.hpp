#pragma once
// IWYU pragma private; include "System\Threading\SpinWait.hpp"
#include "System/Threading/zzzz__SpinWait_def.hpp"
//  Writing Method size for method: ::System::Threading::SpinWait.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::SpinWait::*)()>(&::System::Threading::SpinWait::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cab3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinWait>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinWait.get_NextSpinWillYield
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::SpinWait::*)()>(&::System::Threading::SpinWait::get_NextSpinWillYield)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5cab3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinWait>(), { "get_NextSpinWillYield", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinWait.SpinOnce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SpinWait::*)()>(&::System::Threading::SpinWait::SpinOnce)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cab2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinWait>(), { "SpinOnce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinWait.SpinOnce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SpinWait::*)(int32_t)>(&::System::Threading::SpinWait::SpinOnce)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5caaeec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinWait>(), { "SpinOnce", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinWait.SpinOnceCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SpinWait::*)(int32_t)>(&::System::Threading::SpinWait::SpinOnceCore)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5cab424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinWait>(), { "SpinOnceCore", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinWait.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SpinWait::*)()>(&::System::Threading::SpinWait::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cab590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinWait>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Threading::SpinWait::setStaticF_SpinCountforSpinBeforeWait(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SpinCountforSpinBeforeWait", ::System::Threading::SpinWait>(std::forward<int32_t>(value));
}
inline int32_t System::Threading::SpinWait::getStaticF_SpinCountforSpinBeforeWait() {
  return ::cordl_internals::getStaticField<int32_t, "SpinCountforSpinBeforeWait", ::System::Threading::SpinWait>();
}
inline int32_t System::Threading::SpinWait::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinWait>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Threading::SpinWait::get_NextSpinWillYield() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinWait>(), { "get_NextSpinWillYield", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::Threading::SpinWait::SpinOnce() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinWait>(), { "SpinOnce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Threading::SpinWait::SpinOnce(int32_t sleep1Threshold) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinWait>(), { "SpinOnce", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sleep1Threshold);
}
inline void System::Threading::SpinWait::SpinOnceCore(int32_t sleep1Threshold) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinWait>(), { "SpinOnceCore", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sleep1Threshold);
}
inline void System::Threading::SpinWait::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinWait>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::SpinWait::SpinWait(int32_t _count) noexcept {
  this->_count = _count;
}
// Ctor Parameters []
constexpr ::System::Threading::SpinWait::SpinWait() {}
