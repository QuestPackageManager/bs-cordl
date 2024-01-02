#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Yoga/zzzz__MeasureFunction_def.hpp"
#include "UnityEngine/Yoga/zzzz__YogaSize_def.hpp"
#include "UnityEngine/Yoga/zzzz__YogaNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Yoga/zzzz__YogaMeasureMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Yoga::MeasureFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Yoga::MeasureFunction::*)(::System::Object*, void*)>(
    &::UnityEngine::Yoga::MeasureFunction::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2ea531c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Yoga::MeasureFunction*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Yoga::MeasureFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Yoga::YogaSize (::UnityEngine::Yoga::MeasureFunction::*)(
    ::UnityEngine::Yoga::YogaNode*, float_t, ::UnityEngine::Yoga::YogaMeasureMode, float_t, ::UnityEngine::Yoga::YogaMeasureMode)>(&::UnityEngine::Yoga::MeasureFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ea544c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Yoga::MeasureFunction*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Yoga::MeasureFunction*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::Yoga::MeasureFunction* UnityEngine::Yoga::MeasureFunction::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Yoga::MeasureFunction*>(object, method));
}
inline void UnityEngine::Yoga::MeasureFunction::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Yoga::MeasureFunction*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::UnityEngine::Yoga::YogaSize UnityEngine::Yoga::MeasureFunction::Invoke(::UnityEngine::Yoga::YogaNode* node, float_t width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height,
                                                                                ::UnityEngine::Yoga::YogaMeasureMode heightMode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Yoga::MeasureFunction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Yoga::YogaSize, false>(this, ___internal_method, node, width, widthMode, height, heightMode);
}
// Ctor Parameters []
constexpr ::UnityEngine::Yoga::MeasureFunction::MeasureFunction() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
