#pragma once
#include "System/zzzz__Span_1_impl.hpp"
#include "System/Text/zzzz__ValueUtf8Converter_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Text::ValueUtf8Converter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::ValueUtf8Converter::*)(::System::Span_1<uint8_t>)>(
    &::System::Text::ValueUtf8Converter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x253d5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::ValueUtf8Converter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueUtf8Converter.ConvertAndTerminateString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Span_1<uint8_t> (::System::Text::ValueUtf8Converter::*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::System::Text::ValueUtf8Converter::ConvertAndTerminateString)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x253d5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::ValueUtf8Converter>::get(), "ConvertAndTerminateString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueUtf8Converter.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::ValueUtf8Converter::*)()>(&::System::Text::ValueUtf8Converter::Dispose)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x253d890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::ValueUtf8Converter>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Text::ValueUtf8Converter::_ctor(::System::Span_1<uint8_t> initialBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::ValueUtf8Converter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialBuffer);
}
inline ::System::Span_1<uint8_t> System::Text::ValueUtf8Converter::ConvertAndTerminateString(::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::ValueUtf8Converter>::get(), "ConvertAndTerminateString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<uint8_t>, false>(this, ___internal_method, value);
}
inline void System::Text::ValueUtf8Converter::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::ValueUtf8Converter>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_arrayToReturnToPool", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_bytes", ty:
// "::System::Span_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Text::ValueUtf8Converter::ValueUtf8Converter(::ArrayW<uint8_t, ::Array<uint8_t>*> _arrayToReturnToPool, ::System::Span_1<uint8_t> _bytes) noexcept {
  this->_arrayToReturnToPool = _arrayToReturnToPool;
  this->_bytes = _bytes;
}
// Ctor Parameters []
constexpr ::System::Text::ValueUtf8Converter::ValueUtf8Converter() {}
