#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/RectIntPropertyBag.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "UnityEngine/zzzz__RectInt_impl.hpp"
#include "Unity/Properties/Internal/zzzz__RectIntPropertyBag_def.hpp"
#include "Unity/Properties/Internal/zzzz__RectIntPropertyBag_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_XProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::RectIntPropertyBag_XProperty::*)()>(
    &::Unity::Properties::Internal::RectIntPropertyBag_XProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x70127cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_XProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::RectIntPropertyBag_XProperty::*)()>(
    &::Unity::Properties::Internal::RectIntPropertyBag_XProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7012810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_XProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::Internal::RectIntPropertyBag_XProperty::*)(::by_ref<::UnityEngine::RectInt>)>(
    &::Unity::Properties::Internal::RectIntPropertyBag_XProperty::GetValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x7012818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_XProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::RectIntPropertyBag_XProperty::*)(::by_ref<::UnityEngine::RectInt>, int32_t)>(
    &::Unity::Properties::Internal::RectIntPropertyBag_XProperty::SetValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x7012870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_XProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::RectIntPropertyBag_XProperty::*)()>(&::Unity::Properties::Internal::RectIntPropertyBag_XProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x70126dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::RectIntPropertyBag_XProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::RectIntPropertyBag_XProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Properties::Internal::RectIntPropertyBag_XProperty::GetValue(::by_ref<::UnityEngine::RectInt> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::RectIntPropertyBag_XProperty::SetValue(::by_ref<::UnityEngine::RectInt> container, int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::RectIntPropertyBag_XProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::RectIntPropertyBag_XProperty* Unity::Properties::Internal::RectIntPropertyBag_XProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::RectIntPropertyBag_XProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::RectIntPropertyBag_XProperty::RectIntPropertyBag_XProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_YProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::RectIntPropertyBag_YProperty::*)()>(
    &::Unity::Properties::Internal::RectIntPropertyBag_YProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x70128d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_YProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::RectIntPropertyBag_YProperty::*)()>(
    &::Unity::Properties::Internal::RectIntPropertyBag_YProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7012918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_YProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::Internal::RectIntPropertyBag_YProperty::*)(::by_ref<::UnityEngine::RectInt>)>(
    &::Unity::Properties::Internal::RectIntPropertyBag_YProperty::GetValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x7012920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_YProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::RectIntPropertyBag_YProperty::*)(::by_ref<::UnityEngine::RectInt>, int32_t)>(
    &::Unity::Properties::Internal::RectIntPropertyBag_YProperty::SetValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x7012978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_YProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::RectIntPropertyBag_YProperty::*)()>(&::Unity::Properties::Internal::RectIntPropertyBag_YProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7012718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::RectIntPropertyBag_YProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::RectIntPropertyBag_YProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Properties::Internal::RectIntPropertyBag_YProperty::GetValue(::by_ref<::UnityEngine::RectInt> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::RectIntPropertyBag_YProperty::SetValue(::by_ref<::UnityEngine::RectInt> container, int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::RectIntPropertyBag_YProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::RectIntPropertyBag_YProperty* Unity::Properties::Internal::RectIntPropertyBag_YProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::RectIntPropertyBag_YProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::RectIntPropertyBag_YProperty::RectIntPropertyBag_YProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::*)()>(
    &::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x70129dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::*)()>(
    &::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7012a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::*)(::by_ref<::UnityEngine::RectInt>)>(
    &::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::GetValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x7012a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::*)(::by_ref<::UnityEngine::RectInt>, int32_t)>(
    &::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::SetValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x7012a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::*)()>(
    &::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7012754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::GetValue(::by_ref<::UnityEngine::RectInt> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::SetValue(::by_ref<::UnityEngine::RectInt> container, int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty* Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty::RectIntPropertyBag_WidthProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::*)()>(
    &::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7012ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::*)()>(
    &::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7012b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::*)(::by_ref<::UnityEngine::RectInt>)>(
    &::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::GetValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x7012b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::*)(::by_ref<::UnityEngine::RectInt>, int32_t)>(
    &::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::SetValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x7012b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::*)()>(
    &::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7012790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::GetValue(::by_ref<::UnityEngine::RectInt> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::SetValue(::by_ref<::UnityEngine::RectInt> container, int32_t value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty* Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty::RectIntPropertyBag_HeightProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::RectIntPropertyBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::RectIntPropertyBag::*)()>(&::Unity::Properties::Internal::RectIntPropertyBag::_ctor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x7011104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::RectIntPropertyBag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::RectIntPropertyBag*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::RectIntPropertyBag* Unity::Properties::Internal::RectIntPropertyBag::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::RectIntPropertyBag*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::RectIntPropertyBag::RectIntPropertyBag() {}
