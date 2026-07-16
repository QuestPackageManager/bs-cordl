#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementAnimationSystem.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementAnimationSystem_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__IValueAnimationUpdate_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementAnimationSystem.get_profilerMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerMarker (::UnityEngine::UIElements::VisualElementAnimationSystem::*)()>(
    &::UnityEngine::UIElements::VisualElementAnimationSystem::get_profilerMarker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6cc9e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementAnimationSystem.get_stylePropertyAnimationProfilerMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerMarker (*)()>(&::UnityEngine::UIElements::VisualElementAnimationSystem::get_stylePropertyAnimationProfilerMarker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6cc9eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(), { "get_stylePropertyAnimationProfilerMarker", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementAnimationSystem.UnregisterAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementAnimationSystem::*)(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*)>(
    &::UnityEngine::UIElements::VisualElementAnimationSystem::UnregisterAnimation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6cc9f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(),
                                                             { "UnregisterAnimation", {}, { ::i2c::type_of<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementAnimationSystem.UnregisterAnimations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementAnimationSystem::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*)>(&::UnityEngine::UIElements::VisualElementAnimationSystem::UnregisterAnimations)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6cc9f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(),
                            { "UnregisterAnimations", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementAnimationSystem.RegisterAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementAnimationSystem::*)(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*)>(
    &::UnityEngine::UIElements::VisualElementAnimationSystem::RegisterAnimation)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6cca0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(),
                                                             { "RegisterAnimation", {}, { ::i2c::type_of<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementAnimationSystem.RegisterAnimations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementAnimationSystem::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*)>(&::UnityEngine::UIElements::VisualElementAnimationSystem::RegisterAnimations)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6cca128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(),
                            { "RegisterAnimations", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementAnimationSystem.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementAnimationSystem::*)()>(&::UnityEngine::UIElements::VisualElementAnimationSystem::Update)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x6cca268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementAnimationSystem.OnVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementAnimationSystem::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::VisualElementAnimationSystem::OnVersionChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cca64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementAnimationSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementAnimationSystem::*)()>(&::UnityEngine::UIElements::VisualElementAnimationSystem::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6cca650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*&
UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_get_m_Animations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Animations;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* const&
UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_get_m_Animations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Animations;
}
constexpr void UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_set_m_Animations(
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Animations = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*&
UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_get_m_IterationList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IterationList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* const&
UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_get_m_IterationList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IterationList;
}
constexpr void UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_set_m_IterationList(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IterationList = value;
}
constexpr bool& UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_get_m_HasNewAnimations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasNewAnimations;
}
constexpr bool const& UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_get_m_HasNewAnimations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasNewAnimations;
}
constexpr void UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_set_m_HasNewAnimations(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasNewAnimations = value;
}
constexpr bool& UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_get_m_IterationListDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IterationListDirty;
}
constexpr bool const& UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_get_m_IterationListDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IterationListDirty;
}
constexpr void UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_set_m_IterationListDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IterationListDirty = value;
}
constexpr int64_t& UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_get_lastUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastUpdate;
}
constexpr int64_t const& UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_get_lastUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastUpdate;
}
constexpr void UnityEngine::UIElements::VisualElementAnimationSystem::__cordl_internal_set_lastUpdate(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastUpdate = value;
}
inline void UnityEngine::UIElements::VisualElementAnimationSystem::setStaticF_s_Description(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_Description", ::UnityEngine::UIElements::VisualElementAnimationSystem*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::VisualElementAnimationSystem::getStaticF_s_Description() {
  return ::cordl_internals::getStaticField<::StringW, "s_Description", ::UnityEngine::UIElements::VisualElementAnimationSystem*>();
}
inline void UnityEngine::UIElements::VisualElementAnimationSystem::setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::UnityEngine::UIElements::VisualElementAnimationSystem*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualElementAnimationSystem::getStaticF_s_ProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::UnityEngine::UIElements::VisualElementAnimationSystem*>();
}
inline void UnityEngine::UIElements::VisualElementAnimationSystem::setStaticF_s_StylePropertyAnimationDescription(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_StylePropertyAnimationDescription", ::UnityEngine::UIElements::VisualElementAnimationSystem*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::VisualElementAnimationSystem::getStaticF_s_StylePropertyAnimationDescription() {
  return ::cordl_internals::getStaticField<::StringW, "s_StylePropertyAnimationDescription", ::UnityEngine::UIElements::VisualElementAnimationSystem*>();
}
inline void UnityEngine::UIElements::VisualElementAnimationSystem::setStaticF_s_StylePropertyAnimationProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_StylePropertyAnimationProfilerMarker", ::UnityEngine::UIElements::VisualElementAnimationSystem*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualElementAnimationSystem::getStaticF_s_StylePropertyAnimationProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_StylePropertyAnimationProfilerMarker", ::UnityEngine::UIElements::VisualElementAnimationSystem*>();
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualElementAnimationSystem::get_profilerMarker() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker>(this, ___internal_method);
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualElementAnimationSystem::get_stylePropertyAnimationProfilerMarker() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(), { "get_stylePropertyAnimationProfilerMarker", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::VisualElementAnimationSystem::UnregisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate* anim) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(),
                                                           { "UnregisterAnimation", {}, { ::i2c::type_of<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anim);
}
inline void
UnityEngine::UIElements::VisualElementAnimationSystem::UnregisterAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* anims) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(),
                          { "UnregisterAnimations", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anims);
}
inline void UnityEngine::UIElements::VisualElementAnimationSystem::RegisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate* anim) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(),
                                                           { "RegisterAnimation", {}, { ::i2c::type_of<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anim);
}
inline void UnityEngine::UIElements::VisualElementAnimationSystem::RegisterAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* anims) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(),
                                       { "RegisterAnimations", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anims);
}
inline void UnityEngine::UIElements::VisualElementAnimationSystem::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualElementAnimationSystem::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::VisualElementAnimationSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementAnimationSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElementAnimationSystem* UnityEngine::UIElements::VisualElementAnimationSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualElementAnimationSystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementAnimationSystem::VisualElementAnimationSystem() {}
