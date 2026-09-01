#pragma once
// IWYU pragma private; include "System\Diagnostics\StackFrame.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__StackFrame_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::StackFrame.get_frame_info
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, bool, ::by_ref<::System::Reflection::MethodBase*>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<::StringW>,
                                                                ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Diagnostics::StackFrame::get_frame_info)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be0cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(),
                            { "get_frame_info",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Reflection::MethodBase*>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5be0d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::StackFrame::*)(int32_t, bool)>(&::System::Diagnostics::StackFrame::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5be0d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetFileLineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetFileLineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { ::i2c::class_of<::System::Diagnostics::StackFrame*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetFileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { ::i2c::class_of<::System::Diagnostics::StackFrame*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetSecureFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetSecureFileName)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5be0d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { "GetSecureFileName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetILOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetILOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { ::i2c::class_of<::System::Diagnostics::StackFrame*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { ::i2c::class_of<::System::Diagnostics::StackFrame*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetNativeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetNativeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { ::i2c::class_of<::System::Diagnostics::StackFrame*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetMethodAddress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetMethodAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { "GetMethodAddress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetMethodIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetMethodIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { "GetMethodIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetInternalMethodName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetInternalMethodName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { "GetInternalMethodName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::ToString)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5be0e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { ::i2c::class_of<::System::Diagnostics::StackFrame*>(), 3 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Diagnostics::StackFrame::__cordl_internal_get_ilOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ilOffset;
}
constexpr int32_t const& System::Diagnostics::StackFrame::__cordl_internal_get_ilOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ilOffset;
}
constexpr void System::Diagnostics::StackFrame::__cordl_internal_set_ilOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ilOffset = value;
}
constexpr int32_t& System::Diagnostics::StackFrame::__cordl_internal_get_nativeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeOffset;
}
constexpr int32_t const& System::Diagnostics::StackFrame::__cordl_internal_get_nativeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeOffset;
}
constexpr void System::Diagnostics::StackFrame::__cordl_internal_set_nativeOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nativeOffset = value;
}
constexpr int64_t& System::Diagnostics::StackFrame::__cordl_internal_get_methodAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodAddress;
}
constexpr int64_t const& System::Diagnostics::StackFrame::__cordl_internal_get_methodAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodAddress;
}
constexpr void System::Diagnostics::StackFrame::__cordl_internal_set_methodAddress(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___methodAddress = value;
}
constexpr uint32_t& System::Diagnostics::StackFrame::__cordl_internal_get_methodIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodIndex;
}
constexpr uint32_t const& System::Diagnostics::StackFrame::__cordl_internal_get_methodIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodIndex;
}
constexpr void System::Diagnostics::StackFrame::__cordl_internal_set_methodIndex(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___methodIndex = value;
}
constexpr ::System::Reflection::MethodBase*& System::Diagnostics::StackFrame::__cordl_internal_get_methodBase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodBase;
}
constexpr ::System::Reflection::MethodBase* const& System::Diagnostics::StackFrame::__cordl_internal_get_methodBase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodBase;
}
constexpr void System::Diagnostics::StackFrame::__cordl_internal_set_methodBase(::System::Reflection::MethodBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___methodBase = value;
}
constexpr ::StringW& System::Diagnostics::StackFrame::__cordl_internal_get_fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr ::StringW const& System::Diagnostics::StackFrame::__cordl_internal_get_fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr void System::Diagnostics::StackFrame::__cordl_internal_set_fileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fileName = value;
}
constexpr int32_t& System::Diagnostics::StackFrame::__cordl_internal_get_lineNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumber;
}
constexpr int32_t const& System::Diagnostics::StackFrame::__cordl_internal_get_lineNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineNumber;
}
constexpr void System::Diagnostics::StackFrame::__cordl_internal_set_lineNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineNumber = value;
}
constexpr int32_t& System::Diagnostics::StackFrame::__cordl_internal_get_columnNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnNumber;
}
constexpr int32_t const& System::Diagnostics::StackFrame::__cordl_internal_get_columnNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnNumber;
}
constexpr void System::Diagnostics::StackFrame::__cordl_internal_set_columnNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___columnNumber = value;
}
constexpr ::StringW& System::Diagnostics::StackFrame::__cordl_internal_get_internalMethodName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalMethodName;
}
constexpr ::StringW const& System::Diagnostics::StackFrame::__cordl_internal_get_internalMethodName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalMethodName;
}
constexpr void System::Diagnostics::StackFrame::__cordl_internal_set_internalMethodName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___internalMethodName = value;
}
inline bool System::Diagnostics::StackFrame::get_frame_info(int32_t skip, bool needFileInfo, ::by_ref<::System::Reflection::MethodBase*> method, ::by_ref<int32_t> iloffset,
                                                            ::by_ref<int32_t> native_offset, ::by_ref<::StringW> file, ::by_ref<int32_t> line, ::by_ref<int32_t> column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(),
                                       { "get_frame_info",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Reflection::MethodBase*>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                           ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, skip, needFileInfo, method, iloffset, native_offset, file, line, column);
}
inline void System::Diagnostics::StackFrame::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::StackFrame::_ctor(int32_t skipFrames, bool fNeedFileInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skipFrames, fNeedFileInfo);
}
inline int32_t System::Diagnostics::StackFrame::GetFileLineNumber() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::StackFrame*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::StackFrame::GetFileName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::StackFrame*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::StackFrame::GetSecureFileName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { "GetSecureFileName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Diagnostics::StackFrame::GetILOffset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::StackFrame*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Reflection::MethodBase* System::Diagnostics::StackFrame::GetMethod() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::StackFrame*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(this, ___internal_method);
}
inline int32_t System::Diagnostics::StackFrame::GetNativeOffset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::StackFrame*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t System::Diagnostics::StackFrame::GetMethodAddress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { "GetMethodAddress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline uint32_t System::Diagnostics::StackFrame::GetMethodIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { "GetMethodIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::StackFrame::GetInternalMethodName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::StackFrame*>(), { "GetInternalMethodName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::StackFrame::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::StackFrame*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Diagnostics::StackFrame* System::Diagnostics::StackFrame::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::StackFrame*>());
}
inline ::System::Diagnostics::StackFrame* System::Diagnostics::StackFrame::New_ctor(int32_t skipFrames, bool fNeedFileInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::StackFrame*>(skipFrames, fNeedFileInfo));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::StackFrame::StackFrame() {}
