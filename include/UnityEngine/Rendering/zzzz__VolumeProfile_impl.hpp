#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeProfile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::VolumeProfile_DirtyState::VolumeProfile_DirtyState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeProfile_DirtyState::VolumeProfile_DirtyState() {}
constexpr ::UnityEngine::Rendering::VolumeProfile_DirtyState UnityEngine::Rendering::VolumeProfile_DirtyState::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::VolumeProfile_DirtyState UnityEngine::Rendering::VolumeProfile_DirtyState::DirtyByComponentChange{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::VolumeProfile_DirtyState UnityEngine::Rendering::VolumeProfile_DirtyState::DirtyByProfileReset{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::VolumeProfile_DirtyState UnityEngine::Rendering::VolumeProfile_DirtyState::Other{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile___c::*)()>(&::UnityEngine::Rendering::VolumeProfile___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bed0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile___c._OnEnable_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeProfile___c::*)(::UnityEngine::Rendering::VolumeComponent*)>(
    &::UnityEngine::Rendering::VolumeProfile___c::_OnEnable_b__6_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6bed0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile___c*>(),
                                                                                           { "<OnEnable>b__6_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeComponent*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::VolumeProfile___c::setStaticF___9(::UnityEngine::Rendering::VolumeProfile___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::VolumeProfile___c*, "<>9", ::UnityEngine::Rendering::VolumeProfile___c*>(
      std::forward<::UnityEngine::Rendering::VolumeProfile___c*>(value));
}
inline ::UnityEngine::Rendering::VolumeProfile___c* UnityEngine::Rendering::VolumeProfile___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::VolumeProfile___c*, "<>9", ::UnityEngine::Rendering::VolumeProfile___c*>();
}
inline void UnityEngine::Rendering::VolumeProfile___c::setStaticF___9__6_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*, "<>9__6_0", ::UnityEngine::Rendering::VolumeProfile___c*>(
      std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* UnityEngine::Rendering::VolumeProfile___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*, "<>9__6_0", ::UnityEngine::Rendering::VolumeProfile___c*>();
}
inline void UnityEngine::Rendering::VolumeProfile___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::VolumeProfile___c::_OnEnable_b__6_0(::UnityEngine::Rendering::VolumeComponent* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile___c*>(), { "<OnEnable>b__6_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeComponent*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::VolumeProfile___c* UnityEngine::Rendering::VolumeProfile___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeProfile___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeProfile___c::VolumeProfile___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.get_isDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::get_isDirty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bec5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "get_isDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.set_isDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile::*)(bool)>(&::UnityEngine::Rendering::VolumeProfile::set_isDirty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6bec5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "set_isDirty", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::OnEnable)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6bec5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::OnDisable)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6bec704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bec7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeComponent> (::UnityEngine::Rendering::VolumeProfile::*)(::System::Type*, bool)>(
    &::UnityEngine::Rendering::VolumeProfile::Add)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6bec808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Add", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile::*)(::System::Type*)>(&::UnityEngine::Rendering::VolumeProfile::Remove)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6becad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Remove", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.Has
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeProfile::*)(::System::Type*)>(&::UnityEngine::Rendering::VolumeProfile::Has)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6bec990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Has", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.HasSubclassOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeProfile::*)(::System::Type*)>(&::UnityEngine::Rendering::VolumeProfile::HasSubclassOf)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6becbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "HasSubclassOf", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.GetComponentListHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::GetComponentListHashCode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6becd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "GetComponentListHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.GetStateHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::GetStateHash)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6bece08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "GetStateHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.Sanitize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::Sanitize)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6becf10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Sanitize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6bed020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*& UnityEngine::Rendering::VolumeProfile::__cordl_internal_get_components() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___components;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* const& UnityEngine::Rendering::VolumeProfile::__cordl_internal_get_components() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___components;
}
constexpr void UnityEngine::Rendering::VolumeProfile::__cordl_internal_set_components(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___components = value;
}
constexpr ::UnityEngine::Rendering::VolumeProfile_DirtyState& UnityEngine::Rendering::VolumeProfile::__cordl_internal_get_dirtyState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtyState;
}
constexpr ::UnityEngine::Rendering::VolumeProfile_DirtyState const& UnityEngine::Rendering::VolumeProfile::__cordl_internal_get_dirtyState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtyState;
}
constexpr void UnityEngine::Rendering::VolumeProfile::__cordl_internal_set_dirtyState(::UnityEngine::Rendering::VolumeProfile_DirtyState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dirtyState = value;
}
inline bool UnityEngine::Rendering::VolumeProfile::get_isDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "get_isDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeProfile::set_isDirty(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "set_isDirty", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::VolumeProfile::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeProfile::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeProfile::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
inline T UnityEngine::Rendering::VolumeProfile::Add(bool overrides) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Add", { ::i2c::class_of<T>() }, { ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, overrides);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> UnityEngine::Rendering::VolumeProfile::Add(::System::Type* type, bool overrides) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Add", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeComponent>>(this, ___internal_method, type, overrides);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
inline void UnityEngine::Rendering::VolumeProfile::Remove() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Remove", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeProfile::Remove(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Remove", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
inline bool UnityEngine::Rendering::VolumeProfile::Has() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Has", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::VolumeProfile::Has(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Has", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline bool UnityEngine::Rendering::VolumeProfile::HasSubclassOf(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "HasSubclassOf", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
inline bool UnityEngine::Rendering::VolumeProfile::TryGet(::by_ref<T> component) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "TryGet", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
inline bool UnityEngine::Rendering::VolumeProfile::TryGet(::System::Type* type, ::by_ref<T> component) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "TryGet", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, component);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
inline bool UnityEngine::Rendering::VolumeProfile::TryGetSubclassOf(::System::Type* type, ::by_ref<T> component) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(),
                                                           { "TryGetSubclassOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, component);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
inline bool UnityEngine::Rendering::VolumeProfile::TryGetAllSubclassOf(::System::Type* type, ::System::Collections::Generic::List_1<T>* result) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(),
                                       { "TryGetAllSubclassOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, result);
}
inline int32_t UnityEngine::Rendering::VolumeProfile::GetComponentListHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "GetComponentListHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::VolumeProfile::GetStateHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "GetStateHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeProfile::Sanitize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Sanitize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::VolumeProfile::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::VolumeProfile* UnityEngine::Rendering::VolumeProfile::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeProfile*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeProfile::VolumeProfile() {}
