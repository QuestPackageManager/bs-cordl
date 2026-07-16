#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/Vector3PropertyBag.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Properties/Internal/zzzz__Vector3PropertyBag_def.hpp"
#include "Unity/Properties/Internal/zzzz__Vector3PropertyBag_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_XProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::Vector3PropertyBag_XProperty::*)()>(
    &::Unity::Properties::Internal::Vector3PropertyBag_XProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb025c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_XProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::Vector3PropertyBag_XProperty::*)()>(
    &::Unity::Properties::Internal::Vector3PropertyBag_XProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb02a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_XProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Properties::Internal::Vector3PropertyBag_XProperty::*)(::by_ref<::UnityEngine::Vector3>)>(
    &::Unity::Properties::Internal::Vector3PropertyBag_XProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb02a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_XProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector3PropertyBag_XProperty::*)(::by_ref<::UnityEngine::Vector3>, float_t)>(
    &::Unity::Properties::Internal::Vector3PropertyBag_XProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb02b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_XProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector3PropertyBag_XProperty::*)()>(&::Unity::Properties::Internal::Vector3PropertyBag_XProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb01a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::Vector3PropertyBag_XProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::Vector3PropertyBag_XProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Properties::Internal::Vector3PropertyBag_XProperty::GetValue(::by_ref<::UnityEngine::Vector3> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::Vector3PropertyBag_XProperty::SetValue(::by_ref<::UnityEngine::Vector3> container, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::Vector3PropertyBag_XProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::Vector3PropertyBag_XProperty* Unity::Properties::Internal::Vector3PropertyBag_XProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::Vector3PropertyBag_XProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::Vector3PropertyBag_XProperty::Vector3PropertyBag_XProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_YProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::Vector3PropertyBag_YProperty::*)()>(
    &::Unity::Properties::Internal::Vector3PropertyBag_YProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb02b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_YProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::Vector3PropertyBag_YProperty::*)()>(
    &::Unity::Properties::Internal::Vector3PropertyBag_YProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb02fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_YProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Properties::Internal::Vector3PropertyBag_YProperty::*)(::by_ref<::UnityEngine::Vector3>)>(
    &::Unity::Properties::Internal::Vector3PropertyBag_YProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb0304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_YProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector3PropertyBag_YProperty::*)(::by_ref<::UnityEngine::Vector3>, float_t)>(
    &::Unity::Properties::Internal::Vector3PropertyBag_YProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb030c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_YProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector3PropertyBag_YProperty::*)()>(&::Unity::Properties::Internal::Vector3PropertyBag_YProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb01e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::Vector3PropertyBag_YProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::Vector3PropertyBag_YProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Properties::Internal::Vector3PropertyBag_YProperty::GetValue(::by_ref<::UnityEngine::Vector3> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::Vector3PropertyBag_YProperty::SetValue(::by_ref<::UnityEngine::Vector3> container, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::Vector3PropertyBag_YProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::Vector3PropertyBag_YProperty* Unity::Properties::Internal::Vector3PropertyBag_YProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::Vector3PropertyBag_YProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::Vector3PropertyBag_YProperty::Vector3PropertyBag_YProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_ZProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::Vector3PropertyBag_ZProperty::*)()>(
    &::Unity::Properties::Internal::Vector3PropertyBag_ZProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb0314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_ZProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::Vector3PropertyBag_ZProperty::*)()>(
    &::Unity::Properties::Internal::Vector3PropertyBag_ZProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb0358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_ZProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Properties::Internal::Vector3PropertyBag_ZProperty::*)(::by_ref<::UnityEngine::Vector3>)>(
    &::Unity::Properties::Internal::Vector3PropertyBag_ZProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb0360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_ZProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector3PropertyBag_ZProperty::*)(::by_ref<::UnityEngine::Vector3>, float_t)>(
    &::Unity::Properties::Internal::Vector3PropertyBag_ZProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb0368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag_ZProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector3PropertyBag_ZProperty::*)()>(&::Unity::Properties::Internal::Vector3PropertyBag_ZProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb0220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::Vector3PropertyBag_ZProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::Vector3PropertyBag_ZProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Properties::Internal::Vector3PropertyBag_ZProperty::GetValue(::by_ref<::UnityEngine::Vector3> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::Vector3PropertyBag_ZProperty::SetValue(::by_ref<::UnityEngine::Vector3> container, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::Vector3PropertyBag_ZProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::Vector3PropertyBag_ZProperty* Unity::Properties::Internal::Vector3PropertyBag_ZProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::Vector3PropertyBag_ZProperty::Vector3PropertyBag_ZProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::Vector3PropertyBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::Vector3PropertyBag::*)()>(&::Unity::Properties::Internal::Vector3PropertyBag::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6baef6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::Vector3PropertyBag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::Vector3PropertyBag*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::Vector3PropertyBag* Unity::Properties::Internal::Vector3PropertyBag::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::Vector3PropertyBag*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::Vector3PropertyBag::Vector3PropertyBag() {}
