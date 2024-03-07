#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__StackGuard_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::StackGuard.TryBeginInliningScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::StackGuard::*)()>(&::System::Threading::Tasks::StackGuard::TryBeginInliningScope)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x277ff54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StackGuard*>::get(),
                                                                               "TryBeginInliningScope", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::StackGuard.EndInliningScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::StackGuard::*)()>(&::System::Threading::Tasks::StackGuard::EndInliningScope)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x277ff94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StackGuard*>::get(),
                                                                               "EndInliningScope", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::StackGuard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::StackGuard::*)()>(&::System::Threading::Tasks::StackGuard::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2778c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StackGuard*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StackGuard*>::get(),
                                                                             "TryBeginInliningScope", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::StackGuard::EndInliningScope() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StackGuard*>::get(), "EndInliningScope",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::StackGuard* System::Threading::Tasks::StackGuard::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::StackGuard*>());
}
inline void System::Threading::Tasks::StackGuard::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::StackGuard*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::StackGuard::StackGuard() {}
