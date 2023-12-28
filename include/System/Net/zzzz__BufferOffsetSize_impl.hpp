#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
//  Writing Method size for method: ::System::Net::BufferOffsetSize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::BufferOffsetSize::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, bool)>(
    &::System::Net::BufferOffsetSize::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x29a5d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::BufferOffsetSize*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BufferOffsetSize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::BufferOffsetSize::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(
    &::System::Net::BufferOffsetSize::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29a5dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::BufferOffsetSize*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Net::BufferOffsetSize::__get_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Net::BufferOffsetSize::__get_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr void System::Net::BufferOffsetSize::__set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::BufferOffsetSize::__get_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr int32_t const& System::Net::BufferOffsetSize::__get_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr void System::Net::BufferOffsetSize::__set_Offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Offset = value;
}
constexpr int32_t& System::Net::BufferOffsetSize::__get_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr int32_t const& System::Net::BufferOffsetSize::__get_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr void System::Net::BufferOffsetSize::__set_Size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Size = value;
}
inline ::System::Net::BufferOffsetSize* System::Net::BufferOffsetSize::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, bool copyBuffer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::BufferOffsetSize*>(buffer, offset, size, copyBuffer));
}
inline void System::Net::BufferOffsetSize::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, bool copyBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::BufferOffsetSize*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, size, copyBuffer);
}
inline ::System::Net::BufferOffsetSize* System::Net::BufferOffsetSize::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, bool copyBuffer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::BufferOffsetSize*>(buffer, copyBuffer));
}
inline void System::Net::BufferOffsetSize::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, bool copyBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::BufferOffsetSize*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, copyBuffer);
}
// Ctor Parameters []
constexpr ::System::Net::BufferOffsetSize::BufferOffsetSize() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
