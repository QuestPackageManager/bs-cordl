#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/StpHistory.hpp"
#include "UnityEngine/Rendering/zzzz__CameraHistoryItem_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StpHistory_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__BufferedRTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__STP_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StpHistory.OnCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::StpHistory::*)(::UnityEngine::Rendering::BufferedRTHandleSystem*, uint32_t)>(&::UnityEngine::Rendering::Universal::StpHistory::OnCreate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66c07d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::StpHistory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::StpHistory*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StpHistory.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::StpHistory::*)()>(
    &::UnityEngine::Rendering::Universal::StpHistory::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c088c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::StpHistory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::StpHistory*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StpHistory.GetHistoryContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::STP_HistoryContext* (::UnityEngine::Rendering::Universal::StpHistory::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::StpHistory::GetHistoryContext)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66c08ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::StpHistory*>::get(), "GetHistoryContext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StpHistory.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::StpHistory::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::StpHistory::Update)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x66c091c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::StpHistory*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StpHistory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::StpHistory::*)()>(
    &::UnityEngine::Rendering::Universal::StpHistory::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x66c09e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::StpHistory*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::STP_HistoryContext*, ::Array<::UnityEngine::Rendering::STP_HistoryContext*>*>&
UnityEngine::Rendering::Universal::StpHistory::__cordl_internal_get_m_historyContexts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_historyContexts;
}
constexpr ::ArrayW<::UnityEngine::Rendering::STP_HistoryContext*, ::Array<::UnityEngine::Rendering::STP_HistoryContext*>*> const&
UnityEngine::Rendering::Universal::StpHistory::__cordl_internal_get_m_historyContexts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_historyContexts;
}
constexpr void UnityEngine::Rendering::Universal::StpHistory::__cordl_internal_set_m_historyContexts(
    ::ArrayW<::UnityEngine::Rendering::STP_HistoryContext*, ::Array<::UnityEngine::Rendering::STP_HistoryContext*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_historyContexts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::StpHistory::OnCreate(::UnityEngine::Rendering::BufferedRTHandleSystem* owner, uint32_t typeId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::StpHistory*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner, typeId);
}
inline void UnityEngine::Rendering::Universal::StpHistory::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::StpHistory*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::STP_HistoryContext* UnityEngine::Rendering::Universal::StpHistory::GetHistoryContext(int32_t eyeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::StpHistory*>::get(), "GetHistoryContext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::STP_HistoryContext*, false>(this, ___internal_method, eyeIndex);
}
inline bool UnityEngine::Rendering::Universal::StpHistory::Update(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::StpHistory*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::StpHistory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::StpHistory*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::StpHistory* UnityEngine::Rendering::Universal::StpHistory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::StpHistory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::StpHistory::StpHistory() {}
