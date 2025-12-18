#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LensFlareCommonSRP.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareCommonSRP_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareCommonSRP_def.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareComponentSRP_def.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareDataElementSRP_def.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareDataSRP_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__UnsafeCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo::*)(
    int32_t, ::UnityEngine::Rendering::LensFlareComponentSRP*)>(&::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65e32f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareComponentSRP*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>& UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo::__cordl_internal_get_comp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comp;
}
constexpr ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> const& UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo::__cordl_internal_get_comp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comp;
}
constexpr void UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo::__cordl_internal_set_comp(::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo::_ctor(int32_t idx, ::UnityEngine::Rendering::LensFlareComponentSRP* cmp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareComponentSRP*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, cmp);
}
inline ::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo* UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo::New_ctor(int32_t idx,
                                                                                                                                              ::UnityEngine::Rendering::LensFlareComponentSRP* cmp) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>(idx, cmp));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo::LensFlareCommonSRP_LensFlareCompInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0::*)()>(
    &::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65e32f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0._AddData_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0::*)(
    ::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*)>(&::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0::_AddData_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65ea430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0*>::get(), "<AddData>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>& UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0::__cordl_internal_get_newData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newData;
}
constexpr ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> const& UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0::__cordl_internal_get_newData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newData;
}
constexpr void UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0::__cordl_internal_set_newData(::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0::_AddData_b__0(::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0*>::get(), "<AddData>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0* UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass50_0::LensFlareCommonSRP___c__DisplayClass50_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0::*)()>(
    &::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65e3544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0._RemoveData_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0::*)(
    ::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*)>(&::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0::_RemoveData_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65ea4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0*>::get(), "<RemoveData>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP>& UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> const& UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0::__cordl_internal_set_data(::UnityW<::UnityEngine::Rendering::LensFlareComponentSRP> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0::_RemoveData_b__0(::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0*>::get(), "<RemoveData>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0* UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass51_0::LensFlareCommonSRP___c__DisplayClass51_0() {}
// Ctor Parameters [CppParam { name: "screenPos", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "globalCos0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "globalSin0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "vScreenRatio", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "element", ty: "::UnityEngine::Rendering::LensFlareDataElementSRP*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "combinedScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "usedAspectRatio", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0::LensFlareCommonSRP___c__DisplayClass74_0(::UnityEngine::Vector2 screenPos, float_t position, float_t globalCos0,
                                                                                                                       float_t globalSin0, ::UnityEngine::Vector2 vScreenRatio,
                                                                                                                       ::UnityEngine::Rendering::LensFlareDataElementSRP* element,
                                                                                                                       float_t combinedScale, float_t usedAspectRatio) noexcept {
  this->screenPos = screenPos;
  this->position = position;
  this->globalCos0 = globalCos0;
  this->globalSin0 = globalSin0;
  this->vScreenRatio = vScreenRatio;
  this->element = element;
  this->combinedScale = combinedScale;
  this->usedAspectRatio = usedAspectRatio;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0::LensFlareCommonSRP___c__DisplayClass74_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareCommonSRP::*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65e290c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.IsOcclusionRTCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::IsOcclusionRTCompatible)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x65e2910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                               "IsOcclusionRTCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.GetOcclusionRTFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)()>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::GetOcclusionRTFormat)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x65e2a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                               "GetOcclusionRTFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::Initialize)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x65e2aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x65e2c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::LensFlareCommonSRP* (*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::get_Instance)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x65e2d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.get_Data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>* (
    ::UnityEngine::Rendering::LensFlareCommonSRP::*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::get_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65e2ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "get_Data",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::LensFlareCommonSRP::*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::IsEmpty)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x65e2f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "IsEmpty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.GetNextAvailableIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::LensFlareCommonSRP::*)()>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::GetNextAvailableIndex)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x65e2fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                               "GetNextAvailableIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.AddData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareCommonSRP::*)(::UnityEngine::Rendering::LensFlareComponentSRP*)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::AddData)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x65e310c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "AddData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareComponentSRP*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.RemoveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareCommonSRP::*)(::UnityEngine::Rendering::LensFlareComponentSRP*)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::RemoveData)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x65e3300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "RemoveData", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareComponentSRP*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationPointLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationPointLight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65e3548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                               "ShapeAttenuationPointLight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationDirLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationDirLight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65e3550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationDirLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationSpotConeLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationSpotConeLight)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x65e3570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationSpotConeLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationSpotBoxLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationSpotBoxLight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x65e3624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationSpotBoxLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationSpotPyramidLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationSpotPyramidLight)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x65e3654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationSpotPyramidLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationAreaTubeLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationAreaTubeLight)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x65e3700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationAreaTubeLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuateForwardLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuateForwardLight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65e3c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuateForwardLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationAreaRectangleLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationAreaRectangleLight)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65e3c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationAreaRectangleLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ShapeAttenuationAreaDiscLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationAreaDiscLight)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65e3ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationAreaDiscLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.IsLensFlareSRPHidden
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::LensFlareComponentSRP*, ::UnityEngine::Rendering::LensFlareDataSRP*)>(&::UnityEngine::Rendering::LensFlareCommonSRP::IsLensFlareSRPHidden)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x65e3d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "IsLensFlareSRPHidden", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareDataSRP*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.GetFlareData0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, float_t, float_t, ::UnityEngine::Vector2, bool)>(
        &::UnityEngine::Rendering::LensFlareCommonSRP::GetFlareData0)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x65e3ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "GetFlareData0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.GetLensFlareRayOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t, float_t, float_t, ::UnityEngine::Vector2)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::GetLensFlareRayOffset)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65e40c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "GetLensFlareRayOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.WorldToViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Camera*, bool, bool, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::WorldToViewport)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x65e40f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "WorldToViewport", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.WorldToViewportLocal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(bool, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::WorldToViewportLocal)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65e424c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "WorldToViewportLocal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.WorldToViewportDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Camera*, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::WorldToViewportDistance)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x65e42c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "WorldToViewportDistance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.IsCloudLayerOpacityNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::LensFlareCommonSRP::IsCloudLayerOpacityNeeded)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x65e4388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "IsCloudLayerOpacityNeeded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.SetOcclusionPermutation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, bool, int32_t, ::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::SetOcclusionPermutation)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x65e45d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "SetOcclusionPermutation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ComputeOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Camera*, ::UnityEngine::Experimental::Rendering::XRPass*, int32_t, float_t, float_t, bool, float_t, float_t, bool,
                         ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::UnsafeCommandBuffer*, bool, bool, ::UnityEngine::Texture*, ::UnityEngine::Texture*, int32_t,
                         int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::LensFlareCommonSRP::ComputeOcclusion)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x65e46f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ComputeOcclusion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 28>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ComputeOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Camera*, ::UnityEngine::Experimental::Rendering::XRPass*, int32_t, float_t, float_t, bool, float_t, float_t, bool,
                         ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::UnsafeCommandBuffer*, bool, bool, ::UnityEngine::Texture*, ::UnityEngine::Texture*)>(
        &::UnityEngine::Rendering::LensFlareCommonSRP::ComputeOcclusion)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x65e498c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ComputeOcclusion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 17>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ComputeOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Camera*, ::UnityEngine::Experimental::Rendering::XRPass*, int32_t, float_t, float_t, bool, float_t, float_t, bool,
                         ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::CommandBuffer*, bool, bool, ::UnityEngine::Texture*, ::UnityEngine::Texture*, int32_t, int32_t,
                         int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::LensFlareCommonSRP::ComputeOcclusion)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x65e4850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ComputeOcclusion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 28>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ForceSingleElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::LensFlareDataElementSRP*)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ForceSingleElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x65e5ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ForceSingleElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareDataElementSRP*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ComputeOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Camera*, ::UnityEngine::Experimental::Rendering::XRPass*, int32_t, float_t, float_t, bool, float_t, float_t, bool,
                         ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::CommandBuffer*, bool, bool, ::UnityEngine::Texture*, ::UnityEngine::Texture*)>(
        &::UnityEngine::Rendering::LensFlareCommonSRP::ComputeOcclusion)> {
  constexpr static std::size_t size = 0xfec;
  constexpr static std::size_t addrs = 0x65e4ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ComputeOcclusion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 17>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ProcessLensFlareSRPElementsSingle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::LensFlareDataElementSRP*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Color, ::UnityEngine::Light*, float_t, float_t, ::UnityEngine::Material*,
    ::UnityEngine::Vector2, bool, ::UnityEngine::Vector2, ::UnityEngine::Vector4, bool, int32_t)>(&::UnityEngine::Rendering::LensFlareCommonSRP::ProcessLensFlareSRPElementsSingle)> {
  constexpr static std::size_t size = 0x1720;
  constexpr static std::size_t addrs = 0x65e5d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ProcessLensFlareSRPElementsSingle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 13>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareDataElementSRP*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.ProcessLensFlareSRPElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ByRef<::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*, ::Array<::UnityEngine::Rendering::LensFlareDataElementSRP*>*>>, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Color,
    ::UnityEngine::Light*, float_t, float_t, ::UnityEngine::Material*, ::UnityEngine::Vector2, bool, ::UnityEngine::Vector2, ::UnityEngine::Vector4, bool, int32_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::ProcessLensFlareSRPElements)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x65e7464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ProcessLensFlareSRPElements", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 13>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*, ::Array<::UnityEngine::Rendering::LensFlareDataElementSRP*>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.DoLensFlareDataDrivenCommon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Material*, ::UnityEngine::Camera*, ::UnityEngine::Rect, ::UnityEngine::Experimental::Rendering::XRPass*, int32_t, float_t, float_t, bool, float_t, float_t, bool,
    ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::UnsafeCommandBuffer*, bool, bool, ::UnityEngine::Texture*, ::UnityEngine::Texture*,
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, int32_t, int32_t, int32_t,
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, bool)>(&::UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareDataDrivenCommon)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x65e7830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareDataDrivenCommon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 33>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.DoLensFlareDataDrivenCommon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Camera*, ::UnityEngine::Rect, ::UnityEngine::Experimental::Rendering::XRPass*, int32_t, float_t, float_t, bool, float_t, float_t,
                         bool, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::UnsafeCommandBuffer*, bool, bool, ::UnityEngine::Texture*, ::UnityEngine::Texture*,
                         ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, bool)>(
        &::UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareDataDrivenCommon)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x65e79e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareDataDrivenCommon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 21>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.DoLensFlareDataDrivenCommon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Material*, ::UnityEngine::Camera*, ::UnityEngine::Rect, ::UnityEngine::Experimental::Rendering::XRPass*, int32_t, float_t, float_t, bool, float_t, float_t, bool,
    ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::CommandBuffer*, bool, bool, ::UnityEngine::Texture*, ::UnityEngine::Texture*,
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, int32_t, int32_t, int32_t,
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, bool)>(&::UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareDataDrivenCommon)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x65e8b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareDataDrivenCommon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 33>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.DoLensFlareDataDrivenCommon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Camera*, ::UnityEngine::Rect, ::UnityEngine::Experimental::Rendering::XRPass*, int32_t, float_t, float_t, bool, float_t, float_t,
                         bool, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::CommandBuffer*, bool, bool, ::UnityEngine::Texture*, ::UnityEngine::Texture*,
                         ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, bool)>(
        &::UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareDataDrivenCommon)> {
  constexpr static std::size_t size = 0xfbc;
  constexpr static std::size_t addrs = 0x65e7bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareDataDrivenCommon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 21>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.DoLensFlareScreenSpaceCommon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Camera*, float_t, float_t, ::UnityEngine::Color, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Texture*,
                         ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4,
                         ::UnityEngine::Rendering::UnsafeCommandBuffer*, ::UnityEngine::Rendering::RTHandle*, bool)>(&::UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareScreenSpaceCommon)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x65e8d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareScreenSpaceCommon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 18>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.DoLensFlareScreenSpaceCommon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Material*, ::UnityEngine::Camera*, float_t, float_t, ::UnityEngine::Color, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Texture*,
    ::UnityEngine::Texture*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Rendering::CommandBuffer*,
    ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, bool)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareScreenSpaceCommon)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x65e9908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareScreenSpaceCommon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 29>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.DoLensFlareScreenSpaceCommon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Camera*, float_t, float_t, ::UnityEngine::Color, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Texture*,
                         ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4,
                         ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, bool)>(&::UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareScreenSpaceCommon)> {
  constexpr static std::size_t size = 0x990;
  constexpr static std::size_t addrs = 0x65e8f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareScreenSpaceCommon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 18>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.DoPaniniProjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t, float_t, float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::DoPaniniProjection)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x65e5b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoPaniniProjection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.CalcViewExtents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::CalcViewExtents)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x65e9b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "CalcViewExtents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.CalcCropExtents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(float_t, float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::CalcCropExtents)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x65e9bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "CalcCropExtents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP.Panini_Generic_Inv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::Panini_Generic_Inv)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65e9c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                               "Panini_Generic_Inv", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP._ShapeAttenuationAreaTubeLight_g__Fpo_57_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::_ShapeAttenuationAreaTubeLight_g__Fpo_57_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x65ea3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<ShapeAttenuationAreaTubeLight>g__Fpo|57_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP._ShapeAttenuationAreaTubeLight_g__Fwt_57_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::_ShapeAttenuationAreaTubeLight_g__Fwt_57_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65ea418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<ShapeAttenuationAreaTubeLight>g__Fwt|57_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP._ShapeAttenuationAreaTubeLight_g__DiffLineIntegral_57_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::_ShapeAttenuationAreaTubeLight_g__DiffLineIntegral_57_2)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x65e3934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                 "<ShapeAttenuationAreaTubeLight>g__DiffLineIntegral|57_2", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP._ProcessLensFlareSRPElementsSingle_g__ComputeLocalSize_74_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::AnimationCurve*, ::ByRef<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0>)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::_ProcessLensFlareSRPElementsSingle_g__ComputeLocalSize_74_0)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x65e763c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<ProcessLensFlareSRPElementsSingle>g__ComputeLocalSize|74_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareCommonSRP._ProcessLensFlareSRPElementsSingle_g__RandomRange_74_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(
    &::UnityEngine::Rendering::LensFlareCommonSRP::_ProcessLensFlareSRPElementsSingle_g__RandomRange_74_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x65e77f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<ProcessLensFlareSRPElementsSingle>g__RandomRange|74_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_m_Instance(::UnityEngine::Rendering::LensFlareCommonSRP* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::LensFlareCommonSRP*, "m_Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<::UnityEngine::Rendering::LensFlareCommonSRP*>(value));
}
inline ::UnityEngine::Rendering::LensFlareCommonSRP* UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_m_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LensFlareCommonSRP*, "m_Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_m_Padlock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "m_Padlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_m_Padlock() {
  return ::cordl_internals::getStaticField<::System::Object*, "m_Padlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_m_Data(::System::Collections::Generic::List_1<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>*, "m_Data",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>* UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_m_Data() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>*, "m_Data",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_m_AvailableIndicies(::System::Collections::Generic::List_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "m_AvailableIndicies",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_m_AvailableIndicies() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "m_AvailableIndicies",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_maxLensFlareWithOcclusion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "maxLensFlareWithOcclusion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_maxLensFlareWithOcclusion() {
  return ::cordl_internals::getStaticField<int32_t, "maxLensFlareWithOcclusion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_maxLensFlareWithOcclusionTemporalSample(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "maxLensFlareWithOcclusionTemporalSample", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_maxLensFlareWithOcclusionTemporalSample() {
  return ::cordl_internals::getStaticField<int32_t, "maxLensFlareWithOcclusionTemporalSample",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_mergeNeeded(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "mergeNeeded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_mergeNeeded() {
  return ::cordl_internals::getStaticField<int32_t, "mergeNeeded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_occlusionRT(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "occlusionRT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_occlusionRT() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "occlusionRT",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_frameIdx(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "frameIdx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_frameIdx() {
  return ::cordl_internals::getStaticField<int32_t, "frameIdx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareOcclusionPermutation(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareOcclusionPermutation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareOcclusionPermutation() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareOcclusionPermutation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareOcclusionRemapTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareOcclusionRemapTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareOcclusionRemapTex() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareOcclusionRemapTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareOcclusionTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareOcclusionTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareOcclusionTex() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareOcclusionTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareOcclusionIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareOcclusionIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareOcclusionIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareOcclusionIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareCloudOpacity(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareCloudOpacity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareCloudOpacity() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareCloudOpacity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareSunOcclusionTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareSunOcclusionTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareSunOcclusionTex() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareSunOcclusionTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareTex() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareColorValue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareColorValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareColorValue() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareColorValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareData0(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareData0() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareData1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareData1() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareData2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareData2() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareData3(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareData3() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareData4(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareData4() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareData5(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareData5() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__FlareRadialTint(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareRadialTint", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__FlareRadialTint() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareRadialTint", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__ViewId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ViewId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__ViewId() {
  return ::cordl_internals::getStaticField<int32_t, "_ViewId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__LensFlareScreenSpaceBloomMipTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensFlareScreenSpaceBloomMipTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__LensFlareScreenSpaceBloomMipTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_LensFlareScreenSpaceBloomMipTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__LensFlareScreenSpaceResultTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensFlareScreenSpaceResultTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__LensFlareScreenSpaceResultTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_LensFlareScreenSpaceResultTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__LensFlareScreenSpaceSpectralLut(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensFlareScreenSpaceSpectralLut", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__LensFlareScreenSpaceSpectralLut() {
  return ::cordl_internals::getStaticField<int32_t, "_LensFlareScreenSpaceSpectralLut", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__LensFlareScreenSpaceStreakTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensFlareScreenSpaceStreakTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__LensFlareScreenSpaceStreakTex() {
  return ::cordl_internals::getStaticField<int32_t, "_LensFlareScreenSpaceStreakTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__LensFlareScreenSpaceMipLevel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensFlareScreenSpaceMipLevel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__LensFlareScreenSpaceMipLevel() {
  return ::cordl_internals::getStaticField<int32_t, "_LensFlareScreenSpaceMipLevel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__LensFlareScreenSpaceTintColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensFlareScreenSpaceTintColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__LensFlareScreenSpaceTintColor() {
  return ::cordl_internals::getStaticField<int32_t, "_LensFlareScreenSpaceTintColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__LensFlareScreenSpaceParams1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensFlareScreenSpaceParams1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__LensFlareScreenSpaceParams1() {
  return ::cordl_internals::getStaticField<int32_t, "_LensFlareScreenSpaceParams1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__LensFlareScreenSpaceParams2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensFlareScreenSpaceParams2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__LensFlareScreenSpaceParams2() {
  return ::cordl_internals::getStaticField<int32_t, "_LensFlareScreenSpaceParams2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__LensFlareScreenSpaceParams3(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensFlareScreenSpaceParams3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__LensFlareScreenSpaceParams3() {
  return ::cordl_internals::getStaticField<int32_t, "_LensFlareScreenSpaceParams3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__LensFlareScreenSpaceParams4(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensFlareScreenSpaceParams4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__LensFlareScreenSpaceParams4() {
  return ::cordl_internals::getStaticField<int32_t, "_LensFlareScreenSpaceParams4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF__LensFlareScreenSpaceParams5(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensFlareScreenSpaceParams5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::getStaticF__LensFlareScreenSpaceParams5() {
  return ::cordl_internals::getStaticField<int32_t, "_LensFlareScreenSpaceParams5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_s_SupportsLensFlare16bitsFormat(bool value) {
  ::cordl_internals::setStaticField<bool, "s_SupportsLensFlare16bitsFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_s_SupportsLensFlare16bitsFormat() {
  return ::cordl_internals::getStaticField<bool, "s_SupportsLensFlare16bitsFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::setStaticF_s_SupportsLensFlare32bitsFormat(bool value) {
  ::cordl_internals::setStaticField<bool, "s_SupportsLensFlare32bitsFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::LensFlareCommonSRP::getStaticF_s_SupportsLensFlare32bitsFormat() {
  return ::cordl_internals::getStaticField<bool, "s_SupportsLensFlare32bitsFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get>();
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::LensFlareCommonSRP::IsOcclusionRTCompatible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                             "IsOcclusionRTCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::LensFlareCommonSRP::GetOcclusionRTFormat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                             "GetOcclusionRTFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::LensFlareCommonSRP* UnityEngine::Rendering::LensFlareCommonSRP::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LensFlareCommonSRP*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>* UnityEngine::Rendering::LensFlareCommonSRP::get_Data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "get_Data",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareCompInfo*>*, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::LensFlareCommonSRP::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "IsEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::LensFlareCommonSRP::GetNextAvailableIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                             "GetNextAvailableIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::AddData(::UnityEngine::Rendering::LensFlareComponentSRP* newData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "AddData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareComponentSRP*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newData);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::RemoveData(::UnityEngine::Rendering::LensFlareComponentSRP* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "RemoveData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareComponentSRP*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationPointLight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                             "ShapeAttenuationPointLight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationDirLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationDirLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, forward, wo);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationSpotConeLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo, float_t spotAngle, float_t innerSpotPercent01) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationSpotConeLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, forward, wo, spotAngle, innerSpotPercent01);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationSpotBoxLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationSpotBoxLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, forward, wo);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationSpotPyramidLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationSpotPyramidLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, forward, wo);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationAreaTubeLight(::UnityEngine::Vector3 lightPositionWS, ::UnityEngine::Vector3 lightSide, float_t lightWidth,
                                                                                         ::UnityEngine::Camera* cam) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationAreaTubeLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, lightPositionWS, lightSide, lightWidth, cam);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuateForwardLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuateForwardLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, forward, wo);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationAreaRectangleLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationAreaRectangleLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, forward, wo);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::ShapeAttenuationAreaDiscLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ShapeAttenuationAreaDiscLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, forward, wo);
}
inline bool UnityEngine::Rendering::LensFlareCommonSRP::IsLensFlareSRPHidden(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::LensFlareComponentSRP* comp,
                                                                             ::UnityEngine::Rendering::LensFlareDataSRP* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "IsLensFlareSRPHidden", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareDataSRP*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cam, comp, data);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::LensFlareCommonSRP::GetFlareData0(::UnityEngine::Vector2 screenPos, ::UnityEngine::Vector2 translationScale, ::UnityEngine::Vector2 rayOff0,
                                                                                        ::UnityEngine::Vector2 vLocalScreenRatio, float_t angleDeg, float_t position, float_t angularOffset,
                                                                                        ::UnityEngine::Vector2 positionOffset, bool autoRotate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "GetFlareData0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, screenPos, translationScale, rayOff0, vLocalScreenRatio, angleDeg, position, angularOffset,
                                                                            positionOffset, autoRotate);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::LensFlareCommonSRP::GetLensFlareRayOffset(::UnityEngine::Vector2 screenPos, float_t position, float_t globalCos0, float_t globalSin0,
                                                                                                ::UnityEngine::Vector2 vAspectRatio) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "GetLensFlareRayOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, screenPos, position, globalCos0, globalSin0, vAspectRatio);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::LensFlareCommonSRP::WorldToViewport(::UnityEngine::Camera* camera, bool isLocalLight, bool isCameraRelative,
                                                                                          ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Vector3 positionWS) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "WorldToViewport", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, camera, isLocalLight, isCameraRelative, viewProjMatrix, positionWS);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::LensFlareCommonSRP::WorldToViewportLocal(bool isCameraRelative, ::UnityEngine::Matrix4x4 viewProjMatrix, ::UnityEngine::Vector3 cameraPosWS,
                                                                                               ::UnityEngine::Vector3 positionWS) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "WorldToViewportLocal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, isCameraRelative, viewProjMatrix, cameraPosWS, positionWS);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::LensFlareCommonSRP::WorldToViewportDistance(::UnityEngine::Camera* cam, ::UnityEngine::Vector3 positionWS) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "WorldToViewportDistance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, cam, positionWS);
}
inline bool UnityEngine::Rendering::LensFlareCommonSRP::IsCloudLayerOpacityNeeded(::UnityEngine::Camera* cam) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "IsCloudLayerOpacityNeeded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cam);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::SetOcclusionPermutation(::UnityEngine::Rendering::CommandBuffer* cmd, bool useFogOpacityOcclusion, int32_t _FlareSunOcclusionTex,
                                                                                ::UnityEngine::Texture* sunOcclusionTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "SetOcclusionPermutation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, useFogOpacityOcclusion, _FlareSunOcclusionTex, sunOcclusionTexture);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::ComputeOcclusion(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Experimental::Rendering::XRPass* xr,
                                                                         int32_t xrIndex, float_t actualWidth, float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit,
                                                                         bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS, ::UnityEngine::Matrix4x4 viewProjMatrix,
                                                                         ::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, bool taaEnabled, bool hasCloudLayer,
                                                                         ::UnityEngine::Texture* cloudOpacityTexture, ::UnityEngine::Texture* sunOcclusionTexture, int32_t _FlareOcclusionTex,
                                                                         int32_t _FlareCloudOpacity, int32_t _FlareOcclusionIndex, int32_t _FlareTex, int32_t _FlareColorValue,
                                                                         int32_t _FlareSunOcclusionTex, int32_t _FlareData0, int32_t _FlareData1, int32_t _FlareData2, int32_t _FlareData3,
                                                                         int32_t _FlareData4) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ComputeOcclusion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 28>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lensFlareShader, cam, xr, xrIndex, actualWidth, actualHeight, usePanini, paniniDistance, paniniCropToFit,
                                                          isCameraRelative, cameraPositionWS, viewProjMatrix, cmd, taaEnabled, hasCloudLayer, cloudOpacityTexture, sunOcclusionTexture,
                                                          _FlareOcclusionTex, _FlareCloudOpacity, _FlareOcclusionIndex, _FlareTex, _FlareColorValue, _FlareSunOcclusionTex, _FlareData0, _FlareData1,
                                                          _FlareData2, _FlareData3, _FlareData4);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::ComputeOcclusion(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Experimental::Rendering::XRPass* xr,
                                                                         int32_t xrIndex, float_t actualWidth, float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit,
                                                                         bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS, ::UnityEngine::Matrix4x4 viewProjMatrix,
                                                                         ::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, bool taaEnabled, bool hasCloudLayer,
                                                                         ::UnityEngine::Texture* cloudOpacityTexture, ::UnityEngine::Texture* sunOcclusionTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ComputeOcclusion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 17>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lensFlareShader, cam, xr, xrIndex, actualWidth, actualHeight, usePanini, paniniDistance, paniniCropToFit,
                                                          isCameraRelative, cameraPositionWS, viewProjMatrix, cmd, taaEnabled, hasCloudLayer, cloudOpacityTexture, sunOcclusionTexture);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::ComputeOcclusion(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Experimental::Rendering::XRPass* xr,
                                                                         int32_t xrIndex, float_t actualWidth, float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit,
                                                                         bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS, ::UnityEngine::Matrix4x4 viewProjMatrix,
                                                                         ::UnityEngine::Rendering::CommandBuffer* cmd, bool taaEnabled, bool hasCloudLayer, ::UnityEngine::Texture* cloudOpacityTexture,
                                                                         ::UnityEngine::Texture* sunOcclusionTexture, int32_t _FlareOcclusionTex, int32_t _FlareCloudOpacity,
                                                                         int32_t _FlareOcclusionIndex, int32_t _FlareTex, int32_t _FlareColorValue, int32_t _FlareSunOcclusionTex, int32_t _FlareData0,
                                                                         int32_t _FlareData1, int32_t _FlareData2, int32_t _FlareData3, int32_t _FlareData4) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ComputeOcclusion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 28>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lensFlareShader, cam, xr, xrIndex, actualWidth, actualHeight, usePanini, paniniDistance, paniniCropToFit,
                                                          isCameraRelative, cameraPositionWS, viewProjMatrix, cmd, taaEnabled, hasCloudLayer, cloudOpacityTexture, sunOcclusionTexture,
                                                          _FlareOcclusionTex, _FlareCloudOpacity, _FlareOcclusionIndex, _FlareTex, _FlareColorValue, _FlareSunOcclusionTex, _FlareData0, _FlareData1,
                                                          _FlareData2, _FlareData3, _FlareData4);
}
inline bool UnityEngine::Rendering::LensFlareCommonSRP::ForceSingleElement(::UnityEngine::Rendering::LensFlareDataElementSRP* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ForceSingleElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareDataElementSRP*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, element);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::ComputeOcclusion(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Experimental::Rendering::XRPass* xr,
                                                                         int32_t xrIndex, float_t actualWidth, float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit,
                                                                         bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS, ::UnityEngine::Matrix4x4 viewProjMatrix,
                                                                         ::UnityEngine::Rendering::CommandBuffer* cmd, bool taaEnabled, bool hasCloudLayer, ::UnityEngine::Texture* cloudOpacityTexture,
                                                                         ::UnityEngine::Texture* sunOcclusionTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ComputeOcclusion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 17>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lensFlareShader, cam, xr, xrIndex, actualWidth, actualHeight, usePanini, paniniDistance, paniniCropToFit,
                                                          isCameraRelative, cameraPositionWS, viewProjMatrix, cmd, taaEnabled, hasCloudLayer, cloudOpacityTexture, sunOcclusionTexture);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::ProcessLensFlareSRPElementsSingle(::UnityEngine::Rendering::LensFlareDataElementSRP* element, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                          ::UnityEngine::Color globalColorModulation, ::UnityEngine::Light* light, float_t compIntensity, float_t scale,
                                                                                          ::UnityEngine::Material* lensFlareShader, ::UnityEngine::Vector2 screenPos, bool compAllowOffScreen,
                                                                                          ::UnityEngine::Vector2 vScreenRatio, ::UnityEngine::Vector4 flareData1, bool preview, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ProcessLensFlareSRPElementsSingle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 13>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareDataElementSRP*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, element, cmd, globalColorModulation, light, compIntensity, scale, lensFlareShader, screenPos, compAllowOffScreen,
                                                          vScreenRatio, flareData1, preview, depth);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::ProcessLensFlareSRPElements(
    ::ByRef<::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*, ::Array<::UnityEngine::Rendering::LensFlareDataElementSRP*>*>> elements, ::UnityEngine::Rendering::CommandBuffer* cmd,
    ::UnityEngine::Color globalColorModulation, ::UnityEngine::Light* light, float_t compIntensity, float_t scale, ::UnityEngine::Material* lensFlareShader, ::UnityEngine::Vector2 screenPos,
    bool compAllowOffScreen, ::UnityEngine::Vector2 vScreenRatio, ::UnityEngine::Vector4 flareData1, bool preview, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "ProcessLensFlareSRPElements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 13>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*, ::Array<::UnityEngine::Rendering::LensFlareDataElementSRP*>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, elements, cmd, globalColorModulation, light, compIntensity, scale, lensFlareShader, screenPos,
                                                          compAllowOffScreen, vScreenRatio, flareData1, preview, depth);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareDataDrivenCommon(
    ::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Rect viewport, ::UnityEngine::Experimental::Rendering::XRPass* xr, int32_t xrIndex, float_t actualWidth,
    float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS, ::UnityEngine::Matrix4x4 viewProjMatrix,
    ::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, bool taaEnabled, bool hasCloudLayer, ::UnityEngine::Texture* cloudOpacityTexture, ::UnityEngine::Texture* sunOcclusionTexture,
    ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
    ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* GetLensFlareLightAttenuation, int32_t _FlareOcclusionRemapTex,
    int32_t _FlareOcclusionTex, int32_t _FlareOcclusionIndex, int32_t _FlareCloudOpacity, int32_t _FlareSunOcclusionTex, int32_t _FlareTex, int32_t _FlareColorValue, int32_t _FlareData0,
    int32_t _FlareData1, int32_t _FlareData2, int32_t _FlareData3, int32_t _FlareData4, bool debugView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareDataDrivenCommon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 33>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lensFlareShader, cam, viewport, xr, xrIndex, actualWidth, actualHeight, usePanini, paniniDistance,
                                                          paniniCropToFit, isCameraRelative, cameraPositionWS, viewProjMatrix, cmd, taaEnabled, hasCloudLayer, cloudOpacityTexture, sunOcclusionTexture,
                                                          colorBuffer, GetLensFlareLightAttenuation, _FlareOcclusionRemapTex, _FlareOcclusionTex, _FlareOcclusionIndex, _FlareCloudOpacity,
                                                          _FlareSunOcclusionTex, _FlareTex, _FlareColorValue, _FlareData0, _FlareData1, _FlareData2, _FlareData3, _FlareData4, debugView);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareDataDrivenCommon(
    ::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Rect viewport, ::UnityEngine::Experimental::Rendering::XRPass* xr, int32_t xrIndex, float_t actualWidth,
    float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS, ::UnityEngine::Matrix4x4 viewProjMatrix,
    ::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, bool taaEnabled, bool hasCloudLayer, ::UnityEngine::Texture* cloudOpacityTexture, ::UnityEngine::Texture* sunOcclusionTexture,
    ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
    ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* GetLensFlareLightAttenuation, bool debugView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareDataDrivenCommon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 21>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lensFlareShader, cam, viewport, xr, xrIndex, actualWidth, actualHeight, usePanini, paniniDistance,
                                                          paniniCropToFit, isCameraRelative, cameraPositionWS, viewProjMatrix, cmd, taaEnabled, hasCloudLayer, cloudOpacityTexture, sunOcclusionTexture,
                                                          colorBuffer, GetLensFlareLightAttenuation, debugView);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareDataDrivenCommon(
    ::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Rect viewport, ::UnityEngine::Experimental::Rendering::XRPass* xr, int32_t xrIndex, float_t actualWidth,
    float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS, ::UnityEngine::Matrix4x4 viewProjMatrix,
    ::UnityEngine::Rendering::CommandBuffer* cmd, bool taaEnabled, bool hasCloudLayer, ::UnityEngine::Texture* cloudOpacityTexture, ::UnityEngine::Texture* sunOcclusionTexture,
    ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
    ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* GetLensFlareLightAttenuation, int32_t _FlareOcclusionRemapTex,
    int32_t _FlareOcclusionTex, int32_t _FlareOcclusionIndex, int32_t _FlareCloudOpacity, int32_t _FlareSunOcclusionTex, int32_t _FlareTex, int32_t _FlareColorValue, int32_t _FlareData0,
    int32_t _FlareData1, int32_t _FlareData2, int32_t _FlareData3, int32_t _FlareData4, bool debugView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareDataDrivenCommon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 33>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lensFlareShader, cam, viewport, xr, xrIndex, actualWidth, actualHeight, usePanini, paniniDistance,
                                                          paniniCropToFit, isCameraRelative, cameraPositionWS, viewProjMatrix, cmd, taaEnabled, hasCloudLayer, cloudOpacityTexture, sunOcclusionTexture,
                                                          colorBuffer, GetLensFlareLightAttenuation, _FlareOcclusionRemapTex, _FlareOcclusionTex, _FlareOcclusionIndex, _FlareCloudOpacity,
                                                          _FlareSunOcclusionTex, _FlareTex, _FlareColorValue, _FlareData0, _FlareData1, _FlareData2, _FlareData3, _FlareData4, debugView);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareDataDrivenCommon(
    ::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, ::UnityEngine::Rect viewport, ::UnityEngine::Experimental::Rendering::XRPass* xr, int32_t xrIndex, float_t actualWidth,
    float_t actualHeight, bool usePanini, float_t paniniDistance, float_t paniniCropToFit, bool isCameraRelative, ::UnityEngine::Vector3 cameraPositionWS, ::UnityEngine::Matrix4x4 viewProjMatrix,
    ::UnityEngine::Rendering::CommandBuffer* cmd, bool taaEnabled, bool hasCloudLayer, ::UnityEngine::Texture* cloudOpacityTexture, ::UnityEngine::Texture* sunOcclusionTexture,
    ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
    ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* GetLensFlareLightAttenuation, bool debugView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareDataDrivenCommon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 21>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lensFlareShader, cam, viewport, xr, xrIndex, actualWidth, actualHeight, usePanini, paniniDistance,
                                                          paniniCropToFit, isCameraRelative, cameraPositionWS, viewProjMatrix, cmd, taaEnabled, hasCloudLayer, cloudOpacityTexture, sunOcclusionTexture,
                                                          colorBuffer, GetLensFlareLightAttenuation, debugView);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareScreenSpaceCommon(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, float_t actualWidth, float_t actualHeight,
                                                                                     ::UnityEngine::Color tintColor, ::UnityEngine::Texture* originalBloomTexture,
                                                                                     ::UnityEngine::Texture* bloomMipTexture, ::UnityEngine::Texture* spectralLut,
                                                                                     ::UnityEngine::Texture* streakTextureTmp, ::UnityEngine::Texture* streakTextureTmp2,
                                                                                     ::UnityEngine::Vector4 parameters1, ::UnityEngine::Vector4 parameters2, ::UnityEngine::Vector4 parameters3,
                                                                                     ::UnityEngine::Vector4 parameters4, ::UnityEngine::Vector4 parameters5,
                                                                                     ::UnityEngine::Rendering::UnsafeCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* result, bool debugView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareScreenSpaceCommon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 18>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UnsafeCommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lensFlareShader, cam, actualWidth, actualHeight, tintColor, originalBloomTexture, bloomMipTexture, spectralLut,
                                                          streakTextureTmp, streakTextureTmp2, parameters1, parameters2, parameters3, parameters4, parameters5, cmd, result, debugView);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareScreenSpaceCommon(
    ::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, float_t actualWidth, float_t actualHeight, ::UnityEngine::Color tintColor, ::UnityEngine::Texture* originalBloomTexture,
    ::UnityEngine::Texture* bloomMipTexture, ::UnityEngine::Texture* spectralLut, ::UnityEngine::Texture* streakTextureTmp, ::UnityEngine::Texture* streakTextureTmp2,
    ::UnityEngine::Vector4 parameters1, ::UnityEngine::Vector4 parameters2, ::UnityEngine::Vector4 parameters3, ::UnityEngine::Vector4 parameters4, ::UnityEngine::Vector4 parameters5,
    ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* result, int32_t _LensFlareScreenSpaceBloomMipTexture, int32_t _LensFlareScreenSpaceResultTexture,
    int32_t _LensFlareScreenSpaceSpectralLut, int32_t _LensFlareScreenSpaceStreakTex, int32_t _LensFlareScreenSpaceMipLevel, int32_t _LensFlareScreenSpaceTintColor,
    int32_t _LensFlareScreenSpaceParams1, int32_t _LensFlareScreenSpaceParams2, int32_t _LensFlareScreenSpaceParams3, int32_t _LensFlareScreenSpaceParams4, int32_t _LensFlareScreenSpaceParams5,
    bool debugView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareScreenSpaceCommon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 29>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lensFlareShader, cam, actualWidth, actualHeight, tintColor, originalBloomTexture, bloomMipTexture, spectralLut,
                                                          streakTextureTmp, streakTextureTmp2, parameters1, parameters2, parameters3, parameters4, parameters5, cmd, result,
                                                          _LensFlareScreenSpaceBloomMipTexture, _LensFlareScreenSpaceResultTexture, _LensFlareScreenSpaceSpectralLut, _LensFlareScreenSpaceStreakTex,
                                                          _LensFlareScreenSpaceMipLevel, _LensFlareScreenSpaceTintColor, _LensFlareScreenSpaceParams1, _LensFlareScreenSpaceParams2,
                                                          _LensFlareScreenSpaceParams3, _LensFlareScreenSpaceParams4, _LensFlareScreenSpaceParams5, debugView);
}
inline void UnityEngine::Rendering::LensFlareCommonSRP::DoLensFlareScreenSpaceCommon(::UnityEngine::Material* lensFlareShader, ::UnityEngine::Camera* cam, float_t actualWidth, float_t actualHeight,
                                                                                     ::UnityEngine::Color tintColor, ::UnityEngine::Texture* originalBloomTexture,
                                                                                     ::UnityEngine::Texture* bloomMipTexture, ::UnityEngine::Texture* spectralLut,
                                                                                     ::UnityEngine::Texture* streakTextureTmp, ::UnityEngine::Texture* streakTextureTmp2,
                                                                                     ::UnityEngine::Vector4 parameters1, ::UnityEngine::Vector4 parameters2, ::UnityEngine::Vector4 parameters3,
                                                                                     ::UnityEngine::Vector4 parameters4, ::UnityEngine::Vector4 parameters5,
                                                                                     ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* result, bool debugView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoLensFlareScreenSpaceCommon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 18>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lensFlareShader, cam, actualWidth, actualHeight, tintColor, originalBloomTexture, bloomMipTexture, spectralLut,
                                                          streakTextureTmp, streakTextureTmp2, parameters1, parameters2, parameters3, parameters4, parameters5, cmd, result, debugView);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::LensFlareCommonSRP::DoPaniniProjection(::UnityEngine::Vector2 screenPos, float_t actualWidth, float_t actualHeight, float_t fieldOfView,
                                                                                             float_t paniniProjectionCropToFit, float_t paniniProjectionDistance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "DoPaniniProjection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, screenPos, actualWidth, actualHeight, fieldOfView, paniniProjectionCropToFit,
                                                                            paniniProjectionDistance);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::LensFlareCommonSRP::CalcViewExtents(float_t actualWidth, float_t actualHeight, float_t fieldOfView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "CalcViewExtents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, actualWidth, actualHeight, fieldOfView);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::LensFlareCommonSRP::CalcCropExtents(float_t actualWidth, float_t actualHeight, float_t fieldOfView, float_t d) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "CalcCropExtents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, actualWidth, actualHeight, fieldOfView, d);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::LensFlareCommonSRP::Panini_Generic_Inv(::UnityEngine::Vector2 projPos, float_t d) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                                                             "Panini_Generic_Inv", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, projPos, d);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::_ShapeAttenuationAreaTubeLight_g__Fpo_57_0(float_t d, float_t l) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<ShapeAttenuationAreaTubeLight>g__Fpo|57_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, d, l);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::_ShapeAttenuationAreaTubeLight_g__Fwt_57_1(float_t d, float_t l) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<ShapeAttenuationAreaTubeLight>g__Fwt|57_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, d, l);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::_ShapeAttenuationAreaTubeLight_g__DiffLineIntegral_57_2(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(),
                                               "<ShapeAttenuationAreaTubeLight>g__DiffLineIntegral|57_2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, p1, p2);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::LensFlareCommonSRP::_ProcessLensFlareSRPElementsSingle_g__ComputeLocalSize_74_0(
    ::UnityEngine::Vector2 rayOff, ::UnityEngine::Vector2 rayOff0, ::UnityEngine::Vector2 curSize, ::UnityEngine::AnimationCurve* distortionCurve,
    ::ByRef<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<ProcessLensFlareSRPElementsSingle>g__ComputeLocalSize|74_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LensFlareCommonSRP___c__DisplayClass74_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, rayOff, rayOff0, curSize, distortionCurve, _cordl_fixed_empty_name_whitespace);
}
inline float_t UnityEngine::Rendering::LensFlareCommonSRP::_ProcessLensFlareSRPElementsSingle_g__RandomRange_74_1(float_t min, float_t max) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareCommonSRP*>::get(), "<ProcessLensFlareSRPElementsSingle>g__RandomRange|74_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, min, max);
}
inline ::UnityEngine::Rendering::LensFlareCommonSRP* UnityEngine::Rendering::LensFlareCommonSRP::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::LensFlareCommonSRP*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LensFlareCommonSRP::LensFlareCommonSRP() {}
