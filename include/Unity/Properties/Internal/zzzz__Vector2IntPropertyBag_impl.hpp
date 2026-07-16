#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/Vector2IntPropertyBag.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "Unity/Properties/Internal/zzzz__Vector2IntPropertyBag_def.hpp"
#include "Unity/Properties/Internal/zzzz__Vector2IntPropertyBag_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::*)()>(
    &::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb0648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::*)()>(
    &::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb068c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::*)(::by_ref<::UnityEngine::Vector2Int>)>(
    &::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb0694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::*)(::by_ref<::UnityEngine::Vector2Int>, int32_t)>(
    &::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb069c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::*)()>(
    &::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb05d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::GetValue(::by_ref<::UnityEngine::Vector2Int> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::SetValue(::by_ref<::UnityEngine::Vector2Int> container, int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty* Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty::Vector2IntPropertyBag_XProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::*)()>(
    &::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb06a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::*)()>(
    &::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb06e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::*)(::by_ref<::UnityEngine::Vector2Int>)>(
    &::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb06f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::*)(::by_ref<::UnityEngine::Vector2Int>, int32_t)>(
    &::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb06f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::*)()>(
    &::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb060c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::GetValue(::by_ref<::UnityEngine::Vector2Int> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::SetValue(::by_ref<::UnityEngine::Vector2Int> container, int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty* Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty::Vector2IntPropertyBag_YProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::Vector2IntPropertyBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector2IntPropertyBag::*)()>(&::Unity::Properties::Internal::Vector2IntPropertyBag::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6baf318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::Vector2IntPropertyBag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector2IntPropertyBag*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::Vector2IntPropertyBag* Unity::Properties::Internal::Vector2IntPropertyBag::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::Vector2IntPropertyBag*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::Vector2IntPropertyBag::Vector2IntPropertyBag() {}
