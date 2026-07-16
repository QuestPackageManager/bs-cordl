#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalProjector.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntity_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScaleMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalProjector_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntity_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalProjector_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScaleMode_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x68545b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::*)(::UnityEngine::Rendering::Universal::DecalProjector*)>(
    &::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68546f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::*)(::UnityEngine::Rendering::Universal::DecalProjector*, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x685470c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::*)(::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x685472c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::Invoke(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decalProjector);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::BeginInvoke(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector,
                                                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, decalProjector, callback, object);
}
inline void UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::New_ctor(::System::Object* object,
                                                                                                                                                                  ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::DecalProjector_DecalProjectorAction() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.add_onDecalAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::add_onDecalAdd)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6853680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                             { "add_onDecalAdd", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.remove_onDecalAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::remove_onDecalAdd)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x685374c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                             { "remove_onDecalAdd", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.add_onDecalRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::add_onDecalRemove)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6853818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                             { "add_onDecalRemove", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.remove_onDecalRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::remove_onDecalRemove)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x68538e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                             { "remove_onDecalRemove", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.add_onDecalPropertyChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::add_onDecalPropertyChange)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x68539b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                             { "add_onDecalPropertyChange", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.remove_onDecalPropertyChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::remove_onDecalPropertyChange)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6853a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                             { "remove_onDecalPropertyChange", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.add_onAllDecalPropertyChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::Rendering::Universal::DecalProjector::add_onAllDecalPropertyChange)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6853b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "add_onAllDecalPropertyChange", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.remove_onAllDecalPropertyChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::Rendering::Universal::DecalProjector::remove_onAllDecalPropertyChange)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6853c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "remove_onAllDecalPropertyChange", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.add_onDecalMaterialChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::add_onDecalMaterialChange)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6853cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                             { "add_onDecalMaterialChange", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.remove_onDecalMaterialChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::remove_onDecalMaterialChange)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6853dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                             { "remove_onDecalMaterialChange", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_defaultMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::get_defaultMaterial)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6853e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_defaultMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_defaultMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*)>(&::UnityEngine::Rendering::Universal::DecalProjector::set_defaultMaterial)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6853ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_defaultMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_isSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::get_isSupported)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6853f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_isSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_decalEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DecalEntity (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::get_decalEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6853f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_decalEntity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_decalEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(::UnityEngine::Rendering::Universal::DecalEntity)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::set_decalEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6853f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                                                           { "set_decalEntity", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntity>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::get_material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6853f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_material", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::set_material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6853fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_material", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_drawDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::get_drawDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6854094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_drawDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_drawDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::set_drawDistance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x685409c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_drawDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_fadeScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::get_fadeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68540b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_fadeScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_fadeScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(float_t)>(&::UnityEngine::Rendering::Universal::DecalProjector::set_fadeScale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x68540b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_fadeScale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_startAngleFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::get_startAngleFade)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68540d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_startAngleFade", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_startAngleFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::set_startAngleFade)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x68540e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_startAngleFade", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_endAngleFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::get_endAngleFade)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6854104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_endAngleFade", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_endAngleFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::set_endAngleFade)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x685410c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_endAngleFade", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_uvScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::get_uvScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6854130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_uvScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_uvScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::set_uvScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6854138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_uvScale", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_uvBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::get_uvBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6854140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_uvBias", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_uvBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::set_uvBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6854148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_uvBias", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_renderingLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::get_renderingLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6854150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_renderingLayerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_renderingLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(uint32_t)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::set_renderingLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6854158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_renderingLayerMask", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_scaleMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DecalScaleMode (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::get_scaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6854160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_scaleMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_scaleMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(::UnityEngine::Rendering::Universal::DecalScaleMode)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::set_scaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6854168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                                                           { "set_scaleMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalScaleMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_pivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::get_pivot)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6854170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_pivot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_pivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::set_pivot)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x685417c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_pivot", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::get_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6854188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_size", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::set_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6854194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_size", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_fadeFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::get_fadeFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68541a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_fadeFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_fadeFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(float_t)>(&::UnityEngine::Rendering::Universal::DecalProjector::set_fadeFactor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x68541a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_fadeFactor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_effectiveScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::get_effectiveScale)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x68541c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_effectiveScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_decalSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::get_decalSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6854244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_decalSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_decalOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::get_decalOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6854250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_decalOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_uvScaleBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::get_uvScaleBias)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6854260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_uvScaleBias", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.InitMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::InitMaterial)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x685426c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "InitMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68542d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6854350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::OnValidate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6853fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::IsValid)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x68543c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.UpdateAllDecalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::UpdateAllDecalProperties)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6854510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "UpdateAllDecalProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6854578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalEntity& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get__decalEntity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decalEntity_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DecalEntity const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get__decalEntity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decalEntity_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set__decalEntity_k__BackingField(::UnityEngine::Rendering::Universal::DecalEntity value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decalEntity_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Material = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_DrawDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawDistance;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_DrawDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawDistance;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_DrawDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawDistance = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_FadeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FadeScale;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_FadeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FadeScale;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_FadeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FadeScale = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_StartAngleFade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartAngleFade;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_StartAngleFade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartAngleFade;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_StartAngleFade(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartAngleFade = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_EndAngleFade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndAngleFade;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_EndAngleFade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndAngleFade;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_EndAngleFade(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EndAngleFade = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_UVScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UVScale;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_UVScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UVScale;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_UVScale(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UVScale = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_UVBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UVBias;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_UVBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UVBias;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_UVBias(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UVBias = value;
}
constexpr uint32_t& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_DecalLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalLayerMask;
}
constexpr uint32_t const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_DecalLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalLayerMask;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_DecalLayerMask(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalLayerMask = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScaleMode& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_ScaleMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScaleMode;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScaleMode const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_ScaleMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScaleMode;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_ScaleMode(::UnityEngine::Rendering::Universal::DecalScaleMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScaleMode = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Offset;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Offset;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_Offset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Offset = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Size;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Size;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_Size(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Size = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_FadeFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FadeFactor;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_FadeFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FadeFactor;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_FadeFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FadeFactor = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldMaterial;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_OldMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldMaterial = value;
}
inline void UnityEngine::Rendering::Universal::DecalProjector::setStaticF_onDecalAdd(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*, "onDecalAdd", ::UnityEngine::Rendering::Universal::DecalProjector*>(
      std::forward<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(value));
}
inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* UnityEngine::Rendering::Universal::DecalProjector::getStaticF_onDecalAdd() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*, "onDecalAdd", ::UnityEngine::Rendering::Universal::DecalProjector*>();
}
inline void UnityEngine::Rendering::Universal::DecalProjector::setStaticF_onDecalRemove(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*, "onDecalRemove", ::UnityEngine::Rendering::Universal::DecalProjector*>(
      std::forward<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(value));
}
inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* UnityEngine::Rendering::Universal::DecalProjector::getStaticF_onDecalRemove() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*, "onDecalRemove", ::UnityEngine::Rendering::Universal::DecalProjector*>();
}
inline void UnityEngine::Rendering::Universal::DecalProjector::setStaticF_onDecalPropertyChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*, "onDecalPropertyChange", ::UnityEngine::Rendering::Universal::DecalProjector*>(
      std::forward<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(value));
}
inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* UnityEngine::Rendering::Universal::DecalProjector::getStaticF_onDecalPropertyChange() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*, "onDecalPropertyChange", ::UnityEngine::Rendering::Universal::DecalProjector*>();
}
inline void UnityEngine::Rendering::Universal::DecalProjector::setStaticF_onAllDecalPropertyChange(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "onAllDecalPropertyChange", ::UnityEngine::Rendering::Universal::DecalProjector*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::Rendering::Universal::DecalProjector::getStaticF_onAllDecalPropertyChange() {
  return ::cordl_internals::getStaticField<::System::Action*, "onAllDecalPropertyChange", ::UnityEngine::Rendering::Universal::DecalProjector*>();
}
inline void UnityEngine::Rendering::Universal::DecalProjector::setStaticF_onDecalMaterialChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*, "onDecalMaterialChange", ::UnityEngine::Rendering::Universal::DecalProjector*>(
      std::forward<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>(value));
}
inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* UnityEngine::Rendering::Universal::DecalProjector::getStaticF_onDecalMaterialChange() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*, "onDecalMaterialChange", ::UnityEngine::Rendering::Universal::DecalProjector*>();
}
inline void UnityEngine::Rendering::Universal::DecalProjector::setStaticF__defaultMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "<defaultMaterial>k__BackingField", ::UnityEngine::Rendering::Universal::DecalProjector*>(
      std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::DecalProjector::getStaticF__defaultMaterial_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "<defaultMaterial>k__BackingField", ::UnityEngine::Rendering::Universal::DecalProjector*>();
}
inline void UnityEngine::Rendering::Universal::DecalProjector::add_onDecalAdd(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                           { "add_onDecalAdd", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::remove_onDecalAdd(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                           { "remove_onDecalAdd", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::add_onDecalRemove(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                           { "add_onDecalRemove", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::remove_onDecalRemove(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                           { "remove_onDecalRemove", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::add_onDecalPropertyChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                           { "add_onDecalPropertyChange", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::remove_onDecalPropertyChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                           { "remove_onDecalPropertyChange", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::add_onAllDecalPropertyChange(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "add_onAllDecalPropertyChange", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::remove_onAllDecalPropertyChange(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "remove_onAllDecalPropertyChange", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::add_onDecalMaterialChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                           { "add_onDecalMaterialChange", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::remove_onDecalMaterialChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                           { "remove_onDecalMaterialChange", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::DecalProjector::get_defaultMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_defaultMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_defaultMaterial(::UnityEngine::Material* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_defaultMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DecalProjector::get_isSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_isSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalEntity UnityEngine::Rendering::Universal::DecalProjector::get_decalEntity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_decalEntity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DecalEntity>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_decalEntity(::UnityEngine::Rendering::Universal::DecalEntity value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                                                         { "set_decalEntity", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntity>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::DecalProjector::get_material() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_material", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_material(::UnityEngine::Material* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_material", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DecalProjector::get_drawDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_drawDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_drawDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_drawDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DecalProjector::get_fadeScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_fadeScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_fadeScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_fadeScale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DecalProjector::get_startAngleFade() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_startAngleFade", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_startAngleFade(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_startAngleFade", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DecalProjector::get_endAngleFade() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_endAngleFade", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_endAngleFade(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_endAngleFade", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::Universal::DecalProjector::get_uvScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_uvScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_uvScale(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_uvScale", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::Universal::DecalProjector::get_uvBias() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_uvBias", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_uvBias(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_uvBias", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::Rendering::Universal::DecalProjector::get_renderingLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_renderingLayerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_renderingLayerMask(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_renderingLayerMask", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DecalScaleMode UnityEngine::Rendering::Universal::DecalProjector::get_scaleMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_scaleMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DecalScaleMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_scaleMode(::UnityEngine::Rendering::Universal::DecalScaleMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                                                         { "set_scaleMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalScaleMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::DecalProjector::get_pivot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_pivot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_pivot(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_pivot", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::DecalProjector::get_size() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_size(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_size", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DecalProjector::get_fadeFactor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_fadeFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_fadeFactor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_fadeFactor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::DecalProjector::get_effectiveScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_effectiveScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::DecalProjector::get_decalSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_decalSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::DecalProjector::get_decalOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_decalOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::DecalProjector::get_uvScaleBias() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_uvScaleBias", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::InitMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "InitMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DecalProjector::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::UpdateAllDecalProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "UpdateAllDecalProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalProjector* UnityEngine::Rendering::Universal::DecalProjector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalProjector*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalProjector::DecalProjector() {}
