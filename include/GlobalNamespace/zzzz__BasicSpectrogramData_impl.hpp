#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicSpectrogramData.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BasicSpectrogramData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.get_Samples
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::GlobalNamespace::BasicSpectrogramData::*)()>(
    &::GlobalNamespace::BasicSpectrogramData::get_Samples)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3b9e774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "get_Samples",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.get_ProcessedSamples
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<float_t>* (::GlobalNamespace::BasicSpectrogramData::*)()>(
    &::GlobalNamespace::BasicSpectrogramData::get_ProcessedSamples)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3b9e80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(),
                                                                               "get_ProcessedSamples", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicSpectrogramData::*)()>(&::GlobalNamespace::BasicSpectrogramData::Awake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3b9e9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicSpectrogramData::*)()>(&::GlobalNamespace::BasicSpectrogramData::LateUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b9ea84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.ProcessSamples
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicSpectrogramData::*)(
    ::ArrayW<float_t, ::Array<float_t>*>, ::System::Collections::Generic::List_1<float_t>*)>(&::GlobalNamespace::BasicSpectrogramData::ProcessSamples)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3b9e848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "ProcessSamples", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicSpectrogramData::*)()>(&::GlobalNamespace::BasicSpectrogramData::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b9ea8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__instantChangeThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantChangeThreshold;
}
constexpr float_t const& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__instantChangeThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantChangeThreshold;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__cordl_internal_set__instantChangeThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instantChangeThreshold = value;
}
constexpr bool& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__hasData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasData;
}
constexpr bool const& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__hasData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasData;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__cordl_internal_set__hasData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasData = value;
}
constexpr bool& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__hasProcessedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasProcessedData;
}
constexpr bool const& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__hasProcessedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasProcessedData;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__cordl_internal_set__hasProcessedData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasProcessedData = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__samples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__samples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__cordl_internal_set__samples(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____samples)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__processedSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processedSamples;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__processedSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processedSamples;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__cordl_internal_set__processedSamples(::System::Collections::Generic::List_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____processedSamples)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<float_t, ::Array<float_t>*> GlobalNamespace::BasicSpectrogramData::get_Samples() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "get_Samples",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<float_t>* GlobalNamespace::BasicSpectrogramData::get_ProcessedSamples() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(),
                                                                             "get_ProcessedSamples", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<float_t>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicSpectrogramData::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicSpectrogramData::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicSpectrogramData::ProcessSamples(::ArrayW<float_t, ::Array<float_t>*> sourceSamples, ::System::Collections::Generic::List_1<float_t>* processedSamples) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), "ProcessSamples", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceSamples, processedSamples);
}
inline void GlobalNamespace::BasicSpectrogramData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicSpectrogramData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicSpectrogramData* GlobalNamespace::BasicSpectrogramData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BasicSpectrogramData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicSpectrogramData::BasicSpectrogramData() {}
