#pragma once
// IWYU pragma private; include "System/Text/InternalDecoderBestFitFallback.hpp"
#include "System/Text/zzzz__DecoderFallback_impl.hpp"
#include "System/Text/zzzz__InternalDecoderBestFitFallback_def.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::InternalDecoderBestFitFallback::*)(::System::Text::Encoding*)>(
    &::System::Text::InternalDecoderBestFitFallback::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3e6e7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.CreateFallbackBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::DecoderFallbackBuffer* (::System::Text::InternalDecoderBestFitFallback::*)()>(
    &::System::Text::InternalDecoderBestFitFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3e6e7e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.get_MaxCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::InternalDecoderBestFitFallback::*)()>(
    &::System::Text::InternalDecoderBestFitFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e6e95c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::InternalDecoderBestFitFallback::*)(::System::Object*)>(
    &::System::Text::InternalDecoderBestFitFallback::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3e6e964;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::InternalDecoderBestFitFallback::*)()>(
    &::System::Text::InternalDecoderBestFitFallback::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e6ea0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(), 2));
    return ___internal_method;
  }
};
constexpr ::System::Text::Encoding*& System::Text::InternalDecoderBestFitFallback::__cordl_internal_get__encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::Text::InternalDecoderBestFitFallback::__cordl_internal_get__encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr void System::Text::InternalDecoderBestFitFallback::__cordl_internal_set__encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Text::InternalDecoderBestFitFallback::__cordl_internal_get__arrayBestFit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrayBestFit;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Text::InternalDecoderBestFitFallback::__cordl_internal_get__arrayBestFit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrayBestFit;
}
constexpr void System::Text::InternalDecoderBestFitFallback::__cordl_internal_set__arrayBestFit(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arrayBestFit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr char16_t& System::Text::InternalDecoderBestFitFallback::__cordl_internal_get__cReplacement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cReplacement;
}
constexpr char16_t const& System::Text::InternalDecoderBestFitFallback::__cordl_internal_get__cReplacement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cReplacement;
}
constexpr void System::Text::InternalDecoderBestFitFallback::__cordl_internal_set__cReplacement(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cReplacement = value;
}
inline void System::Text::InternalDecoderBestFitFallback::_ctor(::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoding);
}
inline ::System::Text::DecoderFallbackBuffer* System::Text::InternalDecoderBestFitFallback::CreateFallbackBuffer() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallbackBuffer*, false>(this, ___internal_method);
}
inline int32_t System::Text::InternalDecoderBestFitFallback::get_MaxCharCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Text::InternalDecoderBestFitFallback::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline int32_t System::Text::InternalDecoderBestFitFallback::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Text::InternalDecoderBestFitFallback* System::Text::InternalDecoderBestFitFallback::New_ctor(::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::InternalDecoderBestFitFallback*>(encoding));
}
// Ctor Parameters []
constexpr ::System::Text::InternalDecoderBestFitFallback::InternalDecoderBestFitFallback() {}
