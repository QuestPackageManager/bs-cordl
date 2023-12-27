#pragma once
#include "RootMotion/zzzz__Baker_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/zzzz__Baker_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/zzzz__Baker_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::__Baker__Mode::__Baker__Mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::RootMotion::__Baker__Mode::__Baker__Mode() {}
constexpr ::RootMotion::__Baker__Mode RootMotion::__Baker__Mode::AnimationClips{ static_cast<int32_t>(0x0) };
constexpr ::RootMotion::__Baker__Mode RootMotion::__Baker__Mode::AnimationStates{ static_cast<int32_t>(0x1) };
constexpr ::RootMotion::__Baker__Mode RootMotion::__Baker__Mode::PlayableDirector{ static_cast<int32_t>(0x2) };
constexpr ::RootMotion::__Baker__Mode RootMotion::__Baker__Mode::Realtime{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::RootMotion::Baker.OpenUserManual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1230bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "OpenUserManual",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.OpenScriptReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1230c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "OpenScriptReference",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.SupportGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::SupportGroup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1230c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "SupportGroup",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.ASThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::ASThread)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1230ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "ASThread", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.get_isBaking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::Baker::*)()>(&::RootMotion::Baker::get_isBaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "get_isBaking",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.set_isBaking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)(bool)>(&::RootMotion::Baker::set_isBaking)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1230cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "set_isBaking", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.get_bakingProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::Baker::*)()>(&::RootMotion::Baker::get_bakingProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "get_bakingProgress",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.set_bakingProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)(float_t)>(&::RootMotion::Baker::set_bakingProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "set_bakingProgress", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.GetCharacterRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::RootMotion::Baker::*)()>(&::RootMotion::Baker::GetCharacterRoot)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.OnStartBaking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::OnStartBaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.OnSetLoopFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)(float_t)>(&::RootMotion::Baker::OnSetLoopFrame)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.OnSetCurves
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)(ByRef<::UnityEngine::AnimationClip*>)>(&::RootMotion::Baker::OnSetCurves)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.OnSetKeyframes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)(float_t, bool)>(&::RootMotion::Baker::OnSetKeyframes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.get_clipLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::Baker::*)()>(&::RootMotion::Baker::get_clipLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "get_clipLength",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.set_clipLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)(float_t)>(&::RootMotion::Baker::set_clipLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "set_clipLength", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.BakeClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::BakeClip)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1230d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "BakeClip", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.StartBaking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::StartBaking)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1230d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "StartBaking",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.StopBaking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::StopBaking)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1230d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "StopBaking",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1230d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& RootMotion::Baker::__get_frameRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___frameRate;
}
constexpr int32_t const& RootMotion::Baker::__get_frameRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___frameRate;
}
constexpr void RootMotion::Baker::__set_frameRate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___frameRate = value;
}
constexpr float_t& RootMotion::Baker::__get_keyReductionError() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyReductionError;
}
constexpr float_t const& RootMotion::Baker::__get_keyReductionError() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyReductionError;
}
constexpr void RootMotion::Baker::__set_keyReductionError(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___keyReductionError = value;
}
constexpr ::RootMotion::__Baker__Mode& RootMotion::Baker::__get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mode;
}
constexpr ::RootMotion::__Baker__Mode const& RootMotion::Baker::__get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mode;
}
constexpr void RootMotion::Baker::__set_mode(::RootMotion::__Baker__Mode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___mode = value;
}
constexpr ::ArrayW<::UnityEngine::AnimationClip*, ::Array<::UnityEngine::AnimationClip*>*>& RootMotion::Baker::__get_animationClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___animationClips;
}
constexpr ::ArrayW<::UnityEngine::AnimationClip*, ::Array<::UnityEngine::AnimationClip*>*> const& RootMotion::Baker::__get_animationClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___animationClips;
}
constexpr void RootMotion::Baker::__set_animationClips(::ArrayW<::UnityEngine::AnimationClip*, ::Array<::UnityEngine::AnimationClip*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animationClips)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& RootMotion::Baker::__get_animationStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___animationStates;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& RootMotion::Baker::__get_animationStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___animationStates;
}
constexpr void RootMotion::Baker::__set_animationStates(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animationStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::Baker::__get_loop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___loop;
}
constexpr bool const& RootMotion::Baker::__get_loop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___loop;
}
constexpr void RootMotion::Baker::__set_loop(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___loop = value;
}
constexpr ::StringW& RootMotion::Baker::__get_saveToFolder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___saveToFolder;
}
constexpr ::StringW const& RootMotion::Baker::__get_saveToFolder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___saveToFolder;
}
constexpr void RootMotion::Baker::__set_saveToFolder(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___saveToFolder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& RootMotion::Baker::__get_appendName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___appendName;
}
constexpr ::StringW const& RootMotion::Baker::__get_appendName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___appendName;
}
constexpr void RootMotion::Baker::__set_appendName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___appendName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& RootMotion::Baker::__get_saveName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___saveName;
}
constexpr ::StringW const& RootMotion::Baker::__get_saveName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___saveName;
}
constexpr void RootMotion::Baker::__set_saveName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___saveName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::Baker::__get__isBaking_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isBaking_k__BackingField;
}
constexpr bool const& RootMotion::Baker::__get__isBaking_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isBaking_k__BackingField;
}
constexpr void RootMotion::Baker::__set__isBaking_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____isBaking_k__BackingField = value;
}
constexpr float_t& RootMotion::Baker::__get__bakingProgress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bakingProgress_k__BackingField;
}
constexpr float_t const& RootMotion::Baker::__get__bakingProgress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bakingProgress_k__BackingField;
}
constexpr void RootMotion::Baker::__set__bakingProgress_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____bakingProgress_k__BackingField = value;
}
constexpr ::UnityEngine::Animator*& RootMotion::Baker::__get_animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___animator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& RootMotion::Baker::__get_animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___animator;
}
constexpr void RootMotion::Baker::__set_animator(::UnityEngine::Animator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Playables::PlayableDirector*& RootMotion::Baker::__get_director() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___director;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> const& RootMotion::Baker::__get_director() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___director;
}
constexpr void RootMotion::Baker::__set_director(::UnityEngine::Playables::PlayableDirector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___director)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::Baker::__get__clipLength_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____clipLength_k__BackingField;
}
constexpr float_t const& RootMotion::Baker::__get__clipLength_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____clipLength_k__BackingField;
}
constexpr void RootMotion::Baker::__set__clipLength_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____clipLength_k__BackingField = value;
}
inline void RootMotion::Baker::OpenUserManual() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "OpenUserManual",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::Baker::OpenScriptReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "OpenScriptReference",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::Baker::SupportGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "SupportGroup",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::Baker::ASThread() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "ASThread", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::Baker::get_isBaking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "get_isBaking",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void RootMotion::Baker::set_isBaking(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "set_isBaking", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t RootMotion::Baker::get_bakingProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "get_bakingProgress",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void RootMotion::Baker::set_bakingProgress(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "set_bakingProgress", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Transform* RootMotion::Baker::GetCharacterRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "GetCharacterRoot",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method);
}
inline void RootMotion::Baker::OnStartBaking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "OnStartBaking",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::Baker::OnSetLoopFrame(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "OnSetLoopFrame", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time);
}
inline void RootMotion::Baker::OnSetCurves(ByRef<::UnityEngine::AnimationClip*> clip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "OnSetCurves", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::AnimationClip*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clip);
}
inline void RootMotion::Baker::OnSetKeyframes(float_t time, bool lastFrame) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "OnSetKeyframes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, lastFrame);
}
inline float_t RootMotion::Baker::get_clipLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "get_clipLength",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void RootMotion::Baker::set_clipLength(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "set_clipLength", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void RootMotion::Baker::BakeClip() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "BakeClip", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::Baker::StartBaking() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "StartBaking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::Baker::StopBaking() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), "StopBaking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::Baker* RootMotion::Baker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::Baker*>());
}
inline void RootMotion::Baker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::Baker::Baker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
