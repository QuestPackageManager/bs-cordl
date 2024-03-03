#pragma once
#include "LiteNetLib/zzzz__INetLogger_def.hpp"
#include "LiteNetLib/zzzz__NetLogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LiteNetLib::INetLogger.WriteNet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::INetLogger::*)(::LiteNetLib::NetLogLevel, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::LiteNetLib::INetLogger::WriteNet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::INetLogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::INetLogger*>::get(), 0));
    return ___internal_method;
  }
};
inline void LiteNetLib::INetLogger::WriteNet(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::INetLogger*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, str, args);
}
