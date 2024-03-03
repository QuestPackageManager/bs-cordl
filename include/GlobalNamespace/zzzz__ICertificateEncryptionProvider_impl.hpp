#pragma once
#include "GlobalNamespace/zzzz__ICertificateEncryptionProvider_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ICertificateEncryptionProvider.SignData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::ICertificateEncryptionProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::GlobalNamespace::ICertificateEncryptionProvider::SignData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICertificateEncryptionProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICertificateEncryptionProvider*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::ICertificateEncryptionProvider::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ICertificateEncryptionProvider::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::ICertificateEncryptionProvider::SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICertificateEncryptionProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data, offset, length);
}
