#pragma once
// IWYU pragma private; include "System\IO\Path.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Path___c::*)()>(&::System::IO::Path___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c210b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path___c._JoinInternal_b__56_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Path___c::*)(
    ::System::Span_1<char16_t>, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>)>(&::System::IO::Path___c::_JoinInternal_b__56_0)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5c210bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::IO::Path___c*>(),
            { "<JoinInternal>b__56_0", {}, { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path___c._JoinInternal_b__57_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Path___c::*)(
    ::System::Span_1<char16_t>, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>)>(
    &::System::IO::Path___c::_JoinInternal_b__57_0)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5c211f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::Path___c*>(),
                            { "<JoinInternal>b__57_0",
                              {},
                              { ::i2c::type_of<::System::Span_1<char16_t>>(),
                                ::i2c::type_of<::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>() } })));
    return ___internal_method;
  }
};
inline void System::IO::Path___c::setStaticF___9(::System::IO::Path___c* value) {
  ::cordl_internals::setStaticField<::System::IO::Path___c*, "<>9", ::System::IO::Path___c*>(std::forward<::System::IO::Path___c*>(value));
}
inline ::System::IO::Path___c* System::IO::Path___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::IO::Path___c*, "<>9", ::System::IO::Path___c*>();
}
inline void System::IO::Path___c::setStaticF___9__56_0(::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>* value) {
  ::cordl_internals::setStaticField<::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>*, "<>9__56_0",
                                    ::System::IO::Path___c*>(
      std::forward<::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>*>(value));
}
inline ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>* System::IO::Path___c::getStaticF___9__56_0() {
  return ::cordl_internals::getStaticField<::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>*, "<>9__56_0",
                                           ::System::IO::Path___c*>();
}
inline void System::IO::Path___c::setStaticF___9__57_0(
    ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>*,
      "<>9__57_0", ::System::IO::Path___c*>(
      std::forward<
          ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>*>(
          value));
}
inline ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>*
System::IO::Path___c::getStaticF___9__57_0() {
  return ::cordl_internals::getStaticField<
      ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>*,
      "<>9__57_0", ::System::IO::Path___c*>();
}
inline void System::IO::Path___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::Path___c::_JoinInternal_b__56_0(::System::Span_1<char16_t> destination, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool> state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::IO::Path___c*>(),
          { "<JoinInternal>b__56_0", {}, { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, state);
}
inline void
System::IO::Path___c::_JoinInternal_b__57_0(::System::Span_1<char16_t> destination,
                                            ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>> state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::Path___c*>(),
                          { "<JoinInternal>b__57_0",
                            {},
                            { ::i2c::type_of<::System::Span_1<char16_t>>(),
                              ::i2c::type_of<::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, state);
}
inline ::System::IO::Path___c* System::IO::Path___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Path___c*>());
}
// Ctor Parameters []
constexpr ::System::IO::Path___c::Path___c() {}
//  Writing Method size for method: ::System::IO::Path.ChangeExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::IO::Path::ChangeExtension)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5c1e8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "ChangeExtension", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5c1eb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "Combine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.CleanPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::CleanPath)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5c1ef00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "CleanPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetDirectoryName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetDirectoryName)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x5c0a79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetDirectoryName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetDirectoryName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::GetDirectoryName)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c1f6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetDirectoryName", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetExtension)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5c1f7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetExtension", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFileName)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5c15a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetFileName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFileNameWithoutExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFileNameWithoutExtension)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c1f8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetFileNameWithoutExtension", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFullPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFullPath)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c1a940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetFullPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFullPathInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFullPathInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c0ac2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetFullPathInternal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.InsecureGetFullPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::InsecureGetFullPath)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x5c1a2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "InsecureGetFullPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.IsDirectorySeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::IO::Path::IsDirectorySeparator)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c15990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "IsDirectorySeparator", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetPathRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetPathRoot)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x5c1f314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetPathRoot", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetTempPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::IO::Path::GetTempPath)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c1fbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetTempPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.get_temp_path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::IO::Path::get_temp_path)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1fcb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "get_temp_path", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.IsPathRooted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::IsPathRooted)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5c1fcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "IsPathRooted", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.IsPathRooted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::Path::IsPathRooted)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c1edd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "IsPathRooted", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetInvalidPathChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)()>(&::System::IO::Path::GetInvalidPathChars)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c1fdc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetInvalidPathChars", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.findExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::IO::Path::findExtension)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c1ead0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "findExtension", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.CanonicalizePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::CanonicalizePath)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5c1f930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "CanonicalizePath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::StringW>)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5c1ffd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "Combine", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5c202bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "Combine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5c20410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(),
                                                { "Combine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::GetFileName)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5c205a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetFileName", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Join
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::Join)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c20710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "Join", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Join
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(
    &::System::IO::Path::Join)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5c209d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::IO::Path*>(),
            { "Join", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.TryJoin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(
    &::System::IO::Path::TryJoin)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5c20df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "TryJoin",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                            ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.JoinInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::JoinInternal)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5c207d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(),
                                                             { "JoinInternal", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.JoinInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(
    &::System::IO::Path::JoinInternal)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5c20b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "JoinInternal",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                            ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
inline void System::IO::Path::setStaticF_InvalidPathChars(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "InvalidPathChars", ::System::IO::Path*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::Path::getStaticF_InvalidPathChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "InvalidPathChars", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_AltDirectorySeparatorChar(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "AltDirectorySeparatorChar", ::System::IO::Path*>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_AltDirectorySeparatorChar() {
  return ::cordl_internals::getStaticField<char16_t, "AltDirectorySeparatorChar", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_DirectorySeparatorChar(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "DirectorySeparatorChar", ::System::IO::Path*>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_DirectorySeparatorChar() {
  return ::cordl_internals::getStaticField<char16_t, "DirectorySeparatorChar", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_PathSeparator(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "PathSeparator", ::System::IO::Path*>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_PathSeparator() {
  return ::cordl_internals::getStaticField<char16_t, "PathSeparator", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_DirectorySeparatorStr(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DirectorySeparatorStr", ::System::IO::Path*>(std::forward<::StringW>(value));
}
inline ::StringW System::IO::Path::getStaticF_DirectorySeparatorStr() {
  return ::cordl_internals::getStaticField<::StringW, "DirectorySeparatorStr", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_VolumeSeparatorChar(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "VolumeSeparatorChar", ::System::IO::Path*>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_VolumeSeparatorChar() {
  return ::cordl_internals::getStaticField<char16_t, "VolumeSeparatorChar", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_PathSeparatorChars(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "PathSeparatorChars", ::System::IO::Path*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::Path::getStaticF_PathSeparatorChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "PathSeparatorChars", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_dirEqualsVolume(bool value) {
  ::cordl_internals::setStaticField<bool, "dirEqualsVolume", ::System::IO::Path*>(std::forward<bool>(value));
}
inline bool System::IO::Path::getStaticF_dirEqualsVolume() {
  return ::cordl_internals::getStaticField<bool, "dirEqualsVolume", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_trimEndCharsWindows(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "trimEndCharsWindows", ::System::IO::Path*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::Path::getStaticF_trimEndCharsWindows() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "trimEndCharsWindows", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_trimEndCharsUnix(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "trimEndCharsUnix", ::System::IO::Path*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::Path::getStaticF_trimEndCharsUnix() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "trimEndCharsUnix", ::System::IO::Path*>();
}
inline ::StringW System::IO::Path::ChangeExtension(::StringW path, ::StringW extension) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "ChangeExtension", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path, extension);
}
inline ::StringW System::IO::Path::Combine(::StringW path1, ::StringW path2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "Combine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path1, path2);
}
inline ::StringW System::IO::Path::CleanPath(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "CleanPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::StringW System::IO::Path::GetDirectoryName(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetDirectoryName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Path::GetDirectoryName(::System::ReadOnlySpan_1<char16_t> path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetDirectoryName", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetExtension(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetExtension", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFileName(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetFileName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFileNameWithoutExtension(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetFileNameWithoutExtension", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFullPath(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetFullPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFullPathInternal(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetFullPathInternal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::InsecureGetFullPath(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "InsecureGetFullPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline bool System::IO::Path::IsDirectorySeparator(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "IsDirectorySeparator", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline ::StringW System::IO::Path::GetPathRoot(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetPathRoot", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetTempPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetTempPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW System::IO::Path::get_temp_path() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "get_temp_path", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool System::IO::Path::IsPathRooted(::System::ReadOnlySpan_1<char16_t> path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "IsPathRooted", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool System::IO::Path::IsPathRooted(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "IsPathRooted", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline ::ArrayW<char16_t> System::IO::Path::GetInvalidPathChars() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetInvalidPathChars", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method);
}
inline int32_t System::IO::Path::findExtension(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "findExtension", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::CanonicalizePath(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "CanonicalizePath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::Combine(::ArrayW<::StringW> paths) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "Combine", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, paths);
}
inline ::StringW System::IO::Path::Combine(::StringW path1, ::StringW path2, ::StringW path3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "Combine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path1, path2, path3);
}
inline ::StringW System::IO::Path::Combine(::StringW path1, ::StringW path2, ::StringW path3, ::StringW path4) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(),
                                                           { "Combine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path1, path2, path3, path4);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Path::GetFileName(::System::ReadOnlySpan_1<char16_t> path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "GetFileName", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::Join(::System::ReadOnlySpan_1<char16_t> path1, ::System::ReadOnlySpan_1<char16_t> path2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "Join", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path1, path2);
}
inline ::StringW System::IO::Path::Join(::System::ReadOnlySpan_1<char16_t> path1, ::System::ReadOnlySpan_1<char16_t> path2, ::System::ReadOnlySpan_1<char16_t> path3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::IO::Path*>(),
          { "Join", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path1, path2, path3);
}
inline bool System::IO::Path::TryJoin(::System::ReadOnlySpan_1<char16_t> path1, ::System::ReadOnlySpan_1<char16_t> path2, ::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "TryJoin",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                          ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path1, path2, destination, charsWritten);
}
inline ::StringW System::IO::Path::JoinInternal(::System::ReadOnlySpan_1<char16_t> first, ::System::ReadOnlySpan_1<char16_t> second) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(),
                                                           { "JoinInternal", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, first, second);
}
inline ::StringW System::IO::Path::JoinInternal(::System::ReadOnlySpan_1<char16_t> first, ::System::ReadOnlySpan_1<char16_t> second, ::System::ReadOnlySpan_1<char16_t> third) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Path*>(), { "JoinInternal",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                          ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, first, second, third);
}
// Ctor Parameters []
constexpr ::System::IO::Path::Path() {}
