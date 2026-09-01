#pragma once
// IWYU pragma private; include "UnityEngine\Playables\PlayableBinding.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBinding_CreateOutputMethod._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableBinding_CreateOutputMethod::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Playables::PlayableBinding_CreateOutputMethod::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b04840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBinding_CreateOutputMethod*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBinding_CreateOutputMethod.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutput (::UnityEngine::Playables::PlayableBinding_CreateOutputMethod::*)(
    ::UnityEngine::Playables::PlayableGraph, ::StringW)>(&::UnityEngine::Playables::PlayableBinding_CreateOutputMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b048ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBinding_CreateOutputMethod*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Playables::PlayableBinding_CreateOutputMethod*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::PlayableBinding_CreateOutputMethod::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBinding_CreateOutputMethod*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityEngine::Playables::PlayableOutput UnityEngine::Playables::PlayableBinding_CreateOutputMethod::Invoke(::UnityEngine::Playables::PlayableGraph graph, ::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Playables::PlayableBinding_CreateOutputMethod*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput>(this, ___internal_method, graph, name);
}
inline ::UnityEngine::Playables::PlayableBinding_CreateOutputMethod* UnityEngine::Playables::PlayableBinding_CreateOutputMethod::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Playables::PlayableBinding_CreateOutputMethod*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableBinding_CreateOutputMethod::PlayableBinding_CreateOutputMethod() {}
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBinding.get_streamName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Playables::PlayableBinding::*)()>(&::UnityEngine::Playables::PlayableBinding::get_streamName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b046b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBinding>(), { "get_streamName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBinding.get_sourceObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Playables::PlayableBinding::*)()>(
    &::UnityEngine::Playables::PlayableBinding::get_sourceObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b046bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBinding>(), { "get_sourceObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBinding.CreateOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutput (::UnityEngine::Playables::PlayableBinding::*)(::UnityEngine::Playables::PlayableGraph)>(
    &::UnityEngine::Playables::PlayableBinding::CreateOutput)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b046c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBinding>(), { "CreateOutput", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBinding.CreateInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableBinding (*)(
    ::StringW, ::UnityEngine::Object*, ::System::Type*, ::UnityEngine::Playables::PlayableBinding_CreateOutputMethod*)>(&::UnityEngine::Playables::PlayableBinding::CreateInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b047b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBinding>(),
                                                                                           { "CreateInternal",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::System::Type*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Playables::PlayableBinding_CreateOutputMethod*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::PlayableBinding::setStaticF_None(::ArrayW<::UnityEngine::Playables::PlayableBinding> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Playables::PlayableBinding>, "None", ::UnityEngine::Playables::PlayableBinding>(
      std::forward<::ArrayW<::UnityEngine::Playables::PlayableBinding>>(value));
}
inline ::ArrayW<::UnityEngine::Playables::PlayableBinding> UnityEngine::Playables::PlayableBinding::getStaticF_None() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Playables::PlayableBinding>, "None", ::UnityEngine::Playables::PlayableBinding>();
}
inline void UnityEngine::Playables::PlayableBinding::setStaticF_DefaultDuration(double_t value) {
  ::cordl_internals::setStaticField<double_t, "DefaultDuration", ::UnityEngine::Playables::PlayableBinding>(std::forward<double_t>(value));
}
inline double_t UnityEngine::Playables::PlayableBinding::getStaticF_DefaultDuration() {
  return ::cordl_internals::getStaticField<double_t, "DefaultDuration", ::UnityEngine::Playables::PlayableBinding>();
}
inline ::StringW UnityEngine::Playables::PlayableBinding::get_streamName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBinding>(), { "get_streamName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Playables::PlayableBinding::get_sourceObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBinding>(), { "get_sourceObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableOutput UnityEngine::Playables::PlayableBinding::CreateOutput(::UnityEngine::Playables::PlayableGraph graph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBinding>(), { "CreateOutput", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput>(*this, ___internal_method, graph);
}
inline ::UnityEngine::Playables::PlayableBinding UnityEngine::Playables::PlayableBinding::CreateInternal(::StringW name, ::UnityEngine::Object* sourceObject, ::System::Type* sourceType,
                                                                                                         ::UnityEngine::Playables::PlayableBinding_CreateOutputMethod* createFunction) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableBinding>(),
                                                                                         { "CreateInternal",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::System::Type*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Playables::PlayableBinding_CreateOutputMethod*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableBinding>(nullptr, ___internal_method, name, sourceObject, sourceType, createFunction);
}
// Ctor Parameters [CppParam { name: "m_StreamName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SourceObject", ty: "::UnityW<::UnityEngine::Object>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_SourceBindingType", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CreateOutputMethod", ty:
// "::UnityEngine::Playables::PlayableBinding_CreateOutputMethod*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::PlayableBinding::PlayableBinding(::StringW m_StreamName, ::UnityW<::UnityEngine::Object> m_SourceObject, ::System::Type* m_SourceBindingType,
                                                                     ::UnityEngine::Playables::PlayableBinding_CreateOutputMethod* m_CreateOutputMethod) noexcept {
  this->m_StreamName = m_StreamName;
  this->m_SourceObject = m_SourceObject;
  this->m_SourceBindingType = m_SourceBindingType;
  this->m_CreateOutputMethod = m_CreateOutputMethod;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableBinding::PlayableBinding() {}
