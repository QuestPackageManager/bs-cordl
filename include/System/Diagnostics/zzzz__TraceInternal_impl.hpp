#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__TraceInternal_def.hpp"
#include "System/Diagnostics/zzzz__TraceListenerCollection_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::TraceInternal.get_Listeners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceListenerCollection* (*)()>(&::System::Diagnostics::TraceInternal::get_Listeners)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x296c654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get(), "get_Listeners",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceInternal.get_AutoFlush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Diagnostics::TraceInternal::get_AutoFlush)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x296c8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get(), "get_AutoFlush",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceInternal.get_IndentLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Diagnostics::TraceInternal::get_IndentLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x296d38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get(), "get_IndentLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceInternal.get_IndentSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Diagnostics::TraceInternal::get_IndentSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x296d3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get(), "get_IndentSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceInternal.InitializeSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Diagnostics::TraceInternal::InitializeSettings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x296d0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get(),
                                                                               "InitializeSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Diagnostics::TraceInternal::setStaticF_appName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "appName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Diagnostics::TraceInternal::getStaticF_appName() {
  return ::cordl_internals::getStaticField<::StringW, "appName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get>();
}
inline void System::Diagnostics::TraceInternal::setStaticF_listeners(::System::Diagnostics::TraceListenerCollection* value) {
  ::cordl_internals::setStaticField<::System::Diagnostics::TraceListenerCollection*, "listeners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get>(
      std::forward<::System::Diagnostics::TraceListenerCollection*>(value));
}
inline ::System::Diagnostics::TraceListenerCollection* System::Diagnostics::TraceInternal::getStaticF_listeners() {
  return ::cordl_internals::getStaticField<::System::Diagnostics::TraceListenerCollection*, "listeners",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get>();
}
inline void System::Diagnostics::TraceInternal::setStaticF_autoFlush(bool value) {
  ::cordl_internals::setStaticField<bool, "autoFlush", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get>(std::forward<bool>(value));
}
inline bool System::Diagnostics::TraceInternal::getStaticF_autoFlush() {
  return ::cordl_internals::getStaticField<bool, "autoFlush", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get>();
}
inline void System::Diagnostics::TraceInternal::setStaticF_indentLevel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "indentLevel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Diagnostics::TraceInternal::getStaticF_indentLevel() {
  return ::cordl_internals::getStaticField<int32_t, "indentLevel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get>();
}
inline void System::Diagnostics::TraceInternal::setStaticF_indentSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "indentSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Diagnostics::TraceInternal::getStaticF_indentSize() {
  return ::cordl_internals::getStaticField<int32_t, "indentSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get>();
}
inline void System::Diagnostics::TraceInternal::setStaticF_critSec(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "critSec", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Diagnostics::TraceInternal::getStaticF_critSec() {
  return ::cordl_internals::getStaticField<::System::Object*, "critSec", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get>();
}
inline ::System::Diagnostics::TraceListenerCollection* System::Diagnostics::TraceInternal::get_Listeners() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get(), "get_Listeners",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceListenerCollection*, false>(nullptr, ___internal_method);
}
inline bool System::Diagnostics::TraceInternal::get_AutoFlush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get(), "get_AutoFlush",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline int32_t System::Diagnostics::TraceInternal::get_IndentLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get(), "get_IndentLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t System::Diagnostics::TraceInternal::get_IndentSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get(), "get_IndentSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void System::Diagnostics::TraceInternal::InitializeSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceInternal*>::get(), "InitializeSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceInternal::TraceInternal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
