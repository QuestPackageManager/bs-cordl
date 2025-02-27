#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelFailedTextOverride.hpp"
#include "BGLib/Polyglot/zzzz__Language_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LevelFailedTextOverride_def.hpp"
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__LevelFailedTextOverride_def.hpp"
#include "GlobalNamespace/zzzz__LevelFailedText_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelFailedTextOverride_LanguageOverride.get_language
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::Language (::GlobalNamespace::LevelFailedTextOverride_LanguageOverride::*)()>(
    &::GlobalNamespace::LevelFailedTextOverride_LanguageOverride::get_language)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226e200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*>::get(), "get_language",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFailedTextOverride_LanguageOverride.get_overrideText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::LevelFailedTextOverride_LanguageOverride::*)()>(
    &::GlobalNamespace::LevelFailedTextOverride_LanguageOverride::get_overrideText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226e208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*>::get(), "get_overrideText",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFailedTextOverride_LanguageOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFailedTextOverride_LanguageOverride::*)()>(
    &::GlobalNamespace::LevelFailedTextOverride_LanguageOverride::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226e210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BGLib::Polyglot::Language& GlobalNamespace::LevelFailedTextOverride_LanguageOverride::__cordl_internal_get__language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____language;
}
constexpr ::BGLib::Polyglot::Language const& GlobalNamespace::LevelFailedTextOverride_LanguageOverride::__cordl_internal_get__language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____language;
}
constexpr void GlobalNamespace::LevelFailedTextOverride_LanguageOverride::__cordl_internal_set__language(::BGLib::Polyglot::Language value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____language = value;
}
constexpr ::StringW& GlobalNamespace::LevelFailedTextOverride_LanguageOverride::__cordl_internal_get__overrideText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideText;
}
constexpr ::StringW const& GlobalNamespace::LevelFailedTextOverride_LanguageOverride::__cordl_internal_get__overrideText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideText;
}
constexpr void GlobalNamespace::LevelFailedTextOverride_LanguageOverride::__cordl_internal_set__overrideText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGLib::Polyglot::Language GlobalNamespace::LevelFailedTextOverride_LanguageOverride::get_language() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*>::get(), "get_language",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::Language, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LevelFailedTextOverride_LanguageOverride::get_overrideText() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*>::get(), "get_overrideText",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFailedTextOverride_LanguageOverride::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelFailedTextOverride_LanguageOverride* GlobalNamespace::LevelFailedTextOverride_LanguageOverride::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFailedTextOverride_LanguageOverride::LevelFailedTextOverride_LanguageOverride() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0::*)()>(
    &::GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226e218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0._Start_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0::*)(
    ::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*)>(&::GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0::_Start_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x226e220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0*>::get(), "<Start>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BGLib::Polyglot::Language& GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0::__cordl_internal_get_selectedLanguage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLanguage;
}
constexpr ::BGLib::Polyglot::Language const& GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0::__cordl_internal_get_selectedLanguage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLanguage;
}
constexpr void GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0::__cordl_internal_set_selectedLanguage(::BGLib::Polyglot::Language value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectedLanguage = value;
}
inline void GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0::_Start_b__0(::GlobalNamespace::LevelFailedTextOverride_LanguageOverride* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0*>::get(), "<Start>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data);
}
inline ::GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0* GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFailedTextOverride___c__DisplayClass6_0::LevelFailedTextOverride___c__DisplayClass6_0() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFailedTextOverride__Start_d__6.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFailedTextOverride__Start_d__6::*)()>(
    &::GlobalNamespace::LevelFailedTextOverride__Start_d__6::MoveNext)> {
  constexpr static std::size_t size = 0xbc8;
  constexpr static std::size_t addrs = 0x226e244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride__Start_d__6>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFailedTextOverride__Start_d__6.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFailedTextOverride__Start_d__6::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LevelFailedTextOverride__Start_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x226ee0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride__Start_d__6>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelFailedTextOverride__Start_d__6::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride__Start_d__6>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFailedTextOverride__Start_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride__Start_d__6>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LevelFailedTextOverride__Start_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LevelFailedTextOverride__Start_d__6::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelFailedTextOverride>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_overrideData_5__2", ty: "::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_levelId_5__3", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelSO>,::Array<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*>>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>,::Array<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*>>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::LevelFailedTextOverride__Start_d__6::LevelFailedTextOverride__Start_d__6(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LevelFailedTextOverride> __4__this,
    ::GlobalNamespace::LevelFailedTextOverride_LanguageOverride* _overrideData_5__2, ::StringW _levelId_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*>> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*>> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_overrideData_5__2 = _overrideData_5__2;
  this->_levelId_5__3 = _levelId_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFailedTextOverride__Start_d__6::LevelFailedTextOverride__Start_d__6() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFailedTextOverride.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFailedTextOverride::*)()>(&::GlobalNamespace::LevelFailedTextOverride::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x226e168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFailedTextOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFailedTextOverride::*)()>(&::GlobalNamespace::LevelFailedTextOverride::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226e1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*, ::Array<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*>*>&
GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__perLanguageOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perLanguageOverrides;
}
constexpr ::ArrayW<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*, ::Array<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*>*> const&
GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__perLanguageOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perLanguageOverrides;
}
constexpr void GlobalNamespace::LevelFailedTextOverride::__cordl_internal_set__perLanguageOverrides(
    ::ArrayW<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*, ::Array<::GlobalNamespace::LevelFailedTextOverride_LanguageOverride*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____perLanguageOverrides)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*,
                   ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*>*>&
GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__beatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks;
}
constexpr ::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*,
                   ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*>*> const&
GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__beatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks;
}
constexpr void GlobalNamespace::LevelFailedTextOverride::__cordl_internal_set__beatmapLevelPacks(
    ::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*,
             ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*,
                   ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*>*>&
GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__beatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr ::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*,
                   ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*>*> const&
GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__beatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr void
GlobalNamespace::LevelFailedTextOverride::__cordl_internal_set__beatmapLevels(::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*,
                                                                                       ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*>*>
                                                                                  value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LevelFailedText>& GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__levelFailedTextEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelFailedTextEffect;
}
constexpr ::UnityW<::GlobalNamespace::LevelFailedText> const& GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__levelFailedTextEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelFailedTextEffect;
}
constexpr void GlobalNamespace::LevelFailedTextOverride::__cordl_internal_set__levelFailedTextEffect(::UnityW<::GlobalNamespace::LevelFailedText> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelFailedTextEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::LevelFailedTextOverride::__cordl_internal_get__beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey;
}
constexpr void GlobalNamespace::LevelFailedTextOverride::__cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey = value;
}
inline void GlobalNamespace::LevelFailedTextOverride::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFailedTextOverride::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextOverride*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelFailedTextOverride* GlobalNamespace::LevelFailedTextOverride::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelFailedTextOverride*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFailedTextOverride::LevelFailedTextOverride() {}
