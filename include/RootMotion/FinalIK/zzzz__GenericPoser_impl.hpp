#pragma once
#include "RootMotion/FinalIK/zzzz__Poser_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__GenericPoser_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__GenericPoser_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__GenericPoser__Map._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__GenericPoser__Map::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::__GenericPoser__Map::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x128ca54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__GenericPoser__Map*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__GenericPoser__Map.StoreDefaultState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__GenericPoser__Map::*)()>(
    &::RootMotion::FinalIK::__GenericPoser__Map::StoreDefaultState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x128cd90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__GenericPoser__Map*>::get(),
                                                                               "StoreDefaultState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__GenericPoser__Map.FixTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__GenericPoser__Map::*)()>(&::RootMotion::FinalIK::__GenericPoser__Map::FixTransform)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x128cd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__GenericPoser__Map*>::get(),
                                                                               "FixTransform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__GenericPoser__Map.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__GenericPoser__Map::*)(float_t, float_t)>(
    &::RootMotion::FinalIK::__GenericPoser__Map::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x128cbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__GenericPoser__Map*>::get(), "Update", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::__GenericPoser__Map::__get_bone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bone;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::__GenericPoser__Map::__get_bone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bone;
}
constexpr void RootMotion::FinalIK::__GenericPoser__Map::__set_bone(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::__GenericPoser__Map::__get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___target;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::__GenericPoser__Map::__get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___target;
}
constexpr void RootMotion::FinalIK::__GenericPoser__Map::__set_target(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__GenericPoser__Map::__get_defaultLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__GenericPoser__Map::__get_defaultLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultLocalPosition;
}
constexpr void RootMotion::FinalIK::__GenericPoser__Map::__set_defaultLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___defaultLocalPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__GenericPoser__Map::__get_defaultLocalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__GenericPoser__Map::__get_defaultLocalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultLocalRotation;
}
constexpr void RootMotion::FinalIK::__GenericPoser__Map::__set_defaultLocalRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___defaultLocalRotation = value;
}
inline ::RootMotion::FinalIK::__GenericPoser__Map* RootMotion::FinalIK::__GenericPoser__Map::New_ctor(::UnityEngine::Transform* bone, ::UnityEngine::Transform* target) {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__GenericPoser__Map*>(bone, target));
}
inline void RootMotion::FinalIK::__GenericPoser__Map::_ctor(::UnityEngine::Transform* bone, ::UnityEngine::Transform* target) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__GenericPoser__Map*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bone, target);
}
inline void RootMotion::FinalIK::__GenericPoser__Map::StoreDefaultState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__GenericPoser__Map*>::get(),
                                                                             "StoreDefaultState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__GenericPoser__Map::FixTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__GenericPoser__Map*>::get(), "FixTransform",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__GenericPoser__Map::Update(float_t localRotationWeight, float_t localPositionWeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__GenericPoser__Map*>::get(), "Update", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localRotationWeight, localPositionWeight);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__GenericPoser__Map::__GenericPoser__Map() {}
//  Writing Method size for method: ::RootMotion::FinalIK::GenericPoser.AutoMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GenericPoser::*)()>(&::RootMotion::FinalIK::GenericPoser::AutoMapping)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x128c768;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GenericPoser.InitiatePoser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GenericPoser::*)()>(&::RootMotion::FinalIK::GenericPoser::InitiatePoser)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x128cae0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GenericPoser.UpdatePoser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GenericPoser::*)()>(&::RootMotion::FinalIK::GenericPoser::UpdatePoser)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x128cae4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GenericPoser.FixPoserTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GenericPoser::*)()>(&::RootMotion::FinalIK::GenericPoser::FixPoserTransforms)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x128ccf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GenericPoser.StoreDefaultState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GenericPoser::*)()>(&::RootMotion::FinalIK::GenericPoser::StoreDefaultState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x128ca84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(), "StoreDefaultState",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GenericPoser.GetTargetNamed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (
    ::RootMotion::FinalIK::GenericPoser::*)(::StringW, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>)>(&::RootMotion::FinalIK::GenericPoser::GetTargetNamed)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x128c9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(), "GetTargetNamed", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GenericPoser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GenericPoser::*)()>(&::RootMotion::FinalIK::GenericPoser::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x128cdd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*, ::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*>& RootMotion::FinalIK::GenericPoser::__get_maps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maps;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*, ::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*> const& RootMotion::FinalIK::GenericPoser::__get_maps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maps;
}
constexpr void RootMotion::FinalIK::GenericPoser::__set_maps(::ArrayW<::RootMotion::FinalIK::__GenericPoser__Map*, ::Array<::RootMotion::FinalIK::__GenericPoser__Map*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___maps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::GenericPoser::AutoMapping() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(), "AutoMapping",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GenericPoser::InitiatePoser() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(), "InitiatePoser",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GenericPoser::UpdatePoser() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(), "UpdatePoser",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GenericPoser::FixPoserTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(), "FixPoserTransforms",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GenericPoser::StoreDefaultState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(), "StoreDefaultState",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Transform* RootMotion::FinalIK::GenericPoser::GetTargetNamed(::StringW tName, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(), "GetTargetNamed", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method, tName, array);
}
inline ::RootMotion::FinalIK::GenericPoser* RootMotion::FinalIK::GenericPoser::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::GenericPoser*>());
}
inline void RootMotion::FinalIK::GenericPoser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GenericPoser*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::GenericPoser::GenericPoser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
