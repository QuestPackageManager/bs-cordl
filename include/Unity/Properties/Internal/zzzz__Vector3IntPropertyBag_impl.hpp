#pragma once
// IWYU pragma private; include "Unity\Properties\Internal\Vector3IntPropertyBag.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "Unity/Properties/Internal/zzzz__Vector3IntPropertyBag_def.hpp"
#include "Unity/Properties/Internal/zzzz__Vector3IntPropertyBag_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::*)()>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb3d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::*)()>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb3d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::*)(::by_ref<::UnityEngine::Vector3Int>)>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb3d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::*)(::by_ref<::UnityEngine::Vector3Int>, int32_t)>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb3d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::*)()>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb3c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::GetValue(::by_ref<::UnityEngine::Vector3Int> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::SetValue(::by_ref<::UnityEngine::Vector3Int> container, int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty* Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty::Vector3IntPropertyBag_XProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::*)()>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb3d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::*)()>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb3ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::*)(::by_ref<::UnityEngine::Vector3Int>)>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb3de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::*)(::by_ref<::UnityEngine::Vector3Int>, int32_t)>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb3dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::*)()>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb3cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::GetValue(::by_ref<::UnityEngine::Vector3Int> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::SetValue(::by_ref<::UnityEngine::Vector3Int> container, int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty* Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty::Vector3IntPropertyBag_YProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::*)()>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb3df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::*)()>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb3e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::*)(::by_ref<::UnityEngine::Vector3Int>)>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb3e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::*)(::by_ref<::UnityEngine::Vector3Int>, int32_t)>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb3e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::*)()>(
    &::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb3d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::GetValue(::by_ref<::UnityEngine::Vector3Int> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::SetValue(::by_ref<::UnityEngine::Vector3Int> container, int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty* Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty::Vector3IntPropertyBag_ZProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3IntPropertyBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector3IntPropertyBag::*)()>(&::Unity::Properties::Internal::Vector3IntPropertyBag::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6bb29ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::Vector3IntPropertyBag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3IntPropertyBag*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::Vector3IntPropertyBag* Unity::Properties::Internal::Vector3IntPropertyBag::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::Vector3IntPropertyBag*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::Vector3IntPropertyBag::Vector3IntPropertyBag() {}
