#pragma once
// IWYU pragma private; include "GlobalNamespace/BookmarksFoldersModel.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BookmarksFoldersModel_def.hpp"
#include "GlobalNamespace/zzzz__BookmarksFoldersModel_def.hpp"
#include "GlobalNamespace/zzzz__FileBrowserItem_def.hpp"
#include "System/zzzz__Environment_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BookmarksFoldersModel___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BookmarksFoldersModel___c::*)()>(&::GlobalNamespace::BookmarksFoldersModel___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26af1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BookmarksFoldersModel___c._get_bookmarksFolders_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BookmarksFoldersModel___c::*)(::System::Environment_SpecialFolder)>(
    &::GlobalNamespace::BookmarksFoldersModel___c::_get_bookmarksFolders_b__3_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26af1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel___c*>::get(), "<get_bookmarksFolders>b__3_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Environment_SpecialFolder>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BookmarksFoldersModel___c::setStaticF___9(::GlobalNamespace::BookmarksFoldersModel___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BookmarksFoldersModel___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel___c*>::get>(
      std::forward<::GlobalNamespace::BookmarksFoldersModel___c*>(value));
}
inline ::GlobalNamespace::BookmarksFoldersModel___c* GlobalNamespace::BookmarksFoldersModel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BookmarksFoldersModel___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel___c*>::get>();
}
inline void GlobalNamespace::BookmarksFoldersModel___c::setStaticF___9__3_0(::System::Func_2<::System::Environment_SpecialFolder, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Environment_SpecialFolder, ::StringW>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel___c*>::get>(
      std::forward<::System::Func_2<::System::Environment_SpecialFolder, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Environment_SpecialFolder, ::StringW>* GlobalNamespace::BookmarksFoldersModel___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Environment_SpecialFolder, ::StringW>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel___c*>::get>();
}
inline void GlobalNamespace::BookmarksFoldersModel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BookmarksFoldersModel___c::_get_bookmarksFolders_b__3_0(::System::Environment_SpecialFolder specialFolder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel___c*>::get(), "<get_bookmarksFolders>b__3_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Environment_SpecialFolder>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, specialFolder);
}
inline ::GlobalNamespace::BookmarksFoldersModel___c* GlobalNamespace::BookmarksFoldersModel___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BookmarksFoldersModel___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BookmarksFoldersModel___c::BookmarksFoldersModel___c() {}
//  Writing Method size for method: ::GlobalNamespace::BookmarksFoldersModel.get_bookmarksFolders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> (
    ::GlobalNamespace::BookmarksFoldersModel::*)()>(&::GlobalNamespace::BookmarksFoldersModel::get_bookmarksFolders)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x26aeb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel*>::get(),
                                                                               "get_bookmarksFolders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BookmarksFoldersModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BookmarksFoldersModel::*)()>(&::GlobalNamespace::BookmarksFoldersModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26af13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::BookmarksFoldersModel::__cordl_internal_get_myFolders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___myFolders;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::BookmarksFoldersModel::__cordl_internal_get_myFolders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___myFolders;
}
constexpr void GlobalNamespace::BookmarksFoldersModel::__cordl_internal_set_myFolders(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___myFolders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>& GlobalNamespace::BookmarksFoldersModel::__cordl_internal_get__bookmarksFolders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bookmarksFolders;
}
constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> const& GlobalNamespace::BookmarksFoldersModel::__cordl_internal_get__bookmarksFolders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bookmarksFolders;
}
constexpr void GlobalNamespace::BookmarksFoldersModel::__cordl_internal_set__bookmarksFolders(::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bookmarksFolders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> GlobalNamespace::BookmarksFoldersModel::get_bookmarksFolders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel*>::get(),
                                                                             "get_bookmarksFolders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::BookmarksFoldersModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BookmarksFoldersModel* GlobalNamespace::BookmarksFoldersModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BookmarksFoldersModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BookmarksFoldersModel::BookmarksFoldersModel() {}
