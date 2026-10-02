#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalProjector.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntity_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScaleMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RenderingLayerMask_impl.hpp"
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
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderingLayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6c9127c;

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
  constexpr static std::size_t addrs = 0x6c913c0;

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
  constexpr static std::size_t addrs = 0x6c913d4;

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
  constexpr static std::size_t addrs = 0x6c913f4;

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
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::Universal::DecalProjector_Version::DecalProjector_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalProjector_Version::DecalProjector_Version() {}
constexpr ::UnityEngine::Rendering::Universal::DecalProjector_Version UnityEngine::Rendering::Universal::DecalProjector_Version::Initial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DecalProjector_Version UnityEngine::Rendering::Universal::DecalProjector_Version::RenderingLayerMask{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DecalProjector_Version UnityEngine::Rendering::Universal::DecalProjector_Version::Count{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.add_onDecalAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::add_onDecalAdd)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6c8fff8;

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
  constexpr static std::size_t addrs = 0x6c900c4;

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
  constexpr static std::size_t addrs = 0x6c90190;

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
  constexpr static std::size_t addrs = 0x6c90260;

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
  constexpr static std::size_t addrs = 0x6c90330;

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
  constexpr static std::size_t addrs = 0x6c90400;

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
  constexpr static std::size_t addrs = 0x6c904d0;

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
  constexpr static std::size_t addrs = 0x6c905a0;

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
  constexpr static std::size_t addrs = 0x6c90670;

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
  constexpr static std::size_t addrs = 0x6c90740;

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
  constexpr static std::size_t addrs = 0x6c90810;

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
  constexpr static std::size_t addrs = 0x6c9085c;

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
  constexpr static std::size_t addrs = 0x6c908ac;

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
  constexpr static std::size_t addrs = 0x6c90900;

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
  constexpr static std::size_t addrs = 0x6c90908;

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
  constexpr static std::size_t addrs = 0x6c90910;

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
  constexpr static std::size_t addrs = 0x6c90918;

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
  constexpr static std::size_t addrs = 0x6c90a3c;

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
  constexpr static std::size_t addrs = 0x6c90a44;

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
  constexpr static std::size_t addrs = 0x6c90a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_fadeScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_fadeScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(float_t)>(&::UnityEngine::Rendering::Universal::DecalProjector::set_fadeScale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c90a60;

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
  constexpr static std::size_t addrs = 0x6c90a80;

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
  constexpr static std::size_t addrs = 0x6c90a88;

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
  constexpr static std::size_t addrs = 0x6c90aac;

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
  constexpr static std::size_t addrs = 0x6c90ab4;

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
  constexpr static std::size_t addrs = 0x6c90ad8;

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
  constexpr static std::size_t addrs = 0x6c90ae0;

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
  constexpr static std::size_t addrs = 0x6c90ae8;

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
  constexpr static std::size_t addrs = 0x6c90af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "set_uvBias", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_renderingLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderingLayerMask (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::get_renderingLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c90af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_renderingLayerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_renderingLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(::UnityEngine::RenderingLayerMask)>(
    &::UnityEngine::Rendering::Universal::DecalProjector::set_renderingLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c90b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                                                           { "set_renderingLayerMask", {}, { ::i2c::type_of<::UnityEngine::RenderingLayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.get_scaleMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DecalScaleMode (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::get_scaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c90b08;

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
  constexpr static std::size_t addrs = 0x6c90b10;

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
  constexpr static std::size_t addrs = 0x6c90b18;

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
  constexpr static std::size_t addrs = 0x6c90b24;

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
  constexpr static std::size_t addrs = 0x6c90b30;

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
  constexpr static std::size_t addrs = 0x6c90b3c;

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
  constexpr static std::size_t addrs = 0x6c90b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_fadeFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.set_fadeFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)(float_t)>(&::UnityEngine::Rendering::Universal::DecalProjector::set_fadeFactor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c90b50;

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
  constexpr static std::size_t addrs = 0x6c90b70;

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
  constexpr static std::size_t addrs = 0x6c90bec;

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
  constexpr static std::size_t addrs = 0x6c90bf8;

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
  constexpr static std::size_t addrs = 0x6c90c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_uvScaleBias", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.InitMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::InitMaterial)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c90c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "InitMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c90c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6c90cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::OnValidate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6c90920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.OnDidApplyAnimationProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6c90d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "OnDidApplyAnimationProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::IsValid)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6c90f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.UpdateAllDecalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::UpdateAllDecalProperties)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6c91070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "UpdateAllDecalProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c910d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(
    &::UnityEngine::Rendering::Universal::DecalProjector::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c910f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalProjector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalProjector::*)()>(&::UnityEngine::Rendering::Universal::DecalProjector::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6c91170;

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
constexpr ::UnityEngine::RenderingLayerMask& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_RenderingLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayerMask;
}
constexpr ::UnityEngine::RenderingLayerMask const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_RenderingLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayerMask;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_RenderingLayerMask(::UnityEngine::RenderingLayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderingLayerMask = value;
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
constexpr float_t& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldDrawDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldDrawDistance;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldDrawDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldDrawDistance;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_OldDrawDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldDrawDistance = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldFadeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldFadeScale;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldFadeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldFadeScale;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_OldFadeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldFadeScale = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldStartAngleFade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldStartAngleFade;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldStartAngleFade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldStartAngleFade;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_OldStartAngleFade(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldStartAngleFade = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldEndAngleFade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldEndAngleFade;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldEndAngleFade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldEndAngleFade;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_OldEndAngleFade(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldEndAngleFade = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldUVScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldUVScale;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldUVScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldUVScale;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_OldUVScale(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldUVScale = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldUVBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldUVBias;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldUVBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldUVBias;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_OldUVBias(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldUVBias = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScaleMode& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldScaleMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldScaleMode;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScaleMode const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldScaleMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldScaleMode;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_OldScaleMode(::UnityEngine::Rendering::Universal::DecalScaleMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldScaleMode = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldOffset;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldOffset;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_OldOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldOffset = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldSize;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldSize;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_OldSize(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldSize = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldFadeFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldFadeFactor;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_m_OldFadeFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldFadeFactor;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_m_OldFadeFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldFadeFactor = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalProjector_Version& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::UnityEngine::Rendering::Universal::DecalProjector_Version const& UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void UnityEngine::Rendering::Universal::DecalProjector::__cordl_internal_set_version(::UnityEngine::Rendering::Universal::DecalProjector_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
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
inline ::UnityEngine::RenderingLayerMask UnityEngine::Rendering::Universal::DecalProjector::get_renderingLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "get_renderingLayerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderingLayerMask>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::set_renderingLayerMask(::UnityEngine::RenderingLayerMask value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(),
                                                                                         { "set_renderingLayerMask", {}, { ::i2c::type_of<::UnityEngine::RenderingLayerMask>() } })));
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
inline void UnityEngine::Rendering::Universal::DecalProjector::OnDidApplyAnimationProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "OnDidApplyAnimationProperties", {}, {} })));
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
inline void UnityEngine::Rendering::Universal::DecalProjector::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalProjector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalProjector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalProjector* UnityEngine::Rendering::Universal::DecalProjector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalProjector*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Rendering::Universal::DecalProjector::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::Universal::DecalProjector::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalProjector::DecalProjector() {}
