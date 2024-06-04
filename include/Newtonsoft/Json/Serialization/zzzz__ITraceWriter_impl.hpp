#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ITraceWriter.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "System/Diagnostics/zzzz__TraceLevel_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ITraceWriter.get_LevelFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceLevel (::Newtonsoft::Json::Serialization::ITraceWriter::*)()>(
    &::Newtonsoft::Json::Serialization::ITraceWriter::get_LevelFilter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ITraceWriter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ITraceWriter*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ITraceWriter.Trace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::ITraceWriter::*)(
    ::System::Diagnostics::TraceLevel, ::StringW, ::System::Exception*)>(&::Newtonsoft::Json::Serialization::ITraceWriter::Trace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ITraceWriter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ITraceWriter*>::get(), 1));
    return ___internal_method;
  }
};
inline ::System::Diagnostics::TraceLevel Newtonsoft::Json::Serialization::ITraceWriter::get_LevelFilter() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ITraceWriter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceLevel, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::ITraceWriter::Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception* ex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ITraceWriter*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, message, ex);
}
