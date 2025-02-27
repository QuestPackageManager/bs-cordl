#pragma once
// IWYU pragma private; include "UnityEngine/GraphicsBufferHandle.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::GraphicsBufferHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::GraphicsBufferHandle::*)()>(&::UnityEngine::GraphicsBufferHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4892a64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GraphicsBufferHandle>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GraphicsBufferHandle>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBufferHandle.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::GraphicsBufferHandle::*)(::System::Object*)>(&::UnityEngine::GraphicsBufferHandle::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4892a6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GraphicsBufferHandle>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GraphicsBufferHandle>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GraphicsBufferHandle.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::GraphicsBufferHandle::*)(::UnityEngine::GraphicsBufferHandle)>(
    &::UnityEngine::GraphicsBufferHandle::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4892ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GraphicsBufferHandle>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBufferHandle>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::GraphicsBufferHandle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GraphicsBufferHandle>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::GraphicsBufferHandle::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GraphicsBufferHandle>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool UnityEngine::GraphicsBufferHandle::Equals(::UnityEngine::GraphicsBufferHandle other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GraphicsBufferHandle>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GraphicsBufferHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>"
constexpr UnityEngine::GraphicsBufferHandle::operator ::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>"
constexpr ::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>* UnityEngine::GraphicsBufferHandle::i___System__IEquatable_1___UnityEngine__GraphicsBufferHandle_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::GraphicsBufferHandle::GraphicsBufferHandle(uint32_t value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::GraphicsBufferHandle::GraphicsBufferHandle() {}
