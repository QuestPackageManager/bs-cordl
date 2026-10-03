#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionReference.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference.get_asset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (::UnityEngine::InputSystem::InputActionReference::*)()>(
    &::UnityEngine::InputSystem::InputActionReference::get_asset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6911c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "get_asset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference.get_action
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionReference::*)()>(
    &::UnityEngine::InputSystem::InputActionReference::get_action)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x69117f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "get_action", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionReference::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputActionReference::Set)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6911c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "Set", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionReference::*)(::UnityEngine::InputSystem::InputActionAsset*, ::StringW, ::StringW)>(
    &::UnityEngine::InputSystem::InputActionReference::Set)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6911e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(),
                                                { "Set", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference.SetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionReference::*)(
    ::UnityEngine::InputSystem::InputActionAsset*, ::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionReference::SetInternal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6911db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(),
                                         { "SetInternal", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionReference::*)()>(&::UnityEngine::InputSystem::InputActionReference::ToString)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69120bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference.GetDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionReference::GetDisplayName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x691202c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(),
                                                                                           { "GetDisplayName", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference.ToDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionReference::*)()>(&::UnityEngine::InputSystem::InputActionReference::ToDisplayName)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x69122c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "ToDisplayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference.op_Implicit___UnityEngine__InputSystem__InputAction_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::InputActionReference::op_Implicit___UnityEngine__InputSystem__InputAction_)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69122fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputActionReference::Create)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6912308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "Create", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference.InvalidateAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputActionReference::InvalidateAll)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x691236c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "InvalidateAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference.Invalidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionReference::*)()>(&::UnityEngine::InputSystem::InputActionReference::Invalidate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6912458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "Invalidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference.ToInputAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionReference::*)()>(
    &::UnityEngine::InputSystem::InputActionReference::ToInputAction)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6912460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "ToInputAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference.CheckImmutableReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionReference::*)()>(&::UnityEngine::InputSystem::InputActionReference::CheckImmutableReference)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6912028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "CheckImmutableReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionReference::*)()>(&::UnityEngine::InputSystem::InputActionReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6912464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::InputSystem::InputActionReference::__cordl_internal_get_m_Asset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Asset;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::InputSystem::InputActionReference::__cordl_internal_get_m_Asset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Asset;
}
constexpr void UnityEngine::InputSystem::InputActionReference::__cordl_internal_set_m_Asset(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Asset = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputActionReference::__cordl_internal_get_m_ActionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionId;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputActionReference::__cordl_internal_get_m_ActionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionId;
}
constexpr void UnityEngine::InputSystem::InputActionReference::__cordl_internal_set_m_ActionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionId = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::InputActionReference::__cordl_internal_get_m_Action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Action;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::InputActionReference::__cordl_internal_get_m_Action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Action;
}
constexpr void UnityEngine::InputSystem::InputActionReference::__cordl_internal_set_m_Action(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Action = value;
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::InputSystem::InputActionReference::get_asset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "get_asset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionReference::get_action() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "get_action", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionReference::Set(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "Set", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionReference::Set(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW mapName, ::StringW actionName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(),
                                              { "Set", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset, mapName, actionName);
}
inline void UnityEngine::InputSystem::InputActionReference::SetInternal(::UnityEngine::InputSystem::InputActionAsset* assetArg, ::UnityEngine::InputSystem::InputAction* actionArg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(),
                                              { "SetInternal", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assetArg, actionArg);
}
inline ::StringW UnityEngine::InputSystem::InputActionReference::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputActionReference::GetDisplayName(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(),
                                                                                         { "GetDisplayName", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, action);
}
inline ::StringW UnityEngine::InputSystem::InputActionReference::ToDisplayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "ToDisplayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction*
UnityEngine::InputSystem::InputActionReference::op_Implicit___UnityEngine__InputSystem__InputAction_(::UnityEngine::InputSystem::InputActionReference* reference) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(nullptr, ___internal_method, reference);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::InputActionReference::Create(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "Create", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(nullptr, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionReference::InvalidateAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "InvalidateAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionReference::Invalidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "Invalidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionReference::ToInputAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "ToInputAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionReference::CheckImmutableReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { "CheckImmutableReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionReference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionReference*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::InputActionReference::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionReference*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionReference::InputActionReference() {}
