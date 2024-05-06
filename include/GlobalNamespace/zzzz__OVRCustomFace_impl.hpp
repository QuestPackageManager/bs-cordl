#pragma once
#include "GlobalNamespace/zzzz__OVRCustomFace_impl.hpp"
#include "GlobalNamespace/zzzz__OVRFace_impl.hpp"
#include "GlobalNamespace/zzzz__OVRCustomFace_def.hpp"
#include "GlobalNamespace/zzzz__OVRCustomFace_def.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType::__OVRCustomFace__RetargetingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType::__OVRCustomFace__RetargetingType() {}
constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType GlobalNamespace::__OVRCustomFace__RetargetingType::OculusFace{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType GlobalNamespace::__OVRCustomFace__RetargetingType::Custom{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.get_Mappings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> (::GlobalNamespace::OVRCustomFace::*)()>(
        &::GlobalNamespace::OVRCustomFace::get_Mappings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b7cc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), "get_Mappings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.set_Mappings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)(
    ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>)>(&::GlobalNamespace::OVRCustomFace::set_Mappings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b7cc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), "set_Mappings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.get_RetargetingValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRCustomFace__RetargetingType (::GlobalNamespace::OVRCustomFace::*)()>(
    &::GlobalNamespace::OVRCustomFace::get_RetargetingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b7cc6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), "get_RetargetingValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.set_RetargetingValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)(::GlobalNamespace::__OVRCustomFace__RetargetingType)>(
    &::GlobalNamespace::OVRCustomFace::set_RetargetingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b7cc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), "set_RetargetingValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRCustomFace__RetargetingType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.get_AllowDuplicateMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRCustomFace::*)()>(&::GlobalNamespace::OVRCustomFace::get_AllowDuplicateMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b7cc7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                                                                               "get_AllowDuplicateMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.set_AllowDuplicateMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)(bool)>(&::GlobalNamespace::OVRCustomFace::set_AllowDuplicateMapping)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b7cc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), "set_AllowDuplicateMapping",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)()>(&::GlobalNamespace::OVRCustomFace::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b7cc90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.GetFaceExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRFaceExpressions__FaceExpression (::GlobalNamespace::OVRCustomFace::*)(int32_t)>(
    &::GlobalNamespace::OVRCustomFace::GetFaceExpression)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b7cce4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace.GetCustomBlendShapeNameAndExpressionPairs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>> (
    ::GlobalNamespace::OVRCustomFace::*)()>(&::GlobalNamespace::OVRCustomFace::GetCustomBlendShapeNameAndExpressionPairs)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2b7cd14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomFace::*)()>(&::GlobalNamespace::OVRCustomFace::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b7ce4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>&
GlobalNamespace::OVRCustomFace::__cordl_internal_get__mappings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mappings;
}
constexpr ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> const&
GlobalNamespace::OVRCustomFace::__cordl_internal_get__mappings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mappings;
}
constexpr void GlobalNamespace::OVRCustomFace::__cordl_internal_set__mappings(
    ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mappings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType& GlobalNamespace::OVRCustomFace::__cordl_internal_get_retargetingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retargetingType;
}
constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType const& GlobalNamespace::OVRCustomFace::__cordl_internal_get_retargetingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retargetingType;
}
constexpr void GlobalNamespace::OVRCustomFace::__cordl_internal_set_retargetingType(::GlobalNamespace::__OVRCustomFace__RetargetingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___retargetingType = value;
}
constexpr bool& GlobalNamespace::OVRCustomFace::__cordl_internal_get__allowDuplicateMapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowDuplicateMapping;
}
constexpr bool const& GlobalNamespace::OVRCustomFace::__cordl_internal_get__allowDuplicateMapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowDuplicateMapping;
}
constexpr void GlobalNamespace::OVRCustomFace::__cordl_internal_set__allowDuplicateMapping(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowDuplicateMapping = value;
}
inline ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> GlobalNamespace::OVRCustomFace::get_Mappings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), "get_Mappings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>, false>(
      this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomFace::set_Mappings(::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), "set_Mappings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRCustomFace__RetargetingType GlobalNamespace::OVRCustomFace::get_RetargetingValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), "get_RetargetingValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRCustomFace__RetargetingType, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomFace::set_RetargetingValue(::GlobalNamespace::__OVRCustomFace__RetargetingType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), "set_RetargetingValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRCustomFace__RetargetingType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRCustomFace::get_AllowDuplicateMapping() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(),
                                                                             "get_AllowDuplicateMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomFace::set_AllowDuplicateMapping(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), "set_AllowDuplicateMapping",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRCustomFace::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GlobalNamespace::OVRCustomFace::GetFaceExpression(int32_t blendShapeIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, false>(this, ___internal_method, blendShapeIndex);
}
inline ::System::ValueTuple_2<::ArrayW<::StringW, ::Array<::StringW>*>,
                              ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>>
GlobalNamespace::OVRCustomFace::GetCustomBlendShapeNameAndExpressionPairs() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression,
                                                                                                                       ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>>,
                                             false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRCustomFace* GlobalNamespace::OVRCustomFace::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRCustomFace*>());
}
inline void GlobalNamespace::OVRCustomFace::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFace*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRCustomFace::OVRCustomFace() {}
