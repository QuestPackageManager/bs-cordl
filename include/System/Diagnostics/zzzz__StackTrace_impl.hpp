#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__StackTrace_def.hpp"
#include "System/Diagnostics/zzzz__StackFrame_def.hpp"
#include "System/Diagnostics/zzzz__StackTrace_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::__StackTrace__TraceFormat::__StackTrace__TraceFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::__StackTrace__TraceFormat::__StackTrace__TraceFormat() {}
constexpr ::System::Diagnostics::__StackTrace__TraceFormat System::Diagnostics::__StackTrace__TraceFormat::Normal{ static_cast<int32_t>(0x0) };
constexpr ::System::Diagnostics::__StackTrace__TraceFormat System::Diagnostics::__StackTrace__TraceFormat::TrailingNewLine{ static_cast<int32_t>(0x1) };
constexpr ::System::Diagnostics::__StackTrace__TraceFormat System::Diagnostics::__StackTrace__TraceFormat::NoResourceLookup{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Diagnostics::StackTrace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::StackTrace::*)()>(&::System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x257a2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::StackTrace::*)(bool)>(&::System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x257a51c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::StackTrace::*)(int32_t)>(&::System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x257a54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::StackTrace::*)(int32_t, bool)>(&::System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x257a57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.init_frames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::StackTrace::*)(int32_t, bool)>(&::System::Diagnostics::StackTrace::init_frames)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x257a320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), "init_frames", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.get_trace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*> (*)(::System::Exception*, int32_t, bool)>(&::System::Diagnostics::StackTrace::get_trace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257a5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), "get_trace", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::StackTrace::*)(::System::Exception*, bool)>(&::System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x257a5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::StackTrace::*)(::System::Exception*, int32_t, bool)>(
    &::System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x257a5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.get_FrameCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Diagnostics::StackTrace::*)()>(&::System::Diagnostics::StackTrace::get_FrameCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x257a6b4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.GetFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::StackFrame* (::System::Diagnostics::StackTrace::*)(int32_t)>(
    &::System::Diagnostics::StackTrace::GetFrame)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x257a6cc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.GetAotId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Diagnostics::StackTrace::GetAotId)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x257a72c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), "GetAotId",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.AddFrames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::StackTrace::*)(::System::Text::StringBuilder*, bool, ByRef<bool>)>(
    &::System::Diagnostics::StackTrace::AddFrames)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x257a7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), "AddFrames", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.GetFullNameForStackTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::StackTrace::*)(
    ::System::Text::StringBuilder*, ::System::Reflection::MethodBase*, bool, ByRef<bool>, ByRef<bool>)>(&::System::Diagnostics::StackTrace::GetFullNameForStackTrace)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x257aca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), "GetFullNameForStackTrace", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.ConvertAsyncStateMachineMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::Reflection::MethodBase*>, ByRef<::System::Type*>)>(
    &::System::Diagnostics::StackTrace::ConvertAsyncStateMachineMethod)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x257b2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), "ConvertAsyncStateMachineMethod", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Reflection::MethodBase*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::StackTrace::*)()>(&::System::Diagnostics::StackTrace::ToString)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x257b75c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::StackTrace::*)(::System::Diagnostics::__StackTrace__TraceFormat)>(
    &::System::Diagnostics::StackTrace::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x257b8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), "ToString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::__StackTrace__TraceFormat>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*>& System::Diagnostics::StackTrace::__get_frames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr ::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*> const& System::Diagnostics::StackTrace::__get_frames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr void System::Diagnostics::StackTrace::__set_frames(::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___frames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*>& System::Diagnostics::StackTrace::__get_captured_traces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captured_traces;
}
constexpr ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> const& System::Diagnostics::StackTrace::__get_captured_traces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captured_traces;
}
constexpr void System::Diagnostics::StackTrace::__set_captured_traces(::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___captured_traces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Diagnostics::StackTrace::__get_debug_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debug_info;
}
constexpr bool const& System::Diagnostics::StackTrace::__get_debug_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debug_info;
}
constexpr void System::Diagnostics::StackTrace::__set_debug_info(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debug_info = value;
}
inline void System::Diagnostics::StackTrace::setStaticF_isAotidSet(bool value) {
  ::cordl_internals::setStaticField<bool, "isAotidSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get>(std::forward<bool>(value));
}
inline bool System::Diagnostics::StackTrace::getStaticF_isAotidSet() {
  return ::cordl_internals::getStaticField<bool, "isAotidSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get>();
}
inline void System::Diagnostics::StackTrace::setStaticF_aotid(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "aotid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Diagnostics::StackTrace::getStaticF_aotid() {
  return ::cordl_internals::getStaticField<::StringW, "aotid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get>();
}
inline ::System::Diagnostics::StackTrace* System::Diagnostics::StackTrace::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::StackTrace*>());
}
inline void System::Diagnostics::StackTrace::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Diagnostics::StackTrace* System::Diagnostics::StackTrace::New_ctor(bool fNeedFileInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::StackTrace*>(fNeedFileInfo));
}
inline void System::Diagnostics::StackTrace::_ctor(bool fNeedFileInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fNeedFileInfo);
}
inline ::System::Diagnostics::StackTrace* System::Diagnostics::StackTrace::New_ctor(int32_t skipFrames) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::StackTrace*>(skipFrames));
}
inline void System::Diagnostics::StackTrace::_ctor(int32_t skipFrames) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, skipFrames);
}
inline ::System::Diagnostics::StackTrace* System::Diagnostics::StackTrace::New_ctor(int32_t skipFrames, bool fNeedFileInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::StackTrace*>(skipFrames, fNeedFileInfo));
}
inline void System::Diagnostics::StackTrace::_ctor(int32_t skipFrames, bool fNeedFileInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, skipFrames, fNeedFileInfo);
}
inline void System::Diagnostics::StackTrace::init_frames(int32_t skipFrames, bool fNeedFileInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), "init_frames", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, skipFrames, fNeedFileInfo);
}
inline ::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*> System::Diagnostics::StackTrace::get_trace(::System::Exception* e, int32_t skipFrames,
                                                                                                                                             bool fNeedFileInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), "get_trace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Diagnostics::StackFrame*, ::Array<::System::Diagnostics::StackFrame*>*>, false>(nullptr, ___internal_method, e, skipFrames,
                                                                                                                                                fNeedFileInfo);
}
inline ::System::Diagnostics::StackTrace* System::Diagnostics::StackTrace::New_ctor(::System::Exception* e, bool fNeedFileInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::StackTrace*>(e, fNeedFileInfo));
}
inline void System::Diagnostics::StackTrace::_ctor(::System::Exception* e, bool fNeedFileInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, fNeedFileInfo);
}
inline ::System::Diagnostics::StackTrace* System::Diagnostics::StackTrace::New_ctor(::System::Exception* e, int32_t skipFrames, bool fNeedFileInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::StackTrace*>(e, skipFrames, fNeedFileInfo));
}
inline void System::Diagnostics::StackTrace::_ctor(::System::Exception* e, int32_t skipFrames, bool fNeedFileInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, skipFrames, fNeedFileInfo);
}
inline int32_t System::Diagnostics::StackTrace::get_FrameCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Diagnostics::StackFrame* System::Diagnostics::StackTrace::GetFrame(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::StackFrame*, false>(this, ___internal_method, index);
}
inline ::StringW System::Diagnostics::StackTrace::GetAotId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), "GetAotId",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool System::Diagnostics::StackTrace::AddFrames(::System::Text::StringBuilder* sb, bool separator, ByRef<bool> isAsync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), "AddFrames", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sb, separator, isAsync);
}
inline void System::Diagnostics::StackTrace::GetFullNameForStackTrace(::System::Text::StringBuilder* sb, ::System::Reflection::MethodBase* mi, bool needsNewLine, ByRef<bool> skipped,
                                                                      ByRef<bool> isAsync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), "GetFullNameForStackTrace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb, mi, needsNewLine, skipped, isAsync);
}
inline void System::Diagnostics::StackTrace::ConvertAsyncStateMachineMethod(ByRef<::System::Reflection::MethodBase*> method, ByRef<::System::Type*> declaringType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), "ConvertAsyncStateMachineMethod", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Reflection::MethodBase*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, method, declaringType);
}
inline ::StringW System::Diagnostics::StackTrace::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::StackTrace::ToString(::System::Diagnostics::__StackTrace__TraceFormat traceFormat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackTrace*>::get(), "ToString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::__StackTrace__TraceFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, traceFormat);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::StackTrace::StackTrace() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
