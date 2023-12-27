#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BasicSpectrogramData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.get_Samples
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::GlobalNamespace::BasicSpectrogramData::*)()>(
    &::GlobalNamespace::BasicSpectrogramData::get_Samples)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23b6928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "get_Samples",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.get_ProcessedSamples
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<float_t>* (::GlobalNamespace::BasicSpectrogramData::*)()>(
    &::GlobalNamespace::BasicSpectrogramData::get_ProcessedSamples)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23b69c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(),
                                                                               "get_ProcessedSamples", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicSpectrogramData::*)()>(&::GlobalNamespace::BasicSpectrogramData::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23b6b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicSpectrogramData::*)()>(&::GlobalNamespace::BasicSpectrogramData::LateUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b6c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.ProcessSamples
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicSpectrogramData::*)(
    ::ArrayW<float_t, ::Array<float_t>*>, ::System::Collections::Generic::List_1<float_t>*)>(&::GlobalNamespace::BasicSpectrogramData::ProcessSamples)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x23b69fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "ProcessSamples", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicSpectrogramData::*)()>(&::GlobalNamespace::BasicSpectrogramData::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23b6c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AudioSource*& GlobalNamespace::BasicSpectrogramData::__get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioSource;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& GlobalNamespace::BasicSpectrogramData::__get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__set__audioSource(::UnityEngine::AudioSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BasicSpectrogramData::__get__instantChangeThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____instantChangeThreshold;
}
constexpr float_t const& GlobalNamespace::BasicSpectrogramData::__get__instantChangeThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____instantChangeThreshold;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__set__instantChangeThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____instantChangeThreshold = value;
}
constexpr bool& GlobalNamespace::BasicSpectrogramData::__get__hasData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hasData;
}
constexpr bool const& GlobalNamespace::BasicSpectrogramData::__get__hasData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hasData;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__set__hasData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____hasData = value;
}
constexpr bool& GlobalNamespace::BasicSpectrogramData::__get__hasProcessedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hasProcessedData;
}
constexpr bool const& GlobalNamespace::BasicSpectrogramData::__get__hasProcessedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hasProcessedData;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__set__hasProcessedData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____hasProcessedData = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::BasicSpectrogramData::__get__samples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____samples;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::BasicSpectrogramData::__get__samples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____samples;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__set__samples(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____samples)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::BasicSpectrogramData::__get__processedSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____processedSamples;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<float_t>*> const& GlobalNamespace::BasicSpectrogramData::__get__processedSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____processedSamples;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__set__processedSamples(::System::Collections::Generic::List_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____processedSamples)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<float_t, ::Array<float_t>*> GlobalNamespace::BasicSpectrogramData::get_Samples() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "get_Samples",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<float_t>* GlobalNamespace::BasicSpectrogramData::get_ProcessedSamples() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(),
                                                                             "get_ProcessedSamples", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<float_t>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicSpectrogramData::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicSpectrogramData::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicSpectrogramData::ProcessSamples(::ArrayW<float_t, ::Array<float_t>*> sourceSamples, ::System::Collections::Generic::List_1<float_t>* processedSamples) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "ProcessSamples", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceSamples, processedSamples);
}
inline ::GlobalNamespace::BasicSpectrogramData* GlobalNamespace::BasicSpectrogramData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BasicSpectrogramData*>());
}
inline void GlobalNamespace::BasicSpectrogramData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicSpectrogramData::BasicSpectrogramData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
