#pragma once
// IWYU pragma private; include "System/Threading/LockHolder.hpp"
#include "System/Threading/zzzz__LockHolder_def.hpp"
#include "System/Threading/zzzz__Lock_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Threading::LockHolder.Hold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::LockHolder (*)(::System::Threading::Lock*)>(&::System::Threading::LockHolder::Hold)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a96c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockHolder>::get(), "Hold", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Lock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::LockHolder.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::LockHolder::*)()>(&::System::Threading::LockHolder::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a96c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockHolder>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Threading::LockHolder System::Threading::LockHolder::Hold(::System::Threading::Lock* l) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockHolder>::get(), "Hold", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Lock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::LockHolder, false>(nullptr, ___internal_method, l);
}
inline void System::Threading::LockHolder::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockHolder>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Threading::LockHolder::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Threading::LockHolder::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_lock", ty: "::System::Threading::Lock*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::LockHolder::LockHolder(::System::Threading::Lock* _lock) noexcept {
  this->_lock = _lock;
}
// Ctor Parameters []
constexpr ::System::Threading::LockHolder::LockHolder() {}
