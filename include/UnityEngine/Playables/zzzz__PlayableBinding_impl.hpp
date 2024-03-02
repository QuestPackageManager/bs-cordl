#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::*)(::System::Object*, void*)>(
    &::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2dec46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutput (::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::*)(
    ::UnityEngine::Playables::PlayableGraph, ::StringW)>(&::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2dec530;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod* UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>(object, method));
}
inline void UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::UnityEngine::Playables::PlayableOutput UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::Invoke(::UnityEngine::Playables::PlayableGraph graph, ::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput, false>(this, ___internal_method, graph, name);
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::__PlayableBinding__CreateOutputMethod() {}
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBinding.get_streamName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Playables::PlayableBinding::*)()>(
    &::UnityEngine::Playables::PlayableBinding::get_streamName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dec2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(),
                                                                               "get_streamName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBinding.get_sourceObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Playables::PlayableBinding::*)()>(
    &::UnityEngine::Playables::PlayableBinding::get_sourceObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dec2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(),
                                                                               "get_sourceObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBinding.CreateOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutput (::UnityEngine::Playables::PlayableBinding::*)(
    ::UnityEngine::Playables::PlayableGraph)>(&::UnityEngine::Playables::PlayableBinding::CreateOutput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2dec300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(), "CreateOutput", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBinding.CreateInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableBinding (*)(
    ::StringW, ::UnityEngine::Object*, ::System::Type*, ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*)>(&::UnityEngine::Playables::PlayableBinding::CreateInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2dec3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(), "CreateInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::PlayableBinding::setStaticF_None(::ArrayW<::UnityEngine::Playables::PlayableBinding, ::Array<::UnityEngine::Playables::PlayableBinding>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Playables::PlayableBinding, ::Array<::UnityEngine::Playables::PlayableBinding>*>, "None",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get>(
      std::forward<::ArrayW<::UnityEngine::Playables::PlayableBinding, ::Array<::UnityEngine::Playables::PlayableBinding>*>>(value));
}
inline ::ArrayW<::UnityEngine::Playables::PlayableBinding, ::Array<::UnityEngine::Playables::PlayableBinding>*> UnityEngine::Playables::PlayableBinding::getStaticF_None() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Playables::PlayableBinding, ::Array<::UnityEngine::Playables::PlayableBinding>*>, "None",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get>();
}
inline void UnityEngine::Playables::PlayableBinding::setStaticF_DefaultDuration(double_t value) {
  ::cordl_internals::setStaticField<double_t, "DefaultDuration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get>(std::forward<double_t>(value));
}
inline double_t UnityEngine::Playables::PlayableBinding::getStaticF_DefaultDuration() {
  return ::cordl_internals::getStaticField<double_t, "DefaultDuration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get>();
}
inline ::StringW UnityEngine::Playables::PlayableBinding::get_streamName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(), "get_streamName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Playables::PlayableBinding::get_sourceObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(),
                                                                             "get_sourceObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableOutput UnityEngine::Playables::PlayableBinding::CreateOutput(::UnityEngine::Playables::PlayableGraph graph) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(), "CreateOutput", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput, false>(this, ___internal_method, graph);
}
inline ::UnityEngine::Playables::PlayableBinding UnityEngine::Playables::PlayableBinding::CreateInternal(::StringW name, ::UnityEngine::Object* sourceObject, ::System::Type* sourceType,
                                                                                                         ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod* createFunction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(), "CreateInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableBinding, false>(nullptr, ___internal_method, name, sourceObject, sourceType, createFunction);
}
// Ctor Parameters [CppParam { name: "m_StreamName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_SourceObject", ty: "::UnityW<::UnityEngine::Object>", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "m_SourceBindingType", ty: "::System::Type*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_CreateOutputMethod", ty:
// "::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Playables::PlayableBinding::PlayableBinding(::StringW m_StreamName, ::UnityW<::UnityEngine::Object> m_SourceObject, ::System::Type* m_SourceBindingType,
                                                                     ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod* m_CreateOutputMethod) noexcept {
  this->m_StreamName = m_StreamName;
  this->m_SourceObject = m_SourceObject;
  this->m_SourceBindingType = m_SourceBindingType;
  this->m_CreateOutputMethod = m_CreateOutputMethod;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableBinding::PlayableBinding() {}
