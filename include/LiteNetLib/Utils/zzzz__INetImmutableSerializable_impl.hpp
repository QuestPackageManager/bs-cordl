#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/INetImmutableSerializable.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Utils::INetImmutableSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::INetImmutableSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::LiteNetLib::Utils::INetImmutableSerializable::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::INetImmutableSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::INetImmutableSerializable*>::get(), 0));
    return ___internal_method;
  }
};
inline void LiteNetLib::Utils::INetImmutableSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::INetImmutableSerializable*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
