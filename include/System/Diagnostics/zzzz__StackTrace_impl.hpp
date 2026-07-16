#pragma once
// IWYU pragma private; include "System/Diagnostics/StackTrace.hpp"
#include "System/Diagnostics/zzzz__StackFrame_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__StackTrace_def.hpp"
#include "System/Diagnostics/zzzz__StackFrame_def.hpp"
#include "System/Diagnostics/zzzz__StackTrace_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::StackTrace_TraceFormat::StackTrace_TraceFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::StackTrace_TraceFormat::StackTrace_TraceFormat() {}
constexpr ::System::Diagnostics::StackTrace_TraceFormat System::Diagnostics::StackTrace_TraceFormat::Normal{ static_cast<int32_t>(0x0) };
constexpr ::System::Diagnostics::StackTrace_TraceFormat System::Diagnostics::StackTrace_TraceFormat::TrailingNewLine{ static_cast<int32_t>(0x1) };
constexpr ::System::Diagnostics::StackTrace_TraceFormat System::Diagnostics::StackTrace_TraceFormat::NoResourceLookup{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Diagnostics::StackTrace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::StackTrace::*)()>(&::System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bdeda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::StackTrace::*)(bool)>(&::System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bdefc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::StackTrace::*)(int32_t)>(&::System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bdefd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::StackTrace::*)(int32_t, bool)>(&::System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bdefd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.init_frames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::StackTrace::*)(int32_t, bool)>(&::System::Diagnostics::StackTrace::init_frames)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5bdedb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { "init_frames", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.get_trace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Diagnostics::StackFrame*> (*)(::System::Exception*, int32_t, bool)>(&::System::Diagnostics::StackTrace::get_trace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bdefdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(),
                                                             { "get_trace", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::StackTrace::*)(::System::Exception*, bool)>(&::System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bdefe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ".ctor", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::StackTrace::*)(::System::Exception*, int32_t, bool)>(&::System::Diagnostics::StackTrace::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5bdefec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ".ctor", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.get_FrameCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::StackTrace::*)()>(&::System::Diagnostics::StackTrace::get_FrameCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bdf0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ::i2c::class_of<::System::Diagnostics::StackTrace*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.GetFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::StackFrame* (::System::Diagnostics::StackTrace::*)(int32_t)>(&::System::Diagnostics::StackTrace::GetFrame)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bdf0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ::i2c::class_of<::System::Diagnostics::StackTrace*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.GetFrames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Diagnostics::StackFrame*> (::System::Diagnostics::StackTrace::*)()>(&::System::Diagnostics::StackTrace::GetFrames)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5bdf134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ::i2c::class_of<::System::Diagnostics::StackTrace*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.GetAotId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Diagnostics::StackTrace::GetAotId)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5bdf324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { "GetAotId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.AddFrames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::StackTrace::*)(::System::Text::StringBuilder*, bool, ::by_ref<bool>)>(
    &::System::Diagnostics::StackTrace::AddFrames)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x5bdf3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(),
                                                             { "AddFrames", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.GetFullNameForStackTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::StackTrace::*)(::System::Text::StringBuilder*, ::System::Reflection::MethodBase*, bool, ::by_ref<bool>,
                                                                                                   ::by_ref<bool>)>(&::System::Diagnostics::StackTrace::GetFullNameForStackTrace)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x5bdf954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(),
                                                                                           { "GetFullNameForStackTrace",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Reflection::MethodBase*>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.ConvertAsyncStateMachineMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Reflection::MethodBase*>, ::by_ref<::System::Type*>)>(
    &::System::Diagnostics::StackTrace::ConvertAsyncStateMachineMethod)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5bdffb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(),
                                         { "ConvertAsyncStateMachineMethod", {}, { ::i2c::type_of<::by_ref<::System::Reflection::MethodBase*>>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::StackTrace::*)()>(&::System::Diagnostics::StackTrace::ToString)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5be03b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ::i2c::class_of<::System::Diagnostics::StackTrace*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackTrace.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::StackTrace::*)(::System::Diagnostics::StackTrace_TraceFormat)>(&::System::Diagnostics::StackTrace::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5be0520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { "ToString", {}, { ::i2c::type_of<::System::Diagnostics::StackTrace_TraceFormat>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Diagnostics::StackFrame*>& System::Diagnostics::StackTrace::__cordl_internal_get_frames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr ::ArrayW<::System::Diagnostics::StackFrame*> const& System::Diagnostics::StackTrace::__cordl_internal_get_frames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr void System::Diagnostics::StackTrace::__cordl_internal_set_frames(::ArrayW<::System::Diagnostics::StackFrame*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frames = value;
}
constexpr ::ArrayW<::System::Diagnostics::StackTrace*>& System::Diagnostics::StackTrace::__cordl_internal_get_captured_traces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captured_traces;
}
constexpr ::ArrayW<::System::Diagnostics::StackTrace*> const& System::Diagnostics::StackTrace::__cordl_internal_get_captured_traces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captured_traces;
}
constexpr void System::Diagnostics::StackTrace::__cordl_internal_set_captured_traces(::ArrayW<::System::Diagnostics::StackTrace*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___captured_traces = value;
}
constexpr bool& System::Diagnostics::StackTrace::__cordl_internal_get_debug_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debug_info;
}
constexpr bool const& System::Diagnostics::StackTrace::__cordl_internal_get_debug_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debug_info;
}
constexpr void System::Diagnostics::StackTrace::__cordl_internal_set_debug_info(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debug_info = value;
}
inline void System::Diagnostics::StackTrace::setStaticF_isAotidSet(bool value) {
  ::cordl_internals::setStaticField<bool, "isAotidSet", ::System::Diagnostics::StackTrace*>(std::forward<bool>(value));
}
inline bool System::Diagnostics::StackTrace::getStaticF_isAotidSet() {
  return ::cordl_internals::getStaticField<bool, "isAotidSet", ::System::Diagnostics::StackTrace*>();
}
inline void System::Diagnostics::StackTrace::setStaticF_aotid(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "aotid", ::System::Diagnostics::StackTrace*>(std::forward<::StringW>(value));
}
inline ::StringW System::Diagnostics::StackTrace::getStaticF_aotid() {
  return ::cordl_internals::getStaticField<::StringW, "aotid", ::System::Diagnostics::StackTrace*>();
}
inline void System::Diagnostics::StackTrace::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::StackTrace::_ctor(bool fNeedFileInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fNeedFileInfo);
}
inline void System::Diagnostics::StackTrace::_ctor(int32_t skipFrames) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skipFrames);
}
inline void System::Diagnostics::StackTrace::_ctor(int32_t skipFrames, bool fNeedFileInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skipFrames, fNeedFileInfo);
}
inline void System::Diagnostics::StackTrace::init_frames(int32_t skipFrames, bool fNeedFileInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { "init_frames", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skipFrames, fNeedFileInfo);
}
inline ::ArrayW<::System::Diagnostics::StackFrame*> System::Diagnostics::StackTrace::get_trace(::System::Exception* e, int32_t skipFrames, bool fNeedFileInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { "get_trace", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Diagnostics::StackFrame*>>(nullptr, ___internal_method, e, skipFrames, fNeedFileInfo);
}
inline void System::Diagnostics::StackTrace::_ctor(::System::Exception* e, bool fNeedFileInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ".ctor", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, fNeedFileInfo);
}
inline void System::Diagnostics::StackTrace::_ctor(::System::Exception* e, int32_t skipFrames, bool fNeedFileInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { ".ctor", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, skipFrames, fNeedFileInfo);
}
inline int32_t System::Diagnostics::StackTrace::get_FrameCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::StackTrace*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Diagnostics::StackFrame* System::Diagnostics::StackTrace::GetFrame(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::StackTrace*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::StackFrame*>(this, ___internal_method, index);
}
inline ::ArrayW<::System::Diagnostics::StackFrame*> System::Diagnostics::StackTrace::GetFrames() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::StackTrace*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Diagnostics::StackFrame*>>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::StackTrace::GetAotId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { "GetAotId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool System::Diagnostics::StackTrace::AddFrames(::System::Text::StringBuilder* sb, bool separator, ::by_ref<bool> isAsync) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(),
                                                           { "AddFrames", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sb, separator, isAsync);
}
inline void System::Diagnostics::StackTrace::GetFullNameForStackTrace(::System::Text::StringBuilder* sb, ::System::Reflection::MethodBase* mi, bool needsNewLine, ::by_ref<bool> skipped,
                                                                      ::by_ref<bool> isAsync) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { "GetFullNameForStackTrace",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Reflection::MethodBase*>(),
                                                                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb, mi, needsNewLine, skipped, isAsync);
}
inline void System::Diagnostics::StackTrace::ConvertAsyncStateMachineMethod(::by_ref<::System::Reflection::MethodBase*> method, ::by_ref<::System::Type*> declaringType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(),
                                       { "ConvertAsyncStateMachineMethod", {}, { ::i2c::type_of<::by_ref<::System::Reflection::MethodBase*>>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, method, declaringType);
}
inline ::StringW System::Diagnostics::StackTrace::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::StackTrace*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::StackTrace::ToString(::System::Diagnostics::StackTrace_TraceFormat traceFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackTrace*>(), { "ToString", {}, { ::i2c::type_of<::System::Diagnostics::StackTrace_TraceFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, traceFormat);
}
inline ::System::Diagnostics::StackTrace* System::Diagnostics::StackTrace::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::StackTrace*>());
}
inline ::System::Diagnostics::StackTrace* System::Diagnostics::StackTrace::New_ctor(bool fNeedFileInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::StackTrace*>(fNeedFileInfo));
}
inline ::System::Diagnostics::StackTrace* System::Diagnostics::StackTrace::New_ctor(int32_t skipFrames) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::StackTrace*>(skipFrames));
}
inline ::System::Diagnostics::StackTrace* System::Diagnostics::StackTrace::New_ctor(int32_t skipFrames, bool fNeedFileInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::StackTrace*>(skipFrames, fNeedFileInfo));
}
inline ::System::Diagnostics::StackTrace* System::Diagnostics::StackTrace::New_ctor(::System::Exception* e, bool fNeedFileInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::StackTrace*>(e, fNeedFileInfo));
}
inline ::System::Diagnostics::StackTrace* System::Diagnostics::StackTrace::New_ctor(::System::Exception* e, int32_t skipFrames, bool fNeedFileInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::StackTrace*>(e, skipFrames, fNeedFileInfo));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::StackTrace::StackTrace() {}
