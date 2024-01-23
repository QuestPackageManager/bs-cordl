#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LogType_impl.hpp"
#include "GlobalNamespace/zzzz__PackedPlayModeBuildLogs_def.hpp"
#include "GlobalNamespace/zzzz__PackedPlayModeBuildLogs_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::*)(::UnityEngine::LogType, ::StringW)>(
    &::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a0eff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::_ctor(::UnityEngine::LogType type, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, message);
}
// Ctor Parameters [CppParam { name: "Type", ty: "::UnityEngine::LogType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::__PackedPlayModeBuildLogs__RuntimeBuildLog(::UnityEngine::LogType Type, ::StringW Message) noexcept {
  this->Type = Type;
  this->Message = Message;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::__PackedPlayModeBuildLogs__RuntimeBuildLog() {}
//  Writing Method size for method: ::GlobalNamespace::PackedPlayModeBuildLogs.get_RuntimeBuildLogs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>* (
    ::GlobalNamespace::PackedPlayModeBuildLogs::*)()>(&::GlobalNamespace::PackedPlayModeBuildLogs::get_RuntimeBuildLogs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ef6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackedPlayModeBuildLogs*>::get(),
                                                                               "get_RuntimeBuildLogs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackedPlayModeBuildLogs.set_RuntimeBuildLogs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackedPlayModeBuildLogs::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*)>(&::GlobalNamespace::PackedPlayModeBuildLogs::set_RuntimeBuildLogs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ef74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackedPlayModeBuildLogs*>::get(), "set_RuntimeBuildLogs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackedPlayModeBuildLogs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackedPlayModeBuildLogs::*)()>(&::GlobalNamespace::PackedPlayModeBuildLogs::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a0ef7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackedPlayModeBuildLogs*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*& GlobalNamespace::PackedPlayModeBuildLogs::__cordl_internal_get_m_RuntimeBuildLogs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimeBuildLogs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*> const&
GlobalNamespace::PackedPlayModeBuildLogs::__cordl_internal_get_m_RuntimeBuildLogs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimeBuildLogs;
}
constexpr void
GlobalNamespace::PackedPlayModeBuildLogs::__cordl_internal_set_m_RuntimeBuildLogs(::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RuntimeBuildLogs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>* GlobalNamespace::PackedPlayModeBuildLogs::get_RuntimeBuildLogs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackedPlayModeBuildLogs*>::get(),
                                                                             "get_RuntimeBuildLogs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackedPlayModeBuildLogs::set_RuntimeBuildLogs(::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackedPlayModeBuildLogs*>::get(), "set_RuntimeBuildLogs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PackedPlayModeBuildLogs* GlobalNamespace::PackedPlayModeBuildLogs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PackedPlayModeBuildLogs*>());
}
inline void GlobalNamespace::PackedPlayModeBuildLogs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackedPlayModeBuildLogs*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackedPlayModeBuildLogs::PackedPlayModeBuildLogs() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
