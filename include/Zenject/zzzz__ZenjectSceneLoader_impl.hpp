#pragma once
// IWYU pragma private; include "Zenject/ZenjectSceneLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ZenjectSceneLoader_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__LoadSceneRelationship_def.hpp"
#include "Zenject/zzzz__ProjectKernel_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(::Zenject::SceneContext*, ::Zenject::ProjectKernel*)>(&::Zenject::ZenjectSceneLoader::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e9b554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::SceneContext*>(), ::i2c::type_of<::Zenject::ProjectKernel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(::StringW)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e9b5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "LoadScene", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e9b608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "LoadScene", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*)>(
    &::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e9b618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
            { "LoadScene", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*,
                                                                                               ::Zenject::LoadSceneRelationship)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e9b624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                             { "LoadScene",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                                                 ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::Zenject::LoadSceneRelationship>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*,
                                                                                               ::Zenject::LoadSceneRelationship, ::System::Action_1<::Zenject::DiContainer*>*)>(
    &::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6e9b62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                            { "LoadScene",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                ::i2c::type_of<::Zenject::LoadSceneRelationship>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (::Zenject::ZenjectSceneLoader::*)(::StringW)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e9b930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "LoadSceneAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode)>(
    &::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e9b948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                             { "LoadSceneAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (
    ::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e9b95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "LoadSceneAsync",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                                                                                       ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (
    ::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship)>(
    &::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e9b970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                             { "LoadSceneAsync",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                                                 ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::Zenject::LoadSceneRelationship>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (
    ::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::System::Action_1<::Zenject::DiContainer*>*,
                                      ::Zenject::LoadSceneRelationship, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6e9b984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                             { "LoadSceneAsync",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                                                 ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                                                 ::i2c::type_of<::Zenject::LoadSceneRelationship>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneFromAddressablesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t, ::System::Action_1<::Zenject::DiContainer*>*,
                                      ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship, ::System::Action_1<::Zenject::DiContainer*>*)>(
    &::Zenject::ZenjectSceneLoader::LoadSceneFromAddressablesAsync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6e9ba90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                { "LoadSceneFromAddressablesAsync",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                                    ::i2c::type_of<::Zenject::LoadSceneRelationship>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.PrepareForLoadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Zenject::ZenjectSceneLoader::*)(::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::System::Action_1<::Zenject::DiContainer*>*,
                                                        ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship)>(&::Zenject::ZenjectSceneLoader::PrepareForLoadScene)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6e9b734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                             { "PrepareForLoadScene",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                                                 ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                                                 ::i2c::type_of<::Zenject::LoadSceneRelationship>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(int32_t)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e9bbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "LoadScene", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e9bbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "LoadScene", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*)>(
    &::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e9bc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
            { "LoadScene", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*,
                                                                                               ::Zenject::LoadSceneRelationship)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e9bc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                             { "LoadScene",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                                                 ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::Zenject::LoadSceneRelationship>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*,
                                                                                               ::Zenject::LoadSceneRelationship, ::System::Action_1<::Zenject::DiContainer*>*)>(
    &::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6e9bc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                         { "LoadScene",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                             ::i2c::type_of<::Zenject::LoadSceneRelationship>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (::Zenject::ZenjectSceneLoader::*)(int32_t)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e9bd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "LoadSceneAsync", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode)>(
    &::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e9bd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                             { "LoadSceneAsync", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (
    ::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e9bd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
            { "LoadSceneAsync", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (
    ::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship)>(
    &::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e9bd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                             { "LoadSceneAsync",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                                                 ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::Zenject::LoadSceneRelationship>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (
    ::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship,
                                      ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6e9bd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                         { "LoadSceneAsync",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                             ::i2c::type_of<::Zenject::LoadSceneRelationship>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ZenjectSceneLoader::__zenCreate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e9be94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ZenjectSceneLoader::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x6e9bfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Zenject::ProjectKernel>& Zenject::ZenjectSceneLoader::__cordl_internal_get__projectKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____projectKernel;
}
constexpr ::UnityW<::Zenject::ProjectKernel> const& Zenject::ZenjectSceneLoader::__cordl_internal_get__projectKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____projectKernel;
}
constexpr void Zenject::ZenjectSceneLoader::__cordl_internal_set__projectKernel(::UnityW<::Zenject::ProjectKernel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____projectKernel = value;
}
constexpr ::Zenject::DiContainer*& Zenject::ZenjectSceneLoader::__cordl_internal_get__sceneContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneContainer;
}
constexpr ::Zenject::DiContainer* const& Zenject::ZenjectSceneLoader::__cordl_internal_get__sceneContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneContainer;
}
constexpr void Zenject::ZenjectSceneLoader::__cordl_internal_set__sceneContainer(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneContainer = value;
}
inline void Zenject::ZenjectSceneLoader::_ctor(::Zenject::SceneContext* sceneRoot, ::Zenject::ProjectKernel* projectKernel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::SceneContext*>(), ::i2c::type_of<::Zenject::ProjectKernel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneRoot, projectKernel);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(::StringW sceneName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "LoadScene", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "LoadScene", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName, loadMode);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
          { "LoadScene", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName, loadMode, extraBindings);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                                                   ::Zenject::LoadSceneRelationship containerMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                           { "LoadScene",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                                               ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::Zenject::LoadSceneRelationship>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName, loadMode, extraBindings, containerMode);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                                                   ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                       { "LoadScene",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                           ::i2c::type_of<::Zenject::LoadSceneRelationship>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName, loadMode, extraBindings, containerMode, extraBindingsLate);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(::StringW sceneName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "LoadSceneAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, sceneName);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                           { "LoadSceneAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, sceneName, loadMode);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode,
                                                                                  ::System::Action_1<::Zenject::DiContainer*>* extraBindings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
          { "LoadSceneAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, sceneName, loadMode, extraBindings);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode,
                                                                                  ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::Zenject::LoadSceneRelationship containerMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                           { "LoadSceneAsync",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                                               ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::Zenject::LoadSceneRelationship>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, sceneName, loadMode, extraBindings, containerMode);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode,
                                                                                  ::System::Action_1<::Zenject::DiContainer*>* extraBindingsEarly,
                                                                                  ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::Zenject::LoadSceneRelationship containerMode,
                                                                                  ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                           { "LoadSceneAsync",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                                               ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                                               ::i2c::type_of<::Zenject::LoadSceneRelationship>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, sceneName, loadMode, extraBindingsEarly, extraBindings, containerMode, extraBindingsLate);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
Zenject::ZenjectSceneLoader::LoadSceneFromAddressablesAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority,
                                                            ::System::Action_1<::Zenject::DiContainer*>* extraBindingsEarly, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                                                            ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                              { "LoadSceneFromAddressablesAsync",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                                  ::i2c::type_of<::Zenject::LoadSceneRelationship>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, sceneName, loadMode, activateOnLoad, priority, extraBindingsEarly, extraBindings, containerMode, extraBindingsLate);
}
inline void Zenject::ZenjectSceneLoader::PrepareForLoadScene(::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsEarly,
                                                             ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate,
                                                             ::Zenject::LoadSceneRelationship containerMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                           { "PrepareForLoadScene",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                                               ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                                               ::i2c::type_of<::Zenject::LoadSceneRelationship>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadMode, extraBindingsEarly, extraBindings, extraBindingsLate, containerMode);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(int32_t sceneIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "LoadScene", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneIndex);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "LoadScene", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneIndex, loadMode);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
          { "LoadScene", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneIndex, loadMode, extraBindings);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                                                   ::Zenject::LoadSceneRelationship containerMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                           { "LoadScene",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                                               ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::Zenject::LoadSceneRelationship>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneIndex, loadMode, extraBindings, containerMode);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                                                   ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                       { "LoadScene",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                           ::i2c::type_of<::Zenject::LoadSceneRelationship>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneIndex, loadMode, extraBindings, containerMode, extraBindingsLate);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(int32_t sceneIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "LoadSceneAsync", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, sceneIndex);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                           { "LoadSceneAsync", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, sceneIndex, loadMode);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode,
                                                                                  ::System::Action_1<::Zenject::DiContainer*>* extraBindings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
          { "LoadSceneAsync", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, sceneIndex, loadMode, extraBindings);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode,
                                                                                  ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::Zenject::LoadSceneRelationship containerMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                                           { "LoadSceneAsync",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(),
                                                               ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<::Zenject::LoadSceneRelationship>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, sceneIndex, loadMode, extraBindings, containerMode);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode,
                                                                                  ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::Zenject::LoadSceneRelationship containerMode,
                                                                                  ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(),
                                       { "LoadSceneAsync",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>(),
                                           ::i2c::type_of<::Zenject::LoadSceneRelationship>(), ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(this, ___internal_method, sceneIndex, loadMode, extraBindings, containerMode, extraBindingsLate);
}
inline ::System::Object* Zenject::ZenjectSceneLoader::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ZenjectSceneLoader::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSceneLoader*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ZenjectSceneLoader* Zenject::ZenjectSceneLoader::New_ctor(::Zenject::SceneContext* sceneRoot, ::Zenject::ProjectKernel* projectKernel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ZenjectSceneLoader*>(sceneRoot, projectKernel));
}
// Ctor Parameters []
constexpr ::Zenject::ZenjectSceneLoader::ZenjectSceneLoader() {}
