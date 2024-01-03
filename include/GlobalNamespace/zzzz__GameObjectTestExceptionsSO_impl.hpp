#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameObjectTestExceptionsSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__GameObjectTestExceptionsSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException.get_environmentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (
    ::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::*)()>(&::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::get_environmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23238ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>::get(),
                                                 "get_environmentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException.get_sceneHierarchies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (
    ::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::*)()>(&::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::get_sceneHierarchies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23238b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>::get(),
                                                 "get_sceneHierarchies", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::*)()>(
    &::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23238bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::EnvironmentInfoSO*& GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__get__environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__get__environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfo;
}
constexpr void GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__get__exceptionNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionNotes;
}
constexpr ::StringW const& GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__get__exceptionNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionNotes;
}
constexpr void GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__set__exceptionNotes(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exceptionNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__get__sceneHierarchies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneHierarchies;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__get__sceneHierarchies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneHierarchies;
}
constexpr void GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__set__sceneHierarchies(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneHierarchies)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::get_environmentInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>::get(),
                                               "get_environmentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO*, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::get_sceneHierarchies() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>::get(),
                                               "get_sceneHierarchies", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException* GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>());
}
inline void GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__GameObjectTestExceptionsSO__GameObjectTestException() {}
//  Writing Method size for method: ::GlobalNamespace::GameObjectTestExceptionsSO.GetExceptionAsDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::GlobalNamespace::EnvironmentInfoSO*, ::ArrayW<::StringW, ::Array<::StringW>*>>* (*)(::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*,
                                                                                                   ::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>)>(
    &::GlobalNamespace::GameObjectTestExceptionsSO::GetExceptionAsDictionary)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x23237c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectTestExceptionsSO*>::get(), "GetExceptionAsDictionary", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*, ::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectTestExceptionsSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameObjectTestExceptionsSO::*)()>(&::GlobalNamespace::GameObjectTestExceptionsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23238a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectTestExceptionsSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*, ::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>&
GlobalNamespace::GameObjectTestExceptionsSO::__get_tubeBloomPrePassLightIgnores() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tubeBloomPrePassLightIgnores;
}
constexpr ::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*, ::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*> const&
GlobalNamespace::GameObjectTestExceptionsSO::__get_tubeBloomPrePassLightIgnores() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tubeBloomPrePassLightIgnores;
}
constexpr void GlobalNamespace::GameObjectTestExceptionsSO::__set_tubeBloomPrePassLightIgnores(
    ::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*, ::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tubeBloomPrePassLightIgnores)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentInfoSO*, ::ArrayW<::StringW, ::Array<::StringW>*>>*
GlobalNamespace::GameObjectTestExceptionsSO::GetExceptionAsDictionary(
    ::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*, ::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*> testExceptionArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectTestExceptionsSO*>::get(), "GetExceptionAsDictionary", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*, ::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentInfoSO*, ::ArrayW<::StringW, ::Array<::StringW>*>>*, false>(
      nullptr, ___internal_method, testExceptionArray);
}
inline ::GlobalNamespace::GameObjectTestExceptionsSO* GlobalNamespace::GameObjectTestExceptionsSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameObjectTestExceptionsSO*>());
}
inline void GlobalNamespace::GameObjectTestExceptionsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectTestExceptionsSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameObjectTestExceptionsSO::GameObjectTestExceptionsSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
