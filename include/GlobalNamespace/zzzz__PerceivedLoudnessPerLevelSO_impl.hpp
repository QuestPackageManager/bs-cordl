#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair.get_levelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::*)()>(
    &::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::get_levelId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2364828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>::get(),
                                                 "get_levelId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair.get_perceivedLoudness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::*)()>(
    &::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::get_perceivedLoudness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2364830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>::get(),
                                                 "get_perceivedLoudness", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair.get_checksum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::*)()>(
    &::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::get_checksum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2364838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>::get(),
                                                 "get_checksum", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::*)(
    ::StringW, float_t, ::StringW)>(&::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2364840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::__get__levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr ::StringW const& GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::__get__levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr void GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::__set__levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::__get__perceivedLoudness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudness;
}
constexpr float_t const& GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::__get__perceivedLoudness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudness;
}
constexpr void GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::__set__perceivedLoudness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____perceivedLoudness = value;
}
constexpr ::StringW& GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::__get__checkSum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkSum;
}
constexpr ::StringW const& GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::__get__checkSum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkSum;
}
constexpr void GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::__set__checkSum(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____checkSum)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::get_levelId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>::get(),
                                               "get_levelId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::get_perceivedLoudness() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>::get(),
                                               "get_perceivedLoudness", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::get_checksum() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>::get(),
                                               "get_checksum", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*
GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::New_ctor(::StringW levelId, float_t perceivedLoudness, ::StringW checkSum) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>(levelId, perceivedLoudness, checkSum));
}
inline void GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::_ctor(::StringW levelId, float_t perceivedLoudness, ::StringW checkSum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelId, perceivedLoudness, checkSum);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair() {}
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessPerLevelSO.ToDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>* (::GlobalNamespace::PerceivedLoudnessPerLevelSO::*)()>(
    &::GlobalNamespace::PerceivedLoudnessPerLevelSO::ToDictionary)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x23646c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelSO*>::get(),
                                                                               "ToDictionary", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessPerLevelSO.SetLoudnessData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerceivedLoudnessPerLevelSO::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>*)>(
    &::GlobalNamespace::PerceivedLoudnessPerLevelSO::SetLoudnessData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23647a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelSO*>::get(), "SetLoudnessData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessPerLevelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerceivedLoudnessPerLevelSO::*)()>(&::GlobalNamespace::PerceivedLoudnessPerLevelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2364820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>*>&
GlobalNamespace::PerceivedLoudnessPerLevelSO::__get_perceivedLoudnessPerLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___perceivedLoudnessPerLevel;
}
constexpr ::ArrayW<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>*> const&
GlobalNamespace::PerceivedLoudnessPerLevelSO::__get_perceivedLoudnessPerLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___perceivedLoudnessPerLevel;
}
constexpr void GlobalNamespace::PerceivedLoudnessPerLevelSO::__set_perceivedLoudnessPerLevel(
    ::ArrayW<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*, ::Array<::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___perceivedLoudnessPerLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>*
GlobalNamespace::PerceivedLoudnessPerLevelSO::ToDictionary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelSO*>::get(),
                                                                             "ToDictionary", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>*, false>(
      this, ___internal_method);
}
inline void GlobalNamespace::PerceivedLoudnessPerLevelSO::SetLoudnessData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>* loudnessDictionary) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelSO*>::get(), "SetLoudnessData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PerceivedLoudnessPerLevelSO__PerceivedLevelLoudnessPair*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loudnessDictionary);
}
inline ::GlobalNamespace::PerceivedLoudnessPerLevelSO* GlobalNamespace::PerceivedLoudnessPerLevelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PerceivedLoudnessPerLevelSO*>());
}
inline void GlobalNamespace::PerceivedLoudnessPerLevelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerceivedLoudnessPerLevelSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelSO::PerceivedLoudnessPerLevelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
