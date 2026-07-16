#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/BoundsIntPropertyBag.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "UnityEngine/zzzz__BoundsInt_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "Unity/Properties/Internal/zzzz__BoundsIntPropertyBag_def.hpp"
#include "Unity/Properties/Internal/zzzz__BoundsIntPropertyBag_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::*)()>(
    &::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb0f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::*)()>(
    &::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb0f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::*)(::by_ref<::UnityEngine::BoundsInt>)>(
    &::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::GetValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bb0f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::*)(::by_ref<::UnityEngine::BoundsInt>, ::UnityEngine::Vector3Int)>(
    &::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::SetValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bb0f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::*)()>(
    &::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb0ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::GetValue(::by_ref<::UnityEngine::BoundsInt> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::SetValue(::by_ref<::UnityEngine::BoundsInt> container, ::UnityEngine::Vector3Int value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty* Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty::BoundsIntPropertyBag_PositionProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::*)()>(
    &::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb0fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::*)()>(
    &::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb0fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::*)(::by_ref<::UnityEngine::BoundsInt>)>(
    &::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::GetValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bb0ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::*)(::by_ref<::UnityEngine::BoundsInt>, ::UnityEngine::Vector3Int)>(
    &::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::SetValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bb0ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::*)()>(
    &::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb0f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::GetValue(::by_ref<::UnityEngine::BoundsInt> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::SetValue(::by_ref<::UnityEngine::BoundsInt> container, ::UnityEngine::Vector3Int value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty* Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty::BoundsIntPropertyBag_SizeProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::BoundsIntPropertyBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::BoundsIntPropertyBag::*)()>(&::Unity::Properties::Internal::BoundsIntPropertyBag::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6bafb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::BoundsIntPropertyBag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::BoundsIntPropertyBag*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::BoundsIntPropertyBag* Unity::Properties::Internal::BoundsIntPropertyBag::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::BoundsIntPropertyBag*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::BoundsIntPropertyBag::BoundsIntPropertyBag() {}
