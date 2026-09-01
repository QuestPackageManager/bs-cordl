#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\VolumeProfile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile___c::*)()>(&::UnityEngine::Rendering::VolumeProfile___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67cf054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile___c._OnEnable_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeProfile___c::*)(::UnityEngine::Rendering::VolumeComponent*)>(
    &::UnityEngine::Rendering::VolumeProfile___c::_OnEnable_b__2_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x67cf058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile___c*>(),
                                                                                           { "<OnEnable>b__2_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeComponent*>() } })));
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
inline void UnityEngine::Rendering::VolumeProfile___c::setStaticF___9__2_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*, "<>9__2_0", ::UnityEngine::Rendering::VolumeProfile___c*>(
      std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* UnityEngine::Rendering::VolumeProfile___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*, "<>9__2_0", ::UnityEngine::Rendering::VolumeProfile___c*>();
}
inline void UnityEngine::Rendering::VolumeProfile___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::VolumeProfile___c::_OnEnable_b__2_0(::UnityEngine::Rendering::VolumeComponent* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile___c*>(), { "<OnEnable>b__2_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeComponent*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::VolumeProfile___c* UnityEngine::Rendering::VolumeProfile___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeProfile___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeProfile___c::VolumeProfile___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::OnEnable)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x67ce5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::OnDisable)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x67ce6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67ce7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeComponent> (::UnityEngine::Rendering::VolumeProfile::*)(::System::Type*, bool)>(
    &::UnityEngine::Rendering::VolumeProfile::Add)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x67ce7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Add", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile::*)(::System::Type*)>(&::UnityEngine::Rendering::VolumeProfile::Remove)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x67cea9c;

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
  constexpr static std::size_t addrs = 0x67ce954;

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
  constexpr static std::size_t addrs = 0x67ceba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "HasSubclassOf", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::GetHashCode)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x67cecf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { ::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.GetComponentListHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::GetComponentListHashCode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x67ceda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "GetComponentListHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile.Sanitize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::Sanitize)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x67cee6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "Sanitize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeProfile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeProfile::*)()>(&::UnityEngine::Rendering::VolumeProfile::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x67cef7c;

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
constexpr bool& UnityEngine::Rendering::VolumeProfile::__cordl_internal_get_isDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDirty;
}
constexpr bool const& UnityEngine::Rendering::VolumeProfile::__cordl_internal_get_isDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDirty;
}
constexpr void UnityEngine::Rendering::VolumeProfile::__cordl_internal_set_isDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDirty = value;
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
template <typename T> inline T UnityEngine::Rendering::VolumeProfile::Add(bool overrides) {
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
template <typename T> inline void UnityEngine::Rendering::VolumeProfile::Remove() {
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
template <typename T> inline bool UnityEngine::Rendering::VolumeProfile::Has() {
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
template <typename T> inline bool UnityEngine::Rendering::VolumeProfile::TryGet(::by_ref<T> component) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "TryGet", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
template <typename T> inline bool UnityEngine::Rendering::VolumeProfile::TryGet(::System::Type* type, ::by_ref<T> component) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "TryGet", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, component);
}
template <typename T> inline bool UnityEngine::Rendering::VolumeProfile::TryGetSubclassOf(::System::Type* type, ::by_ref<T> component) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(),
                                                           { "TryGetSubclassOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, component);
}
template <typename T> inline bool UnityEngine::Rendering::VolumeProfile::TryGetAllSubclassOf(::System::Type* type, ::System::Collections::Generic::List_1<T>* result) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(),
                                       { "TryGetAllSubclassOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, result);
}
inline int32_t UnityEngine::Rendering::VolumeProfile::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::VolumeProfile::GetComponentListHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeProfile*>(), { "GetComponentListHashCode", {}, {} })));
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
