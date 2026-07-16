#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextLib.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextLib_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextLib_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(Il2CppObject*)>(&::UnityEngine::TextCore::Text::TextLib_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c09abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextLib_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::TextCore::Text::TextLib_BindingsMarshaller::ConvertToNative(Il2CppObject* textLib) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextLib_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, textLib);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextLib_BindingsMarshaller::TextLib_BindingsMarshaller() {}
