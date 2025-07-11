#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemEnumerableFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerableFactory_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerableFactory_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerable_1_def.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::*)()>(
    &::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d85b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0._UserFiles_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::*)(
    ::ByRef<::System::IO::Enumeration::FileSystemEntry>)>(&::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::_UserFiles_b__1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3d86508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0*>::get(), "<UserFiles>b__1",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::__cordl_internal_get_expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expression;
}
constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::__cordl_internal_get_expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expression;
}
constexpr void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::__cordl_internal_set_expression(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___expression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::EnumerationOptions*& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::__cordl_internal_get_options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr ::System::IO::EnumerationOptions* const& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::__cordl_internal_get_options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::__cordl_internal_set_options(::System::IO::EnumerationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___options)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::_UserFiles_b__1(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0*>::get(), "<UserFiles>b__1",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
inline ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0* System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::FileSystemEnumerableFactory___c__DisplayClass3_0() {}
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEnumerableFactory___c::*)()>(
    &::System::IO::Enumeration::FileSystemEnumerableFactory___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d86604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c._UserFiles_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::Enumeration::FileSystemEnumerableFactory___c::*)(
    ::ByRef<::System::IO::Enumeration::FileSystemEntry>)>(&::System::IO::Enumeration::FileSystemEnumerableFactory___c::_UserFiles_b__3_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d8660c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(), "<UserFiles>b__3_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c._UserDirectories_b__4_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::Enumeration::FileSystemEnumerableFactory___c::*)(
    ::ByRef<::System::IO::Enumeration::FileSystemEntry>)>(&::System::IO::Enumeration::FileSystemEnumerableFactory___c::_UserDirectories_b__4_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d86614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(), "<UserDirectories>b__4_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c._UserEntries_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::Enumeration::FileSystemEnumerableFactory___c::*)(
    ::ByRef<::System::IO::Enumeration::FileSystemEntry>)>(&::System::IO::Enumeration::FileSystemEnumerableFactory___c::_UserEntries_b__5_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d8661c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(), "<UserEntries>b__5_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c._FileInfos_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IO::FileInfo* (::System::IO::Enumeration::FileSystemEnumerableFactory___c::*)(::ByRef<::System::IO::Enumeration::FileSystemEntry>)>(
        &::System::IO::Enumeration::FileSystemEnumerableFactory___c::_FileInfos_b__6_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3d86624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(), "<FileInfos>b__6_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c._DirectoryInfos_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IO::DirectoryInfo* (::System::IO::Enumeration::FileSystemEnumerableFactory___c::*)(::ByRef<::System::IO::Enumeration::FileSystemEntry>)>(
        &::System::IO::Enumeration::FileSystemEnumerableFactory___c::_DirectoryInfos_b__7_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3d86684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(), "<DirectoryInfos>b__7_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c._FileSystemInfos_b__8_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IO::FileSystemInfo* (::System::IO::Enumeration::FileSystemEnumerableFactory___c::*)(::ByRef<::System::IO::Enumeration::FileSystemEntry>)>(
        &::System::IO::Enumeration::FileSystemEnumerableFactory___c::_FileSystemInfos_b__8_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d866e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(), "<FileSystemInfos>b__8_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
    return ___internal_method;
  }
};
inline void System::IO::Enumeration::FileSystemEnumerableFactory___c::setStaticF___9(::System::IO::Enumeration::FileSystemEnumerableFactory___c* value) {
  ::cordl_internals::setStaticField<::System::IO::Enumeration::FileSystemEnumerableFactory___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get>(
      std::forward<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>(value));
}
inline ::System::IO::Enumeration::FileSystemEnumerableFactory___c* System::IO::Enumeration::FileSystemEnumerableFactory___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::IO::Enumeration::FileSystemEnumerableFactory___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get>();
}
inline void System::IO::Enumeration::FileSystemEnumerableFactory___c::setStaticF___9__3_0(::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get>(
      std::forward<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>*>(value));
}
inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* System::IO::Enumeration::FileSystemEnumerableFactory___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get>();
}
inline void System::IO::Enumeration::FileSystemEnumerableFactory___c::setStaticF___9__4_0(::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>*, "<>9__4_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get>(
      std::forward<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>*>(value));
}
inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* System::IO::Enumeration::FileSystemEnumerableFactory___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>*, "<>9__4_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get>();
}
inline void System::IO::Enumeration::FileSystemEnumerableFactory___c::setStaticF___9__5_0(::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get>(
      std::forward<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>*>(value));
}
inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* System::IO::Enumeration::FileSystemEnumerableFactory___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get>();
}
inline void System::IO::Enumeration::FileSystemEnumerableFactory___c::setStaticF___9__6_0(::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::FileInfo*>* value) {
  ::cordl_internals::setStaticField<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::FileInfo*>*, "<>9__6_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get>(
      std::forward<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::FileInfo*>*>(value));
}
inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::FileInfo*>* System::IO::Enumeration::FileSystemEnumerableFactory___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::FileInfo*>*, "<>9__6_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get>();
}
inline void System::IO::Enumeration::FileSystemEnumerableFactory___c::setStaticF___9__7_0(::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::DirectoryInfo*>* value) {
  ::cordl_internals::setStaticField<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::DirectoryInfo*>*, "<>9__7_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get>(
      std::forward<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::DirectoryInfo*>*>(value));
}
inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::DirectoryInfo*>* System::IO::Enumeration::FileSystemEnumerableFactory___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::DirectoryInfo*>*, "<>9__7_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get>();
}
inline void System::IO::Enumeration::FileSystemEnumerableFactory___c::setStaticF___9__8_0(::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::FileSystemInfo*>* value) {
  ::cordl_internals::setStaticField<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::FileSystemInfo*>*, "<>9__8_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get>(
      std::forward<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::FileSystemInfo*>*>(value));
}
inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::FileSystemInfo*>* System::IO::Enumeration::FileSystemEnumerableFactory___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::System::IO::FileSystemInfo*>*, "<>9__8_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get>();
}
inline void System::IO::Enumeration::FileSystemEnumerableFactory___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::IO::Enumeration::FileSystemEnumerableFactory___c::_UserFiles_b__3_0(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(), "<UserFiles>b__3_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, entry);
}
inline ::StringW System::IO::Enumeration::FileSystemEnumerableFactory___c::_UserDirectories_b__4_0(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(), "<UserDirectories>b__4_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, entry);
}
inline ::StringW System::IO::Enumeration::FileSystemEnumerableFactory___c::_UserEntries_b__5_0(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(), "<UserEntries>b__5_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, entry);
}
inline ::System::IO::FileInfo* System::IO::Enumeration::FileSystemEnumerableFactory___c::_FileInfos_b__6_0(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(), "<FileInfos>b__6_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileInfo*, false>(this, ___internal_method, entry);
}
inline ::System::IO::DirectoryInfo* System::IO::Enumeration::FileSystemEnumerableFactory___c::_DirectoryInfos_b__7_0(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(), "<DirectoryInfos>b__7_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::DirectoryInfo*, false>(this, ___internal_method, entry);
}
inline ::System::IO::FileSystemInfo* System::IO::Enumeration::FileSystemEnumerableFactory___c::_FileSystemInfos_b__8_0(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(), "<FileSystemInfos>b__8_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileSystemInfo*, false>(this, ___internal_method, entry);
}
inline ::System::IO::Enumeration::FileSystemEnumerableFactory___c* System::IO::Enumeration::FileSystemEnumerableFactory___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>());
}
// Ctor Parameters []
constexpr ::System::IO::Enumeration::FileSystemEnumerableFactory___c::FileSystemEnumerableFactory___c() {}
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::*)()>(
    &::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d85d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0._UserDirectories_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::*)(
    ::ByRef<::System::IO::Enumeration::FileSystemEntry>)>(&::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::_UserDirectories_b__1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3d866ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0*>::get(),
                                    "<UserDirectories>b__1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::__cordl_internal_get_expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expression;
}
constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::__cordl_internal_get_expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expression;
}
constexpr void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::__cordl_internal_set_expression(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___expression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::EnumerationOptions*& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::__cordl_internal_get_options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr ::System::IO::EnumerationOptions* const& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::__cordl_internal_get_options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::__cordl_internal_set_options(::System::IO::EnumerationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___options)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::_UserDirectories_b__1(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0*>::get(), "<UserDirectories>b__1",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
inline ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0* System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::FileSystemEnumerableFactory___c__DisplayClass4_0() {}
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0::*)()>(
    &::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d85f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0._UserEntries_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0::*)(
    ::ByRef<::System::IO::Enumeration::FileSystemEntry>)>(&::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0::_UserEntries_b__1)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3d8678c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0*>::get(), "<UserEntries>b__1",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0::__cordl_internal_get_expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expression;
}
constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0::__cordl_internal_get_expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expression;
}
constexpr void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0::__cordl_internal_set_expression(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___expression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::EnumerationOptions*& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0::__cordl_internal_get_options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr ::System::IO::EnumerationOptions* const& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0::__cordl_internal_get_options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0::__cordl_internal_set_options(::System::IO::EnumerationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___options)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0::_UserEntries_b__1(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0*>::get(), "<UserEntries>b__1",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
inline ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0* System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0::FileSystemEnumerableFactory___c__DisplayClass5_0() {}
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0::*)()>(
    &::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d860d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0._FileInfos_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0::*)(
    ::ByRef<::System::IO::Enumeration::FileSystemEntry>)>(&::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0::_FileInfos_b__1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3d86810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0*>::get(), "<FileInfos>b__1",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0::__cordl_internal_get_expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expression;
}
constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0::__cordl_internal_get_expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expression;
}
constexpr void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0::__cordl_internal_set_expression(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___expression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::EnumerationOptions*& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0::__cordl_internal_get_options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr ::System::IO::EnumerationOptions* const& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0::__cordl_internal_get_options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0::__cordl_internal_set_options(::System::IO::EnumerationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___options)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0::_FileInfos_b__1(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0*>::get(), "<FileInfos>b__1",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
inline ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0* System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass6_0::FileSystemEnumerableFactory___c__DisplayClass6_0() {}
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0::*)()>(
    &::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d862a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0._DirectoryInfos_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0::*)(
    ::ByRef<::System::IO::Enumeration::FileSystemEntry>)>(&::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0::_DirectoryInfos_b__1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3d868b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0*>::get(), "<DirectoryInfos>b__1",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0::__cordl_internal_get_expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expression;
}
constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0::__cordl_internal_get_expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expression;
}
constexpr void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0::__cordl_internal_set_expression(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___expression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::EnumerationOptions*& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0::__cordl_internal_get_options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr ::System::IO::EnumerationOptions* const& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0::__cordl_internal_get_options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0::__cordl_internal_set_options(::System::IO::EnumerationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___options)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0::_DirectoryInfos_b__1(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0*>::get(), "<DirectoryInfos>b__1",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
inline ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0* System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass7_0::FileSystemEnumerableFactory___c__DisplayClass7_0() {}
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0::*)()>(
    &::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d8646c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0._FileSystemInfos_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0::*)(
    ::ByRef<::System::IO::Enumeration::FileSystemEntry>)>(&::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0::_FileSystemInfos_b__1)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3d86950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0*>::get(),
                                    "<FileSystemInfos>b__1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0::__cordl_internal_get_expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expression;
}
constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0::__cordl_internal_get_expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expression;
}
constexpr void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0::__cordl_internal_set_expression(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___expression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::EnumerationOptions*& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0::__cordl_internal_get_options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr ::System::IO::EnumerationOptions* const& System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0::__cordl_internal_get_options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0::__cordl_internal_set_options(::System::IO::EnumerationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___options)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0::_FileSystemInfos_b__1(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0*>::get(), "<FileSystemInfos>b__1",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
inline ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0* System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass8_0::FileSystemEnumerableFactory___c__DisplayClass8_0() {}
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory.NormalizeInputs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::StringW>, ::ByRef<::StringW>, ::System::IO::EnumerationOptions*)>(
    &::System::IO::Enumeration::FileSystemEnumerableFactory::NormalizeInputs)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x3d84eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "NormalizeInputs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory.MatchesPattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::ReadOnlySpan_1<char16_t>, ::System::IO::EnumerationOptions*)>(
    &::System::IO::Enumeration::FileSystemEnumerableFactory::MatchesPattern)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x3d85674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "MatchesPattern", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory.UserFiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Enumeration::FileSystemEnumerableFactory::UserFiles)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3d859ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "UserFiles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory.UserDirectories
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Enumeration::FileSystemEnumerableFactory::UserDirectories)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3d85b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "UserDirectories", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory.UserEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Enumeration::FileSystemEnumerableFactory::UserEntries)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3d85d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "UserEntries", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory.FileInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(
        &::System::IO::Enumeration::FileSystemEnumerableFactory::FileInfos)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3d85f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "FileInfos", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory.DirectoryInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>* (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(
        &::System::IO::Enumeration::FileSystemEnumerableFactory::DirectoryInfos)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3d860dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "DirectoryInfos", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory.FileSystemInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(
        &::System::IO::Enumeration::FileSystemEnumerableFactory::FileSystemInfos)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3d862a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "FileSystemInfos", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
    return ___internal_method;
  }
};
inline void System::IO::Enumeration::FileSystemEnumerableFactory::setStaticF_s_unixEscapeChars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "s_unixEscapeChars",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::IO::Enumeration::FileSystemEnumerableFactory::getStaticF_s_unixEscapeChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "s_unixEscapeChars",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get>();
}
inline void System::IO::Enumeration::FileSystemEnumerableFactory::NormalizeInputs(::ByRef<::StringW> directory, ::ByRef<::StringW> expression, ::System::IO::EnumerationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "NormalizeInputs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, directory, expression, options);
}
inline bool System::IO::Enumeration::FileSystemEnumerableFactory::MatchesPattern(::StringW expression, ::System::ReadOnlySpan_1<char16_t> name, ::System::IO::EnumerationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "MatchesPattern", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expression, name, options);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Enumeration::FileSystemEnumerableFactory::UserFiles(::StringW directory, ::StringW expression,
                                                                                                                                 ::System::IO::EnumerationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "UserFiles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method, directory, expression, options);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Enumeration::FileSystemEnumerableFactory::UserDirectories(::StringW directory, ::StringW expression,
                                                                                                                                       ::System::IO::EnumerationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "UserDirectories", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method, directory, expression, options);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Enumeration::FileSystemEnumerableFactory::UserEntries(::StringW directory, ::StringW expression,
                                                                                                                                   ::System::IO::EnumerationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "UserEntries", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method, directory, expression, options);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* System::IO::Enumeration::FileSystemEnumerableFactory::FileInfos(::StringW directory, ::StringW expression,
                                                                                                                                               ::System::IO::EnumerationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "FileInfos", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*, false>(nullptr, ___internal_method, directory, expression, options);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>* System::IO::Enumeration::FileSystemEnumerableFactory::DirectoryInfos(::StringW directory, ::StringW expression,
                                                                                                                                                         ::System::IO::EnumerationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "DirectoryInfos", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>*, false>(nullptr, ___internal_method, directory, expression, options);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* System::IO::Enumeration::FileSystemEnumerableFactory::FileSystemInfos(::StringW directory, ::StringW expression,
                                                                                                                                                           ::System::IO::EnumerationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "FileSystemInfos", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>*, false>(nullptr, ___internal_method, directory, expression, options);
}
// Ctor Parameters []
constexpr ::System::IO::Enumeration::FileSystemEnumerableFactory::FileSystemEnumerableFactory() {}
