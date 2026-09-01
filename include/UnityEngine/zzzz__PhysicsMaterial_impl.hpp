#pragma once
// IWYU pragma private; include "UnityEngine\PhysicsMaterial.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterialCombine_def.hpp"
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PhysicsMaterial::*)()>(&::UnityEngine::PhysicsMaterial::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b931a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PhysicsMaterial::*)(::StringW)>(&::UnityEngine::PhysicsMaterial::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b93348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.Internal_CreateDynamicsMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsMaterial*, ::StringW)>(&::UnityEngine::PhysicsMaterial::Internal_CreateDynamicsMaterial)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6b93214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
                                                             { "Internal_CreateDynamicsMaterial", {}, { ::i2c::type_of<::UnityEngine::PhysicsMaterial*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.get_bounciness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::PhysicsMaterial::*)()>(&::UnityEngine::PhysicsMaterial::get_bounciness)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b933f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_bounciness", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.set_bounciness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PhysicsMaterial::*)(float_t)>(&::UnityEngine::PhysicsMaterial::set_bounciness)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b934b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "set_bounciness", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.get_dynamicFriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::PhysicsMaterial::*)()>(&::UnityEngine::PhysicsMaterial::get_dynamicFriction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b9358c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_dynamicFriction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.set_dynamicFriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PhysicsMaterial::*)(float_t)>(&::UnityEngine::PhysicsMaterial::set_dynamicFriction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b93648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "set_dynamicFriction", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.get_staticFriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::PhysicsMaterial::*)()>(&::UnityEngine::PhysicsMaterial::get_staticFriction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b93724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_staticFriction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.set_staticFriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PhysicsMaterial::*)(float_t)>(&::UnityEngine::PhysicsMaterial::set_staticFriction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b937e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "set_staticFriction", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.get_frictionCombine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsMaterialCombine (::UnityEngine::PhysicsMaterial::*)()>(&::UnityEngine::PhysicsMaterial::get_frictionCombine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b938bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_frictionCombine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.set_frictionCombine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PhysicsMaterial::*)(::UnityEngine::PhysicsMaterialCombine)>(&::UnityEngine::PhysicsMaterial::set_frictionCombine)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b93978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "set_frictionCombine", {}, { ::i2c::type_of<::UnityEngine::PhysicsMaterialCombine>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.get_bounceCombine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsMaterialCombine (::UnityEngine::PhysicsMaterial::*)()>(&::UnityEngine::PhysicsMaterial::get_bounceCombine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b93a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_bounceCombine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.set_bounceCombine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PhysicsMaterial::*)(::UnityEngine::PhysicsMaterialCombine)>(&::UnityEngine::PhysicsMaterial::set_bounceCombine)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b93b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "set_bounceCombine", {}, { ::i2c::type_of<::UnityEngine::PhysicsMaterialCombine>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.Internal_CreateDynamicsMaterial_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsMaterial*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::PhysicsMaterial::Internal_CreateDynamicsMaterial_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b933b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
            { "Internal_CreateDynamicsMaterial_Injected", {}, { ::i2c::type_of<::UnityEngine::PhysicsMaterial*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.get_bounciness_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::PhysicsMaterial::get_bounciness_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b93474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_bounciness_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.set_bounciness_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::PhysicsMaterial::set_bounciness_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b93540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "set_bounciness_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.get_dynamicFriction_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::PhysicsMaterial::get_dynamicFriction_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b9360c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_dynamicFriction_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.set_dynamicFriction_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::PhysicsMaterial::set_dynamicFriction_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b936d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
                                                                                           { "set_dynamicFriction_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.get_staticFriction_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::PhysicsMaterial::get_staticFriction_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b937a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_staticFriction_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.set_staticFriction_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::PhysicsMaterial::set_staticFriction_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b93870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
                                                                                           { "set_staticFriction_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.get_frictionCombine_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsMaterialCombine (*)(::System::IntPtr)>(&::UnityEngine::PhysicsMaterial::get_frictionCombine_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b9393c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_frictionCombine_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.set_frictionCombine_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::PhysicsMaterialCombine)>(&::UnityEngine::PhysicsMaterial::set_frictionCombine_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b93a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
                                                             { "set_frictionCombine_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::PhysicsMaterialCombine>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.get_bounceCombine_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsMaterialCombine (*)(::System::IntPtr)>(&::UnityEngine::PhysicsMaterial::get_bounceCombine_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b93acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_bounceCombine_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsMaterial.set_bounceCombine_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::PhysicsMaterialCombine)>(&::UnityEngine::PhysicsMaterial::set_bounceCombine_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b93b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
                                                             { "set_bounceCombine_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::PhysicsMaterialCombine>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::PhysicsMaterial::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::PhysicsMaterial::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::PhysicsMaterial::Internal_CreateDynamicsMaterial(::UnityEngine::PhysicsMaterial* mat, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
                                                           { "Internal_CreateDynamicsMaterial", {}, { ::i2c::type_of<::UnityEngine::PhysicsMaterial*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mat, name);
}
inline float_t UnityEngine::PhysicsMaterial::get_bounciness() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_bounciness", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::PhysicsMaterial::set_bounciness(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "set_bounciness", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::PhysicsMaterial::get_dynamicFriction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_dynamicFriction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::PhysicsMaterial::set_dynamicFriction(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "set_dynamicFriction", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::PhysicsMaterial::get_staticFriction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_staticFriction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::PhysicsMaterial::set_staticFriction(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "set_staticFriction", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::PhysicsMaterialCombine UnityEngine::PhysicsMaterial::get_frictionCombine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_frictionCombine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsMaterialCombine>(this, ___internal_method);
}
inline void UnityEngine::PhysicsMaterial::set_frictionCombine(::UnityEngine::PhysicsMaterialCombine value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "set_frictionCombine", {}, { ::i2c::type_of<::UnityEngine::PhysicsMaterialCombine>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::PhysicsMaterialCombine UnityEngine::PhysicsMaterial::get_bounceCombine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_bounceCombine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsMaterialCombine>(this, ___internal_method);
}
inline void UnityEngine::PhysicsMaterial::set_bounceCombine(::UnityEngine::PhysicsMaterialCombine value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "set_bounceCombine", {}, { ::i2c::type_of<::UnityEngine::PhysicsMaterialCombine>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::PhysicsMaterial::Internal_CreateDynamicsMaterial_Injected(::UnityEngine::PhysicsMaterial* mat, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
          { "Internal_CreateDynamicsMaterial_Injected", {}, { ::i2c::type_of<::UnityEngine::PhysicsMaterial*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mat, name);
}
inline float_t UnityEngine::PhysicsMaterial::get_bounciness_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_bounciness_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::PhysicsMaterial::set_bounciness_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "set_bounciness_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::PhysicsMaterial::get_dynamicFriction_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_dynamicFriction_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::PhysicsMaterial::set_dynamicFriction_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "set_dynamicFriction_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::PhysicsMaterial::get_staticFriction_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_staticFriction_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::PhysicsMaterial::set_staticFriction_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "set_staticFriction_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::PhysicsMaterialCombine UnityEngine::PhysicsMaterial::get_frictionCombine_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_frictionCombine_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsMaterialCombine>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::PhysicsMaterial::set_frictionCombine_Injected(::System::IntPtr _unity_self, ::UnityEngine::PhysicsMaterialCombine value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
                                                           { "set_frictionCombine_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::PhysicsMaterialCombine>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::PhysicsMaterialCombine UnityEngine::PhysicsMaterial::get_bounceCombine_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(), { "get_bounceCombine_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsMaterialCombine>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::PhysicsMaterial::set_bounceCombine_Injected(::System::IntPtr _unity_self, ::UnityEngine::PhysicsMaterialCombine value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsMaterial*>(),
                                                           { "set_bounceCombine_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::PhysicsMaterialCombine>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::PhysicsMaterial* UnityEngine::PhysicsMaterial::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::PhysicsMaterial*>());
}
inline ::UnityEngine::PhysicsMaterial* UnityEngine::PhysicsMaterial::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::PhysicsMaterial*>(name));
}
// Ctor Parameters []
constexpr ::UnityEngine::PhysicsMaterial::PhysicsMaterial() {}
