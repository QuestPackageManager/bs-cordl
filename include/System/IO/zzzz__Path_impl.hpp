#pragma once
// IWYU pragma private; include "System/IO/Path.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__Path_def.hpp"
#include "System/Buffers/zzzz__SpanAction_2_def.hpp"
#include "System/IO/zzzz__Path_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__ValueTuple_1_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include "System/zzzz__ValueTuple_8_def.hpp"
//  Writing Method size for method: ::System::IO::Path___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Path___c::*)()>(&::System::IO::Path___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d82c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path___c._JoinInternal_b__56_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Path___c::*)(
    ::System::Span_1<char16_t>, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>)>(&::System::IO::Path___c::_JoinInternal_b__56_0)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3d82c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path___c*>::get(), "<JoinInternal>b__56_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path___c._JoinInternal_b__57_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Path___c::*)(
    ::System::Span_1<char16_t>, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>)>(
    &::System::IO::Path___c::_JoinInternal_b__57_0)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x3d82d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path___c*>::get(), "<JoinInternal>b__57_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>::get() })));
    return ___internal_method;
  }
};
inline void System::IO::Path___c::setStaticF___9(::System::IO::Path___c* value) {
  ::cordl_internals::setStaticField<::System::IO::Path___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path___c*>::get>(std::forward<::System::IO::Path___c*>(value));
}
inline ::System::IO::Path___c* System::IO::Path___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::IO::Path___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path___c*>::get>();
}
inline void System::IO::Path___c::setStaticF___9__56_0(::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>* value) {
  ::cordl_internals::setStaticField<::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>*, "<>9__56_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path___c*>::get>(
      std::forward<::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>*>(value));
}
inline ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>* System::IO::Path___c::getStaticF___9__56_0() {
  return ::cordl_internals::getStaticField<::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>*, "<>9__56_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path___c*>::get>();
}
inline void System::IO::Path___c::setStaticF___9__57_0(
    ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>*,
      "<>9__57_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path___c*>::get>(
      std::forward<
          ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>*>(
          value));
}
inline ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>*
System::IO::Path___c::getStaticF___9__57_0() {
  return ::cordl_internals::getStaticField<
      ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>*,
      "<>9__57_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path___c*>::get>();
}
inline void System::IO::Path___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Path___c::_JoinInternal_b__56_0(::System::Span_1<char16_t> destination, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool> state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path___c*>::get(), "<JoinInternal>b__56_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destination, state);
}
inline void
System::IO::Path___c::_JoinInternal_b__57_0(::System::Span_1<char16_t> destination,
                                            ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>> state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path___c*>::get(), "<JoinInternal>b__57_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destination, state);
}
inline ::System::IO::Path___c* System::IO::Path___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Path___c*>());
}
// Ctor Parameters []
constexpr ::System::IO::Path___c::Path___c() {}
//  Writing Method size for method: ::System::IO::Path.ChangeExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::IO::Path::ChangeExtension)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x3d7f3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "ChangeExtension", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x3d7f644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.CleanPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::CleanPath)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x3d7f9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "CleanPath", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetDirectoryName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetDirectoryName)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x3d7fe18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetDirectoryName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetDirectoryName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::GetDirectoryName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3d805d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetDirectoryName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetExtension)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3d806a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetExtension", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFileName)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3d807cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetFileName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFileNameWithoutExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFileNameWithoutExtension)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3d808d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetFileNameWithoutExtension", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFullPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFullPath)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3d80934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetFullPath", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFullPathInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFullPathInternal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3d81024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetFullPathInternal", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.InsecureGetFullPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::InsecureGetFullPath)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x3d8099c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "InsecureGetFullPath", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.IsDirectorySeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::IO::Path::IsDirectorySeparator)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3d81078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "IsDirectorySeparator", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetPathRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetPathRoot)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x3d801a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetPathRoot", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetTempPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::IO::Path::GetTempPath)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3d814e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetTempPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.get_temp_path
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::IO::Path::get_temp_path)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d815ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "get_temp_path",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.IsPathRooted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::IsPathRooted)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3d815f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "IsPathRooted", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.IsPathRooted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::IO::Path::IsPathRooted)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3d7f8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "IsPathRooted", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetInvalidPathChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t, ::Array<char16_t>*> (*)()>(&::System::IO::Path::GetInvalidPathChars)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3d816f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetInvalidPathChars",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetRandomFileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::IO::Path::GetRandomFileName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3d81788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetRandomFileName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.findExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::System::IO::Path::findExtension)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3d7f5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "findExtension", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.CanonicalizePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::CanonicalizePath)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x3d81104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "CanonicalizePath", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x3d81ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3d81da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x3d81ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::GetFileName)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3d82074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetFileName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Join
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::Join)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3d821b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "Join", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Join
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::Join)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3d824e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "Join", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.TryJoin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<char16_t>, ::ByRef<int32_t>)>(&::System::IO::Path::TryJoin)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x3d82948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "TryJoin", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.JoinInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(
    &::System::IO::Path::JoinInternal)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x3d82270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "JoinInternal", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.JoinInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::JoinInternal)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x3d825f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "JoinInternal", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
inline void System::IO::Path::setStaticF_InvalidPathChars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "InvalidPathChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::IO::Path::getStaticF_InvalidPathChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "InvalidPathChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>();
}
inline void System::IO::Path::setStaticF_AltDirectorySeparatorChar(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "AltDirectorySeparatorChar", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_AltDirectorySeparatorChar() {
  return ::cordl_internals::getStaticField<char16_t, "AltDirectorySeparatorChar", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>();
}
inline void System::IO::Path::setStaticF_DirectorySeparatorChar(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "DirectorySeparatorChar", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_DirectorySeparatorChar() {
  return ::cordl_internals::getStaticField<char16_t, "DirectorySeparatorChar", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>();
}
inline void System::IO::Path::setStaticF_PathSeparator(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "PathSeparator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_PathSeparator() {
  return ::cordl_internals::getStaticField<char16_t, "PathSeparator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>();
}
inline void System::IO::Path::setStaticF_DirectorySeparatorStr(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DirectorySeparatorStr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::IO::Path::getStaticF_DirectorySeparatorStr() {
  return ::cordl_internals::getStaticField<::StringW, "DirectorySeparatorStr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>();
}
inline void System::IO::Path::setStaticF_VolumeSeparatorChar(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "VolumeSeparatorChar", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_VolumeSeparatorChar() {
  return ::cordl_internals::getStaticField<char16_t, "VolumeSeparatorChar", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>();
}
inline void System::IO::Path::setStaticF_PathSeparatorChars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "PathSeparatorChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::IO::Path::getStaticF_PathSeparatorChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "PathSeparatorChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>();
}
inline void System::IO::Path::setStaticF_dirEqualsVolume(bool value) {
  ::cordl_internals::setStaticField<bool, "dirEqualsVolume", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>(std::forward<bool>(value));
}
inline bool System::IO::Path::getStaticF_dirEqualsVolume() {
  return ::cordl_internals::getStaticField<bool, "dirEqualsVolume", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>();
}
inline void System::IO::Path::setStaticF_trimEndCharsWindows(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "trimEndCharsWindows", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::IO::Path::getStaticF_trimEndCharsWindows() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "trimEndCharsWindows", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>();
}
inline void System::IO::Path::setStaticF_trimEndCharsUnix(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "trimEndCharsUnix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::IO::Path::getStaticF_trimEndCharsUnix() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "trimEndCharsUnix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get>();
}
inline ::StringW System::IO::Path::ChangeExtension(::StringW path, ::StringW extension) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "ChangeExtension", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path, extension);
}
inline ::StringW System::IO::Path::Combine(::StringW path1, ::StringW path2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path1, path2);
}
inline ::StringW System::IO::Path::CleanPath(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "CleanPath", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, s);
}
inline ::StringW System::IO::Path::GetDirectoryName(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetDirectoryName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Path::GetDirectoryName(::System::ReadOnlySpan_1<char16_t> path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetDirectoryName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetExtension(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetExtension", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFileName(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetFileName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFileNameWithoutExtension(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetFileNameWithoutExtension", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFullPath(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetFullPath", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFullPathInternal(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetFullPathInternal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::InsecureGetFullPath(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "InsecureGetFullPath", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline bool System::IO::Path::IsDirectorySeparator(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "IsDirectorySeparator", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline ::StringW System::IO::Path::GetPathRoot(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetPathRoot", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetTempPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetTempPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW System::IO::Path::get_temp_path() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "get_temp_path",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool System::IO::Path::IsPathRooted(::System::ReadOnlySpan_1<char16_t> path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "IsPathRooted", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path);
}
inline bool System::IO::Path::IsPathRooted(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "IsPathRooted", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path);
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::IO::Path::GetInvalidPathChars() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetInvalidPathChars",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t, ::Array<char16_t>*>, false>(nullptr, ___internal_method);
}
inline ::StringW System::IO::Path::GetRandomFileName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetRandomFileName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline int32_t System::IO::Path::findExtension(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "findExtension", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::CanonicalizePath(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "CanonicalizePath", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::Combine(::ArrayW<::StringW, ::Array<::StringW>*> paths) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, paths);
}
inline ::StringW System::IO::Path::Combine(::StringW path1, ::StringW path2, ::StringW path3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path1, path2, path3);
}
inline ::StringW System::IO::Path::Combine(::StringW path1, ::StringW path2, ::StringW path3, ::StringW path4) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path1, path2, path3, path4);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Path::GetFileName(::System::ReadOnlySpan_1<char16_t> path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "GetFileName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::Join(::System::ReadOnlySpan_1<char16_t> path1, ::System::ReadOnlySpan_1<char16_t> path2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "Join", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path1, path2);
}
inline ::StringW System::IO::Path::Join(::System::ReadOnlySpan_1<char16_t> path1, ::System::ReadOnlySpan_1<char16_t> path2, ::System::ReadOnlySpan_1<char16_t> path3) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "Join", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path1, path2, path3);
}
inline bool System::IO::Path::TryJoin(::System::ReadOnlySpan_1<char16_t> path1, ::System::ReadOnlySpan_1<char16_t> path2, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "TryJoin", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path1, path2, destination, charsWritten);
}
inline ::StringW System::IO::Path::JoinInternal(::System::ReadOnlySpan_1<char16_t> first, ::System::ReadOnlySpan_1<char16_t> second) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "JoinInternal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, first, second);
}
inline ::StringW System::IO::Path::JoinInternal(::System::ReadOnlySpan_1<char16_t> first, ::System::ReadOnlySpan_1<char16_t> second, ::System::ReadOnlySpan_1<char16_t> third) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Path*>::get(), "JoinInternal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, first, second, third);
}
// Ctor Parameters []
constexpr ::System::IO::Path::Path() {}
