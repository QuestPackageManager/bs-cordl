#pragma once
// IWYU pragma private; include "System\Threading\Tasks\StackGuard.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__StackGuard_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::StackGuard.TryBeginInliningScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::StackGuard::*)()>(&::System::Threading::Tasks::StackGuard::TryBeginInliningScope)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cc5f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::StackGuard*>(), { "TryBeginInliningScope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::StackGuard.EndInliningScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::StackGuard::*)()>(&::System::Threading::Tasks::StackGuard::EndInliningScope)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cc5f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::StackGuard*>(), { "EndInliningScope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::StackGuard._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::StackGuard::*)()>(&::System::Threading::Tasks::StackGuard::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cbee74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::StackGuard*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Threading::Tasks::StackGuard::__cordl_internal_get_m_inliningDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_inliningDepth;
}
constexpr int32_t const& System::Threading::Tasks::StackGuard::__cordl_internal_get_m_inliningDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_inliningDepth;
}
constexpr void System::Threading::Tasks::StackGuard::__cordl_internal_set_m_inliningDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_inliningDepth = value;
}
inline bool System::Threading::Tasks::StackGuard::TryBeginInliningScope() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::StackGuard*>(), { "TryBeginInliningScope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::Tasks::StackGuard::EndInliningScope() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::StackGuard*>(), { "EndInliningScope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::StackGuard::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::StackGuard*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::StackGuard* System::Threading::Tasks::StackGuard::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::StackGuard*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::StackGuard::StackGuard() {}
