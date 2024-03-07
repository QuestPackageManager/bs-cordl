#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Yoga/zzzz__Logger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Yoga/zzzz__YogaConfig_def.hpp"
#include "UnityEngine/Yoga/zzzz__YogaLogLevel_def.hpp"
#include "UnityEngine/Yoga/zzzz__YogaNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Yoga::Logger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Yoga::Logger::*)(::System::Object*, void*)>(&::UnityEngine::Yoga::Logger::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x300c8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Yoga::Logger*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Yoga::Logger.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Yoga::Logger::*)(
    ::UnityEngine::Yoga::YogaConfig*, ::UnityEngine::Yoga::YogaNode*, ::UnityEngine::Yoga::YogaLogLevel, ::StringW)>(&::UnityEngine::Yoga::Logger::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x300ca1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Yoga::Logger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Yoga::Logger*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::Yoga::Logger* UnityEngine::Yoga::Logger::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Yoga::Logger*>(object, method));
}
inline void UnityEngine::Yoga::Logger::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Yoga::Logger*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Yoga::Logger::Invoke(::UnityEngine::Yoga::YogaConfig* config, ::UnityEngine::Yoga::YogaNode* node, ::UnityEngine::Yoga::YogaLogLevel level, ::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Yoga::Logger*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config, node, level, message);
}
// Ctor Parameters []
constexpr ::UnityEngine::Yoga::Logger::Logger() {}
