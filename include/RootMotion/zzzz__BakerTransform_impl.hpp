#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/zzzz__BakerTransform_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::RootMotion::BakerTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::BakerTransform::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, bool, bool)>(
    &::RootMotion::BakerTransform::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x12311a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BakerTransform.SetRelativeSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::BakerTransform::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::RootMotion::BakerTransform::SetRelativeSpace)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x123141c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), "SetRelativeSpace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BakerTransform.SetCurves
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::BakerTransform::*)(ByRef<::UnityEngine::AnimationClip*>)>(
    &::RootMotion::BakerTransform::SetCurves)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x12316f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), "SetCurves", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::AnimationClip*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BakerTransform.AddRootMotionCurves
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::BakerTransform::*)(ByRef<::UnityEngine::AnimationClip*>)>(
    &::RootMotion::BakerTransform::AddRootMotionCurves)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x1234610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), "AddRootMotionCurves", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::AnimationClip*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BakerTransform.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::BakerTransform::*)()>(&::RootMotion::BakerTransform::Reset)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1231314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BakerTransform.ReduceKeyframes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::BakerTransform::*)(float_t)>(&::RootMotion::BakerTransform::ReduceKeyframes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1234898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), "ReduceKeyframes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BakerTransform.SetKeyframes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::BakerTransform::*)(float_t)>(&::RootMotion::BakerTransform::SetKeyframes)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x1231a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), "SetKeyframes", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BakerTransform.AddLoopFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::BakerTransform::*)(float_t)>(&::RootMotion::BakerTransform::AddLoopFrame)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x123149c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), "AddLoopFrame", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BakerTransform::__cordl_internal_get_transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BakerTransform::__cordl_internal_get_transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr void RootMotion::BakerTransform::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& RootMotion::BakerTransform::__cordl_internal_get_posX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posX;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& RootMotion::BakerTransform::__cordl_internal_get_posX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posX;
}
constexpr void RootMotion::BakerTransform::__cordl_internal_set_posX(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___posX)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& RootMotion::BakerTransform::__cordl_internal_get_posY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posY;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& RootMotion::BakerTransform::__cordl_internal_get_posY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posY;
}
constexpr void RootMotion::BakerTransform::__cordl_internal_set_posY(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___posY)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& RootMotion::BakerTransform::__cordl_internal_get_posZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posZ;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& RootMotion::BakerTransform::__cordl_internal_get_posZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posZ;
}
constexpr void RootMotion::BakerTransform::__cordl_internal_set_posZ(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___posZ)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& RootMotion::BakerTransform::__cordl_internal_get_rotX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotX;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& RootMotion::BakerTransform::__cordl_internal_get_rotX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotX;
}
constexpr void RootMotion::BakerTransform::__cordl_internal_set_rotX(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rotX)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& RootMotion::BakerTransform::__cordl_internal_get_rotY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotY;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& RootMotion::BakerTransform::__cordl_internal_get_rotY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotY;
}
constexpr void RootMotion::BakerTransform::__cordl_internal_set_rotY(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rotY)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& RootMotion::BakerTransform::__cordl_internal_get_rotZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotZ;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& RootMotion::BakerTransform::__cordl_internal_get_rotZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotZ;
}
constexpr void RootMotion::BakerTransform::__cordl_internal_set_rotZ(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rotZ)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& RootMotion::BakerTransform::__cordl_internal_get_rotW() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotW;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& RootMotion::BakerTransform::__cordl_internal_get_rotW() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotW;
}
constexpr void RootMotion::BakerTransform::__cordl_internal_set_rotW(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rotW)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& RootMotion::BakerTransform::__cordl_internal_get_relativePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relativePath;
}
constexpr ::StringW const& RootMotion::BakerTransform::__cordl_internal_get_relativePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relativePath;
}
constexpr void RootMotion::BakerTransform::__cordl_internal_set_relativePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___relativePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::BakerTransform::__cordl_internal_get_recordPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordPosition;
}
constexpr bool const& RootMotion::BakerTransform::__cordl_internal_get_recordPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordPosition;
}
constexpr void RootMotion::BakerTransform::__cordl_internal_set_recordPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordPosition = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::BakerTransform::__cordl_internal_get_relativePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relativePosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::BakerTransform::__cordl_internal_get_relativePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relativePosition;
}
constexpr void RootMotion::BakerTransform::__cordl_internal_set_relativePosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___relativePosition = value;
}
constexpr bool& RootMotion::BakerTransform::__cordl_internal_get_isRootNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRootNode;
}
constexpr bool const& RootMotion::BakerTransform::__cordl_internal_get_isRootNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRootNode;
}
constexpr void RootMotion::BakerTransform::__cordl_internal_set_isRootNode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRootNode = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::BakerTransform::__cordl_internal_get_relativeRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relativeRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::BakerTransform::__cordl_internal_get_relativeRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relativeRotation;
}
constexpr void RootMotion::BakerTransform::__cordl_internal_set_relativeRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___relativeRotation = value;
}
inline ::RootMotion::BakerTransform* RootMotion::BakerTransform::New_ctor(::UnityEngine::Transform* transform, ::UnityEngine::Transform* root, bool recordPosition, bool isRootNode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::BakerTransform*>(transform, root, recordPosition, isRootNode));
}
inline void RootMotion::BakerTransform::_ctor(::UnityEngine::Transform* transform, ::UnityEngine::Transform* root, bool recordPosition, bool isRootNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform, root, recordPosition, isRootNode);
}
inline void RootMotion::BakerTransform::SetRelativeSpace(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), "SetRelativeSpace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, rotation);
}
inline void RootMotion::BakerTransform::SetCurves(ByRef<::UnityEngine::AnimationClip*> clip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), "SetCurves", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::AnimationClip*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clip);
}
inline void RootMotion::BakerTransform::AddRootMotionCurves(ByRef<::UnityEngine::AnimationClip*> clip) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), "AddRootMotionCurves", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::AnimationClip*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clip);
}
inline void RootMotion::BakerTransform::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::BakerTransform::ReduceKeyframes(float_t maxError) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), "ReduceKeyframes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxError);
}
inline void RootMotion::BakerTransform::SetKeyframes(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), "SetKeyframes", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time);
}
inline void RootMotion::BakerTransform::AddLoopFrame(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BakerTransform*>::get(), "AddLoopFrame", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time);
}
// Ctor Parameters []
constexpr ::RootMotion::BakerTransform::BakerTransform() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
