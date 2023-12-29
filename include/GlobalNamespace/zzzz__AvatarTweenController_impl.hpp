#pragma once
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarTweenController_def.hpp"
#include "GlobalNamespace/zzzz__AvatarTweenController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0::*)()>(
    &::GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d3a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0._CreatePopTween_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0::*)(float_t)>(
    &::GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0::_CreatePopTween_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x20d4714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0*>::get(), "<CreatePopTween>b__0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0::__get_partTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0::__get_partTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partTransform;
}
constexpr void GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0::__set_partTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0::__get_originalScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0::__get_originalScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalScale;
}
constexpr void GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0::__set_originalScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalScale = value;
}
inline ::GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0* GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0*>());
}
inline void GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0::_CreatePopTween_b__0(float_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0*>::get(), "<CreatePopTween>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AvatarTweenController____c__DisplayClass52_0::__AvatarTweenController____c__DisplayClass52_0() {}
//  Writing Method size for method: ::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::*)(int32_t)>(
    &::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20d3a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::*)()>(
    &::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20d474c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::*)()>(
    &::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x20d4750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::*)()>(
    &::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d495c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::*)()>(
    &::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x20d4964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::*)()>(
    &::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d49a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AvatarTweenController*& GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarTweenController*> const& GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::__set___4__this(::GlobalNamespace::AvatarTweenController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::WaitForSeconds*& GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::__get__waitYieldInstruction_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitYieldInstruction_5__2;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForSeconds*> const& GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::__get__waitYieldInstruction_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitYieldInstruction_5__2;
}
constexpr void GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::__set__waitYieldInstruction_5__2(::UnityEngine::WaitForSeconds* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____waitYieldInstruction_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53* GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53*>(__1__state));
}
inline void GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AvatarTweenController___AppearAnimation_d__53::__AvatarTweenController___AppearAnimation_d__53() {}
//  Writing Method size for method: ::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::*)(int32_t)>(
    &::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20d4580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::*)()>(
    &::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20d49ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::*)()>(
    &::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::MoveNext)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x20d49b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::*)()>(
    &::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d4c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::*)()>(
    &::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x20d4c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::*)()>(
    &::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d4c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AvatarTweenController*& GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarTweenController*> const& GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::__set___4__this(::GlobalNamespace::AvatarTweenController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58* GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58*>(__1__state));
}
inline void GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AvatarTweenController___DisappearAnimation_d__58::__AvatarTweenController___DisappearAnimation_d__58() {}
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)()>(&::GlobalNamespace::AvatarTweenController::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x20d35b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)()>(&::GlobalNamespace::AvatarTweenController::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20d35fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.PresentAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)()>(&::GlobalNamespace::AvatarTweenController::PresentAvatar)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20d3694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(),
                                                                               "PresentAvatar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.HideAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)()>(&::GlobalNamespace::AvatarTweenController::HideAvatar)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20d3724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "HideAvatar",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.PopAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)()>(&::GlobalNamespace::AvatarTweenController::PopAll)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x20d37b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PopAll",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.PopHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)()>(&::GlobalNamespace::AvatarTweenController::PopHead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d3940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PopHead",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.PopHands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)()>(&::GlobalNamespace::AvatarTweenController::PopHands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d3948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PopHands",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.PopClothes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)()>(&::GlobalNamespace::AvatarTweenController::PopClothes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d3950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PopClothes",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.PopHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)(float_t)>(&::GlobalNamespace::AvatarTweenController::PopHead)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x20d37e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PopHead", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.PopHands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)(float_t)>(&::GlobalNamespace::AvatarTweenController::PopHands)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x20d38a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PopHands", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.PopClothes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)(float_t)>(&::GlobalNamespace::AvatarTweenController::PopClothes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x20d3840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PopClothes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.CreatePopTween
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tweening::Tween_1<float_t>* (::GlobalNamespace::AvatarTweenController::*)(::UnityEngine::Transform*, float_t)>(
    &::GlobalNamespace::AvatarTweenController::CreatePopTween)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x20d3958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "CreatePopTween", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.AppearAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::AvatarTweenController::*)()>(
    &::GlobalNamespace::AvatarTweenController::AppearAnimation)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x20d36bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(),
                                                                               "AppearAnimation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.AppearBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)()>(&::GlobalNamespace::AvatarTweenController::AppearBody)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x20d3ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "AppearBody",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.AppearHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)()>(&::GlobalNamespace::AvatarTweenController::AppearHead)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x20d3d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "AppearHead",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.AppearLeftHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)()>(&::GlobalNamespace::AvatarTweenController::AppearLeftHand)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x20d4010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(),
                                                                               "AppearLeftHand", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.AppearRightHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)()>(&::GlobalNamespace::AvatarTweenController::AppearRightHand)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x20d42c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(),
                                                                               "AppearRightHand", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.DisappearAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::AvatarTweenController::*)()>(
    &::GlobalNamespace::AvatarTweenController::DisappearAnimation)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x20d374c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(),
                                                                               "DisappearAnimation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController.StopAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)()>(&::GlobalNamespace::AvatarTweenController::StopAll)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x20d3600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "StopAll",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)()>(&::GlobalNamespace::AvatarTweenController::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x20d45a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController._AppearBody_b__54_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::AvatarTweenController::_AppearBody_b__54_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20d45fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearBody>b__54_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController._AppearBody_b__54_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::AvatarTweenController::_AppearBody_b__54_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20d4618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearBody>b__54_1", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController._AppearHead_b__55_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::AvatarTweenController::_AppearHead_b__55_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20d4634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearHead>b__55_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController._AppearHead_b__55_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::AvatarTweenController::_AppearHead_b__55_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20d4650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearHead>b__55_1", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController._AppearLeftHand_b__56_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::AvatarTweenController::_AppearLeftHand_b__56_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20d466c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearLeftHand>b__56_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController._AppearLeftHand_b__56_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::AvatarTweenController::_AppearLeftHand_b__56_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20d4688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearLeftHand>b__56_1", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController._AppearRightHand_b__57_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::AvatarTweenController::_AppearRightHand_b__57_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20d46a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearRightHand>b__57_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController._AppearRightHand_b__57_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::AvatarTweenController::_AppearRightHand_b__57_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20d46c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearRightHand>b__57_1", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController._DisappearAnimation_b__58_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::AvatarTweenController::_DisappearAnimation_b__58_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20d46dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<DisappearAnimation>b__58_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarTweenController._DisappearAnimation_b__58_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::AvatarTweenController::_DisappearAnimation_b__58_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20d46f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<DisappearAnimation>b__58_1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& GlobalNamespace::AvatarTweenController::__get__avatarTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::AvatarTweenController::__get__avatarTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarTransform;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__avatarTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::AvatarTweenController::__get__headParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headParent;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::AvatarTweenController::__get__headParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headParent;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__headParent(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::AvatarTweenController::__get__leftHandTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::AvatarTweenController::__get__leftHandTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandTransform;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__leftHandTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftHandTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::AvatarTweenController::__get__rightHandTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::AvatarTweenController::__get__rightHandTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandTransform;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__rightHandTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightHandTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::AvatarTweenController::__get__bodyTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::AvatarTweenController::__get__bodyTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyTransform;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__bodyTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bodyTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::AvatarTweenController::__get__headInnerTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headInnerTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::AvatarTweenController::__get__headInnerTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headInnerTransform;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__headInnerTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headInnerTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::AvatarTweenController::__get__leftHandInnerTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandInnerTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::AvatarTweenController::__get__leftHandInnerTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandInnerTransform;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__leftHandInnerTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftHandInnerTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::AvatarTweenController::__get__rightHandInnerTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandInnerTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::AvatarTweenController::__get__rightHandInnerTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandInnerTransform;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__rightHandInnerTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightHandInnerTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::AvatarTweenController::__get__bodyInnerTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyInnerTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::AvatarTweenController::__get__bodyInnerTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyInnerTransform;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__bodyInnerTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bodyInnerTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::AvatarTweenController::__get__popDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popDuration;
}
constexpr float_t const& GlobalNamespace::AvatarTweenController::__get__popDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popDuration;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__popDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____popDuration = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::AvatarTweenController::__get__popEaseType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popEaseType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::AvatarTweenController::__get__popEaseType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popEaseType;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__popEaseType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____popEaseType = value;
}
constexpr float_t& GlobalNamespace::AvatarTweenController::__get__headPopAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPopAmount;
}
constexpr float_t const& GlobalNamespace::AvatarTweenController::__get__headPopAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPopAmount;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__headPopAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headPopAmount = value;
}
constexpr float_t& GlobalNamespace::AvatarTweenController::__get__handsPopAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handsPopAmount;
}
constexpr float_t const& GlobalNamespace::AvatarTweenController::__get__handsPopAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handsPopAmount;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__handsPopAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handsPopAmount = value;
}
constexpr float_t& GlobalNamespace::AvatarTweenController::__get__clothesPopAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesPopAmount;
}
constexpr float_t const& GlobalNamespace::AvatarTweenController::__get__clothesPopAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesPopAmount;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__clothesPopAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clothesPopAmount = value;
}
constexpr float_t& GlobalNamespace::AvatarTweenController::__get__allPopAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allPopAmount;
}
constexpr float_t const& GlobalNamespace::AvatarTweenController::__get__allPopAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allPopAmount;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__allPopAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allPopAmount = value;
}
constexpr float_t& GlobalNamespace::AvatarTweenController::__get__appearDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearDuration;
}
constexpr float_t const& GlobalNamespace::AvatarTweenController::__get__appearDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearDuration;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__appearDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearDuration = value;
}
constexpr float_t& GlobalNamespace::AvatarTweenController::__get__appearSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearSpacing;
}
constexpr float_t const& GlobalNamespace::AvatarTweenController::__get__appearSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearSpacing;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__appearSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearSpacing = value;
}
constexpr float_t& GlobalNamespace::AvatarTweenController::__get__appearHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeight;
}
constexpr float_t const& GlobalNamespace::AvatarTweenController::__get__appearHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeight;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__appearHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearHeight = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AvatarTweenController::__get__squashFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____squashFactor;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AvatarTweenController::__get__squashFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____squashFactor;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__squashFactor(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____squashFactor = value;
}
constexpr float_t& GlobalNamespace::AvatarTweenController::__get__disappearDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearDuration;
}
constexpr float_t const& GlobalNamespace::AvatarTweenController::__get__disappearDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearDuration;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__disappearDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearDuration = value;
}
constexpr float_t& GlobalNamespace::AvatarTweenController::__get__disappearHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearHeight;
}
constexpr float_t const& GlobalNamespace::AvatarTweenController::__get__disappearHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearHeight;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__disappearHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearHeight = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AvatarTweenController::__get__disappearSquash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearSquash;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AvatarTweenController::__get__disappearSquash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearSquash;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__disappearSquash(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearSquash = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::AvatarTweenController::__get__disappearScaleEase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearScaleEase;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::AvatarTweenController::__get__disappearScaleEase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearScaleEase;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__disappearScaleEase(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearScaleEase = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::AvatarTweenController::__get__disappearPositionEase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearPositionEase;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::AvatarTweenController::__get__disappearPositionEase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearPositionEase;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__disappearPositionEase(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearPositionEase = value;
}
constexpr ::Tweening::TimeTweeningManager*& GlobalNamespace::AvatarTweenController::__get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& GlobalNamespace::AvatarTweenController::__get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__tweeningManager(::Tweening::TimeTweeningManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<float_t>*& GlobalNamespace::AvatarTweenController::__get__popHeadTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popHeadTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& GlobalNamespace::AvatarTweenController::__get__popHeadTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popHeadTween;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__popHeadTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____popHeadTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<float_t>*& GlobalNamespace::AvatarTweenController::__get__popLeftHandTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popLeftHandTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& GlobalNamespace::AvatarTweenController::__get__popLeftHandTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popLeftHandTween;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__popLeftHandTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____popLeftHandTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<float_t>*& GlobalNamespace::AvatarTweenController::__get__popRightHandTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popRightHandTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& GlobalNamespace::AvatarTweenController::__get__popRightHandTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popRightHandTween;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__popRightHandTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____popRightHandTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<float_t>*& GlobalNamespace::AvatarTweenController::__get__popClothesTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popClothesTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& GlobalNamespace::AvatarTweenController::__get__popClothesTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popClothesTween;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__popClothesTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____popClothesTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& GlobalNamespace::AvatarTweenController::__get__appearHeadPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeadPositionTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& GlobalNamespace::AvatarTweenController::__get__appearHeadPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeadPositionTween;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__appearHeadPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearHeadPositionTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& GlobalNamespace::AvatarTweenController::__get__appearHeadScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeadScaleTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& GlobalNamespace::AvatarTweenController::__get__appearHeadScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeadScaleTween;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__appearHeadScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearHeadScaleTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& GlobalNamespace::AvatarTweenController::__get__appearBodyPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearBodyPositionTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& GlobalNamespace::AvatarTweenController::__get__appearBodyPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearBodyPositionTween;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__appearBodyPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearBodyPositionTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& GlobalNamespace::AvatarTweenController::__get__appearBodyScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearBodyScaleTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& GlobalNamespace::AvatarTweenController::__get__appearBodyScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearBodyScaleTween;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__appearBodyScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearBodyScaleTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& GlobalNamespace::AvatarTweenController::__get__appearRightHandPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearRightHandPositionTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& GlobalNamespace::AvatarTweenController::__get__appearRightHandPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearRightHandPositionTween;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__appearRightHandPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearRightHandPositionTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& GlobalNamespace::AvatarTweenController::__get__appearRightHandScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearRightHandScaleTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& GlobalNamespace::AvatarTweenController::__get__appearRightHandScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearRightHandScaleTween;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__appearRightHandScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearRightHandScaleTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& GlobalNamespace::AvatarTweenController::__get__appearLeftHandPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearLeftHandPositionTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& GlobalNamespace::AvatarTweenController::__get__appearLeftHandPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearLeftHandPositionTween;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__appearLeftHandPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearLeftHandPositionTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& GlobalNamespace::AvatarTweenController::__get__appearLeftHandScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearLeftHandScaleTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& GlobalNamespace::AvatarTweenController::__get__appearLeftHandScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearLeftHandScaleTween;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__appearLeftHandScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearLeftHandScaleTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& GlobalNamespace::AvatarTweenController::__get__disappearScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearScaleTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& GlobalNamespace::AvatarTweenController::__get__disappearScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearScaleTween;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__disappearScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disappearScaleTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& GlobalNamespace::AvatarTweenController::__get__disappearPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearPositionTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const& GlobalNamespace::AvatarTweenController::__get__disappearPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearPositionTween;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__disappearPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disappearPositionTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AvatarTweenController::__get__avatarLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AvatarTweenController::__get__avatarLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarLocalPosition;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__avatarLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarLocalPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AvatarTweenController::__get__avatarLocalScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarLocalScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AvatarTweenController::__get__avatarLocalScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarLocalScale;
}
constexpr void GlobalNamespace::AvatarTweenController::__set__avatarLocalScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarLocalScale = value;
}
inline void GlobalNamespace::AvatarTweenController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarTweenController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarTweenController::PresentAvatar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PresentAvatar",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarTweenController::HideAvatar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "HideAvatar",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarTweenController::PopAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PopAll",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarTweenController::PopHead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PopHead",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarTweenController::PopHands() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PopHands",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarTweenController::PopClothes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PopClothes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarTweenController::PopHead(float_t popAmount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PopHead", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, popAmount);
}
inline void GlobalNamespace::AvatarTweenController::PopHands(float_t popAmount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PopHands", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, popAmount);
}
inline void GlobalNamespace::AvatarTweenController::PopClothes(float_t popAmount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "PopClothes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, popAmount);
}
inline ::Tweening::Tween_1<float_t>* GlobalNamespace::AvatarTweenController::CreatePopTween(::UnityEngine::Transform* partTransform, float_t popAmount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "CreatePopTween", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Tweening::Tween_1<float_t>*, false>(this, ___internal_method, partTransform, popAmount);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::AvatarTweenController::AppearAnimation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(),
                                                                             "AppearAnimation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarTweenController::AppearBody() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "AppearBody",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarTweenController::AppearHead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "AppearHead",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarTweenController::AppearLeftHand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "AppearLeftHand",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarTweenController::AppearRightHand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(),
                                                                             "AppearRightHand", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::AvatarTweenController::DisappearAnimation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(),
                                                                             "DisappearAnimation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarTweenController::StopAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "StopAll",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AvatarTweenController* GlobalNamespace::AvatarTweenController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AvatarTweenController*>());
}
inline void GlobalNamespace::AvatarTweenController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarTweenController::_AppearBody_b__54_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearBody>b__54_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void GlobalNamespace::AvatarTweenController::_AppearBody_b__54_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearBody>b__54_1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void GlobalNamespace::AvatarTweenController::_AppearHead_b__55_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearHead>b__55_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void GlobalNamespace::AvatarTweenController::_AppearHead_b__55_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearHead>b__55_1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void GlobalNamespace::AvatarTweenController::_AppearLeftHand_b__56_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearLeftHand>b__56_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void GlobalNamespace::AvatarTweenController::_AppearLeftHand_b__56_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearLeftHand>b__56_1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void GlobalNamespace::AvatarTweenController::_AppearRightHand_b__57_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearRightHand>b__57_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void GlobalNamespace::AvatarTweenController::_AppearRightHand_b__57_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<AppearRightHand>b__57_1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void GlobalNamespace::AvatarTweenController::_DisappearAnimation_b__58_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<DisappearAnimation>b__58_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void GlobalNamespace::AvatarTweenController::_DisappearAnimation_b__58_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarTweenController*>::get(), "<DisappearAnimation>b__58_1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AvatarTweenController::AvatarTweenController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
