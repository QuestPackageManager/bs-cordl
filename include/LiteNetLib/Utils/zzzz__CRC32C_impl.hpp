#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/Utils/zzzz__CRC32C_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Utils::CRC32C.Compute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::LiteNetLib::Utils::CRC32C::Compute)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x220832c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::CRC32C*>::get(), "Compute", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void LiteNetLib::Utils::CRC32C::setStaticF_Table(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "Table", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::CRC32C*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> LiteNetLib::Utils::CRC32C::getStaticF_Table() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "Table", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::CRC32C*>::get>();
}
inline uint32_t LiteNetLib::Utils::CRC32C::Compute(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::CRC32C*>::get(), "Compute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, input, offset, length);
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::CRC32C::CRC32C() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
