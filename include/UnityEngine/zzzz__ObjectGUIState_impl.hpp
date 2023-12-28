#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ObjectGUIState_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::UnityEngine::ObjectGUIState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectGUIState::*)()>(&::UnityEngine::ObjectGUIState::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d04550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectGUIState*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectGUIState.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectGUIState::*)()>(&::UnityEngine::ObjectGUIState::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d045c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectGUIState*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectGUIState.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectGUIState::*)()>(&::UnityEngine::ObjectGUIState::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d046c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectGUIState*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectGUIState*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectGUIState.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ObjectGUIState::*)()>(&::UnityEngine::ObjectGUIState::Destroy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d04620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectGUIState*>::get(), "Destroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectGUIState.Internal_Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)()>(&::UnityEngine::ObjectGUIState::Internal_Create)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d04598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectGUIState*>::get(), "Internal_Create",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ObjectGUIState.Internal_Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::UnityEngine::ObjectGUIState::Internal_Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d04754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectGUIState*>::get(), "Internal_Destroy", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::ObjectGUIState::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void*& UnityEngine::ObjectGUIState::__get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void* const& UnityEngine::ObjectGUIState::__get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::ObjectGUIState::__set_m_Ptr(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
inline ::UnityEngine::ObjectGUIState* UnityEngine::ObjectGUIState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ObjectGUIState*>());
}
inline void UnityEngine::ObjectGUIState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectGUIState*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ObjectGUIState::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectGUIState*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ObjectGUIState::Finalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectGUIState*>::get(), "Finalize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ObjectGUIState::Destroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectGUIState*>::get(), "Destroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void* UnityEngine::ObjectGUIState::Internal_Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectGUIState*>::get(), "Internal_Create",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::ObjectGUIState::Internal_Destroy(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ObjectGUIState*>::get(), "Internal_Destroy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ptr);
}
// Ctor Parameters []
constexpr ::UnityEngine::ObjectGUIState::ObjectGUIState() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
