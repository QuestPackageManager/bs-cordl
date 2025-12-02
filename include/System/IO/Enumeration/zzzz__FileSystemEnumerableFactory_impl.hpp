#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemEnumerableFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerableFactory_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerableFactory_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerable_1_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::*)()>(
    &::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a0d82c;

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
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a0dc78;

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
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a0dd70;

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
  constexpr static std::size_t addrs = 0x5a0dd74;

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
  constexpr static std::size_t addrs = 0x5a0dd7c;

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
  constexpr static std::size_t addrs = 0x5a0dd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>::get(), "<UserEntries>b__5_0", std::span<Il2CppClass const* const, 0>(),
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
inline ::System::IO::Enumeration::FileSystemEnumerableFactory___c* System::IO::Enumeration::FileSystemEnumerableFactory___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Enumeration::FileSystemEnumerableFactory___c*>());
}
// Ctor Parameters []
constexpr ::System::IO::Enumeration::FileSystemEnumerableFactory___c::FileSystemEnumerableFactory___c() {}
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::*)()>(
    &::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a0da04;

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
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a0dd8c;

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
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a0dbdc;

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
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a0de30;

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
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEnumerableFactory.NormalizeInputs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::StringW>, ::ByRef<::StringW>, ::System::IO::EnumerationOptions*)>(
    &::System::IO::Enumeration::FileSystemEnumerableFactory::NormalizeInputs)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x5a0cad0;

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
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5a0d314;

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
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5a0d658;

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
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5a0d830;

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
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5a0da08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerableFactory*>::get(), "UserEntries", std::span<Il2CppClass const* const, 0>(),
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
// Ctor Parameters []
constexpr ::System::IO::Enumeration::FileSystemEnumerableFactory::FileSystemEnumerableFactory() {}
