#pragma once
#include "Tweening/zzzz__TweeningManager_impl.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
//  Writing Method size for method: ::Tweening::TimeTweeningManager.GetTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tweening::TimeTweeningManager::*)()>(&::Tweening::TimeTweeningManager::GetTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0e3c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::TimeTweeningManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::TimeTweeningManager*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::TimeTweeningManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tweening::TimeTweeningManager::*)()>(&::Tweening::TimeTweeningManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a0e3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::TimeTweeningManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline float_t Tweening::TimeTweeningManager::GetTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::TimeTweeningManager*>::get(), "GetTime",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::Tweening::TimeTweeningManager* Tweening::TimeTweeningManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Tweening::TimeTweeningManager*>());
}
inline void Tweening::TimeTweeningManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tweening::TimeTweeningManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Tweening::TimeTweeningManager::TimeTweeningManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
