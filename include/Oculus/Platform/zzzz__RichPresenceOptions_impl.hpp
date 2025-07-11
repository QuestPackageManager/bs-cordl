#pragma once
// IWYU pragma private; include "Oculus/Platform/RichPresenceOptions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__RichPresenceOptions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::RichPresenceOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::RichPresenceOptions::*)()>(&::Oculus::Platform::RichPresenceOptions::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3f8d2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresenceOptions*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RichPresenceOptions.op_Explicit___System__IntPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::Oculus::Platform::RichPresenceOptions*)>(
    &::Oculus::Platform::RichPresenceOptions::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3f8ba54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresenceOptions*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RichPresenceOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::RichPresenceOptions.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::RichPresenceOptions::*)()>(&::Oculus::Platform::RichPresenceOptions::Finalize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3f8d330;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresenceOptions*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresenceOptions*>::get(), 1));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Oculus::Platform::RichPresenceOptions::__cordl_internal_get_Handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr ::System::IntPtr const& Oculus::Platform::RichPresenceOptions::__cordl_internal_get_Handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr void Oculus::Platform::RichPresenceOptions::__cordl_internal_set_Handle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Handle = value;
}
inline void Oculus::Platform::RichPresenceOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresenceOptions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IntPtr Oculus::Platform::RichPresenceOptions::op_Explicit___System__IntPtr(::Oculus::Platform::RichPresenceOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresenceOptions*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RichPresenceOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, options);
}
inline void Oculus::Platform::RichPresenceOptions::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::RichPresenceOptions*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Oculus::Platform::RichPresenceOptions* Oculus::Platform::RichPresenceOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::RichPresenceOptions*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::RichPresenceOptions::RichPresenceOptions() {}
