#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRScenePrefabOverride_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRScenePrefabOverride.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePrefabOverride::*)()>(
    &::GlobalNamespace::OVRScenePrefabOverride::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x278939c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePrefabOverride.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePrefabOverride::*)()>(
    &::GlobalNamespace::OVRScenePrefabOverride::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x27893a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePrefabOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRScenePrefabOverride::*)()>(&::GlobalNamespace::OVRScenePrefabOverride::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2789808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePrefabOverride._UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_g__IndexOf_4_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::GlobalNamespace::OVRScenePrefabOverride::_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_g__IndexOf_4_0)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x27894f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(),
                                    "<UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize>g__IndexOf|4_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr GlobalNamespace::OVRScenePrefabOverride::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* GlobalNamespace::OVRScenePrefabOverride::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::OVRSceneAnchor*& GlobalNamespace::OVRScenePrefabOverride::__get_Prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneAnchor*> const& GlobalNamespace::OVRScenePrefabOverride::__get_Prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prefab;
}
constexpr void GlobalNamespace::OVRScenePrefabOverride::__set_Prefab(::GlobalNamespace::OVRSceneAnchor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Prefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::OVRScenePrefabOverride::__get_ClassificationLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClassificationLabel;
}
constexpr ::StringW const& GlobalNamespace::OVRScenePrefabOverride::__get_ClassificationLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClassificationLabel;
}
constexpr void GlobalNamespace::OVRScenePrefabOverride::__set_ClassificationLabel(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ClassificationLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OVRScenePrefabOverride::__get__editorClassificationIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorClassificationIndex;
}
constexpr int32_t const& GlobalNamespace::OVRScenePrefabOverride::__get__editorClassificationIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorClassificationIndex;
}
constexpr void GlobalNamespace::OVRScenePrefabOverride::__set__editorClassificationIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editorClassificationIndex = value;
}
inline void GlobalNamespace::OVRScenePrefabOverride::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePrefabOverride::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRScenePrefabOverride* GlobalNamespace::OVRScenePrefabOverride::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRScenePrefabOverride*>());
}
inline void GlobalNamespace::OVRScenePrefabOverride::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t
GlobalNamespace::OVRScenePrefabOverride::_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_g__IndexOf_4_0(::StringW label,
                                                                                                                       ::System::Collections::Generic::IEnumerable_1<::StringW>* collection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRScenePrefabOverride*>::get(),
                                  "<UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize>g__IndexOf|4_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, label, collection);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRScenePrefabOverride::OVRScenePrefabOverride() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
