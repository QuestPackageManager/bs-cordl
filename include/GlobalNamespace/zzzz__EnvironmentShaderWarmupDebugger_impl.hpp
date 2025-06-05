#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentShaderWarmupDebugger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IInitializable_impl.hpp"
#include "Zenject/zzzz__ILateTickable_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentShaderWarmupDebugger_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentShaderWarmupDebugger_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentShaderWarmupDebugger___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentShaderWarmupDebugger___c::*)()>(
    &::GlobalNamespace::EnvironmentShaderWarmupDebugger___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3acaa10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentShaderWarmupDebugger___c._Initialize_b__4_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::EnvironmentShaderWarmupDebugger___c::*)(
    ::UnityEngine::Renderer*)>(&::GlobalNamespace::EnvironmentShaderWarmupDebugger___c::_Initialize_b__4_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3acaa18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger___c*>::get(), "<Initialize>b__4_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EnvironmentShaderWarmupDebugger___c::setStaticF___9(::GlobalNamespace::EnvironmentShaderWarmupDebugger___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::EnvironmentShaderWarmupDebugger___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger___c*>::get>(
      std::forward<::GlobalNamespace::EnvironmentShaderWarmupDebugger___c*>(value));
}
inline ::GlobalNamespace::EnvironmentShaderWarmupDebugger___c* GlobalNamespace::EnvironmentShaderWarmupDebugger___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::EnvironmentShaderWarmupDebugger___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger___c*>::get>();
}
inline void GlobalNamespace::EnvironmentShaderWarmupDebugger___c::setStaticF___9__4_0(::System::Func_2<::UnityW<::UnityEngine::Renderer>, ::UnityW<::UnityEngine::Material>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::Renderer>, ::UnityW<::UnityEngine::Material>>*, "<>9__4_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::Renderer>, ::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::Renderer>, ::UnityW<::UnityEngine::Material>>* GlobalNamespace::EnvironmentShaderWarmupDebugger___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::Renderer>, ::UnityW<::UnityEngine::Material>>*, "<>9__4_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger___c*>::get>();
}
inline void GlobalNamespace::EnvironmentShaderWarmupDebugger___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::EnvironmentShaderWarmupDebugger___c::_Initialize_b__4_0(::UnityEngine::Renderer* renderer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger___c*>::get(), "<Initialize>b__4_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method, renderer);
}
inline ::GlobalNamespace::EnvironmentShaderWarmupDebugger___c* GlobalNamespace::EnvironmentShaderWarmupDebugger___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentShaderWarmupDebugger___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentShaderWarmupDebugger___c::EnvironmentShaderWarmupDebugger___c() {}
//  Writing Method size for method: ::GlobalNamespace::EnvironmentShaderWarmupDebugger.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentShaderWarmupDebugger::*)()>(
    &::GlobalNamespace::EnvironmentShaderWarmupDebugger::Initialize)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3ac9df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentShaderWarmupDebugger.LateTick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentShaderWarmupDebugger::*)()>(
    &::GlobalNamespace::EnvironmentShaderWarmupDebugger::LateTick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ac9f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger*>::get(),
                                                                               "LateTick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentShaderWarmupDebugger.JustRenderersAndInitialMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentShaderWarmupDebugger::*)()>(
    &::GlobalNamespace::EnvironmentShaderWarmupDebugger::JustRenderersAndInitialMaterials)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x3ac9f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger*>::get(), "JustRenderersAndInitialMaterials",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentShaderWarmupDebugger.FullMaterialLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentShaderWarmupDebugger::*)()>(
    &::GlobalNamespace::EnvironmentShaderWarmupDebugger::FullMaterialLookup)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x3aca348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger*>::get(),
                                                                               "FullMaterialLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentShaderWarmupDebugger.GetGameObjectPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::EnvironmentShaderWarmupDebugger::*)(::UnityEngine::GameObject*)>(
    &::GlobalNamespace::EnvironmentShaderWarmupDebugger::GetGameObjectPath)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3aca1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger*>::get(), "GetGameObjectPath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentShaderWarmupDebugger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentShaderWarmupDebugger::*)()>(
    &::GlobalNamespace::EnvironmentShaderWarmupDebugger::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3aca90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::EnvironmentShaderWarmupDebugger::__cordl_internal_get__renderersThatWereNotRendered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderersThatWereNotRendered;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const&
GlobalNamespace::EnvironmentShaderWarmupDebugger::__cordl_internal_get__renderersThatWereNotRendered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderersThatWereNotRendered;
}
constexpr void GlobalNamespace::EnvironmentShaderWarmupDebugger::__cordl_internal_set__renderersThatWereNotRendered(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderersThatWereNotRendered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>*& GlobalNamespace::EnvironmentShaderWarmupDebugger::__cordl_internal_get__materialsThatWereNotRendered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialsThatWereNotRendered;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>* const&
GlobalNamespace::EnvironmentShaderWarmupDebugger::__cordl_internal_get__materialsThatWereNotRendered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialsThatWereNotRendered;
}
constexpr void
GlobalNamespace::EnvironmentShaderWarmupDebugger::__cordl_internal_set__materialsThatWereNotRendered(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialsThatWereNotRendered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::EnvironmentShaderWarmupDebugger::__cordl_internal_get__reusableStringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableStringBuilder;
}
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::EnvironmentShaderWarmupDebugger::__cordl_internal_get__reusableStringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableStringBuilder;
}
constexpr void GlobalNamespace::EnvironmentShaderWarmupDebugger::__cordl_internal_set__reusableStringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusableStringBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::EnvironmentShaderWarmupDebugger::__cordl_internal_get__allMaterialVariantHashes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allMaterialVariantHashes;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::EnvironmentShaderWarmupDebugger::__cordl_internal_get__allMaterialVariantHashes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allMaterialVariantHashes;
}
constexpr void GlobalNamespace::EnvironmentShaderWarmupDebugger::__cordl_internal_set__allMaterialVariantHashes(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allMaterialVariantHashes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::EnvironmentShaderWarmupDebugger::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentShaderWarmupDebugger::LateTick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger*>::get(),
                                                                             "LateTick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentShaderWarmupDebugger::JustRenderersAndInitialMaterials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger*>::get(),
                                                                             "JustRenderersAndInitialMaterials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentShaderWarmupDebugger::FullMaterialLookup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger*>::get(),
                                                                             "FullMaterialLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::EnvironmentShaderWarmupDebugger::GetGameObjectPath(::UnityEngine::GameObject* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger*>::get(), "GetGameObjectPath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, obj);
}
inline void GlobalNamespace::EnvironmentShaderWarmupDebugger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentShaderWarmupDebugger*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentShaderWarmupDebugger* GlobalNamespace::EnvironmentShaderWarmupDebugger::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentShaderWarmupDebugger*>());
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::EnvironmentShaderWarmupDebugger::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::EnvironmentShaderWarmupDebugger::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::ILateTickable"
constexpr GlobalNamespace::EnvironmentShaderWarmupDebugger::operator ::Zenject::ILateTickable*() noexcept {
  return static_cast<::Zenject::ILateTickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ILateTickable"
constexpr ::Zenject::ILateTickable* GlobalNamespace::EnvironmentShaderWarmupDebugger::i___Zenject__ILateTickable() noexcept {
  return static_cast<::Zenject::ILateTickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentShaderWarmupDebugger::EnvironmentShaderWarmupDebugger() {}
