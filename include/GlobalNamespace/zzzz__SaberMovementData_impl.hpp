#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SaberMovementData_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementDataProcessor_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__IBladeMovementData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.get_bladeSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SaberMovementData::*)()>(&::GlobalNamespace::SaberMovementData::get_bladeSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23238c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "get_bladeSpeed",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.get_lastAddedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BladeMovementDataElement (::GlobalNamespace::SaberMovementData::*)()>(
    &::GlobalNamespace::SaberMovementData::get_lastAddedData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23238cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(),
                                                                               "get_lastAddedData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.get_prevAddedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BladeMovementDataElement (::GlobalNamespace::SaberMovementData::*)()>(
    &::GlobalNamespace::SaberMovementData::get_prevAddedData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2323928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(),
                                                                               "get_prevAddedData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberMovementData::*)()>(&::GlobalNamespace::SaberMovementData::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2323984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.AddDataProcessor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(::GlobalNamespace::ISaberMovementDataProcessor*)>(
    &::GlobalNamespace::SaberMovementData::AddDataProcessor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2323a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "AddDataProcessor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementDataProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.RemoveDataProcessor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(::GlobalNamespace::ISaberMovementDataProcessor*)>(
    &::GlobalNamespace::SaberMovementData::RemoveDataProcessor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2323a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "RemoveDataProcessor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementDataProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.RequestLastDataProcessing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(::GlobalNamespace::ISaberMovementDataProcessor*)>(
    &::GlobalNamespace::SaberMovementData::RequestLastDataProcessing)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2323adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "RequestLastDataProcessing", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementDataProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.AddNewData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::SaberMovementData::AddNewData)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x2323c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "AddNewData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeAdditionalData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ByRef<::UnityEngine::Vector3>, ByRef<float_t>)>(&::GlobalNamespace::SaberMovementData::ComputeAdditionalData)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2324134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "ComputeAdditionalData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputePlaneNormal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SaberMovementData::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SaberMovementData::ComputePlaneNormal)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2324364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "ComputePlaneNormal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeCutPlaneNormal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SaberMovementData::*)()>(
    &::GlobalNamespace::SaberMovementData::ComputeCutPlaneNormal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23244a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(),
                                                                               "ComputeCutPlaneNormal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeSwingRating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SaberMovementData::*)(float_t)>(
    &::GlobalNamespace::SaberMovementData::ComputeSwingRating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2324540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "ComputeSwingRating",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeSwingRating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SaberMovementData::*)()>(&::GlobalNamespace::SaberMovementData::ComputeSwingRating)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x232480c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(),
                                                                               "ComputeSwingRating", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeSwingRating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SaberMovementData::*)(bool, float_t)>(
    &::GlobalNamespace::SaberMovementData::ComputeSwingRating)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2324548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "ComputeSwingRating", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBladeMovementData"
constexpr GlobalNamespace::SaberMovementData::operator ::GlobalNamespace::IBladeMovementData*() noexcept {
  return static_cast<::GlobalNamespace::IBladeMovementData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISaberMovementData"
constexpr GlobalNamespace::SaberMovementData::operator ::GlobalNamespace::ISaberMovementData*() noexcept {
  return static_cast<::GlobalNamespace::ISaberMovementData*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::GlobalNamespace::BladeMovementDataElement, ::Array<::GlobalNamespace::BladeMovementDataElement>*>& GlobalNamespace::SaberMovementData::__get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::ArrayW<::GlobalNamespace::BladeMovementDataElement, ::Array<::GlobalNamespace::BladeMovementDataElement>*> const& GlobalNamespace::SaberMovementData::__get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::SaberMovementData::__set__data(::ArrayW<::GlobalNamespace::BladeMovementDataElement, ::Array<::GlobalNamespace::BladeMovementDataElement>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor*>*& GlobalNamespace::SaberMovementData::__get__dataProcessors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataProcessors;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor*>*> const&
GlobalNamespace::SaberMovementData::__get__dataProcessors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataProcessors;
}
constexpr void GlobalNamespace::SaberMovementData::__set__dataProcessors(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataProcessors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::SaberMovementData::__get__nextAddIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextAddIndex;
}
constexpr int32_t const& GlobalNamespace::SaberMovementData::__get__nextAddIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextAddIndex;
}
constexpr void GlobalNamespace::SaberMovementData::__set__nextAddIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextAddIndex = value;
}
constexpr int32_t& GlobalNamespace::SaberMovementData::__get__validCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validCount;
}
constexpr int32_t const& GlobalNamespace::SaberMovementData::__get__validCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validCount;
}
constexpr void GlobalNamespace::SaberMovementData::__set__validCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validCount = value;
}
constexpr float_t& GlobalNamespace::SaberMovementData::__get__bladeSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bladeSpeed;
}
constexpr float_t const& GlobalNamespace::SaberMovementData::__get__bladeSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bladeSpeed;
}
constexpr void GlobalNamespace::SaberMovementData::__set__bladeSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bladeSpeed = value;
}
inline float_t GlobalNamespace::SaberMovementData::get_bladeSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "get_bladeSpeed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BladeMovementDataElement GlobalNamespace::SaberMovementData::get_lastAddedData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "get_lastAddedData",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BladeMovementDataElement, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BladeMovementDataElement GlobalNamespace::SaberMovementData::get_prevAddedData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "get_prevAddedData",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BladeMovementDataElement, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberMovementData* GlobalNamespace::SaberMovementData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SaberMovementData*>());
}
inline void GlobalNamespace::SaberMovementData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberMovementData::AddDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "AddDataProcessor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementDataProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataProcessor);
}
inline void GlobalNamespace::SaberMovementData::RemoveDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "RemoveDataProcessor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementDataProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataProcessor);
}
inline void GlobalNamespace::SaberMovementData::RequestLastDataProcessing(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "RequestLastDataProcessing", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementDataProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataProcessor);
}
inline void GlobalNamespace::SaberMovementData::AddNewData(::UnityEngine::Vector3 topPos, ::UnityEngine::Vector3 bottomPos, float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "AddNewData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topPos, bottomPos, time);
}
inline void GlobalNamespace::SaberMovementData::ComputeAdditionalData(::UnityEngine::Vector3 topPos, ::UnityEngine::Vector3 bottomPos, int32_t idxOffset, ByRef<::UnityEngine::Vector3> segmentNormal,
                                                                      ByRef<float_t> segmentAngle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "ComputeAdditionalData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topPos, bottomPos, idxOffset, segmentNormal, segmentAngle);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SaberMovementData::ComputePlaneNormal(::UnityEngine::Vector3 tp0, ::UnityEngine::Vector3 bp0, ::UnityEngine::Vector3 tp1, ::UnityEngine::Vector3 bp1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "ComputePlaneNormal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, tp0, bp0, tp1, bp1);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SaberMovementData::ComputeCutPlaneNormal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(),
                                                                             "ComputeCutPlaneNormal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SaberMovementData::ComputeSwingRating(float_t overrideSegmentAngle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "ComputeSwingRating", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, overrideSegmentAngle);
}
inline float_t GlobalNamespace::SaberMovementData::ComputeSwingRating() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "ComputeSwingRating",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SaberMovementData::ComputeSwingRating(bool overrideSegmenAngle, float_t overrideValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData*>::get(), "ComputeSwingRating", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, overrideSegmenAngle, overrideValue);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberMovementData::SaberMovementData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
