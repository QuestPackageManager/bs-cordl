#pragma once
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSStarTextEventEffect_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BTSStarTextEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::*)()>(
    &::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221dc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>::get(), "get_id",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite.get_starTextSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::*)()>(
    &::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::get_starTextSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221dc6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>::get(), "get_starTextSprite",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite.get_animationLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::*)()>(
    &::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::get_animationLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221dc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>::get(), "get_animationLength",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::*)()>(
    &::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221dc7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::__get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr int32_t const& GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::__get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::__set__id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
constexpr ::UnityEngine::Sprite*& GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::__get__starTextSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____starTextSprite;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::__get__starTextSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____starTextSprite;
}
constexpr void GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::__set__starTextSprite(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____starTextSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::__get__animationLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationLength;
}
constexpr float_t const& GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::__get__animationLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationLength;
}
constexpr void GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::__set__animationLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animationLength = value;
}
inline int32_t GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::get_id() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>::get(), "get_id",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Sprite* GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::get_starTextSprite() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>::get(), "get_starTextSprite",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Sprite*, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::get_animationLength() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>::get(), "get_animationLength",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite* GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>());
}
inline void GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite::__BTSStarTextEventEffect__StarTextSprite() {}
//  Writing Method size for method: ::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::*)()>(
    &::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221dc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>::get(), "get_id",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition.get_transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::*)()>(
    &::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221dc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>::get(), "get_transform",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::*)()>(
    &::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221dc94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::__get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr int32_t const& GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::__get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::__set__id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::__set__transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::get_id() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>::get(), "get_id",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Transform* GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::get_transform() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>::get(), "get_transform",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition* GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>());
}
inline void GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition::__BTSStarTextEventEffect__StartTextPosition() {}
//  Writing Method size for method: ::GlobalNamespace::BTSStarTextEventEffect.add_startStarTextAnimationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSStarTextEventEffect::*)(
    ::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>*)>(&::GlobalNamespace::BTSStarTextEventEffect::add_startStarTextAnimationEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x221d360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventEffect*>::get(), "add_startStarTextAnimationEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSStarTextEventEffect.remove_startStarTextAnimationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSStarTextEventEffect::*)(
    ::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>*)>(&::GlobalNamespace::BTSStarTextEventEffect::remove_startStarTextAnimationEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x221d498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventEffect*>::get(), "remove_startStarTextAnimationEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSStarTextEventEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSStarTextEventEffect::*)()>(&::GlobalNamespace::BTSStarTextEventEffect::Start)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x221d7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventEffect*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSStarTextEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSStarTextEventEffect::*)()>(&::GlobalNamespace::BTSStarTextEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x221d9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventEffect*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSStarTextEventEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSStarTextEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::BTSStarTextEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x221d9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSStarTextEventEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSStarTextEventEffect::*)()>(&::GlobalNamespace::BTSStarTextEventEffect::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x221dba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*>&
GlobalNamespace::BTSStarTextEventEffect::__get__starTextSprites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____starTextSprites;
}
constexpr ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*> const&
GlobalNamespace::BTSStarTextEventEffect::__get__starTextSprites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____starTextSprites;
}
constexpr void GlobalNamespace::BTSStarTextEventEffect::__set__starTextSprites(
    ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____starTextSprites)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>*>&
GlobalNamespace::BTSStarTextEventEffect::__get__startTextPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTextPositions;
}
constexpr ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>*> const&
GlobalNamespace::BTSStarTextEventEffect::__get__startTextPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTextPositions;
}
constexpr void GlobalNamespace::BTSStarTextEventEffect::__set__startTextPositions(
    ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startTextPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::BTSStarTextEventEffect::__get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::BTSStarTextEventEffect::__get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::BTSStarTextEventEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::BTSStarTextEventEffect::__get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& GlobalNamespace::BTSStarTextEventEffect::__get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::BTSStarTextEventEffect::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>*& GlobalNamespace::BTSStarTextEventEffect::__get_startStarTextAnimationEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startStarTextAnimationEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>*> const&
GlobalNamespace::BTSStarTextEventEffect::__get_startStarTextAnimationEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startStarTextAnimationEvent;
}
constexpr void GlobalNamespace::BTSStarTextEventEffect::__set_startStarTextAnimationEvent(::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startStarTextAnimationEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::BTSStarTextEventEffect::__get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& GlobalNamespace::BTSStarTextEventEffect::__get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::BTSStarTextEventEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*&
GlobalNamespace::BTSStarTextEventEffect::__get__idsToStarTextSpriteDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idsToStarTextSpriteDictionary;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*> const&
GlobalNamespace::BTSStarTextEventEffect::__get__idsToStarTextSpriteDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idsToStarTextSpriteDictionary;
}
constexpr void GlobalNamespace::BTSStarTextEventEffect::__set__idsToStarTextSpriteDictionary(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____idsToStarTextSpriteDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Transform*>*& GlobalNamespace::BTSStarTextEventEffect::__get__idsToStarTextPositionDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idsToStarTextPositionDictionary;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Transform*>*> const&
GlobalNamespace::BTSStarTextEventEffect::__get__idsToStarTextPositionDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idsToStarTextPositionDictionary;
}
constexpr void GlobalNamespace::BTSStarTextEventEffect::__set__idsToStarTextPositionDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Transform*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____idsToStarTextPositionDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BTSStarTextEventEffect::add_startStarTextAnimationEvent(::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventEffect*>::get(), "add_startStarTextAnimationEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BTSStarTextEventEffect::remove_startStarTextAnimationEvent(::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventEffect*>::get(), "remove_startStarTextAnimationEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BTSStarTextEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventEffect*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BTSStarTextEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventEffect*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BTSStarTextEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline ::GlobalNamespace::BTSStarTextEventEffect* GlobalNamespace::BTSStarTextEventEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BTSStarTextEventEffect*>());
}
inline void GlobalNamespace::BTSStarTextEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSStarTextEventEffect::BTSStarTextEventEffect() {}
constexpr ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BTSStarTextEventEffect::kStarTextAppearEventType{ static_cast<int32_t>(0x29) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
