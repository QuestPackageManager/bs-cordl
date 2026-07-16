#pragma once
// IWYU pragma private; include "Tweening/TweeningManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Tweening/zzzz__TweeningManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Tweening/zzzz__Tween_def.hpp"
//  Writing Method size for method: ::Tweening::TweeningManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::TweeningManager::*)()>(&::Tweening::TweeningManager::Start)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6443cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::TweeningManager.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::TweeningManager::*)()>(&::Tweening::TweeningManager::LateUpdate)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6443e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::TweeningManager.GetTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tweening::TweeningManager::*)()>(&::Tweening::TweeningManager::GetTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { ::i2c::class_of<::Tweening::TweeningManager*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::TweeningManager.AddTween
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Tweening::Tween* (::Tweening::TweeningManager::*)(::Tweening::Tween*, ::System::Object*)>(&::Tweening::TweeningManager::AddTween)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6444248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "AddTween", {}, { ::i2c::type_of<::Tweening::Tween*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::TweeningManager.RestartTween
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Tweening::Tween* (::Tweening::TweeningManager::*)(::Tweening::Tween*, ::System::Object*)>(&::Tweening::TweeningManager::RestartTween)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x64443a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "RestartTween", {}, { ::i2c::type_of<::Tweening::Tween*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::TweeningManager.ResumeTween
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Tweening::Tween* (::Tweening::TweeningManager::*)(::Tweening::Tween*, ::System::Object*)>(&::Tweening::TweeningManager::ResumeTween)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6444460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "ResumeTween", {}, { ::i2c::type_of<::Tweening::Tween*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::TweeningManager.KillAllTweens
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::TweeningManager::*)(::System::Object*)>(&::Tweening::TweeningManager::KillAllTweens)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6444484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "KillAllTweens", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::TweeningManager.RemoveTweenFromOwnerDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::TweeningManager::*)(::Tweening::Tween*)>(&::Tweening::TweeningManager::RemoveTweenFromOwnerDictionary)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x644406c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "RemoveTweenFromOwnerDictionary", {}, { ::i2c::type_of<::Tweening::Tween*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::TweeningManager.AddTweenToDataStructures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Tweening::TweeningManager::*)(::Tweening::Tween*, ::System::Object*)>(&::Tweening::TweeningManager::AddTweenToDataStructures)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6444294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "AddTweenToDataStructures", {}, { ::i2c::type_of<::Tweening::Tween*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::TweeningManager.AddTweenToOwnerDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::TweeningManager::*)(::Tweening::Tween*, ::System::Object*)>(&::Tweening::TweeningManager::AddTweenToOwnerDictionary)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x64445cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "AddTweenToOwnerDictionary", {}, { ::i2c::type_of<::Tweening::Tween*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::TweeningManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::TweeningManager::*)()>(&::Tweening::TweeningManager::_ctor)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6443a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Tweening::Tween*>*& Tweening::TweeningManager::__cordl_internal_get__activeTweens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeTweens;
}
constexpr ::System::Collections::Generic::List_1<::Tweening::Tween*>* const& Tweening::TweeningManager::__cordl_internal_get__activeTweens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeTweens;
}
constexpr void Tweening::TweeningManager::__cordl_internal_set__activeTweens(::System::Collections::Generic::List_1<::Tweening::Tween*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeTweens = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*& Tweening::TweeningManager::__cordl_internal_get__activeTweensSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeTweensSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>* const& Tweening::TweeningManager::__cordl_internal_get__activeTweensSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeTweensSet;
}
constexpr void Tweening::TweeningManager::__cordl_internal_set__activeTweensSet(::System::Collections::Generic::HashSet_1<::Tweening::Tween*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeTweensSet = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>*&
Tweening::TweeningManager::__cordl_internal_get__tweensByOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweensByOwner;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* const&
Tweening::TweeningManager::__cordl_internal_get__tweensByOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweensByOwner;
}
constexpr void
Tweening::TweeningManager::__cordl_internal_set__tweensByOwner(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweensByOwner = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Tweening::Tween*, ::System::Object*>*& Tweening::TweeningManager::__cordl_internal_get__ownerByTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownerByTween;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Tweening::Tween*, ::System::Object*>* const& Tweening::TweeningManager::__cordl_internal_get__ownerByTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownerByTween;
}
constexpr void Tweening::TweeningManager::__cordl_internal_set__ownerByTween(::System::Collections::Generic::Dictionary_2<::Tweening::Tween*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ownerByTween = value;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>*& Tweening::TweeningManager::__cordl_internal_get__reusableTweenHashSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableTweenHashSets;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* const&
Tweening::TweeningManager::__cordl_internal_get__reusableTweenHashSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableTweenHashSets;
}
constexpr void Tweening::TweeningManager::__cordl_internal_set__reusableTweenHashSets(::System::Collections::Generic::Queue_1<::System::Collections::Generic::HashSet_1<::Tweening::Tween*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reusableTweenHashSets = value;
}
inline void Tweening::TweeningManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tweening::TweeningManager::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Tweening::TweeningManager::GetTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tweening::TweeningManager*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Tweening::Tween* Tweening::TweeningManager::AddTween(::Tweening::Tween* tween, ::System::Object* owner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "AddTween", {}, { ::i2c::type_of<::Tweening::Tween*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Tweening::Tween*>(this, ___internal_method, tween, owner);
}
inline ::Tweening::Tween* Tweening::TweeningManager::RestartTween(::Tweening::Tween* tween, ::System::Object* owner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "RestartTween", {}, { ::i2c::type_of<::Tweening::Tween*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Tweening::Tween*>(this, ___internal_method, tween, owner);
}
inline ::Tweening::Tween* Tweening::TweeningManager::ResumeTween(::Tweening::Tween* tween, ::System::Object* owner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "ResumeTween", {}, { ::i2c::type_of<::Tweening::Tween*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Tweening::Tween*>(this, ___internal_method, tween, owner);
}
inline void Tweening::TweeningManager::KillAllTweens(::System::Object* owner) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "KillAllTweens", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Tweening::TweeningManager::RemoveTweenFromOwnerDictionary(::Tweening::Tween* tween) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "RemoveTweenFromOwnerDictionary", {}, { ::i2c::type_of<::Tweening::Tween*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tween);
}
inline bool Tweening::TweeningManager::AddTweenToDataStructures(::Tweening::Tween* tween, ::System::Object* owner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "AddTweenToDataStructures", {}, { ::i2c::type_of<::Tweening::Tween*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tween, owner);
}
inline void Tweening::TweeningManager::AddTweenToOwnerDictionary(::Tweening::Tween* tween, ::System::Object* owner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { "AddTweenToOwnerDictionary", {}, { ::i2c::type_of<::Tweening::Tween*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tween, owner);
}
inline void Tweening::TweeningManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TweeningManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tweening::TweeningManager* Tweening::TweeningManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::TweeningManager*>());
}
// Ctor Parameters []
constexpr ::Tweening::TweeningManager::TweeningManager() {}
