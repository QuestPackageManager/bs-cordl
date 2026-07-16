#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBindingResolver.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingResolver_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingResolver.get_totalMapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputBindingResolver::*)()>(&::UnityEngine::InputSystem::InputBindingResolver::get_totalMapCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6507e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(), { "get_totalMapCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingResolver.get_totalActionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputBindingResolver::*)()>(&::UnityEngine::InputSystem::InputBindingResolver::get_totalActionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6507e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(), { "get_totalActionCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingResolver.get_totalBindingCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputBindingResolver::*)()>(&::UnityEngine::InputSystem::InputBindingResolver::get_totalBindingCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6507e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(), { "get_totalBindingCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingResolver.get_totalControlCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputBindingResolver::*)()>(&::UnityEngine::InputSystem::InputBindingResolver::get_totalControlCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6507e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(), { "get_totalControlCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingResolver.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBindingResolver::*)()>(&::UnityEngine::InputSystem::InputBindingResolver::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6507e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingResolver.StartWithPreviousResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBindingResolver::*)(::UnityEngine::InputSystem::InputActionState*, bool)>(
    &::UnityEngine::InputSystem::InputBindingResolver::StartWithPreviousResolve)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6507e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(),
                                                             { "StartWithPreviousResolve", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionState*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingResolver.AddActionMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBindingResolver::*)(::UnityEngine::InputSystem::InputActionMap*)>(
    &::UnityEngine::InputSystem::InputBindingResolver::AddActionMap)> {
  constexpr static std::size_t size = 0x17f8;
  constexpr static std::size_t addrs = 0x6507f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(),
                                                                                           { "AddActionMap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingResolver.InstantiateBindingComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::InputBindingComposite* (*)(::by_ref<::UnityEngine::InputSystem::InputBinding>, ::UnityEngine::InputSystem::InputActionMap*)>(
        &::UnityEngine::InputSystem::InputBindingResolver::InstantiateBindingComposite)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x6509780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(),
            { "InstantiateBindingComposite", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBinding>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingResolver.ApplyParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>, ::System::Object*,
                                                                ::UnityEngine::InputSystem::InputActionMap*, ::by_ref<::UnityEngine::InputSystem::InputBinding>, ::StringW, ::StringW)>(
    &::UnityEngine::InputSystem::InputBindingResolver::ApplyParameters)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x6509b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(),
                                                             { "ApplyParameters",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBinding>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingResolver.AssignCompositePartIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Object*, ::StringW, ::by_ref<int32_t>)>(&::UnityEngine::InputSystem::InputBindingResolver::AssignCompositePartIndex)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x65099d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(),
                                                { "AssignCompositePartIndex", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::InputSystem::InputBindingResolver::get_totalMapCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(), { "get_totalMapCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputBindingResolver::get_totalActionCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(), { "get_totalActionCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputBindingResolver::get_totalBindingCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(), { "get_totalBindingCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputBindingResolver::get_totalControlCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(), { "get_totalControlCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBindingResolver::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBindingResolver::StartWithPreviousResolve(::UnityEngine::InputSystem::InputActionState* state, bool isFullResolve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(),
                                                           { "StartWithPreviousResolve", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionState*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state, isFullResolve);
}
inline void UnityEngine::InputSystem::InputBindingResolver::AddActionMap(::UnityEngine::InputSystem::InputActionMap* actionMap) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(),
                                                                                         { "AddActionMap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, actionMap);
}
template <typename TType>
inline int32_t UnityEngine::InputSystem::InputBindingResolver::InstantiateWithParameters(::UnityEngine::InputSystem::Utilities::TypeTable registrations, ::StringW namesAndParameters,
                                                                                         ::by_ref<::ArrayW<TType>> array, ::by_ref<int32_t> count,
                                                                                         ::UnityEngine::InputSystem::InputActionMap* actionMap,
                                                                                         ::by_ref<::UnityEngine::InputSystem::InputBinding> binding) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(),
                                              { "InstantiateWithParameters",
                                                { ::i2c::class_of<TType>() },
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::TypeTable>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<TType>>>(),
                                                  ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBinding>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TType>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, registrations, namesAndParameters, array, count, actionMap, binding);
}
inline ::UnityEngine::InputSystem::InputBindingComposite* UnityEngine::InputSystem::InputBindingResolver::InstantiateBindingComposite(::by_ref<::UnityEngine::InputSystem::InputBinding> binding,
                                                                                                                                      ::UnityEngine::InputSystem::InputActionMap* actionMap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(),
          { "InstantiateBindingComposite", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBinding>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputBindingComposite*>(nullptr, ___internal_method, binding, actionMap);
}
inline void UnityEngine::InputSystem::InputBindingResolver::ApplyParameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> parameters,
                                                                            ::System::Object* instance, ::UnityEngine::InputSystem::InputActionMap* actionMap,
                                                                            ::by_ref<::UnityEngine::InputSystem::InputBinding> binding, ::StringW objectRegistrationName,
                                                                            ::StringW namesAndParameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(),
                                                           { "ApplyParameters",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBinding>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, instance, actionMap, binding, objectRegistrationName, namesAndParameters);
}
inline int32_t UnityEngine::InputSystem::InputBindingResolver::AssignCompositePartIndex(::System::Object* composite, ::StringW name, ::by_ref<int32_t> currentCompositePartCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingResolver>(),
                                              { "AssignCompositePartIndex", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, composite, name, currentCompositePartCount);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::InputBindingResolver::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputBindingResolver::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "totalProcessorCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalCompositeCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "totalInteractionCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "controls", ty: "::ArrayW<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "memory",
// ty: "::UnityEngine::InputSystem::InputActionState_UnmanagedMemory", modifiers: "", def_value: Some("{}") }, CppParam { name: "interactions", ty: "::ArrayW<Il2CppObject*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "processors", ty: "::ArrayW<::UnityEngine::InputSystem::InputProcessor*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "composites", ty:
// "::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindingMask", ty:
// "::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsControlOnlyResolve", ty: "bool", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "m_Parameters", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputBindingResolver::InputBindingResolver(
    int32_t totalProcessorCount, int32_t totalCompositeCount, int32_t totalInteractionCount, ::ArrayW<::UnityEngine::InputSystem::InputActionMap*> maps,
    ::ArrayW<::UnityEngine::InputSystem::InputControl*> controls, ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory memory, ::ArrayW<Il2CppObject*> interactions,
    ::ArrayW<::UnityEngine::InputSystem::InputProcessor*> processors, ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*> composites,
    ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask, bool m_IsControlOnlyResolve,
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>* m_Parameters) noexcept {
  this->totalProcessorCount = totalProcessorCount;
  this->totalCompositeCount = totalCompositeCount;
  this->totalInteractionCount = totalInteractionCount;
  this->maps = maps;
  this->controls = controls;
  this->memory = memory;
  this->interactions = interactions;
  this->processors = processors;
  this->composites = composites;
  this->bindingMask = bindingMask;
  this->m_IsControlOnlyResolve = m_IsControlOnlyResolve;
  this->m_Parameters = m_Parameters;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputBindingResolver::InputBindingResolver() {}
