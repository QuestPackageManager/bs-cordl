#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__TraceFilter_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventCache_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::TraceFilter.ShouldTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::TraceFilter::*)(
    ::System::Diagnostics::TraceEventCache*, ::StringW, ::System::Diagnostics::TraceEventType, int32_t, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::System::Object*,
    ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::Diagnostics::TraceFilter::ShouldTrace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceFilter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceFilter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceFilter.ShouldTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::TraceFilter::*)(
    ::System::Diagnostics::TraceEventCache*, ::StringW, ::System::Diagnostics::TraceEventType, int32_t, ::StringW)>(&::System::Diagnostics::TraceFilter::ShouldTrace)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x296d088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceFilter*>::get(), "ShouldTrace", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventCache*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline bool System::Diagnostics::TraceFilter::ShouldTrace(::System::Diagnostics::TraceEventCache* cache, ::StringW source, ::System::Diagnostics::TraceEventType eventType, int32_t id,
                                                          ::StringW formatOrMessage, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::System::Object* data1,
                                                          ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceFilter*>::get(), "ShouldTrace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventCache*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cache, source, eventType, id, formatOrMessage, args, data1, data);
}
inline bool System::Diagnostics::TraceFilter::ShouldTrace(::System::Diagnostics::TraceEventCache* cache, ::StringW source, ::System::Diagnostics::TraceEventType eventType, int32_t id,
                                                          ::StringW formatOrMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceFilter*>::get(), "ShouldTrace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventCache*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cache, source, eventType, id, formatOrMessage);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceFilter::TraceFilter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
