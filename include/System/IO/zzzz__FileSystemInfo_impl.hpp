#pragma once
#include "System/IO/zzzz__FileStatus_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/IO/zzzz__FileStatus_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
//  Writing Method size for method: ::System::IO::FileSystemInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x250ad58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileSystemInfo* (*)(::StringW, ::StringW, ByRef<::System::IO::FileStatus>)>(
    &::System::IO::FileSystemInfo::Create)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x250f7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "Create", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::FileStatus>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::FileSystemInfo::*)(ByRef<::System::IO::FileStatus>)>(&::System::IO::FileSystemInfo::Init)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x250f88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::FileStatus>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_Attributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileAttributes (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_Attributes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x250df30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_Attributes",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_ExistsCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_ExistsCore)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x250f908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_ExistsCore",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_LastWriteTimeCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_LastWriteTimeCore)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x250f9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_LastWriteTimeCore",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_LengthCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_LengthCore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x250e000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_LengthCore",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::Refresh)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x250fa0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "Refresh",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.ThrowNotFound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::IO::FileSystemInfo::ThrowNotFound)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x250f71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "ThrowNotFound", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_NormalizedPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_NormalizedPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x250fa74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_NormalizedPath",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::FileSystemInfo::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::IO::FileSystemInfo::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x250b438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::FileSystemInfo::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::IO::FileSystemInfo::GetObjectData)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x250fa7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_FullName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_FullName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x250fbc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x250fbcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_Exists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_Exists)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x250fbd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.Delete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::Delete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_LastWriteTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_LastWriteTime)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x250fc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_LastWriteTime",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_LastWriteTimeUtc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_LastWriteTimeUtc)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x250fc94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_LastWriteTimeUtc",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::ToString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x250fcbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), 3));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::IO::FileSystemInfo::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr ::System::IO::FileStatus& System::IO::FileSystemInfo::__get__fileStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStatus;
}
constexpr ::System::IO::FileStatus const& System::IO::FileSystemInfo::__get__fileStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStatus;
}
constexpr void System::IO::FileSystemInfo::__set__fileStatus(::System::IO::FileStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fileStatus = value;
}
constexpr ::StringW& System::IO::FileSystemInfo::__get_FullPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FullPath;
}
constexpr ::StringW const& System::IO::FileSystemInfo::__get_FullPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FullPath;
}
constexpr void System::IO::FileSystemInfo::__set_FullPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FullPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::IO::FileSystemInfo::__get_OriginalPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OriginalPath;
}
constexpr ::StringW const& System::IO::FileSystemInfo::__get_OriginalPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OriginalPath;
}
constexpr void System::IO::FileSystemInfo::__set_OriginalPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OriginalPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::IO::FileSystemInfo::__get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& System::IO::FileSystemInfo::__get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void System::IO::FileSystemInfo::__set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::IO::FileSystemInfo* System::IO::FileSystemInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::FileSystemInfo*>());
}
inline void System::IO::FileSystemInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IO::FileSystemInfo* System::IO::FileSystemInfo::Create(::StringW fullPath, ::StringW fileName, ByRef<::System::IO::FileStatus> fileStatus) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "Create", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::FileStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileSystemInfo*, false>(nullptr, ___internal_method, fullPath, fileName, fileStatus);
}
inline void System::IO::FileSystemInfo::Init(ByRef<::System::IO::FileStatus> fileStatus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::FileStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileStatus);
}
inline ::System::IO::FileAttributes System::IO::FileSystemInfo::get_Attributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_Attributes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes, false>(this, ___internal_method);
}
inline bool System::IO::FileSystemInfo::get_ExistsCore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_ExistsCore",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::DateTimeOffset System::IO::FileSystemInfo::get_LastWriteTimeCore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_LastWriteTimeCore",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset, false>(this, ___internal_method);
}
inline int64_t System::IO::FileSystemInfo::get_LengthCore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_LengthCore",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::Refresh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "Refresh",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::ThrowNotFound(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "ThrowNotFound", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::FileSystemInfo::get_NormalizedPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_NormalizedPath",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::IO::FileSystemInfo* System::IO::FileSystemInfo::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::FileSystemInfo*>(info, context));
}
inline void System::IO::FileSystemInfo::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::IO::FileSystemInfo::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::StringW System::IO::FileSystemInfo::get_FullName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_FullName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::IO::FileSystemInfo::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_Name",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::IO::FileSystemInfo::get_Exists() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_Exists",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::Delete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "Delete",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::DateTime System::IO::FileSystemInfo::get_LastWriteTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_LastWriteTime",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::System::DateTime System::IO::FileSystemInfo::get_LastWriteTimeUtc() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "get_LastWriteTimeUtc",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::StringW System::IO::FileSystemInfo::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystemInfo*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IO::FileSystemInfo::FileSystemInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
