#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsTableView_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOffsetPositionByLocalPlayerPosition_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsTableView_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsTableCell_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::*)()>(
    &::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a31f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0._StartAnimation_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::*)(::UnityEngine::Vector2)>(
    &::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::_StartAnimation_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21a33cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0*>::get(), "<StartAnimation>b__0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0._StartAnimation_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::*)(float_t)>(
    &::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::_StartAnimation_b__2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21a33e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0*>::get(), "<StartAnimation>b__2",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RectTransform*& GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::__get_rectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rectTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::__get_rectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rectTransform;
}
constexpr void GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::__set_rectTransform(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerResultsTableCell*& GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::__get_cell() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cell;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsTableCell*> const& GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::__get_cell() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cell;
}
constexpr void GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::__set_cell(::GlobalNamespace::MultiplayerResultsTableCell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cell)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0* GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0*>());
}
inline void GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::_StartAnimation_b__0(::UnityEngine::Vector2 val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0*>::get(), "<StartAnimation>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::_StartAnimation_b__2(float_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0*>::get(), "<StartAnimation>b__2",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_0::__MultiplayerResultsTableView____c__DisplayClass30_0() {}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1::*)()>(
    &::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a3200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1._StartAnimation_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1::*)(::UnityEngine::Vector2)>(
    &::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1::_StartAnimation_b__3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21a3400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1*>::get(), "<StartAnimation>b__3",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RectTransform*& GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1::__get_winnerRectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___winnerRectTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1::__get_winnerRectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___winnerRectTransform;
}
constexpr void GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1::__set_winnerRectTransform(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___winnerRectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1* GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1*>());
}
inline void GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1::_StartAnimation_b__3(::UnityEngine::Vector2 val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1*>::get(), "<StartAnimation>b__3",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerResultsTableView____c__DisplayClass30_1::__MultiplayerResultsTableView____c__DisplayClass30_1() {}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::*)(int32_t)>(
    &::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21a3280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::*)()>(
    &::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21a341c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::*)()>(
    &::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::MoveNext)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x21a3420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::*)()>(
    &::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a3514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::*)()>(
    &::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x21a351c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::*)()>(
    &::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a355c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__get_delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delay;
}
constexpr float_t const& GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__get_delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delay;
}
constexpr void GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__set_delay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delay = value;
}
constexpr ::GlobalNamespace::MultiplayerResultsTableView*& GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsTableView*> const&
GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__set___4__this(::GlobalNamespace::MultiplayerResultsTableView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*
GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*>(__1__state));
}
inline void GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31() {}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::*)(int32_t)>(
    &::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21a3320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::*)()>(
    &::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21a3564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::*)()>(
    &::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::MoveNext)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x21a3568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32*>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::*)()>(
    &::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a362c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::*)()>(
    &::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x21a3634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::*)()>(
    &::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a3674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__get_delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delay;
}
constexpr float_t const& GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__get_delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delay;
}
constexpr void GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__set_delay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delay = value;
}
constexpr ::GlobalNamespace::MultiplayerResultsTableView*& GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsTableView*> const&
GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__set___4__this(::GlobalNamespace::MultiplayerResultsTableView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32* GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32*>(__1__state));
}
inline void GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.CellSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerResultsTableView::*)()>(
    &::GlobalNamespace::MultiplayerResultsTableView::CellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a1f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(),
                                                                               "CellSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.NumberOfCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerResultsTableView::*)()>(
    &::GlobalNamespace::MultiplayerResultsTableView::NumberOfCells)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21a1fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(),
                                                                               "NumberOfCells", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableView::*)()>(&::GlobalNamespace::MultiplayerResultsTableView::Awake)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21a200c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableView::*)()>(
    &::GlobalNamespace::MultiplayerResultsTableView::OnDestroy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21a2068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.CellForIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (::GlobalNamespace::MultiplayerResultsTableView::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::MultiplayerResultsTableView::CellForIdx)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x21a20f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), "CellForIdx", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableView::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*)>(&::GlobalNamespace::MultiplayerResultsTableView::SetData)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x21a2548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), "SetData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.StartAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerResultsTableView::*)()>(
    &::GlobalNamespace::MultiplayerResultsTableView::StartAnimation)> {
  constexpr static std::size_t size = 0xa10;
  constexpr static std::size_t addrs = 0x21a27e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(),
                                                                               "StartAnimation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.PlayRandomRowSlideInSound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MultiplayerResultsTableView::*)(float_t)>(
    &::GlobalNamespace::MultiplayerResultsTableView::PlayRandomRowSlideInSound)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21a3208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), "PlayRandomRowSlideInSound",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.PlayAvatarSlideInSound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MultiplayerResultsTableView::*)(float_t)>(
    &::GlobalNamespace::MultiplayerResultsTableView::PlayAvatarSlideInSound)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21a32a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), "PlayAvatarSlideInSound",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableView::*)()>(&::GlobalNamespace::MultiplayerResultsTableView::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21a3348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView._StartAnimation_b__30_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableView::*)()>(
    &::GlobalNamespace::MultiplayerResultsTableView::_StartAnimation_b__30_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21a3364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(),
                                                                               "<StartAnimation>b__30_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView._StartAnimation_b__30_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableView::*)()>(
    &::GlobalNamespace::MultiplayerResultsTableView::_StartAnimation_b__30_4)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21a338c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(),
                                                                               "<StartAnimation>b__30_4", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView._StartAnimation_b__30_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableView::*)(float_t)>(
    &::GlobalNamespace::MultiplayerResultsTableView::_StartAnimation_b__30_5)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21a33b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), "<StartAnimation>b__30_5",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
constexpr GlobalNamespace::MultiplayerResultsTableView::operator ::HMUI::__TableView__IDataSource*() noexcept {
  return static_cast<::HMUI::__TableView__IDataSource*>(static_cast<void*>(this));
}
constexpr ::HMUI::TableView*& GlobalNamespace::MultiplayerResultsTableView::__get__tableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> const& GlobalNamespace::MultiplayerResultsTableView::__get__tableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__tableView(::HMUI::TableView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RectTransform*& GlobalNamespace::MultiplayerResultsTableView::__get__tableViewRectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableViewRectTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& GlobalNamespace::MultiplayerResultsTableView::__get__tableViewRectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableViewRectTransform;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__tableViewRectTransform(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableViewRectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerResultsTableCell*& GlobalNamespace::MultiplayerResultsTableView::__get__winnerTableCell() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____winnerTableCell;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsTableCell*> const& GlobalNamespace::MultiplayerResultsTableView::__get__winnerTableCell() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____winnerTableCell;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__winnerTableCell(::GlobalNamespace::MultiplayerResultsTableCell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____winnerTableCell)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerResultsTableCell*& GlobalNamespace::MultiplayerResultsTableView::__get__cellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsTableCell*> const& GlobalNamespace::MultiplayerResultsTableView::__get__cellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__cellPrefab(::GlobalNamespace::MultiplayerResultsTableCell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerResultsTableView::__get__startRowXPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startRowXPosition;
}
constexpr float_t const& GlobalNamespace::MultiplayerResultsTableView::__get__startRowXPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startRowXPosition;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__startRowXPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startRowXPosition = value;
}
constexpr float_t& GlobalNamespace::MultiplayerResultsTableView::__get__rowHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowHeight;
}
constexpr float_t const& GlobalNamespace::MultiplayerResultsTableView::__get__rowHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowHeight;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__rowHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowHeight = value;
}
constexpr float_t& GlobalNamespace::MultiplayerResultsTableView::__get__rowXOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowXOffset;
}
constexpr float_t const& GlobalNamespace::MultiplayerResultsTableView::__get__rowXOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowXOffset;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__rowXOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowXOffset = value;
}
constexpr float_t& GlobalNamespace::MultiplayerResultsTableView::__get__animationDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerResultsTableView::__get__animationDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationDuration;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__animationDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animationDuration = value;
}
constexpr float_t& GlobalNamespace::MultiplayerResultsTableView::__get__animationSeparationTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationSeparationTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerResultsTableView::__get__animationSeparationTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationSeparationTime;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__animationSeparationTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animationSeparationTime = value;
}
constexpr float_t& GlobalNamespace::MultiplayerResultsTableView::__get__winnerAnimationDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____winnerAnimationDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerResultsTableView::__get__winnerAnimationDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____winnerAnimationDuration;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__winnerAnimationDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____winnerAnimationDuration = value;
}
constexpr float_t& GlobalNamespace::MultiplayerResultsTableView::__get__duelTablePosXOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duelTablePosXOffset;
}
constexpr float_t const& GlobalNamespace::MultiplayerResultsTableView::__get__duelTablePosXOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duelTablePosXOffset;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__duelTablePosXOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duelTablePosXOffset = value;
}
constexpr ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*& GlobalNamespace::MultiplayerResultsTableView::__get__multiplayerOffsetByLocalPlayerPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerOffsetByLocalPlayerPosition;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*> const&
GlobalNamespace::MultiplayerResultsTableView::__get__multiplayerOffsetByLocalPlayerPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerOffsetByLocalPlayerPosition;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__multiplayerOffsetByLocalPlayerPosition(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerOffsetByLocalPlayerPosition)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AudioSource*& GlobalNamespace::MultiplayerResultsTableView::__get__outroSfxAudioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outroSfxAudioSource;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& GlobalNamespace::MultiplayerResultsTableView::__get__outroSfxAudioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outroSfxAudioSource;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__outroSfxAudioSource(::UnityEngine::AudioSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outroSfxAudioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& GlobalNamespace::MultiplayerResultsTableView::__get__rowSlideAudioClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowSlideAudioClips;
}
constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& GlobalNamespace::MultiplayerResultsTableView::__get__rowSlideAudioClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowSlideAudioClips;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__rowSlideAudioClips(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rowSlideAudioClips)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AudioClip*& GlobalNamespace::MultiplayerResultsTableView::__get__avatarSlideAudioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSlideAudioClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& GlobalNamespace::MultiplayerResultsTableView::__get__avatarSlideAudioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSlideAudioClip;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__avatarSlideAudioClip(::UnityEngine::AudioClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarSlideAudioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::TimeTweeningManager*& GlobalNamespace::MultiplayerResultsTableView::__get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& GlobalNamespace::MultiplayerResultsTableView::__get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__tweeningManager(::Tweening::TimeTweeningManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& GlobalNamespace::MultiplayerResultsTableView::__get__layoutProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& GlobalNamespace::MultiplayerResultsTableView::__get__layoutProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layoutProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::MultiplayerResultsTableView::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& GlobalNamespace::MultiplayerResultsTableView::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*& GlobalNamespace::MultiplayerResultsTableView::__get__dataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*> const&
GlobalNamespace::MultiplayerResultsTableView::__get__dataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataList;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__dataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MultiplayerResultsTableView::__get__positionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MultiplayerResultsTableView::__get__positionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__positionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionOffset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MultiplayerResultsTableView::__get__rotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MultiplayerResultsTableView::__get__rotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationOffset;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__rotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MultiplayerResultsTableView::__get__lastParentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MultiplayerResultsTableView::__get__lastParentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentPosition;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__lastParentPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastParentPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MultiplayerResultsTableView::__get__lastParentRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MultiplayerResultsTableView::__get__lastParentRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentRotation;
}
constexpr void GlobalNamespace::MultiplayerResultsTableView::__set__lastParentRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastParentRotation = value;
}
inline float_t GlobalNamespace::MultiplayerResultsTableView::CellSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), "CellSize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MultiplayerResultsTableView::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(),
                                                                             "NumberOfCells", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerResultsTableView::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerResultsTableView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::TableCell* GlobalNamespace::MultiplayerResultsTableView::CellForIdx(::HMUI::TableView* tableView, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), "CellForIdx", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell*, false>(this, ___internal_method, tableView, idx);
}
inline void GlobalNamespace::MultiplayerResultsTableView::SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* dataList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), "SetData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataList);
}
inline float_t GlobalNamespace::MultiplayerResultsTableView::StartAnimation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(),
                                                                             "StartAnimation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MultiplayerResultsTableView::PlayRandomRowSlideInSound(float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), "PlayRandomRowSlideInSound",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, delay);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MultiplayerResultsTableView::PlayAvatarSlideInSound(float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), "PlayAvatarSlideInSound",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, delay);
}
inline ::GlobalNamespace::MultiplayerResultsTableView* GlobalNamespace::MultiplayerResultsTableView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerResultsTableView*>());
}
inline void GlobalNamespace::MultiplayerResultsTableView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerResultsTableView::_StartAnimation_b__30_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(),
                                                                             "<StartAnimation>b__30_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerResultsTableView::_StartAnimation_b__30_4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(),
                                                                             "<StartAnimation>b__30_4", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerResultsTableView::_StartAnimation_b__30_5(float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView*>::get(), "<StartAnimation>b__30_5",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerResultsTableView::MultiplayerResultsTableView() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
