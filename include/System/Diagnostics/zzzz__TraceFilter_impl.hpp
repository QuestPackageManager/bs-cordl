#pragma once
// IWYU pragma private; include "System\Diagnostics\TraceFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__TraceFilter_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventCache_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::TraceFilter.ShouldTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::TraceFilter::*)(::System::Diagnostics::TraceEventCache*, ::StringW, ::System::Diagnostics::TraceEventType, int32_t,
                                                                                                    ::StringW, ::ArrayW<::System::Object*>, ::System::Object*, ::ArrayW<::System::Object*>)>(
    &::System::Diagnostics::TraceFilter::ShouldTrace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceFilter*>(), { ::i2c::class_of<::System::Diagnostics::TraceFilter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceFilter.ShouldTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::TraceFilter::*)(::System::Diagnostics::TraceEventCache*, ::StringW, ::System::Diagnostics::TraceEventType, int32_t,
                                                                                                    ::StringW)>(&::System::Diagnostics::TraceFilter::ShouldTrace)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6398848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceFilter*>(),
                                                             { "ShouldTrace",
                                                               {},
                                                               { ::i2c::type_of<::System::Diagnostics::TraceEventCache*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline bool System::Diagnostics::TraceFilter::ShouldTrace(::System::Diagnostics::TraceEventCache* cache, ::StringW source, ::System::Diagnostics::TraceEventType eventType, int32_t id,
                                                          ::StringW formatOrMessage, ::ArrayW<::System::Object*> args, ::System::Object* data1, ::ArrayW<::System::Object*> data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::TraceFilter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cache, source, eventType, id, formatOrMessage, args, data1, data);
}
inline bool System::Diagnostics::TraceFilter::ShouldTrace(::System::Diagnostics::TraceEventCache* cache, ::StringW source, ::System::Diagnostics::TraceEventType eventType, int32_t id,
                                                          ::StringW formatOrMessage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::TraceFilter*>(),
                                                           { "ShouldTrace",
                                                             {},
                                                             { ::i2c::type_of<::System::Diagnostics::TraceEventCache*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cache, source, eventType, id, formatOrMessage);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceFilter::TraceFilter() {}
