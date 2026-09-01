#pragma once
// IWYU pragma private; include "Unity\Properties\Internal\ColorPropertyBag.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Unity/Properties/Internal/zzzz__ColorPropertyBag_def.hpp"
#include "Unity/Properties/Internal/zzzz__ColorPropertyBag_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_RProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::ColorPropertyBag_RProperty::*)()>(
    &::Unity::Properties::Internal::ColorPropertyBag_RProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb3490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_RProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::ColorPropertyBag_RProperty::*)()>(
    &::Unity::Properties::Internal::ColorPropertyBag_RProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb34d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_RProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Properties::Internal::ColorPropertyBag_RProperty::*)(::by_ref<::UnityEngine::Color>)>(
    &::Unity::Properties::Internal::ColorPropertyBag_RProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb34dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_RProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::ColorPropertyBag_RProperty::*)(::by_ref<::UnityEngine::Color>, float_t)>(
    &::Unity::Properties::Internal::ColorPropertyBag_RProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb34e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_RProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::ColorPropertyBag_RProperty::*)()>(&::Unity::Properties::Internal::ColorPropertyBag_RProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb33a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::ColorPropertyBag_RProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::ColorPropertyBag_RProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Properties::Internal::ColorPropertyBag_RProperty::GetValue(::by_ref<::UnityEngine::Color> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::ColorPropertyBag_RProperty::SetValue(::by_ref<::UnityEngine::Color> container, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::ColorPropertyBag_RProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::ColorPropertyBag_RProperty* Unity::Properties::Internal::ColorPropertyBag_RProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::ColorPropertyBag_RProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::ColorPropertyBag_RProperty::ColorPropertyBag_RProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_GProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::ColorPropertyBag_GProperty::*)()>(
    &::Unity::Properties::Internal::ColorPropertyBag_GProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb34ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_GProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::ColorPropertyBag_GProperty::*)()>(
    &::Unity::Properties::Internal::ColorPropertyBag_GProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb3530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_GProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Properties::Internal::ColorPropertyBag_GProperty::*)(::by_ref<::UnityEngine::Color>)>(
    &::Unity::Properties::Internal::ColorPropertyBag_GProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb3538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_GProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::ColorPropertyBag_GProperty::*)(::by_ref<::UnityEngine::Color>, float_t)>(
    &::Unity::Properties::Internal::ColorPropertyBag_GProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb3540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_GProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::ColorPropertyBag_GProperty::*)()>(&::Unity::Properties::Internal::ColorPropertyBag_GProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb33dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::ColorPropertyBag_GProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::ColorPropertyBag_GProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Properties::Internal::ColorPropertyBag_GProperty::GetValue(::by_ref<::UnityEngine::Color> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::ColorPropertyBag_GProperty::SetValue(::by_ref<::UnityEngine::Color> container, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::ColorPropertyBag_GProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::ColorPropertyBag_GProperty* Unity::Properties::Internal::ColorPropertyBag_GProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::ColorPropertyBag_GProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::ColorPropertyBag_GProperty::ColorPropertyBag_GProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_BProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::ColorPropertyBag_BProperty::*)()>(
    &::Unity::Properties::Internal::ColorPropertyBag_BProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb3548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_BProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::ColorPropertyBag_BProperty::*)()>(
    &::Unity::Properties::Internal::ColorPropertyBag_BProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb358c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_BProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Properties::Internal::ColorPropertyBag_BProperty::*)(::by_ref<::UnityEngine::Color>)>(
    &::Unity::Properties::Internal::ColorPropertyBag_BProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb3594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_BProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::ColorPropertyBag_BProperty::*)(::by_ref<::UnityEngine::Color>, float_t)>(
    &::Unity::Properties::Internal::ColorPropertyBag_BProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb359c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_BProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::ColorPropertyBag_BProperty::*)()>(&::Unity::Properties::Internal::ColorPropertyBag_BProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb3418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::ColorPropertyBag_BProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::ColorPropertyBag_BProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Properties::Internal::ColorPropertyBag_BProperty::GetValue(::by_ref<::UnityEngine::Color> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::ColorPropertyBag_BProperty::SetValue(::by_ref<::UnityEngine::Color> container, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::ColorPropertyBag_BProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::ColorPropertyBag_BProperty* Unity::Properties::Internal::ColorPropertyBag_BProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::ColorPropertyBag_BProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::ColorPropertyBag_BProperty::ColorPropertyBag_BProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_AProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::Internal::ColorPropertyBag_AProperty::*)()>(
    &::Unity::Properties::Internal::ColorPropertyBag_AProperty::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bb35a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_AProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Properties::Internal::ColorPropertyBag_AProperty::*)()>(
    &::Unity::Properties::Internal::ColorPropertyBag_AProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb35e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_AProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Properties::Internal::ColorPropertyBag_AProperty::*)(::by_ref<::UnityEngine::Color>)>(
    &::Unity::Properties::Internal::ColorPropertyBag_AProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb35f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_AProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::ColorPropertyBag_AProperty::*)(::by_ref<::UnityEngine::Color>, float_t)>(
    &::Unity::Properties::Internal::ColorPropertyBag_AProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb35f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag_AProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::ColorPropertyBag_AProperty::*)()>(&::Unity::Properties::Internal::ColorPropertyBag_AProperty::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb3454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::ColorPropertyBag_AProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Properties::Internal::ColorPropertyBag_AProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Properties::Internal::ColorPropertyBag_AProperty::GetValue(::by_ref<::UnityEngine::Color> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, container);
}
inline void Unity::Properties::Internal::ColorPropertyBag_AProperty::SetValue(::by_ref<::UnityEngine::Color> container, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void Unity::Properties::Internal::ColorPropertyBag_AProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::ColorPropertyBag_AProperty* Unity::Properties::Internal::ColorPropertyBag_AProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::ColorPropertyBag_AProperty*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::ColorPropertyBag_AProperty::ColorPropertyBag_AProperty() {}
//  Writing Method size for method: ::Unity::Properties::Internal::ColorPropertyBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::ColorPropertyBag::*)()>(&::Unity::Properties::Internal::ColorPropertyBag::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6bb21a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::ColorPropertyBag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ColorPropertyBag*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::Internal::ColorPropertyBag* Unity::Properties::Internal::ColorPropertyBag::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::ColorPropertyBag*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::ColorPropertyBag::ColorPropertyBag() {}
