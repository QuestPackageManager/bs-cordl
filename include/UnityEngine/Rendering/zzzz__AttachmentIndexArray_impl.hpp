#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AttachmentIndexArray.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentIndexArray_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentIndexArray._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::AttachmentIndexArray::*)(int32_t)>(
    &::UnityEngine::Rendering::AttachmentIndexArray::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68e9a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AttachmentIndexArray>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentIndexArray.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::AttachmentIndexArray::*)(int32_t)>(
    &::UnityEngine::Rendering::AttachmentIndexArray::get_Item)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x68e9ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AttachmentIndexArray>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentIndexArray.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::AttachmentIndexArray::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::AttachmentIndexArray::set_Item)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x68e9b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AttachmentIndexArray>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentIndexArray.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::AttachmentIndexArray::*)()>(
    &::UnityEngine::Rendering::AttachmentIndexArray::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AttachmentIndexArray>::get(),
                                                                               "get_Length", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::AttachmentIndexArray::setStaticF_Emtpy(::UnityEngine::Rendering::AttachmentIndexArray value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::AttachmentIndexArray, "Emtpy",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AttachmentIndexArray>::get>(
      std::forward<::UnityEngine::Rendering::AttachmentIndexArray>(value));
}
inline ::UnityEngine::Rendering::AttachmentIndexArray UnityEngine::Rendering::AttachmentIndexArray::getStaticF_Emtpy() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::AttachmentIndexArray, "Emtpy",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AttachmentIndexArray>::get>();
}
inline void UnityEngine::Rendering::AttachmentIndexArray::_ctor(int32_t numAttachments) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AttachmentIndexArray>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numAttachments);
}
inline int32_t UnityEngine::Rendering::AttachmentIndexArray::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AttachmentIndexArray>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
inline void UnityEngine::Rendering::AttachmentIndexArray::set_Item(int32_t index, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AttachmentIndexArray>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline int32_t UnityEngine::Rendering::AttachmentIndexArray::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AttachmentIndexArray>::get(),
                                                                             "get_Length", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "a0", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "a1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "a2",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "a3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "a4", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "a5", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "a6", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "a7", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeAttachments", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::AttachmentIndexArray::AttachmentIndexArray(int32_t a0, int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7,
                                                                               int32_t activeAttachments) noexcept {
  this->a0 = a0;
  this->a1 = a1;
  this->a2 = a2;
  this->a3 = a3;
  this->a4 = a4;
  this->a5 = a5;
  this->a6 = a6;
  this->a7 = a7;
  this->activeAttachments = activeAttachments;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AttachmentIndexArray::AttachmentIndexArray() {}
