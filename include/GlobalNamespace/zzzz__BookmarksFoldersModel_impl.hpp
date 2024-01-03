#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BookmarksFoldersModel_def.hpp"
#include "GlobalNamespace/zzzz__BookmarksFoldersModel_def.hpp"
#include "GlobalNamespace/zzzz__FileBrowserItem_def.hpp"
#include "System/zzzz__Environment_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BookmarksFoldersModel____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BookmarksFoldersModel____c::*)()>(
    &::GlobalNamespace::__BookmarksFoldersModel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223c5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BookmarksFoldersModel____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BookmarksFoldersModel____c._get_bookmarksFolders_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BookmarksFoldersModel____c::*)(::System::__Environment__SpecialFolder)>(
    &::GlobalNamespace::__BookmarksFoldersModel____c::_get_bookmarksFolders_b__3_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x223c604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BookmarksFoldersModel____c*>::get(), "<get_bookmarksFolders>b__3_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Environment__SpecialFolder>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BookmarksFoldersModel____c::setStaticF___9(::GlobalNamespace::__BookmarksFoldersModel____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__BookmarksFoldersModel____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BookmarksFoldersModel____c*>::get>(
      std::forward<::GlobalNamespace::__BookmarksFoldersModel____c*>(value));
}
inline ::GlobalNamespace::__BookmarksFoldersModel____c* GlobalNamespace::__BookmarksFoldersModel____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__BookmarksFoldersModel____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BookmarksFoldersModel____c*>::get>();
}
inline void GlobalNamespace::__BookmarksFoldersModel____c::setStaticF___9__3_0(::System::Func_2<::System::__Environment__SpecialFolder, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::__Environment__SpecialFolder, ::StringW>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BookmarksFoldersModel____c*>::get>(
      std::forward<::System::Func_2<::System::__Environment__SpecialFolder, ::StringW>*>(value));
}
inline ::System::Func_2<::System::__Environment__SpecialFolder, ::StringW>* GlobalNamespace::__BookmarksFoldersModel____c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::__Environment__SpecialFolder, ::StringW>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BookmarksFoldersModel____c*>::get>();
}
inline ::GlobalNamespace::__BookmarksFoldersModel____c* GlobalNamespace::__BookmarksFoldersModel____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BookmarksFoldersModel____c*>());
}
inline void GlobalNamespace::__BookmarksFoldersModel____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BookmarksFoldersModel____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__BookmarksFoldersModel____c::_get_bookmarksFolders_b__3_0(::System::__Environment__SpecialFolder specialFolder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BookmarksFoldersModel____c*>::get(), "<get_bookmarksFolders>b__3_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Environment__SpecialFolder>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, specialFolder);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BookmarksFoldersModel____c::__BookmarksFoldersModel____c() {}
//  Writing Method size for method: ::GlobalNamespace::BookmarksFoldersModel.get_bookmarksFolders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> (
    ::GlobalNamespace::BookmarksFoldersModel::*)()>(&::GlobalNamespace::BookmarksFoldersModel::get_bookmarksFolders)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x223bffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel*>::get(),
                                                                               "get_bookmarksFolders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BookmarksFoldersModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BookmarksFoldersModel::*)()>(&::GlobalNamespace::BookmarksFoldersModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223c590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::BookmarksFoldersModel::__get_myFolders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___myFolders;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::BookmarksFoldersModel::__get_myFolders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___myFolders;
}
constexpr void GlobalNamespace::BookmarksFoldersModel::__set_myFolders(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___myFolders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>& GlobalNamespace::BookmarksFoldersModel::__get__bookmarksFolders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bookmarksFolders;
}
constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> const& GlobalNamespace::BookmarksFoldersModel::__get__bookmarksFolders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bookmarksFolders;
}
constexpr void GlobalNamespace::BookmarksFoldersModel::__set__bookmarksFolders(::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bookmarksFolders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> GlobalNamespace::BookmarksFoldersModel::get_bookmarksFolders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel*>::get(),
                                                                             "get_bookmarksFolders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BookmarksFoldersModel* GlobalNamespace::BookmarksFoldersModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BookmarksFoldersModel*>());
}
inline void GlobalNamespace::BookmarksFoldersModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BookmarksFoldersModel*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BookmarksFoldersModel::BookmarksFoldersModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
