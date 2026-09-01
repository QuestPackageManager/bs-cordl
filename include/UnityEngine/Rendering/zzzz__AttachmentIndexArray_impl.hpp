#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\AttachmentIndexArray.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentIndexArray_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentIndexArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentIndexArray::*)(int32_t)>(&::UnityEngine::Rendering::AttachmentIndexArray::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b1dab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentIndexArray>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentIndexArray.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::AttachmentIndexArray::*)(int32_t)>(&::UnityEngine::Rendering::AttachmentIndexArray::get_Item)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b1db40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentIndexArray>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentIndexArray.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentIndexArray::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::AttachmentIndexArray::set_Item)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b1dbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentIndexArray>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentIndexArray.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::AttachmentIndexArray::*)()>(&::UnityEngine::Rendering::AttachmentIndexArray::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1dca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentIndexArray>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::AttachmentIndexArray::setStaticF_Emtpy(::UnityEngine::Rendering::AttachmentIndexArray value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::AttachmentIndexArray, "Emtpy", ::UnityEngine::Rendering::AttachmentIndexArray>(
      std::forward<::UnityEngine::Rendering::AttachmentIndexArray>(value));
}
inline ::UnityEngine::Rendering::AttachmentIndexArray UnityEngine::Rendering::AttachmentIndexArray::getStaticF_Emtpy() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::AttachmentIndexArray, "Emtpy", ::UnityEngine::Rendering::AttachmentIndexArray>();
}
inline void UnityEngine::Rendering::AttachmentIndexArray::_ctor(int32_t numAttachments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentIndexArray>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, numAttachments);
}
inline int32_t UnityEngine::Rendering::AttachmentIndexArray::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentIndexArray>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, index);
}
inline void UnityEngine::Rendering::AttachmentIndexArray::set_Item(int32_t index, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentIndexArray>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline int32_t UnityEngine::Rendering::AttachmentIndexArray::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentIndexArray>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
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
