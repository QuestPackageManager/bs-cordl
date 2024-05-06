#pragma once
#include "System/Diagnostics/zzzz__TraceOptions_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/Diagnostics/zzzz__TraceListener_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventCache_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/Diagnostics/zzzz__TraceFilter_def.hpp"
#include "System/Diagnostics/zzzz__TraceOptions_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::TraceListener._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceListener::*)(::StringW)>(&::System::Diagnostics::TraceListener::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2fa2628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.get_IsThreadSafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::get_IsThreadSafe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fa2660;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2fa2668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceListener::*)(bool)>(&::System::Diagnostics::TraceListener::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2fa26d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2fa26d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.set_IndentLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceListener::*)(int32_t)>(&::System::Diagnostics::TraceListener::set_IndentLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2fa22e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "set_IndentLevel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.set_IndentSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceListener::*)(int32_t)>(&::System::Diagnostics::TraceListener::set_IndentSize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2fa2304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "set_IndentSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.get_Filter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceFilter* (::System::Diagnostics::TraceListener::*)()>(
    &::System::Diagnostics::TraceListener::get_Filter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fa26dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "get_Filter",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.get_NeedIndent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::get_NeedIndent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fa26e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "get_NeedIndent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.set_NeedIndent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceListener::*)(bool)>(&::System::Diagnostics::TraceListener::set_NeedIndent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fa26ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "set_NeedIndent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.get_TraceOutputOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceOptions (::System::Diagnostics::TraceListener::*)()>(
    &::System::Diagnostics::TraceListener::get_TraceOutputOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fa26f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(),
                                                                               "get_TraceOutputOptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceListener::*)(::StringW)>(&::System::Diagnostics::TraceListener::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.WriteIndent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::WriteIndent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2fa2700;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.WriteLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceListener::*)(::StringW)>(&::System::Diagnostics::TraceListener::WriteLine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.TraceEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceListener::*)(
    ::System::Diagnostics::TraceEventCache*, ::StringW, ::System::Diagnostics::TraceEventType, int32_t, ::StringW)>(&::System::Diagnostics::TraceListener::TraceEvent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2fa27d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.WriteHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceListener::*)(::StringW, ::System::Diagnostics::TraceEventType, int32_t)>(
    &::System::Diagnostics::TraceListener::WriteHeader)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2fa2898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "WriteHeader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.WriteFooter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceListener::*)(::System::Diagnostics::TraceEventCache*)>(
    &::System::Diagnostics::TraceListener::WriteFooter)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x2fa29a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "WriteFooter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventCache*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.IsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::TraceListener::*)(::System::Diagnostics::TraceOptions)>(
    &::System::Diagnostics::TraceListener::IsEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fa2f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "IsEnabled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceOptions>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Diagnostics::TraceListener::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Diagnostics::TraceListener::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& System::Diagnostics::TraceListener::__cordl_internal_get_indentLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentLevel;
}
constexpr int32_t const& System::Diagnostics::TraceListener::__cordl_internal_get_indentLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentLevel;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_indentLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indentLevel = value;
}
constexpr int32_t& System::Diagnostics::TraceListener::__cordl_internal_get_indentSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentSize;
}
constexpr int32_t const& System::Diagnostics::TraceListener::__cordl_internal_get_indentSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentSize;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_indentSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indentSize = value;
}
constexpr ::System::Diagnostics::TraceOptions& System::Diagnostics::TraceListener::__cordl_internal_get_traceOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___traceOptions;
}
constexpr ::System::Diagnostics::TraceOptions const& System::Diagnostics::TraceListener::__cordl_internal_get_traceOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___traceOptions;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_traceOptions(::System::Diagnostics::TraceOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___traceOptions = value;
}
constexpr bool& System::Diagnostics::TraceListener::__cordl_internal_get_needIndent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needIndent;
}
constexpr bool const& System::Diagnostics::TraceListener::__cordl_internal_get_needIndent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___needIndent;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_needIndent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___needIndent = value;
}
constexpr ::StringW& System::Diagnostics::TraceListener::__cordl_internal_get_listenerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listenerName;
}
constexpr ::StringW const& System::Diagnostics::TraceListener::__cordl_internal_get_listenerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listenerName;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_listenerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___listenerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Diagnostics::TraceFilter*& System::Diagnostics::TraceListener::__cordl_internal_get_filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filter;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::TraceFilter*> const& System::Diagnostics::TraceListener::__cordl_internal_get_filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filter;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_filter(::System::Diagnostics::TraceFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___filter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Diagnostics::TraceListener* System::Diagnostics::TraceListener::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::TraceListener*>(name));
}
inline void System::Diagnostics::TraceListener::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline bool System::Diagnostics::TraceListener::get_IsThreadSafe() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Diagnostics::TraceListener::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::set_IndentLevel(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "set_IndentLevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Diagnostics::TraceListener::set_IndentSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "set_IndentSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Diagnostics::TraceFilter* System::Diagnostics::TraceListener::get_Filter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "get_Filter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceFilter*, false>(this, ___internal_method);
}
inline bool System::Diagnostics::TraceListener::get_NeedIndent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "get_NeedIndent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::set_NeedIndent(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "set_NeedIndent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Diagnostics::TraceOptions System::Diagnostics::TraceListener::get_TraceOutputOptions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(),
                                                                             "get_TraceOutputOptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceOptions, false>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::Write(::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void System::Diagnostics::TraceListener::WriteIndent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::WriteLine(::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void System::Diagnostics::TraceListener::TraceEvent(::System::Diagnostics::TraceEventCache* eventCache, ::StringW source, ::System::Diagnostics::TraceEventType eventType, int32_t id,
                                                           ::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventCache, source, eventType, id, message);
}
inline void System::Diagnostics::TraceListener::WriteHeader(::StringW source, ::System::Diagnostics::TraceEventType eventType, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "WriteHeader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, eventType, id);
}
inline void System::Diagnostics::TraceListener::WriteFooter(::System::Diagnostics::TraceEventCache* eventCache) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "WriteFooter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventCache*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventCache);
}
inline bool System::Diagnostics::TraceListener::IsEnabled(::System::Diagnostics::TraceOptions opts) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceListener*>::get(), "IsEnabled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, opts);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceListener::TraceListener() {}
