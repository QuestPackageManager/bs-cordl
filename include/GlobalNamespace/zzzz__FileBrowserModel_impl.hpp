#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileBrowserModel_def.hpp"
#include "GlobalNamespace/zzzz__FileBrowserItem_def.hpp"
#include "GlobalNamespace/zzzz__FileBrowserModel_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d2518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0._GetContentOfDirectory_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::_GetContentOfDirectory_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21d2a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0*>::get(),
                                                 "<GetContentOfDirectory>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0._GetContentOfDirectory_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::_GetContentOfDirectory_b__1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21d2a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0*>::get(),
                                                 "<GetContentOfDirectory>b__1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>& GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::__get_items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> const& GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::__get_items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr void GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::__set_items(::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::__get_direcotryPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direcotryPath;
}
constexpr ::StringW const& GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::__get_direcotryPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direcotryPath;
}
constexpr void GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::__set_direcotryPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___direcotryPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::__get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::__get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::__set_extensions(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>>*&
GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>>*> const&
GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void
GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::__set_callback(::System::Action_1<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0* GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0*>());
}
inline void GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::_GetContentOfDirectory_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0*>::get(),
                                               "<GetContentOfDirectory>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::_GetContentOfDirectory_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0*>::get(),
                                               "<GetContentOfDirectory>b__1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FileBrowserModel____c__DisplayClass0_0::__FileBrowserModel____c__DisplayClass0_0() {}
//  Writing Method size for method: ::GlobalNamespace::FileBrowserModel.GetContentOfDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Action_1<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>>*)>(
        &::GlobalNamespace::FileBrowserModel::GetContentOfDirectory)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x21d23ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserModel*>::get(), "GetContentOfDirectory", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserModel.GetContentOfDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> (*)(
    ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::GlobalNamespace::FileBrowserModel::GetContentOfDirectory)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x21d2520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserModel*>::get(), "GetContentOfDirectory", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserModel.CanOpenDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::FileBrowserModel::CanOpenDirectory)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x21d29c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserModel*>::get(), "CanOpenDirectory", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FileBrowserModel::GetContentOfDirectory(::StringW direcotryPath, ::ArrayW<::StringW, ::Array<::StringW>*> extensions,
                                                                     ::System::Action_1<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserModel*>::get(), "GetContentOfDirectory", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, direcotryPath, extensions, callback);
}
inline ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>
GlobalNamespace::FileBrowserModel::GetContentOfDirectory(::StringW directoryPath, ::ArrayW<::StringW, ::Array<::StringW>*> extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserModel*>::get(), "GetContentOfDirectory", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>, false>(nullptr, ___internal_method, directoryPath,
                                                                                                                                                  extensions);
}
inline bool GlobalNamespace::FileBrowserModel::CanOpenDirectory(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserModel*>::get(), "CanOpenDirectory", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileBrowserModel::FileBrowserModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
