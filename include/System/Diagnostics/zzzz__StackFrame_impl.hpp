#pragma once
// IWYU pragma private; include "System/Diagnostics/StackFrame.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__StackFrame_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::StackFrame.get_frame_info
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, bool, ByRef<::System::Reflection::MethodBase*>, ByRef<int32_t>, ByRef<int32_t>, ByRef<::StringW>,
                                                                                           ByRef<int32_t>, ByRef<int32_t>)>(&::System::Diagnostics::StackFrame::get_frame_info)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d55098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), "get_frame_info", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Reflection::MethodBase*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3d550a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::StackFrame::*)(int32_t, bool)>(&::System::Diagnostics::StackFrame::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3d550f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetFileLineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetFileLineNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d55150;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetFileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetFileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d55158;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetSecureFileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetSecureFileName)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3d55160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), "GetSecureFileName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetILOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetILOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d55234;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (::System::Diagnostics::StackFrame::*)()>(
    &::System::Diagnostics::StackFrame::GetMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d5523c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetNativeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetNativeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d55244;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetMethodAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetMethodAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d5524c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), "GetMethodAddress",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetMethodIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetMethodIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d55254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), "GetMethodIndex",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.GetInternalMethodName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::GetInternalMethodName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d5525c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(),
                                                                               "GetInternalMethodName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::StackFrame.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::StackFrame::*)()>(&::System::Diagnostics::StackFrame::ToString)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x3d55264;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), 3));
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
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodBase*> const& System::Diagnostics::StackFrame::__cordl_internal_get_methodBase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodBase;
}
constexpr void System::Diagnostics::StackFrame::__cordl_internal_set_methodBase(::System::Reflection::MethodBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___methodBase)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fileName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___internalMethodName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool System::Diagnostics::StackFrame::get_frame_info(int32_t skip, bool needFileInfo, ByRef<::System::Reflection::MethodBase*> method, ByRef<int32_t> iloffset, ByRef<int32_t> native_offset,
                                                            ByRef<::StringW> file, ByRef<int32_t> line, ByRef<int32_t> column) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), "get_frame_info", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Reflection::MethodBase*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, skip, needFileInfo, method, iloffset, native_offset, file, line, column);
}
inline ::System::Diagnostics::StackFrame* System::Diagnostics::StackFrame::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::StackFrame*>());
}
inline void System::Diagnostics::StackFrame::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Diagnostics::StackFrame* System::Diagnostics::StackFrame::New_ctor(int32_t skipFrames, bool fNeedFileInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::StackFrame*>(skipFrames, fNeedFileInfo));
}
inline void System::Diagnostics::StackFrame::_ctor(int32_t skipFrames, bool fNeedFileInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, skipFrames, fNeedFileInfo);
}
inline int32_t System::Diagnostics::StackFrame::GetFileLineNumber() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::StackFrame::GetFileName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::StackFrame::GetSecureFileName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), "GetSecureFileName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Diagnostics::StackFrame::GetILOffset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodBase* System::Diagnostics::StackFrame::GetMethod() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(this, ___internal_method);
}
inline int32_t System::Diagnostics::StackFrame::GetNativeOffset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t System::Diagnostics::StackFrame::GetMethodAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), "GetMethodAddress",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline uint32_t System::Diagnostics::StackFrame::GetMethodIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), "GetMethodIndex",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::StackFrame::GetInternalMethodName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), "GetInternalMethodName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::StackFrame::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::StackFrame*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::StackFrame::StackFrame() {}
