#pragma once
// IWYU pragma private; include "UnityEngine/WaitUntil.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitTimeoutMode_impl.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::WaitUntil.get_keepWaiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::WaitUntil::*)()>(&::UnityEngine::WaitUntil::get_keepWaiting)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6921774;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitUntil*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitUntil*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WaitUntil._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::WaitUntil::*)(::System::Func_1<bool>*)>(&::UnityEngine::WaitUntil::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6921838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitUntil*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WaitUntil.GetTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::WaitUntil::*)()>(&::UnityEngine::WaitUntil::GetTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6921848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitUntil*>::get(), "GetTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<bool>*& UnityEngine::WaitUntil::__cordl_internal_get_m_Predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Predicate;
}
constexpr ::System::Func_1<bool>* const& UnityEngine::WaitUntil::__cordl_internal_get_m_Predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Predicate;
}
constexpr void UnityEngine::WaitUntil::__cordl_internal_set_m_Predicate(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::WaitUntil::__cordl_internal_get_m_TimeoutCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutCallback;
}
constexpr ::System::Action* const& UnityEngine::WaitUntil::__cordl_internal_get_m_TimeoutCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutCallback;
}
constexpr void UnityEngine::WaitUntil::__cordl_internal_set_m_TimeoutCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TimeoutCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::WaitTimeoutMode& UnityEngine::WaitUntil::__cordl_internal_get_m_TimeoutMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutMode;
}
constexpr ::UnityEngine::WaitTimeoutMode const& UnityEngine::WaitUntil::__cordl_internal_get_m_TimeoutMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutMode;
}
constexpr void UnityEngine::WaitUntil::__cordl_internal_set_m_TimeoutMode(::UnityEngine::WaitTimeoutMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeoutMode = value;
}
constexpr double_t& UnityEngine::WaitUntil::__cordl_internal_get_m_MaxExecutionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxExecutionTime;
}
constexpr double_t const& UnityEngine::WaitUntil::__cordl_internal_get_m_MaxExecutionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxExecutionTime;
}
constexpr void UnityEngine::WaitUntil::__cordl_internal_set_m_MaxExecutionTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxExecutionTime = value;
}
inline bool UnityEngine::WaitUntil::get_keepWaiting() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitUntil*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::WaitUntil::_ctor(::System::Func_1<bool>* predicate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitUntil*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, predicate);
}
inline double_t UnityEngine::WaitUntil::GetTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitUntil*>::get(), "GetTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::UnityEngine::WaitUntil* UnityEngine::WaitUntil::New_ctor(::System::Func_1<bool>* predicate) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::WaitUntil*>(predicate));
}
// Ctor Parameters []
constexpr ::UnityEngine::WaitUntil::WaitUntil() {}
