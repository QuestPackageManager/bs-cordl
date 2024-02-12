#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultDragAndDropClient_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDropData_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDrop_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDragAndDropClient.get_userData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(
    &::UnityEngine::UIElements::DefaultDragAndDropClient::get_userData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2e2a6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultDragAndDropClient*>::get(),
                                                                               "get_userData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDragAndDropClient.StartDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultDragAndDropClient::*)(::UnityEngine::UIElements::StartDragArgs*)>(
    &::UnityEngine::UIElements::DefaultDragAndDropClient::StartDrag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e2a6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultDragAndDropClient*>::get(), "StartDrag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StartDragArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDragAndDropClient.get_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IDragAndDropData* (::UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(
    &::UnityEngine::UIElements::DefaultDragAndDropClient::get_data)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e28a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultDragAndDropClient*>::get(),
                                                                               "get_data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDragAndDropClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(
    &::UnityEngine::UIElements::DefaultDragAndDropClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e2a6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultDragAndDropClient*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IDragAndDrop"
constexpr UnityEngine::UIElements::DefaultDragAndDropClient::operator ::UnityEngine::UIElements::IDragAndDrop*() noexcept {
  return static_cast<::UnityEngine::UIElements::IDragAndDrop*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IDragAndDrop"
constexpr ::UnityEngine::UIElements::IDragAndDrop* UnityEngine::UIElements::DefaultDragAndDropClient::i___UnityEngine__UIElements__IDragAndDrop() noexcept {
  return static_cast<::UnityEngine::UIElements::IDragAndDrop*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IDragAndDropData"
constexpr UnityEngine::UIElements::DefaultDragAndDropClient::operator ::UnityEngine::UIElements::IDragAndDropData*() noexcept {
  return static_cast<::UnityEngine::UIElements::IDragAndDropData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IDragAndDropData"
constexpr ::UnityEngine::UIElements::IDragAndDropData* UnityEngine::UIElements::DefaultDragAndDropClient::i___UnityEngine__UIElements__IDragAndDropData() noexcept {
  return static_cast<::UnityEngine::UIElements::IDragAndDropData*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::UIElements::StartDragArgs*& UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_get_m_StartDragArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartDragArgs;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StartDragArgs*> const& UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_get_m_StartDragArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartDragArgs;
}
constexpr void UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_set_m_StartDragArgs(::UnityEngine::UIElements::StartDragArgs* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StartDragArgs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Object* UnityEngine::UIElements::DefaultDragAndDropClient::get_userData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultDragAndDropClient*>::get(),
                                                                             "get_userData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultDragAndDropClient::StartDrag(::UnityEngine::UIElements::StartDragArgs* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultDragAndDropClient*>::get(), "StartDrag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StartDragArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline ::UnityEngine::UIElements::IDragAndDropData* UnityEngine::UIElements::DefaultDragAndDropClient::get_data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultDragAndDropClient*>::get(),
                                                                             "get_data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IDragAndDropData*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DefaultDragAndDropClient* UnityEngine::UIElements::DefaultDragAndDropClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::DefaultDragAndDropClient*>());
}
inline void UnityEngine::UIElements::DefaultDragAndDropClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultDragAndDropClient*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DefaultDragAndDropClient::DefaultDragAndDropClient() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
