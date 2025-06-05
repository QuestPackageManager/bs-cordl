#pragma once
// IWYU pragma private; include "System/Data/DataCommonEventSource.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSource_impl.hpp"
#include "System/Data/zzzz__DataCommonEventSource_def.hpp"
//  Writing Method size for method: ::System::Data::DataCommonEventSource.Trace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataCommonEventSource::*)(::StringW)>(&::System::Data::DataCommonEventSource::Trace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4156134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "Trace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataCommonEventSource.EnterScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Data::DataCommonEventSource::*)(::StringW)>(&::System::Data::DataCommonEventSource::EnterScope)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4156144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "EnterScope", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataCommonEventSource.ExitScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataCommonEventSource::*)(int64_t)>(&::System::Data::DataCommonEventSource::ExitScope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4156208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "ExitScope", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataCommonEventSource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataCommonEventSource::*)()>(&::System::Data::DataCommonEventSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4156218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Data::DataCommonEventSource::setStaticF_Log(::System::Data::DataCommonEventSource* value) {
  ::cordl_internals::setStaticField<::System::Data::DataCommonEventSource*, "Log", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get>(
      std::forward<::System::Data::DataCommonEventSource*>(value));
}
inline ::System::Data::DataCommonEventSource* System::Data::DataCommonEventSource::getStaticF_Log() {
  return ::cordl_internals::getStaticField<::System::Data::DataCommonEventSource*, "Log", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get>();
}
inline void System::Data::DataCommonEventSource::setStaticF_s_nextScopeId(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "s_nextScopeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get>(std::forward<int64_t>(value));
}
inline int64_t System::Data::DataCommonEventSource::getStaticF_s_nextScopeId() {
  return ::cordl_internals::getStaticField<int64_t, "s_nextScopeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get>();
}
inline void System::Data::DataCommonEventSource::Trace(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "Trace", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename T0> inline void System::Data::DataCommonEventSource::Trace(::StringW format, T0 arg0) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "Trace",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, format, arg0);
}
template <typename T0, typename T1> inline void System::Data::DataCommonEventSource::Trace(::StringW format, T0 arg0, T1 arg1) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "Trace",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, format, arg0, arg1);
}
template <typename T0, typename T1, typename T2> inline void System::Data::DataCommonEventSource::Trace(::StringW format, T0 arg0, T1 arg1, T2 arg2) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "Trace",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, format, arg0, arg1, arg2);
}
template <typename T0, typename T1, typename T2, typename T3> inline void System::Data::DataCommonEventSource::Trace(::StringW format, T0 arg0, T1 arg1, T2 arg2, T3 arg3) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "Trace",
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, format, arg0, arg1, arg2, arg3);
}
template <typename T0, typename T1, typename T2, typename T3, typename T4> inline void System::Data::DataCommonEventSource::Trace(::StringW format, T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "Trace",
      std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get() },
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, format, arg0, arg1, arg2, arg3, arg4);
}
template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline void System::Data::DataCommonEventSource::Trace(::StringW format, T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "Trace",
      std::array<Il2CppClass const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T5>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T6>::get() },
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T6>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T5>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T6>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}
inline int64_t System::Data::DataCommonEventSource::EnterScope(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "EnterScope", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, message);
}
template <typename T1> inline int64_t System::Data::DataCommonEventSource::EnterScope(::StringW format, T1 arg1) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "EnterScope",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get() }));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, format, arg1);
}
template <typename T1, typename T2> inline int64_t System::Data::DataCommonEventSource::EnterScope(::StringW format, T1 arg1, T2 arg2) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "EnterScope",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, format, arg1, arg2);
}
template <typename T1, typename T2, typename T3> inline int64_t System::Data::DataCommonEventSource::EnterScope(::StringW format, T1 arg1, T2 arg2, T3 arg3) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "EnterScope",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get() }));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, format, arg1, arg2, arg3);
}
template <typename T1, typename T2, typename T3, typename T4> inline int64_t System::Data::DataCommonEventSource::EnterScope(::StringW format, T1 arg1, T2 arg2, T3 arg3, T4 arg4) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "EnterScope",
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get() }));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, format, arg1, arg2, arg3, arg4);
}
inline void System::Data::DataCommonEventSource::ExitScope(int64_t scopeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), "ExitScope",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scopeId);
}
inline void System::Data::DataCommonEventSource::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataCommonEventSource*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Data::DataCommonEventSource* System::Data::DataCommonEventSource::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::DataCommonEventSource*>());
}
// Ctor Parameters []
constexpr ::System::Data::DataCommonEventSource::DataCommonEventSource() {}
